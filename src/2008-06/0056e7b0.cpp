// from server: 61% by atomic.potato
extern "C" void sub_0057c2d0(void*);

struct S
{
    int f(void*);
};

int S::f(void* arg)
{
    struct T
    {
        void* vptr;
        int value;
        unsigned char flag;
    };

    void* p = *(void**)((char*)this + 0x18);
    void* table = *(void**)p;
    unsigned char result = ((unsigned char (__cdecl *)(void*, void*))(*(void**)((char*)table + 8)))(p, arg);

    T* out = (T*)((char*)arg + 0x10);
    sub_0057c2d0(out);
    out->flag = result;
    out->value = 4;
    return 0;
}
