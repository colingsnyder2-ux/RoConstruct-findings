// from server: 30% by colin
#pragma optimize("", off)

struct Bucket;

struct Result
{
    void initialize(void* value, Bucket* owner);
};

struct Bucket
{
    unsigned char padding[12];
    void* value;
    Result* f(Result* result);
};

struct Iterator
{
    void* node;
    Bucket* owner;
    Iterator(void* n, Bucket* o);
};

struct AggregateChunk
{
    unsigned char padding[4];
    unsigned int count;
    void* container;
    void process(unsigned int arg);
};

extern "C" int __cdecl rand();
extern "C" void __cdecl initialize(void*, void*);
extern "C" void __cdecl f(void*);

void AggregateChunk::process(unsigned int arg)
{
    if (count > 1)
    {
        Iterator it(container, (Bucket*)this);
        while (true)
        {
            if (!it.node)
                break;
            if (it.node)
            {
                unsigned int r = rand();
                unsigned int d = *(unsigned int*)((char*)it.node + 12);
                if (d > 0)
                {
                    unsigned int idx = r % d;
                    void* p = (void*)((char*)it.node + 12);
                    void* q = (void*)((char*)p + idx * 4);
                    void* v = *(void**)q;
                    void* w = *(void**)v;
                    void* x = (void*)((char*)w + 0x1c);
                    void* y = (void*)((char*)x + 0x24);
                    initialize(y, this);
                }
            }
        }
    }
    else
    {
        unsigned int n = count / 20;
        unsigned int i = 1;
        unsigned int m = n;
        while (true)
        {
            if (i > m)
                break;
            if (i == arg)
                break;
            i++;
        }
    }
}
