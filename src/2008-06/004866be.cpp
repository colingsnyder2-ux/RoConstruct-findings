// from server: 23% by colin
struct Shader {
    char pad0[0x20];
    float m[4];
    char pad1[0x194 - 0x30];
    int count;
    void func(int a, int b);
};

extern "C" void __stdcall sub_96F964(int, int, int, void*);
extern "C" void __stdcall sub_96F968(int, int, int, void*);
extern "C" void __cdecl sub_50A9B0();
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_8027F4(int);

void Shader::func(int a, int b)
{
    int i = 0;
    float buf[4];
    float buf2[4];
    int j;
    char flag = 0;

    for (j = 0; j < this->count; j++)
    {
        float* src = (float*)((char*)this + 0x20);
        float* dst = buf;
        int k = 3;
        do
        {
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            src += 1;
            dst += 3;
        } while (--k);

        sub_96F964(a, 1, 0, buf);

        float* src2 = (float*)((char*)this + 0x20);
        float* dst2 = buf2;
        int k2 = 4;
        do
        {
            dst2[0] = src2[0];
            dst2[1] = src2[1];
            dst2[2] = src2[2];
            dst2[3] = src2[3];
            src2 += 1;
            dst2 += 4;
        } while (--k2);

        sub_96F968(a, 1, 0, buf2);

        if (flag)
        {
            sub_8027F4(-1);
        }
        sub_50A9B0();
    }
}
