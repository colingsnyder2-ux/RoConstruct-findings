// roc 2007-03 005f7a70  unit: seg_005f0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f7a70
//
// 005f7a70  83ec18               sub esp, 0x18
// 005f7a73  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f7a77  d9410c               fld dword ptr [ecx + 0xc]
// 005f7a7a  d9420c               fld dword ptr [edx + 0xc]
// 005f7a7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f7a81  d94208               fld dword ptr [edx + 8]
// 005f7a84  d84904               fmul dword ptr [ecx + 4]
// 005f7a87  d94108               fld dword ptr [ecx + 8]
// 005f7a8a  d84a04               fmul dword ptr [edx + 4]
// 005f7a8d  dee9                 fsubp st(1)
// 005f7a8f  d94108               fld dword ptr [ecx + 8]
// 005f7a92  d80a                 fmul dword ptr [edx]
// 005f7a94  d94208               fld dword ptr [edx + 8]
// 005f7a97  d809                 fmul dword ptr [ecx]
// 005f7a99  dee9                 fsubp st(1)
// 005f7a9b  d901                 fld dword ptr [ecx]
// 005f7a9d  d84a04               fmul dword ptr [edx + 4]
// 005f7aa0  d902                 fld dword ptr [edx]
// 005f7aa2  d84904               fmul dword ptr [ecx + 4]
// 005f7aa5  dee9                 fsubp st(1)
// 005f7aa7  d901                 fld dword ptr [ecx]
// 005f7aa9  d8cc                 fmul st(4)
// 005f7aab  d9c4                 fld st(4)
// 005f7aad  d84904               fmul dword ptr [ecx + 4]
// 005f7ab0  d94108               fld dword ptr [ecx + 8]
// 005f7ab3  d8ce                 fmul st(6)
// 005f7ab5  d95c2414             fstp dword ptr [esp + 0x14]
// 005f7ab9  d902                 fld dword ptr [edx]
// 005f7abb  d8cf                 fmul st(7)
// 005f7abd  d91c24               fstp dword ptr [esp]
// 005f7ac0  d9c6                 fld st(6)
// 005f7ac2  d84a04               fmul dword ptr [edx + 4]
// 005f7ac5  d95c2404             fstp dword ptr [esp + 4]
// 005f7ac9  d94208               fld dword ptr [edx + 8]
// 005f7acc  d8cf                 fmul st(7)
// 005f7ace  d95c2408             fstp dword ptr [esp + 8]
// 005f7ad2  d90424               fld dword ptr [esp]
// 005f7ad5  dec2                 faddp st(2)
// 005f7ad7  d8442404             fadd dword ptr [esp + 4]
// 005f7adb  d9442408             fld dword ptr [esp + 8]
// 005f7adf  d8442414             fadd dword ptr [esp + 0x14]
// 005f7ae3  d9ca                 fxch st(2)
// 005f7ae5  dec5                 faddp st(5)
// 005f7ae7  dec3                 faddp st(3)
// 005f7ae9  dec1                 faddp st(1)
// 005f7aeb  d9ca                 fxch st(2)
// 005f7aed  d918                 fstp dword ptr [eax]
// 005f7aef  d95804               fstp dword ptr [eax + 4]
// 005f7af2  d95808               fstp dword ptr [eax + 8]
// 005f7af5  dec9                 fmulp st(1)
// 005f7af7  d902                 fld dword ptr [edx]
// 005f7af9  d809                 fmul dword ptr [ecx]
// 005f7afb  d94208               fld dword ptr [edx + 8]
// 005f7afe  d84908               fmul dword ptr [ecx + 8]
// 005f7b01  dec1                 faddp st(1)
// 005f7b03  d94204               fld dword ptr [edx + 4]
// 005f7b06  d84904               fmul dword ptr [ecx + 4]
// 005f7b09  dec1                 faddp st(1)
// 005f7b0b  dee9                 fsubp st(1)
// 005f7b0d  d9580c               fstp dword ptr [eax + 0xc]
// 005f7b10  83c418               add esp, 0x18
// 005f7b13  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ??DQuat@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
