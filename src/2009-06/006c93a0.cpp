// roc 2009-06 006c93a0  unit: seg_006c0000  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c93a0
//
// 006c93a0  83ec18               sub esp, 0x18
// 006c93a3  8b542420             mov edx, dword ptr [esp + 0x20]
// 006c93a7  d9410c               fld dword ptr [ecx + 0xc]
// 006c93aa  d9420c               fld dword ptr [edx + 0xc]
// 006c93ad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006c93b1  d94208               fld dword ptr [edx + 8]
// 006c93b4  d84904               fmul dword ptr [ecx + 4]
// 006c93b7  d94108               fld dword ptr [ecx + 8]
// 006c93ba  d84a04               fmul dword ptr [edx + 4]
// 006c93bd  dee9                 fsubp st(1)
// 006c93bf  d94108               fld dword ptr [ecx + 8]
// 006c93c2  d80a                 fmul dword ptr [edx]
// 006c93c4  d94208               fld dword ptr [edx + 8]
// 006c93c7  d809                 fmul dword ptr [ecx]
// 006c93c9  dee9                 fsubp st(1)
// 006c93cb  d901                 fld dword ptr [ecx]
// 006c93cd  d84a04               fmul dword ptr [edx + 4]
// 006c93d0  d902                 fld dword ptr [edx]
// 006c93d2  d84904               fmul dword ptr [ecx + 4]
// 006c93d5  dee9                 fsubp st(1)
// 006c93d7  d901                 fld dword ptr [ecx]
// 006c93d9  d8cc                 fmul st(4)
// 006c93db  d9c4                 fld st(4)
// 006c93dd  d84904               fmul dword ptr [ecx + 4]
// 006c93e0  d94108               fld dword ptr [ecx + 8]
// 006c93e3  d8ce                 fmul st(6)
// 006c93e5  d95c2414             fstp dword ptr [esp + 0x14]
// 006c93e9  d902                 fld dword ptr [edx]
// 006c93eb  d8cf                 fmul st(7)
// 006c93ed  d91c24               fstp dword ptr [esp]
// 006c93f0  d9c6                 fld st(6)
// 006c93f2  d84a04               fmul dword ptr [edx + 4]
// 006c93f5  d95c2404             fstp dword ptr [esp + 4]
// 006c93f9  d94208               fld dword ptr [edx + 8]
// 006c93fc  d8cf                 fmul st(7)
// 006c93fe  d95c2408             fstp dword ptr [esp + 8]
// 006c9402  d90424               fld dword ptr [esp]
// 006c9405  dec2                 faddp st(2)
// 006c9407  d8442404             fadd dword ptr [esp + 4]
// 006c940b  d9442408             fld dword ptr [esp + 8]
// 006c940f  d8442414             fadd dword ptr [esp + 0x14]
// 006c9413  d9ca                 fxch st(2)
// 006c9415  dec5                 faddp st(5)
// 006c9417  dec3                 faddp st(3)
// 006c9419  dec1                 faddp st(1)
// 006c941b  d9ca                 fxch st(2)
// 006c941d  d918                 fstp dword ptr [eax]
// 006c941f  d95804               fstp dword ptr [eax + 4]
// 006c9422  d95808               fstp dword ptr [eax + 8]
// 006c9425  dec9                 fmulp st(1)
// 006c9427  d902                 fld dword ptr [edx]
// 006c9429  d809                 fmul dword ptr [ecx]
// 006c942b  d94208               fld dword ptr [edx + 8]
// 006c942e  d84908               fmul dword ptr [ecx + 8]
// 006c9431  dec1                 faddp st(1)
// 006c9433  d94204               fld dword ptr [edx + 4]
// 006c9436  d84904               fmul dword ptr [ecx + 4]
// 006c9439  dec1                 faddp st(1)
// 006c943b  dee9                 fsubp st(1)
// 006c943d  d9580c               fstp dword ptr [eax + 0xc]
// 006c9440  83c418               add esp, 0x18
// 006c9443  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ??DQuat@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
