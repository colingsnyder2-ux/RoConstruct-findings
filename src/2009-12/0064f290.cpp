// from server: 32% by atomic.potato
extern "C" int __cdecl func_0040a3b0(int, const char*);
extern "C" void __cdecl func_007f4929(int);
extern "C" void __cdecl func_00664000();

struct S {
    void func_0064f290();
};

void S::func_0064f290()
{
    if (!(*(unsigned char*)0xb87298 & 1)) {
        *(unsigned int*)0xb87298 |= 1;
        func_00664000();
        func_007f4929(0x983660);
    }
}
