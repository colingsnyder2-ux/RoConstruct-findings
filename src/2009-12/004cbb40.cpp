// roc 2009-12 004cbb40  unit: G3D::VARArea  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cbb40
//
// 004cbb40  d9e8                 fld1 
// 004cbb42  8b442408             mov eax, dword ptr [esp + 8]
// 004cbb46  83ec10               sub esp, 0x10
// 004cbb49  56                   push esi
// 004cbb4a  83ec08               sub esp, 8
// 004cbb4d  d95c2404             fstp dword ptr [esp + 4]
// 004cbb51  8bf1                 mov esi, ecx
// 004cbb53  d9ee                 fldz 
// 004cbb55  8d4c240c             lea ecx, [esp + 0xc]
// 004cbb59  d91c24               fstp dword ptr [esp]
// 004cbb5c  50                   push eax
// 004cbb5d  e8beb11200           call 0x5f6d20
// 004cbb62  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cbb66  50                   push eax
// 004cbb67  51                   push ecx
// 004cbb68  8bce                 mov ecx, esi
// 004cbb6a  e861ffffff           call 0x4cbad0
// 004cbb6f  5e                   pop esi
// 004cbb70  83c410               add esp, 0x10
// 004cbb73  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
