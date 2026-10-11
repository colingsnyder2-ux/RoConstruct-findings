// from server: 35% by atomic.potato
extern "C" int __cdecl func_0040a3b0(int, const char*);
extern "C" void __cdecl func_00664000();
extern "C" void __cdecl func_007f4929(int);

struct S {
    void f();
};

void S::f()
{
    if ((*(unsigned char*)0xb87698 & 1) == 0) {
        *(unsigned int*)0xb87698 |= 1;
        func_0040a3b0(0, (const char*)0xb3606c);
        func_00664000();
        func_007f4929(0x983620);
    }
}
