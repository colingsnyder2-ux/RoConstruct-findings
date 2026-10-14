// roc 2008-06 005dd6d0  unit: RBX::Message  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd6d0
//
// 005dd6d0  83ec0c               sub esp, 0xc
// 005dd6d3  d901                 fld dword ptr [ecx]
// 005dd6d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005dd6d9  d90534c48100         fld dword ptr [0x81c434]
// 005dd6df  dcc9                 fmul st(1), st(0)
// 005dd6e1  d94104               fld dword ptr [ecx + 4]
// 005dd6e4  d8c9                 fmul st(1)
// 005dd6e6  d94108               fld dword ptr [ecx + 8]
// 005dd6e9  deca                 fmulp st(2)
// 005dd6eb  d901                 fld dword ptr [ecx]
// 005dd6ed  d8cb                 fmul st(3)
// 005dd6ef  d901                 fld dword ptr [ecx]
// 005dd6f1  d8ca                 fmul st(2)
// 005dd6f3  d901                 fld dword ptr [ecx]
// 005dd6f5  d8cc                 fmul st(4)
// 005dd6f7  d9410c               fld dword ptr [ecx + 0xc]
// 005dd6fa  dece                 fmulp st(6)
// 005dd6fc  d9410c               fld dword ptr [ecx + 0xc]
// 005dd6ff  d8cc                 fmul st(4)
// 005dd701  d9410c               fld dword ptr [ecx + 0xc]
// 005dd704  d8ce                 fmul st(6)
// 005dd706  d91c24               fstp dword ptr [esp]
// 005dd709  d94104               fld dword ptr [ecx + 4]
// 005dd70c  decd                 fmulp st(5)
// 005dd70e  d94104               fld dword ptr [ecx + 4]
// 005dd711  d8ce                 fmul st(6)
// 005dd713  d95c2408             fstp dword ptr [esp + 8]
// 005dd717  d94108               fld dword ptr [ecx + 8]
// 005dd71a  dece                 fmulp st(6)
// 005dd71c  d9cd                 fxch st(5)
// 005dd71e  d9542404             fst dword ptr [esp + 4]
// 005dd722  d8c4                 fadd st(4)
// 005dd724  d9e8                 fld1 
// 005dd726  dee1                 fsubrp st(1)
// 005dd728  d918                 fstp dword ptr [eax]
// 005dd72a  d9c1                 fld st(1)
// 005dd72c  d90424               fld dword ptr [esp]
// 005dd72f  dce9                 fsub st(1), st(0)
// 005dd731  d9c9                 fxch st(1)
// 005dd733  d95804               fstp dword ptr [eax + 4]
// 005dd736  d9c5                 fld st(5)
// 005dd738  d8c2                 fadd st(2)
// 005dd73a  d95808               fstp dword ptr [eax + 8]
// 005dd73d  dec2                 faddp st(2)
// 005dd73f  d9c9                 fxch st(1)
// 005dd741  d9580c               fstp dword ptr [eax + 0xc]
// 005dd744  d9442404             fld dword ptr [esp + 4]
// 005dd748  d8c2                 fadd st(2)
// 005dd74a  d9e8                 fld1 
// 005dd74c  d9c0                 fld st(0)
// 005dd74e  dee2                 fsubrp st(2)
// 005dd750  d9c9                 fxch st(1)
// 005dd752  d95810               fstp dword ptr [eax + 0x10]
// 005dd755  d9442408             fld dword ptr [esp + 8]
// 005dd759  d9c0                 fld st(0)
// 005dd75b  d8e7                 fsub st(7)
// 005dd75d  d95814               fstp dword ptr [eax + 0x14]
// 005dd760  d9ca                 fxch st(2)
// 005dd762  dee5                 fsubrp st(5)
// 005dd764  d9cc                 fxch st(4)
// 005dd766  d95818               fstp dword ptr [eax + 0x18]
// 005dd769  dec4                 faddp st(4)
// 005dd76b  d9cb                 fxch st(3)
// 005dd76d  d9581c               fstp dword ptr [eax + 0x1c]
// 005dd770  dec2                 faddp st(2)
// 005dd772  dee1                 fsubrp st(1)
// 005dd774  d95820               fstp dword ptr [eax + 0x20]
// 005dd777  83c40c               add esp, 0xc
// 005dd77a  c20400               ret 4
// library rbxgs-dll/util\Quaternion.cpp (function ?toRotationMatrix@Quaternion@RBX@@QBEXAAVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Quaternion.cpp
