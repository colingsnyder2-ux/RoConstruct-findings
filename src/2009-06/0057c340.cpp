// roc 2009-06 0057c340  unit: G3D::TextInput::WrongSymbol  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c340
//
// 0057c340  83ec1c               sub esp, 0x1c
// 0057c343  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057c347  d94018               fld dword ptr [eax + 0x18]
// 0057c34a  56                   push esi
// 0057c34b  d84908               fmul dword ptr [ecx + 8]
// 0057c34e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057c352  d901                 fld dword ptr [ecx]
// 0057c354  c744240400000000     mov dword ptr [esp + 4], 0
// 0057c35c  d84810               fmul dword ptr [eax + 0x10]
// 0057c35f  dec1                 faddp st(1)
// 0057c361  d94014               fld dword ptr [eax + 0x14]
// 0057c364  d84904               fmul dword ptr [ecx + 4]
// 0057c367  dec1                 faddp st(1)
// 0057c369  d95c2408             fstp dword ptr [esp + 8]
// 0057c36d  d94018               fld dword ptr [eax + 0x18]
// 0057c370  d84914               fmul dword ptr [ecx + 0x14]
// 0057c373  d94014               fld dword ptr [eax + 0x14]
// 0057c376  d84910               fmul dword ptr [ecx + 0x10]
// 0057c379  dec1                 faddp st(1)
// 0057c37b  d9410c               fld dword ptr [ecx + 0xc]
// 0057c37e  d84810               fmul dword ptr [eax + 0x10]
// 0057c381  dec1                 faddp st(1)
// 0057c383  d95c240c             fstp dword ptr [esp + 0xc]
// 0057c387  d94118               fld dword ptr [ecx + 0x18]
// 0057c38a  d84810               fmul dword ptr [eax + 0x10]
// 0057c38d  d94018               fld dword ptr [eax + 0x18]
// 0057c390  d84920               fmul dword ptr [ecx + 0x20]
// 0057c393  dec1                 faddp st(1)
// 0057c395  d9411c               fld dword ptr [ecx + 0x1c]
// 0057c398  d84814               fmul dword ptr [eax + 0x14]
// 0057c39b  dec1                 faddp st(1)
// 0057c39d  d95c2410             fstp dword ptr [esp + 0x10]
// 0057c3a1  d9400c               fld dword ptr [eax + 0xc]
// 0057c3a4  d84908               fmul dword ptr [ecx + 8]
// 0057c3a7  d94004               fld dword ptr [eax + 4]
// 0057c3aa  d809                 fmul dword ptr [ecx]
// 0057c3ac  dec1                 faddp st(1)
// 0057c3ae  d94008               fld dword ptr [eax + 8]
// 0057c3b1  d84904               fmul dword ptr [ecx + 4]
// 0057c3b4  dec1                 faddp st(1)
// 0057c3b6  d84124               fadd dword ptr [ecx + 0x24]
// 0057c3b9  d95c2414             fstp dword ptr [esp + 0x14]
// 0057c3bd  d9400c               fld dword ptr [eax + 0xc]
// 0057c3c0  d84914               fmul dword ptr [ecx + 0x14]
// 0057c3c3  d94008               fld dword ptr [eax + 8]
// 0057c3c6  d84910               fmul dword ptr [ecx + 0x10]
// 0057c3c9  dec1                 faddp st(1)
// 0057c3cb  d94004               fld dword ptr [eax + 4]
// 0057c3ce  d8490c               fmul dword ptr [ecx + 0xc]
// 0057c3d1  dec1                 faddp st(1)
// 0057c3d3  d84128               fadd dword ptr [ecx + 0x28]
// 0057c3d6  d95c2418             fstp dword ptr [esp + 0x18]
// 0057c3da  d9400c               fld dword ptr [eax + 0xc]
// 0057c3dd  d84920               fmul dword ptr [ecx + 0x20]
// 0057c3e0  d94008               fld dword ptr [eax + 8]
// 0057c3e3  d8491c               fmul dword ptr [ecx + 0x1c]
// 0057c3e6  dec1                 faddp st(1)
// 0057c3e8  d94004               fld dword ptr [eax + 4]
// 0057c3eb  8d442408             lea eax, [esp + 8]
// 0057c3ef  d84918               fmul dword ptr [ecx + 0x18]
// 0057c3f2  50                   push eax
// 0057c3f3  dec1                 faddp st(1)
// 0057c3f5  d8412c               fadd dword ptr [ecx + 0x2c]
// 0057c3f8  8d4c2418             lea ecx, [esp + 0x18]
// 0057c3fc  51                   push ecx
// 0057c3fd  56                   push esi
// 0057c3fe  d95c2428             fstp dword ptr [esp + 0x28]
// 0057c402  e8a9a4ffff           call 0x5768b0
// 0057c407  83c40c               add esp, 0xc
// 0057c40a  8bc6                 mov eax, esi
// 0057c40c  5e                   pop esi
// 0057c40d  83c41c               add esp, 0x1c
// 0057c410  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CoordinateFrame.cpp
