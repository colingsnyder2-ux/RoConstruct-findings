// roc 2007-08 00476160  unit: CInstanceRecord::CNameItem  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00476160
//
// 00476160  83ec40               sub esp, 0x40
// 00476163  8b442448             mov eax, dword ptr [esp + 0x48]
// 00476167  d900                 fld dword ptr [eax]
// 00476169  8b542444             mov edx, dword ptr [esp + 0x44]
// 0047616d  d91c24               fstp dword ptr [esp]
// 00476170  d94004               fld dword ptr [eax + 4]
// 00476173  d95c2404             fstp dword ptr [esp + 4]
// 00476177  d94008               fld dword ptr [eax + 8]
// 0047617a  d95c2408             fstp dword ptr [esp + 8]
// 0047617e  d94024               fld dword ptr [eax + 0x24]
// 00476181  d95c240c             fstp dword ptr [esp + 0xc]
// 00476185  d9400c               fld dword ptr [eax + 0xc]
// 00476188  d95c2410             fstp dword ptr [esp + 0x10]
// 0047618c  d94010               fld dword ptr [eax + 0x10]
// 0047618f  d95c2414             fstp dword ptr [esp + 0x14]
// 00476193  d94014               fld dword ptr [eax + 0x14]
// 00476196  d95c2418             fstp dword ptr [esp + 0x18]
// 0047619a  d94028               fld dword ptr [eax + 0x28]
// 0047619d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004761a1  d94018               fld dword ptr [eax + 0x18]
// 004761a4  d95c2420             fstp dword ptr [esp + 0x20]
// 004761a8  d9401c               fld dword ptr [eax + 0x1c]
// 004761ab  d95c2424             fstp dword ptr [esp + 0x24]
// 004761af  d94020               fld dword ptr [eax + 0x20]
// 004761b2  d95c2428             fstp dword ptr [esp + 0x28]
// 004761b6  d9402c               fld dword ptr [eax + 0x2c]
// 004761b9  8d0424               lea eax, [esp]
// 004761bc  d95c242c             fstp dword ptr [esp + 0x2c]
// 004761c0  50                   push eax
// 004761c1  d9ee                 fldz 
// 004761c3  52                   push edx
// 004761c4  d9542438             fst dword ptr [esp + 0x38]
// 004761c8  d954243c             fst dword ptr [esp + 0x3c]
// 004761cc  d95c2440             fstp dword ptr [esp + 0x40]
// 004761d0  d9e8                 fld1 
// 004761d2  d95c2444             fstp dword ptr [esp + 0x44]
// 004761d6  e8d5feffff           call 0x4760b0
// 004761db  83c440               add esp, 0x40
// 004761de  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
