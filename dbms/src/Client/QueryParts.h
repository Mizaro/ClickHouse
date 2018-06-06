#ifndef CLICKHOUSE_QUERY_PARTS_H
#define CLICKHOUSE_QUERY_PARTS_H

typedef struct {
    const char *name;			/* User printable name of the query part. */
} QUERYPART;

QUERYPART queryParts[] = {
        // CREATE DATABASE, TABLE, VIEW
        {(const char *)"CREATE"},
        {(const char *)"DATABASE"},
        {(const char *)"IF"},
        {(const char *)"NOT"},
        {(const char *)"EXISTS"},
        {(const char *)"TEMPORARY"},
        {(const char *)"TABLE"},
        {(const char *)"ON"},
        {(const char *)"CLUSTER"},
        {(const char *)"DEFAULT"},
        {(const char *)"MATERIALIZED"},
        {(const char *)"ALIAS"},
        {(const char *)"ENGINE"},
        {(const char *)"AS"},
        {(const char *)"VIEW"},
        {(const char *)"POPULATE"},
        //ATTACH/DETACH
        {(const char *)"ATTACH"},
        {(const char *)"DETACH"},
        //DROP
        {(const char *)"DROP"},
        //RENAME
        {(const char *)"RENAME"},
        {(const char *)"TO"},
        //ALTER
        {(const char *)"ALTER"},
        {(const char *)"ADD"},
        {(const char *)"MODIFY"},
        {(const char *)"COLUMN"},
        {(const char *)"AFTER"},
        //PARTITIONS
        {(const char *)"PARTITION"},
        {(const char *)"PART"},
        {(const char *)"FREEZE"},
        {(const char *)"FETCH"},
        {(const char *)"FROM"},
        //SHOW DATABASES,TABLES,PROCESSLIST
        {(const char *)"SHOW"},
        {(const char *)"INTO"},
        {(const char *)"OUTFILE"},
        {(const char *)"FORMAT"},
        {(const char *)"TABLES"},
        {(const char *)"LIKE"},
        {(const char *)"PROCESSLIST"},
        //DESCRIBE
        {(const char *)"DESCRIBE"},
        {(const char *)"DESC"},
        //USE
        {(const char *)"USE"},
        //SET
        {(const char *)"SET"},
        //OPTIMIZE
        {(const char *)"OPTIMIZE"},
        {(const char *)"FINAL"},
        //INSERT
        {(const char *)"INSERT"},
        {(const char *)"VALUES"},
        //SELECT
        {(const char *)"SELECT"},
        {(const char *)"DISTINCT"},
        {(const char *)"SAMPLE"},
        {(const char *)"ARRAY"},
        {(const char *)"JOIN"},
        {(const char *)"GLOBAL"},
        {(const char *)"ANY"},
        {(const char *)"ALL"},
        {(const char *)"INNER"},
        {(const char *)"LEFT"},
        {(const char *)"USING"},
        {(const char *)"PREWHERE"},
        {(const char *)"WHERE"},
        {(const char *)"GROUP"},
        {(const char *)"BY"},
        {(const char *)"WITH"},
        {(const char *)"TOTALS"},
        {(const char *)"HAVING"},
        {(const char *)"ORDER"},
        {(const char *)"LIMIT"},
        {(const char *)"UNION"},
        {(const char *)"AND"},
        {(const char *)"OR"},
        {(const char *)"ASC"},
        //IN
        {(const char *)"IN"},
        //KILL QUERY
        {(const char *)"KILL"},
        {(const char *)"QUERY"},
        {(const char *)"SYNC"},
        {(const char *)"ASYNC"},
        {(const char *)"TEST"},
        //Table engines
        {(const char *)"TinyLog"},
        {(const char *)"Log"},
        {(const char *)"Memory"},
        {(const char *)"MergeTree"},
        {(const char *)"ReplacingMergeTree"},
        {(const char *)"SummingMergeTree"},
        {(const char *)"AggregateFunction"},
        {(const char *)"CollapsingMergeTree"},
        {(const char *)"GraphiteMergeTree"},
        {(const char *)"ReplicatedMergeTree"},
        {(const char *)"ReplicatedSummingMergeTree"},
        {(const char *)"ReplicatedReplacingMergeTree"},
        {(const char *)"ReplicatedAggregatingMergeTree"},
        {(const char *)"ReplicatedCollapsingMergeTree"},
        {(const char *)"ReplicatedGraphiteMergeTree"},
        {(const char *)"Distributed"},
        {(const char *)"Dictionary"},
        {(const char *)"Merge"},
        {(const char *)"Buffer"},
        {(const char *)"File"},
        {(const char *)"Null"},
        {(const char *)"Set"},
        {(const char *)"Join"},
        {(const char *)"View"},
        {(const char *)"MaterializedView"},
        {(const char *)"Kafka"},
        {(const char *)"MySQL"},
        //FORMATS
        {(const char *)"TabSeparated"},
        {(const char *)"TabSeparatedRaw"},
        {(const char *)"TabSeparatedWithNames"},
        {(const char *)"TSVWithNames"},
        {(const char *)"TabSeparatedWithNamesAndTypes"},
        {(const char *)"TSVWithNamesAndTypes"},
        {(const char *)"CSV"},
        {(const char *)"CSVWithNames"},
        {(const char *)"Values"},
        {(const char *)"Vertical"},
        {(const char *)"VerticalRaw"},
        {(const char *)"JSON"},
        {(const char *)"JSONCompact"},
        {(const char *)"JSONEachRow"},
        {(const char *)"TSKV"},
        {(const char *)"Pretty"},
        {(const char *)"PrettyCompact"},
        {(const char *)"PrettyCompactMonoBlock"},
        {(const char *)"PrettyNoEscapes"},
        {(const char *)"PrettySpace"},
        {(const char *)"RowBinary"},
        {(const char *)"Native"},
        {(const char *)"XML"},
        {(const char *)"CapnProto"},
        //TYPES
        {(const char *)"Int8"},
        {(const char *)"Int16"},
        {(const char *)"Int32"},
        {(const char *)"Int64"},
        {(const char *)"UInt8"},
        {(const char *)"UInt16"},
        {(const char *)"UInt32"},
        {(const char *)"UInt64"},
        {(const char *)"Float32"},
        {(const char *)"Float64"},
        {(const char *)"Boolean"},
        {(const char *)"String"},
        {(const char *)"FixedString"},
        {(const char *)"Date"},
        {(const char *)"DateTime"},
        {(const char *)"Enum8"},
        {(const char *)"Enum16"},
        {(const char *)"Array"},
        {(const char *)"Tuple"},
        {(const char *)"Nested"},
        {(const char *)"Expression"},
        {(const char *)"Set"},
        //END OF LIST
        {(const char *)nullptr},
};

#endif //CLICKHOUSE_QUERY_PARTS_H
