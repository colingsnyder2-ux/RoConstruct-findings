// from server: 100% by auto
// roc 2009-06 004ad340  unit: G3D::Win32Window  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad340
//
// 004ad340  83ec40               sub esp, 0x40
// 004ad343  8b442444             mov eax, dword ptr [esp + 0x44]
// 004ad347  d900                 fld dword ptr [eax]
// 004ad349  d91c24               fstp dword ptr [esp]
// 004ad34c  d9400c               fld dword ptr [eax + 0xc]
// 004ad34f  d95c2404             fstp dword ptr [esp + 4]
// 004ad353  d94018               fld dword ptr [eax + 0x18]
// 004ad356  d95c2408             fstp dword ptr [esp + 8]
// 004ad35a  d9ee                 fldz 
// 004ad35c  d954240c             fst dword ptr [esp + 0xc]
// 004ad360  d94004               fld dword ptr [eax + 4]
// 004ad363  d95c2410             fstp dword ptr [esp + 0x10]
// 004ad367  d94010               fld dword ptr [eax + 0x10]
// 004ad36a  d95c2414             fstp dword ptr [esp + 0x14]
// 004ad36e  d9401c               fld dword ptr [eax + 0x1c]
// 004ad371  d95c2418             fstp dword ptr [esp + 0x18]
// 004ad375  d954241c             fst dword ptr [esp + 0x1c]
// 004ad379  d94008               fld dword ptr [eax + 8]
// 004ad37c  d95c2420             fstp dword ptr [esp + 0x20]
// 004ad380  d94014               fld dword ptr [eax + 0x14]
// 004ad383  d95c2424             fstp dword ptr [esp + 0x24]
// 004ad387  d94020               fld dword ptr [eax + 0x20]
// 004ad38a  d95c2428             fstp dword ptr [esp + 0x28]
// 004ad38e  d95c242c             fstp dword ptr [esp + 0x2c]
// 004ad392  d94024               fld dword ptr [eax + 0x24]
// 004ad395  d95c2430             fstp dword ptr [esp + 0x30]
// 004ad399  d94028               fld dword ptr [eax + 0x28]
// 004ad39c  d95c2434             fstp dword ptr [esp + 0x34]
// 004ad3a0  d9402c               fld dword ptr [eax + 0x2c]
// 004ad3a3  8d0424               lea eax, [esp]
// 004ad3a6  d95c2438             fstp dword ptr [esp + 0x38]
// 004ad3aa  50                   push eax
// 004ad3ab  d9e8                 fld1 
// 004ad3ad  d95c2440             fstp dword ptr [esp + 0x40]
// 004ad3b1  ff1500eb8900         call dword ptr [0x89eb00]
// 004ad3b7  83c440               add esp, 0x40
// 004ad3ba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
