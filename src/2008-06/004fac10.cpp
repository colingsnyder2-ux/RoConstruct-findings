// from server: 22% by atomic.potato
// roc 2008-06 004fac10  unit: RBX::ViewNew::TorsoBuilder  size: 739 bytes

extern "C" void __cdecl sub_5EC1A0(float* dst, float* src);
extern "C" void* __cdecl sub_6A0956(int size);
extern "C" void __cdecl sub_6A094A(void* p);
extern "C" void* __cdecl sub_509BA0();
extern "C" void __cdecl sub_548000(void* a, void* b, void* c, void* d, int e);
extern "C" void __cdecl sub_548640(void* p);
extern "C" void __cdecl sub_500EB0(void* self, int a, int b, int c, int d);

extern float g_819bac;

struct TorsoBuilder {
    char pad0[4];
    float field4;
    void build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
};

void TorsoBuilder::build(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    float v44, v48, v4c, v50, v54;
    float f74, f78, f7c;
    float local1c, local20;
    float local10, local14;
    float local34, local38;
    float local3c, local40;
    float local54, local58;
    float local60, local68;
    float local70, local74, local78, local90;
    float locala0;
    int local2c;
    int local24;
    int local28;
    short s34, s36;
    int* esi;
    int ebx, edi, ecx;
    int eax_;

    sub_5EC1A0(&local70, &field4);

    f74 = local70; if (f74 < 0) f74 = -f74;
    f78 = local74; if (f78 < 0) f78 = -f78;
    f7c = local78; if (f7c < 0) f7c = -f7c;

    s34 = *(short*)((char*)&a + 0);
    s36 = *(short*)((char*)&a + 2);

    local2c = s34 + 1;
    edi = s36 + 1;
    edi = edi * local2c;

    v44 = (float)(s34 + 1);
    v44 = (float)(*(float*)&b - *(float*)&a) / v44;

    v48 = (float)(s36 + 1);
    v48 = (float)(*(float*)&d - *(float*)&c) / v48;

    v4c = *(float*)&e / v48;
    v50 = *(float*)&f / v44;
    v54 = *(float*)&g / v44;

    esi = (int*)sub_6A0956(edi * 4);

    local1c = *(float*)&a;
    local20 = *(float*)&e;

    ebx = 0;
    if (ebx <= s34) {
        do {
            local1c = *(float*)&c;
            local20 = *(float*)&f;
            edi = 0;
            if (edi <= s36) {
                do {
                    local60 = local10;
                    local68 = local14;
                    local70 = *(float*)&h;
                    local3c = local1c;
                    local40 = local20;
                    local54 = local1c;
                    local58 = local20;
                    local90 = 1.0f;

                    ((void (__stdcall*)(void*, void*, void*, void*, void*))*(void**)&a)(&local3c, &local54, &local70, &local90, &local90);

                    void* p = sub_509BA0();
                    float* pf = (float*)p;
                    if (pf[0] == *(float*)&e && pf[1] == *(float*)&f) {
                        local34 = *(float*)&e;
                        local38 = *(float*)&f;
                    }

                    local54 = local34 * g_819bac;
                    local58 = local38 * g_819bac;

                    sub_5EC1A0(&local54, &local90);
                    sub_5EC1A0(&local70, &locala0);
                    sub_548000(&local90, &locala0, &local60, &local68, 1);

                    local3c = local60 + local3c;
                    local40 = local68 + local40;

                    ecx = (s36 + 1) * ebx + edi;
                    esi[ecx] = (int)p;

                    edi++;
                } while (edi <= s36);
            }
            local10 = local3c + local10;
            local14 = v44 + local14;
            ebx++;
        } while (ebx <= s34);
    }

    ecx = 0;
    ebx = 0;
    if (ecx < s34) {
        do {
            edi = 0;
            if (edi < s36) {
                do {
                    eax_ = (s36 + 1) * ebx + edi;
                    ecx = eax_ + s36 + 1;
                    sub_500EB0((void*)local24, esi[eax_], esi[eax_ + 1], esi[ecx], esi[ecx + 1]);
                    edi++;
                } while (edi < s36);
            }
            ebx++;
        } while (ebx < s34);
    }

    ebx = 0;
    if (local24 > 0) {
        do {
            sub_548640((void*)esi[ebx]);
            ebx++;
        } while (ebx < local24);
    }

    sub_6A094A(esi);
}
