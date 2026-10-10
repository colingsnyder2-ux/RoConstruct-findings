// from server: 36% by colin
struct Jumping {
    char pad0[4];
    int field4;
    char pad8[0x14];
    int field1c;
    char pad20[0xc];
    char field2c;
    char pad2d[3];
    float field30;
    void onComputeForceImpl(float dt);
};

extern float g_7c4ab8;
extern float g_7c4abc;

extern "C" void __stdcall sub_62d6c0();
extern "C" int __stdcall sub_5a6270(int);
extern "C" void __stdcall sub_530100();
extern "C" float __stdcall sub_624d80();
extern "C" void __stdcall sub_5eb4a0();
extern "C" void __stdcall sub_5eb2e0();
extern "C" void __stdcall sub_5cf030();

void Jumping::onComputeForceImpl(float dt)
{
    sub_62d6c0();
    field30 = field30 - dt;
    if (field2c != 0)
        return;

    int esi = sub_5a6270(field4);
    if (esi != 0)
    {
        sub_530100();
        float f = (g_7c4abc - *(float*)(esi + 0xb8)) * g_7c4ab8;
        if (f > 0.0f)
        {
            if (field1c != 0)
            {
                int eax = *(int*)(field1c + 0x1d8);
                int ecx = *(int*)(eax + 0x64);
                int edi = *(int*)(ecx + 4);
                float f1;
                int ecx2 = *(int*)(edi + 0x1c);
                if (ecx2 != 0)
                    f1 = sub_624d80();
                else
                    f1 = *(float*)(edi + 0x7c);

                float f2;
                int ecx3 = *(int*)(esi + 0x1c);
                if (ecx3 != 0)
                    f2 = sub_624d80();
                else
                    f2 = *(float*)(esi + 0x7c);

                float* p;
                if (f2 == f1)
                    p = &f1;
                else
                    p = &f2;

                float f3 = *p * dt;
                sub_5eb4a0();
                int ecx4 = esi;
                float f4 = *(float*)(ecx4 + 4);
                if (f3 > f4)
                {
                    float f5 = f3 - f4;
                    float v1 = 0.0f;
                    float v2 = 0.0f;
                    float v3 = f5;
                    sub_5eb2e0();
                    int eax2 = *(int*)(edi + 4);
                    int ecx5 = *(int*)(eax2 + 0x20);
                    if (ecx5 != 0)
                    {
                        float args[3];
                        args[0] = 0.0f;
                        args[1] = -f5;
                        args[2] = 0.0f;
                        sub_5cf030();
                    }
                }
            }
        }
    }
    field2c = 1;
}
