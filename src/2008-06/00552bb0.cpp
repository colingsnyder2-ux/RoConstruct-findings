// from server: 13% by colin
#pragma optimize("", off)

extern "C" void __cdecl initialize(void*, void*);
extern "C" void __cdecl f(void*);

struct Bucket {
    unsigned char padding[12];
    void* value;
    void* f(void*);
};

struct Result {
    void initialize(void*, Bucket*);
};

struct AggregateChunk {
    void process(Bucket* bucket, Result* result);
};

void AggregateChunk::process(Bucket* bucket, Result* result) {
    if (bucket->value) {
        initialize(bucket->value, bucket);
        f(result);
    }
}
