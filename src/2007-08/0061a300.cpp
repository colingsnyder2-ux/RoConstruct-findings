// roc 2007-08 0061a300  unit: RBX::ContactConnector  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061a300
//
// 0061a300  83ec18               sub esp, 0x18
// 0061a303  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061a307  d9410c               fld dword ptr [ecx + 0xc]
// 0061a30a  d9420c               fld dword ptr [edx + 0xc]
// 0061a30d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061a311  d94208               fld dword ptr [edx + 8]
// 0061a314  d84904               fmul dword ptr [ecx + 4]
// 0061a317  d94108               fld dword ptr [ecx + 8]
// 0061a31a  d84a04               fmul dword ptr [edx + 4]
// 0061a31d  dee9                 fsubp st(1)
// 0061a31f  d94108               fld dword ptr [ecx + 8]
// 0061a322  d80a                 fmul dword ptr [edx]
// 0061a324  d94208               fld dword ptr [edx + 8]
// 0061a327  d809                 fmul dword ptr [ecx]
// 0061a329  dee9                 fsubp st(1)
// 0061a32b  d901                 fld dword ptr [ecx]
// 0061a32d  d84a04               fmul dword ptr [edx + 4]
// 0061a330  d902                 fld dword ptr [edx]
// 0061a332  d84904               fmul dword ptr [ecx + 4]
// 0061a335  dee9                 fsubp st(1)
// 0061a337  d901                 fld dword ptr [ecx]
// 0061a339  d8cc                 fmul st(4)
// 0061a33b  d9c4                 fld st(4)
// 0061a33d  d84904               fmul dword ptr [ecx + 4]
// 0061a340  d94108               fld dword ptr [ecx + 8]
// 0061a343  d8ce                 fmul st(6)
// 0061a345  d95c2414             fstp dword ptr [esp + 0x14]
// 0061a349  d902                 fld dword ptr [edx]
// 0061a34b  d8cf                 fmul st(7)
// 0061a34d  d91c24               fstp dword ptr [esp]
// 0061a350  d9c6                 fld st(6)
// 0061a352  d84a04               fmul dword ptr [edx + 4]
// 0061a355  d95c2404             fstp dword ptr [esp + 4]
// 0061a359  d94208               fld dword ptr [edx + 8]
// 0061a35c  d8cf                 fmul st(7)
// 0061a35e  d95c2408             fstp dword ptr [esp + 8]
// 0061a362  d90424               fld dword ptr [esp]
// 0061a365  dec2                 faddp st(2)
// 0061a367  d8442404             fadd dword ptr [esp + 4]
// 0061a36b  d9442408             fld dword ptr [esp + 8]
// 0061a36f  d8442414             fadd dword ptr [esp + 0x14]
// 0061a373  d9ca                 fxch st(2)
// 0061a375  dec5                 faddp st(5)
// 0061a377  dec3                 faddp st(3)
// 0061a379  dec1                 faddp st(1)
// 0061a37b  d9ca                 fxch st(2)
// 0061a37d  d918                 fstp dword ptr [eax]
// 0061a37f  d95804               fstp dword ptr [eax + 4]
// 0061a382  d95808               fstp dword ptr [eax + 8]
// 0061a385  dec9                 fmulp st(1)
// 0061a387  d902                 fld dword ptr [edx]
// 0061a389  d809                 fmul dword ptr [ecx]
// 0061a38b  d94208               fld dword ptr [edx + 8]
// 0061a38e  d84908               fmul dword ptr [ecx + 8]
// 0061a391  dec1                 faddp st(1)
// 0061a393  d94204               fld dword ptr [edx + 4]
// 0061a396  d84904               fmul dword ptr [ecx + 4]
// 0061a399  dec1                 faddp st(1)
// 0061a39b  dee9                 fsubp st(1)
// 0061a39d  d9580c               fstp dword ptr [eax + 0xc]
// 0061a3a0  83c418               add esp, 0x18
// 0061a3a3  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ??DQuat@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
