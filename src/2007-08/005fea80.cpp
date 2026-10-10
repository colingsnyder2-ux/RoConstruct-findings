// from server: 56% by colin
struct AxisMoveTool {
    char pad0[0x46];
    int field46;
    char pad4a[0x1e];
    int field68;
    float field6c;
    float field70;
    float field74;
    float field50;
    float field54;
    float field58;
    float field5c;
    float field60;
    float field64;
    int construct(int*);
};

extern "C" int __cdecl sub_5fe9b0(void*, int*, int*);
extern "C" int __cdecl sub_5e5630(void*);
extern "C" int __cdecl sub_5abf60(float*, float*, float*);
extern "C" int __cdecl sub_5b9d60(int);
extern "C" int __cdecl sub_51d890(float*, float*, int);

extern float dword_7aa8b4;
extern float dword_8c7fb8;
extern float dword_8c7fbc;
extern float dword_8c7fc0;
extern int dword_8c7fc4;

int AxisMoveTool::construct(int* a)
{
    float v0 = 0.0f;
    float v1 = 0.0f;
    float v2 = 0.0f;
    int local40;
    if (sub_5fe9b0(this, &local40, a)) {
        field46 = a[2];
        int n = local40;
        int q = n / 3;
        q += (q >> 31);
        field68 = n - q * 3;
        if ((dword_8c7fc4 & 1) == 0) {
            dword_8c7fc4 |= 1;
            dword_8c7fb8 = 1.0f;
            dword_8c7fbc = dword_7aa8b4;
            dword_8c7fc0 = 0.0f;
        }
        float* p = (float*)sub_5abf60(&v0, &v1, &dword_8c7fb8);
        field6c = p[0];
        field70 = p[1];
        field74 = p[2];
        int r = sub_5b9d60(a[3]);
        float* q2 = (float*)sub_51d890(&v2, &field6c, r);
        field50 = q2[1];
        field54 = q2[2];
        field58 = q2[3];
        field5c = q2[4];
        field60 = q2[5];
        field64 = q2[6];
        void** vtbl = *(void***)this;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[8];
        fn(this);
        return (int)this;
    }
    sub_5e5630(this);
    return (int)this;
}
