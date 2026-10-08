// from server: 100% by auto
// roc 2008-06 00477e60  unit: G3D::VARArea  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477e60
//
// 00477e60  d9e8                 fld1 
// 00477e62  8b442408             mov eax, dword ptr [esp + 8]
// 00477e66  83ec10               sub esp, 0x10
// 00477e69  56                   push esi
// 00477e6a  83ec08               sub esp, 8
// 00477e6d  d95c2404             fstp dword ptr [esp + 4]
// 00477e71  8bf1                 mov esi, ecx
// 00477e73  d9ee                 fldz 
// 00477e75  8d4c240c             lea ecx, [esp + 0xc]
// 00477e79  d91c24               fstp dword ptr [esp]
// 00477e7c  50                   push eax
// 00477e7d  e8dec90900           call 0x514860
// 00477e82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00477e86  50                   push eax
// 00477e87  51                   push ecx
// 00477e88  8bce                 mov ecx, esi
// 00477e8a  e861ffffff           call 0x477df0
// 00477e8f  5e                   pop esi
// 00477e90  83c410               add esp, 0x10
// 00477e93  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
