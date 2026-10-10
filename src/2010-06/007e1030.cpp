// from server: 89% by atomic.potato
extern "C" void __stdcall G1_func_007e14b0(void*, int, int);

struct S_func_007e1030 {
    int f(int);
};

int S_func_007e1030::f(int value)
{
    int item = *(int*)((char*)this + 0x28);
    G1_func_007e14b0((char*)this + 0x20, item, value);
    if (*(int*)((char*)this + 0x3c) == 0) {
        *(int*)((char*)value + 0x4c) = item;
        *(int*)((char*)value + 0x50) = (int)this;
    }
    return value;
}
