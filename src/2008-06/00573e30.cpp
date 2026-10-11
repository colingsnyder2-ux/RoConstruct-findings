// from server: 45% by colin
struct S_func_00573e30 {
    char pad0[0x108];
    void* m_vec;
    char pad10c[0x154 - 0x10c];
    int m_state;
    int f(float* out);
};

extern "C" int __stdcall sub_0048ae20(void* p);
extern "C" void* __stdcall sub_006a17c6(void* a, void* b, void* c, void* d, void* e);
extern "C" void __stdcall sub_00802890(void);

int S_func_00573e30::f(float* out)
{
    out[0] = 0.0f;
    out[1] = 0.0f;
    float* pmin = out;
    float* pmax = out + 1;

    int n = sub_0048ae20(this);
    for (int i = 0; i < n; ++i) {
        void* vec = *(void**)((char*)this + 0x108);
        int count = (*(int*)((char*)vec + 0x10) - *(int*)((char*)vec + 0xc)) >> 3;
        if ((unsigned)i >= (unsigned)count) {
            sub_00802890();
        }
        void* item = *(void**)(*(int*)((char*)vec + 0xc) + i * 8);
        void* r = sub_006a17c6(item, (void*)0x92907c, (void*)0x92b8d8, (void*)0, (void*)0);
        if (r != 0) {
            float tmp[2];
            void** vtbl = *(void***)r;
            void (*fn)(void*, float*) = (void (*)(void*, float*))vtbl[0x5c / 4];
            fn(r, tmp);

            int st = *(int*)((char*)this + 0x154);
            if (st != 0) {
                out[0] = out[0] + tmp[0];
                if (tmp[1] < *pmax) {
                    *pmax = tmp[1];
                }
            } else if (st == 1) {
                if (tmp[0] < *pmin) {
                    *pmin = tmp[0];
                }
                *pmax = *pmax + tmp[1];
            }
        }
    }
    return 0;
}
