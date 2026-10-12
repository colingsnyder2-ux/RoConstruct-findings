// from server: 48% by colin
struct Tool {
    char pad[0x1a4];
    int field_1a4;
    void sub_5fec80();
    void f();
};

extern "C" void __stdcall sub_456e80(int* p);
extern "C" void __stdcall sub_513240(float* out, int idx);
extern "C" void __stdcall sub_55a8f0(int a);
extern "C" void __stdcall sub_59dad0(float* v);
extern "C" void __stdcall sub_59dd80(int a);
extern "C" void* __stdcall sub_5b08a0();
extern "C" void* __stdcall sub_5d9a20(int a);
extern "C" void* __stdcall sub_5e2a10();
extern "C" void __stdcall sub_608960(float* v);
extern "C" void* __stdcall sub_6a17c6(int a, const char* b, const char* c, int d, int e);

extern float g_826e6c;
extern float g_828b60;
extern float g_82ca40;

void Tool::f()
{
    int* p = &field_1a4;
    int edi = 0;
    if (*p != 0) {
        void* eax = sub_5e2a10();
        if (eax != 0) {
            int v = *(int*)((char*)eax + 0x104);
            edi = (int)sub_6a17c6(v, (const char*)0x92907c, (const char*)0x932a40, 0, 0);
        }
        sub_55a8f0(0);
        sub_456e80(p);
    }
    void* esi = sub_5b08a0();
    if (esi != 0) {
        sub_59dd80(1);
        if (sub_5d9a20(edi) != 0) {
            int* eax = *(int**)(edi + 0x134);
            int ecx = *(int*)((char*)eax + 8);
            int* edx = *(int**)(ecx + edi + 0x134);
            int (*fn)(void*) = *(int(**)(void*))edx;
            float tmp[3];
            fn(tmp);
            float a = tmp[0];
            float b = tmp[1];
            float c = tmp[2];
            float d = g_828b60;
            float e = c + g_826e6c;
            float out[3];
            sub_513240(out, 2);
            float f0 = out[0];
            float f1 = out[1];
            float f2 = out[2];
            float m = g_82ca40;
            float r0 = f0 * m + a;
            float r1 = f1 * m + b;
            float r2 = f2 * m + e;
            float v[3];
            v[0] = r0;
            v[1] = r1;
            v[2] = r2;
            sub_608960(v);
            float one = 1.0f;
            float q[3];
            q[0] = one;
            q[1] = one;
            q[2] = one;
            sub_59dad0(q);
        }
    }
    sub_5fec80();
}
