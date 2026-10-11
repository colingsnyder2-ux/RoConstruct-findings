// from server: 35% by atomic.potato
extern "C" int __cdecl func_0040a3b0(int, int);
extern "C" void __cdecl func_00664000();
extern "C" void __cdecl func_007f4929(int);

struct S {
    void f();
};

void S::f()
{
    if (!(*(unsigned char*)0xb8d798 & 1)) {
        *(unsigned int*)0xb8d798 |= 1;
        func_0040a3b0(0, 0xb5d83c);
        func_00664000();
        func_007f4929(0x983010);
    }
}
