// roc 2007-03 0051edf0  unit: seg_00510000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051edf0
//
// 0051edf0  83ec30               sub esp, 0x30
// 0051edf3  8b442438             mov eax, dword ptr [esp + 0x38]
// 0051edf7  d900                 fld dword ptr [eax]
// 0051edf9  d944243c             fld dword ptr [esp + 0x3c]
// 0051edfd  d9c0                 fld st(0)
// 0051edff  deca                 fmulp st(2)
// 0051ee01  d9c9                 fxch st(1)
// 0051ee03  d95c2420             fstp dword ptr [esp + 0x20]
// 0051ee07  d94004               fld dword ptr [eax + 4]
// 0051ee0a  d8c9                 fmul st(1)
// 0051ee0c  d95c2424             fstp dword ptr [esp + 0x24]
// 0051ee10  d94008               fld dword ptr [eax + 8]
// 0051ee13  d8c9                 fmul st(1)
// 0051ee15  d95c2428             fstp dword ptr [esp + 0x28]
// 0051ee19  d9400c               fld dword ptr [eax + 0xc]
// 0051ee1c  d8c9                 fmul st(1)
// 0051ee1e  d95c242c             fstp dword ptr [esp + 0x2c]
// 0051ee22  d9e8                 fld1 
// 0051ee24  dee1                 fsubrp st(1)
// 0051ee26  d95c2438             fstp dword ptr [esp + 0x38]
// 0051ee2a  d901                 fld dword ptr [ecx]
// 0051ee2c  d9442438             fld dword ptr [esp + 0x38]
// 0051ee30  d9c0                 fld st(0)
// 0051ee32  deca                 fmulp st(2)
// 0051ee34  d9c9                 fxch st(1)
// 0051ee36  d95c2410             fstp dword ptr [esp + 0x10]
// 0051ee3a  d94104               fld dword ptr [ecx + 4]
// 0051ee3d  d8c9                 fmul st(1)
// 0051ee3f  d95c2414             fstp dword ptr [esp + 0x14]
// 0051ee43  d94108               fld dword ptr [ecx + 8]
// 0051ee46  d8c9                 fmul st(1)
// 0051ee48  d95c2418             fstp dword ptr [esp + 0x18]
// 0051ee4c  d8490c               fmul dword ptr [ecx + 0xc]
// 0051ee4f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051ee53  d9442410             fld dword ptr [esp + 0x10]
// 0051ee57  d8442420             fadd dword ptr [esp + 0x20]
// 0051ee5b  d91c24               fstp dword ptr [esp]
// 0051ee5e  d9442414             fld dword ptr [esp + 0x14]
// 0051ee62  d8442424             fadd dword ptr [esp + 0x24]
// 0051ee66  d95c2404             fstp dword ptr [esp + 4]
// 0051ee6a  d9442418             fld dword ptr [esp + 0x18]
// 0051ee6e  d8442428             fadd dword ptr [esp + 0x28]
// 0051ee72  d95c2408             fstp dword ptr [esp + 8]
// 0051ee76  d944241c             fld dword ptr [esp + 0x1c]
// 0051ee7a  d844242c             fadd dword ptr [esp + 0x2c]
// 0051ee7e  d95c240c             fstp dword ptr [esp + 0xc]
// 0051ee82  d9442404             fld dword ptr [esp + 4]
// 0051ee86  d90424               fld dword ptr [esp]
// 0051ee89  d9442408             fld dword ptr [esp + 8]
// 0051ee8d  d944240c             fld dword ptr [esp + 0xc]
// 0051ee91  d9c2                 fld st(2)
// 0051ee93  decb                 fmulp st(3)
// 0051ee95  d9c3                 fld st(3)
// 0051ee97  decc                 fmulp st(4)
// 0051ee99  d9ca                 fxch st(2)
// 0051ee9b  dec3                 faddp st(3)
// 0051ee9d  dcc8                 fmul st(0), st(0)
// 0051ee9f  dec2                 faddp st(2)
// 0051eea1  dcc8                 fmul st(0), st(0)
// 0051eea3  dec1                 faddp st(1)
// 0051eea5  d95c2438             fstp dword ptr [esp + 0x38]
// 0051eea9  d9442438             fld dword ptr [esp + 0x38]
// 0051eead  e8fa031000           call 0x61f2ac
// 0051eeb2  d95c2438             fstp dword ptr [esp + 0x38]
// 0051eeb6  d9442438             fld dword ptr [esp + 0x38]
// 0051eeba  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051eebe  d95c2438             fstp dword ptr [esp + 0x38]
// 0051eec2  d90424               fld dword ptr [esp]
// 0051eec5  d9442438             fld dword ptr [esp + 0x38]
// 0051eec9  d9c0                 fld st(0)
// 0051eecb  defa                 fdivp st(2)
// 0051eecd  d9c9                 fxch st(1)
// 0051eecf  d918                 fstp dword ptr [eax]
// 0051eed1  d9442404             fld dword ptr [esp + 4]
// 0051eed5  d8f1                 fdiv st(1)
// 0051eed7  d95804               fstp dword ptr [eax + 4]
// 0051eeda  d9442408             fld dword ptr [esp + 8]
// 0051eede  d8f1                 fdiv st(1)
// 0051eee0  d95808               fstp dword ptr [eax + 8]
// 0051eee3  d87c240c             fdivr dword ptr [esp + 0xc]
// 0051eee7  d9580c               fstp dword ptr [eax + 0xc]
// 0051eeea  83c430               add esp, 0x30
// 0051eeed  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ?nlerp@Quat@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
