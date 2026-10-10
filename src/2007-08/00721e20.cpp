// from server: 27% by colin
struct CXTCaptionButtonThemeOfficeXP {
    char pad0[0x14];
    int field14;
    char pad18[0x6c];
    int field84;
    char pad88[0x80];
    int field80;

    int func(int a, int b, int c, int d);
};

extern "C" int __stdcall sub_714B90(int);
extern "C" int __stdcall sub_715310(int);
extern "C" int __stdcall sub_64C960(int, int, int);
extern "C" int __stdcall sub_648780(int, int, int);
extern "C" int __stdcall sub_713A80();
extern "C" int __stdcall sub_64C940(int, int, int);
extern "C" int __stdcall sub_64E7A0(int, int, int, int, int);
extern "C" int __stdcall sub_648740(int, int, int);
extern "C" int __stdcall sub_64C920(int);
extern "C" int __stdcall sub_648730(int);

int CXTCaptionButtonThemeOfficeXP::func(int a, int b, int c, int d)
{
    int v[6];
    int result;
    int esi;
    int ebp;
    int eax_val;
    int edx_val;
    int ecx_val;
    int ebx_val;

    if (a != 0)
        return 0;
    if (this->field14 == 0)
        return 0;

    esi = sub_714B90(a);
    if (esi == 0)
        return 0;

    ebp = b;
    (*(int (__thiscall **)(CXTCaptionButtonThemeOfficeXP *, int *, int, int, int, int, int))(*(int *)this + 0x50))(this, v, ebp, c, 0, a, d);

    if (d & 4) {
        sub_715310((int)v);
        eax_val = sub_64C960(esi, v[0], v[1]);
        result = sub_64E7A0(esi, ebp, c, eax_val, v[2]);
    } else if (d & 1) {
        sub_715310((int)v);
        eax_val = sub_648780(esi, v[0], v[1]);
        result = sub_64E7A0(esi, ebp, c, eax_val, v[2]);
    } else {
        eax_val = sub_713A80();
        if (eax_val != 0) {
            if (this->field84 != 0) {
                v[0] = v[0] + 1;
                v[1] = v[1] + 1;
                sub_715310((int)v);
                eax_val = sub_64C940(esi, v[0], v[1]);
                result = sub_64E7A0(esi, ebp, c, eax_val, v[2]);
                v[0] = v[0] - 1;
                v[1] = v[1] - 1;
                sub_715310((int)v);
                eax_val = sub_648740(esi, v[0], v[1]);
                result = sub_64E7A0(esi, ebp, c, eax_val, v[2]);
            } else {
                sub_715310((int)v);
                eax_val = sub_648740(esi, v[0], v[1]);
                result = sub_64E7A0(esi, ebp, c, eax_val, v[2]);
            }
        } else {
            if (this->field80 != 0)
                eax_val = sub_64C920(esi);
            else
                eax_val = sub_648730(esi);
            ebx_val = eax_val;
            sub_715310((int)v);
            result = sub_64E7A0(esi, ebp, c, ebx_val, v[2]);
        }
    }
    return result;
}
