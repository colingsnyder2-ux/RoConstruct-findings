// from server: 22% by atomic.potato
extern "C" void __stdcall func_0040a3b0();
extern "C" void __stdcall func_00664000();
extern "C" void __stdcall func_007f4929();

struct S {
    void f();
};

void S::f()
{
    if (!(*(unsigned char*)0xb8e098 & 1)) {
        *(unsigned int*)0xb8e098 |= 1;
        func_0040a3b0();
        func_00664000();
        func_007f4929();
    }
}
