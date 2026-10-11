// from server: 67% by atomic.potato
extern "C" void sub_0098dec0(void*);

struct S
{
    int f();
};

int S::f()
{
    char* p = (char*)this;
    *(void**)p = (void*)0x009ff854;
    *(void**)(p + 0x20) = (void*)0x009ff7f4;
    sub_0098dec0(p + 0x118);
    sub_0098dec0(p + 0x114);
    return 0;
}
