// roc 2007-08 00474b90  unit: G3D::VARArea  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474b90
//
// 00474b90  d9e8                 fld1 
// 00474b92  8b442408             mov eax, dword ptr [esp + 8]
// 00474b96  83ec10               sub esp, 0x10
// 00474b99  56                   push esi
// 00474b9a  83ec08               sub esp, 8
// 00474b9d  d95c2404             fstp dword ptr [esp + 4]
// 00474ba1  8bf1                 mov esi, ecx
// 00474ba3  d9ee                 fldz 
// 00474ba5  8d4c240c             lea ecx, [esp + 0xc]
// 00474ba9  d91c24               fstp dword ptr [esp]
// 00474bac  50                   push eax
// 00474bad  e82e640900           call 0x50afe0
// 00474bb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00474bb6  50                   push eax
// 00474bb7  51                   push ecx
// 00474bb8  8bce                 mov ecx, esi
// 00474bba  e861ffffff           call 0x474b20
// 00474bbf  5e                   pop esi
// 00474bc0  83c410               add esp, 0x10
// 00474bc3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
