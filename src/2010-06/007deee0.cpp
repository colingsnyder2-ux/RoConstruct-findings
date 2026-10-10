// from server: 88% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void __stdcall callee(void*, int, int);

int S::f(int value)
{
    callee((char*)this + 0x20, *((int*)((char*)this + 0x28)), value);
    *((S**)((char*)value + 0x4c)) = this;
    return value;
}
