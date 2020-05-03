#pragma once
#include "config_formats.h"
#if USE_ORC

#include <DataStreams/IBlockInputStream.h>
#include <Processors/Chunk.h>
#include <Processors/Formats/IInputFormat.h>

namespace arrow::adapters::orc { class ORCFileReader; }

namespace DB
{
class Context;

class ORCBlockInputFormat: public IInputFormat
{
public:
    ORCBlockInputFormat(ReadBuffer & in_, Block header_);

    String getName() const override { return "ORCBlockInputFormat"; }

    void resetParser() override;

protected:
    Chunk generate() override;

private:

    // TODO: check that this class implements every part of its parent

    std::unique_ptr<arrow::adapters::orc::ORCFileReader> file_reader;
    std::string file_data;
};

}
#endif
