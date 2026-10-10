// from server: 55% by atomic.potato
extern "C" void __stdcall sub_A71ED0(void*, int);

struct S
{
    S* f(int);
    unsigned char pad[0x20];
    void* field20;
    int field28;
};

S* S::f(int value)
{
    sub_A71ED0((char*)this + 0x20, field28);
    *(S**)((char*)value + 0x4c) = this;
    return (S*)value;
}
