// from server: 39% by atomic.potato
extern "C" int __cdecl func_0064fc30(int, int);
extern "C" void __cdecl func_00664000(void*, int);
extern "C" void __cdecl func_007f4929(void*);

struct S {
    void f();
};

void S::f()
{
    if (!(*(unsigned char*)0xb88d98 & 1)) {
        *(unsigned int*)0xb88d98 |= 1;
        int v = func_0064fc30(0, 0x9de818);
        func_00664000((void*)0xb88ca0, v);
        func_007f4929((void*)0x9834b0);
    }
}
