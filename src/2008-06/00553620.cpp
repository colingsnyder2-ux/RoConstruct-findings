// from server: 42% by atomic.potato
struct Chunk;

extern "C" void* __stdcall sub_553830(void*);
extern "C" void* __stdcall sub_54c630(void*, int, void*);
extern "C" void __stdcall sub_553810(void*);

struct AggregateChunk {
    void func(int, void*, void*);
};

void AggregateChunk::func(int a, void* b, void* c)
{
    void* p = sub_553830(c);
    void* q = sub_54c630(b, 0, p);
    sub_553810(q);
}
