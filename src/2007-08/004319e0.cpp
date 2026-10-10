// from server: 38% by colin
struct CDataModelPropGrid
{
    void sub_4316A0(unsigned int);
    void func(unsigned int, unsigned int);
};

extern unsigned int dword_8A2838;
extern unsigned int dword_8A2820;

extern "C" void __stdcall sub_586B80(unsigned int, void*);
extern "C" void __stdcall sub_586BB0(void*, void*);
extern "C" void __stdcall sub_5069F0(void*, void*);
extern "C" void __stdcall sub_68E630(void*, unsigned int, unsigned int, unsigned int, void*);
extern "C" int __stdcall sub_6305A4(void*);
extern "C" void __stdcall sub_68E780(void*);

void CDataModelPropGrid::func(unsigned int a, unsigned int b)
{
    unsigned char buf[0x140];
    unsigned int v;
    unsigned int tmp;
    unsigned int result;
    unsigned int val;

    v = dword_8A2838;
    sub_586B80(v, buf);
    sub_5069F0(buf, &tmp);

    val = ((unsigned int)buf[2] << 8 | buf[1]) << 8 | buf[0];

    sub_68E630(buf, 0x40, val, val, (void*)this);

    result = 0;
    if (sub_6305A4(buf) == 1)
    {
        unsigned int x = *(unsigned int*)(buf + 0x124);
        unsigned char c[3];
        c[0] = (unsigned char)x;
        c[1] = (unsigned char)(x >> 8);
        c[2] = (unsigned char)(x >> 16);
        sub_586BB0(c, &tmp);
        x = *(unsigned int*)&tmp;
        if (dword_8A2838 != x)
        {
            dword_8A2838 = x;
            sub_4316A0(x);
        }
    }
    sub_68E780(buf);
}
