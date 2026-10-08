// roc 2007-03 004762c0  unit: seg_00470000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004762c0
//
// 004762c0  83ec40               sub esp, 0x40
// 004762c3  8b442448             mov eax, dword ptr [esp + 0x48]
// 004762c7  d900                 fld dword ptr [eax]
// 004762c9  8b542444             mov edx, dword ptr [esp + 0x44]
// 004762cd  d91c24               fstp dword ptr [esp]
// 004762d0  d94004               fld dword ptr [eax + 4]
// 004762d3  d95c2404             fstp dword ptr [esp + 4]
// 004762d7  d94008               fld dword ptr [eax + 8]
// 004762da  d95c2408             fstp dword ptr [esp + 8]
// 004762de  d94024               fld dword ptr [eax + 0x24]
// 004762e1  d95c240c             fstp dword ptr [esp + 0xc]
// 004762e5  d9400c               fld dword ptr [eax + 0xc]
// 004762e8  d95c2410             fstp dword ptr [esp + 0x10]
// 004762ec  d94010               fld dword ptr [eax + 0x10]
// 004762ef  d95c2414             fstp dword ptr [esp + 0x14]
// 004762f3  d94014               fld dword ptr [eax + 0x14]
// 004762f6  d95c2418             fstp dword ptr [esp + 0x18]
// 004762fa  d94028               fld dword ptr [eax + 0x28]
// 004762fd  d95c241c             fstp dword ptr [esp + 0x1c]
// 00476301  d94018               fld dword ptr [eax + 0x18]
// 00476304  d95c2420             fstp dword ptr [esp + 0x20]
// 00476308  d9401c               fld dword ptr [eax + 0x1c]
// 0047630b  d95c2424             fstp dword ptr [esp + 0x24]
// 0047630f  d94020               fld dword ptr [eax + 0x20]
// 00476312  d95c2428             fstp dword ptr [esp + 0x28]
// 00476316  d9402c               fld dword ptr [eax + 0x2c]
// 00476319  8d0424               lea eax, [esp]
// 0047631c  d95c242c             fstp dword ptr [esp + 0x2c]
// 00476320  50                   push eax
// 00476321  d9ee                 fldz 
// 00476323  52                   push edx
// 00476324  d9542438             fst dword ptr [esp + 0x38]
// 00476328  d954243c             fst dword ptr [esp + 0x3c]
// 0047632c  d95c2440             fstp dword ptr [esp + 0x40]
// 00476330  d9e8                 fld1 
// 00476332  d95c2444             fstp dword ptr [esp + 0x44]
// 00476336  e8d5feffff           call 0x476210
// 0047633b  83c440               add esp, 0x40
// 0047633e  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
