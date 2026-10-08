// from server: 100% by auto
// roc 2008-06 00483430  unit: G3D::Win32Window  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483430
//
// 00483430  83ec40               sub esp, 0x40
// 00483433  8b442444             mov eax, dword ptr [esp + 0x44]
// 00483437  d900                 fld dword ptr [eax]
// 00483439  d91c24               fstp dword ptr [esp]
// 0048343c  d9400c               fld dword ptr [eax + 0xc]
// 0048343f  d95c2404             fstp dword ptr [esp + 4]
// 00483443  d94018               fld dword ptr [eax + 0x18]
// 00483446  d95c2408             fstp dword ptr [esp + 8]
// 0048344a  d9ee                 fldz 
// 0048344c  d954240c             fst dword ptr [esp + 0xc]
// 00483450  d94004               fld dword ptr [eax + 4]
// 00483453  d95c2410             fstp dword ptr [esp + 0x10]
// 00483457  d94010               fld dword ptr [eax + 0x10]
// 0048345a  d95c2414             fstp dword ptr [esp + 0x14]
// 0048345e  d9401c               fld dword ptr [eax + 0x1c]
// 00483461  d95c2418             fstp dword ptr [esp + 0x18]
// 00483465  d954241c             fst dword ptr [esp + 0x1c]
// 00483469  d94008               fld dword ptr [eax + 8]
// 0048346c  d95c2420             fstp dword ptr [esp + 0x20]
// 00483470  d94014               fld dword ptr [eax + 0x14]
// 00483473  d95c2424             fstp dword ptr [esp + 0x24]
// 00483477  d94020               fld dword ptr [eax + 0x20]
// 0048347a  d95c2428             fstp dword ptr [esp + 0x28]
// 0048347e  d95c242c             fstp dword ptr [esp + 0x2c]
// 00483482  d94024               fld dword ptr [eax + 0x24]
// 00483485  d95c2430             fstp dword ptr [esp + 0x30]
// 00483489  d94028               fld dword ptr [eax + 0x28]
// 0048348c  d95c2434             fstp dword ptr [esp + 0x34]
// 00483490  d9402c               fld dword ptr [eax + 0x2c]
// 00483493  8d0424               lea eax, [esp]
// 00483496  d95c2438             fstp dword ptr [esp + 0x38]
// 0048349a  50                   push eax
// 0048349b  d9e8                 fld1 
// 0048349d  d95c2440             fstp dword ptr [esp + 0x40]
// 004834a1  ff15582a8000         call dword ptr [0x802a58]
// 004834a7  83c440               add esp, 0x40
// 004834aa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\glcalls.cpp (function ?glLoadMatrix@G3D@@YAXABVCoordinateFrame@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glcalls.cpp
