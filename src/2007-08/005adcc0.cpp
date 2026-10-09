// from server: 100% by colin
// roc 2007-08 005adcc0  unit: P8CRenderSettings::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005adcc0
//
// 005adcc0  83ec08               sub esp, 8
// 005adcc3  8b8110020000         mov eax, dword ptr [ecx + 0x210]
// 005adcc9  8b8914020000         mov ecx, dword ptr [ecx + 0x214]
// 005adccf  6a00                 push 0
// 005adcd1  68e8030000           push 0x3e8
// 005adcd6  51                   push ecx
// 005adcd7  50                   push eax
// 005adcd8  e8d3340800           call 0x6311b0
// 005adcdd  890424               mov dword ptr [esp], eax
// 005adce0  89542404             mov dword ptr [esp + 4], edx
// 005adce4  df2c24               fild qword ptr [esp]
// 005adce7  dc0d085a7b00         fmul qword ptr [0x7b5a08]
// 005adced  83c408               add esp, 8
// 005adcf0  c3                   ret 

extern "C" __int64 __stdcall func_006311b0(int, int, int, int);

struct CRenderSettings
{
    char pad[0x210];
    int field_210;
    int field_214;
    double getFullscreenSize();
};

double CRenderSettings::getFullscreenSize()
{
    int a = field_210;
    int b = field_214;
    __int64 v = func_006311b0(a, b, 0x3e8, 0);
    return (double)v * *(double*)0x7b5a08;
}
