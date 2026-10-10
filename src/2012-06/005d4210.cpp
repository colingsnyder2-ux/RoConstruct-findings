// from server: 80% by atomic.potato
extern "C" void* __cdecl CreateValue(void*);
extern "C" int __cdecl CheckValue(void*, void*);

struct S {
    void* value;
    int Creator();
};

int S::Creator()
{
    void* p = value;
    void* q = CreateValue(this);
    if (CheckValue(p, q))
        return (int)((char*)this - 0x1c);
    return 0;
}
