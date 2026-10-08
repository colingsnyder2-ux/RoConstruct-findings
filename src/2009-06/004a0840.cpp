// from server: 100% by auto
// roc 2009-06 004a0840  unit: G3D::VARArea  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a0840
//
// 004a0840  83ec40               sub esp, 0x40
// 004a0843  8b442448             mov eax, dword ptr [esp + 0x48]
// 004a0847  d900                 fld dword ptr [eax]
// 004a0849  8b542444             mov edx, dword ptr [esp + 0x44]
// 004a084d  d91c24               fstp dword ptr [esp]
// 004a0850  d94004               fld dword ptr [eax + 4]
// 004a0853  d95c2404             fstp dword ptr [esp + 4]
// 004a0857  d94008               fld dword ptr [eax + 8]
// 004a085a  d95c2408             fstp dword ptr [esp + 8]
// 004a085e  d94024               fld dword ptr [eax + 0x24]
// 004a0861  d95c240c             fstp dword ptr [esp + 0xc]
// 004a0865  d9400c               fld dword ptr [eax + 0xc]
// 004a0868  d95c2410             fstp dword ptr [esp + 0x10]
// 004a086c  d94010               fld dword ptr [eax + 0x10]
// 004a086f  d95c2414             fstp dword ptr [esp + 0x14]
// 004a0873  d94014               fld dword ptr [eax + 0x14]
// 004a0876  d95c2418             fstp dword ptr [esp + 0x18]
// 004a087a  d94028               fld dword ptr [eax + 0x28]
// 004a087d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004a0881  d94018               fld dword ptr [eax + 0x18]
// 004a0884  d95c2420             fstp dword ptr [esp + 0x20]
// 004a0888  d9401c               fld dword ptr [eax + 0x1c]
// 004a088b  d95c2424             fstp dword ptr [esp + 0x24]
// 004a088f  d94020               fld dword ptr [eax + 0x20]
// 004a0892  d95c2428             fstp dword ptr [esp + 0x28]
// 004a0896  d9402c               fld dword ptr [eax + 0x2c]
// 004a0899  8d0424               lea eax, [esp]
// 004a089c  d95c242c             fstp dword ptr [esp + 0x2c]
// 004a08a0  50                   push eax
// 004a08a1  d9ee                 fldz 
// 004a08a3  52                   push edx
// 004a08a4  d9542438             fst dword ptr [esp + 0x38]
// 004a08a8  d954243c             fst dword ptr [esp + 0x3c]
// 004a08ac  d95c2440             fstp dword ptr [esp + 0x40]
// 004a08b0  d9e8                 fld1 
// 004a08b2  d95c2444             fstp dword ptr [esp + 0x44]
// 004a08b6  e835ffffff           call 0x4a07f0
// 004a08bb  83c440               add esp, 0x40
// 004a08be  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTextureMatrix@RenderDevice@G3D@@QAEXIABVCoordinateFrame@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
