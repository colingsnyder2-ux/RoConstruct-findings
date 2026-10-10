// from server: 55% by colin
struct S_5da820 {
    char pad[0xe8];
    void f(int);
};

extern "C" void __stdcall sub_475050(void*);
extern "C" bool __stdcall sub_5da6d0(void*, void*);
extern "C" void* __stdcall sub_50b120();
extern "C" void __stdcall sub_62e7a0(void*, void*, int, float, float, int);
extern float g_79f758;

void S_5da820::f(int a)
{
    char local[0x30];
    sub_475050(local);
    if (sub_5da6d0((char*)this - 0xe8, local)) {
        void* p = sub_50b120();
        float v = g_79f758;
        float one = 1.0f;
        sub_62e7a0(p, local, 2, one, v, a);
    }
}
