// roc 2008-06 00479360  unit: CInstanceRecord::CNameItem  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479360
//
// 00479360  83ec40               sub esp, 0x40
// 00479363  8b442448             mov eax, dword ptr [esp + 0x48]
// 00479367  d900                 fld dword ptr [eax]
// 00479369  8b542444             mov edx, dword ptr [esp + 0x44]
// 0047936d  d91c24               fstp dword ptr [esp]
// 00479370  d94004               fld dword ptr [eax + 4]
// 00479373  d95c2404             fstp dword ptr [esp + 4]
// 00479377  d94008               fld dword ptr [eax + 8]
// 0047937a  d95c2408             fstp dword ptr [esp + 8]
// 0047937e  d94024               fld dword ptr [eax + 0x24]
// 00479381  d95c240c             fstp dword ptr [esp + 0xc]
// 00479385  d9400c               fld dword ptr [eax + 0xc]
// 00479388  d95c2410             fstp dword ptr [esp + 0x10]
// 0047938c  d94010               fld dword ptr [eax + 0x10]
// 0047938f  d95c2414             fstp dword ptr [esp + 0x14]
// 00479393  d94014               fld dword ptr [eax + 0x14]
// 00479396  d95c2418             fstp dword ptr [esp + 0x18]
// 0047939a  d94028               fld dword ptr [eax + 0x28]
// 0047939d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004793a1  d94018               fld dword ptr [eax + 0x18]
// 004793a4  d95c2420             fstp dword ptr [esp + 0x20]
// 004793a8  d9401c               fld dword ptr [eax + 0x1c]
// 004793ab  d95c2424             fstp dword ptr [esp + 0x24]
// 004793af  d94020               fld dword ptr [eax + 0x20]
// 004793b2  d95c2428             fstp dword ptr [esp + 0x28]
// 004793b6  d9402c               fld dword ptr [eax + 0x2c]
// 004793b9  8d0424               lea eax, [esp]
// 004793bc  d95c242c             fstp dword ptr [esp + 0x2c]
// 004793c0  50                   push eax
// 004793c1  d9ee                 fldz 
// 004793c3  52                   push edx
// 004793c4  d9542438             fst dword ptr [esp + 0x38]
// 004793c8  d954243c             fst dword ptr [esp + 0x3c]
// 004793cc  d95c2440             fstp dword ptr [esp + 0x40]
// 004793d0  d9e8                 fld1 
// 004793d2  d95c2444             fstp dword ptr [esp + 0x44]
// 004793d6  e835ffffff           call 0x479310
// 004793db  83c440               add esp, 0x40
// 004793de  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
