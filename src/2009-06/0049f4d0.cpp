// roc 2009-06 0049f4d0  unit: G3D::VARArea  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049f4d0
//
// 0049f4d0  d9e8                 fld1 
// 0049f4d2  8b442408             mov eax, dword ptr [esp + 8]
// 0049f4d6  83ec10               sub esp, 0x10
// 0049f4d9  56                   push esi
// 0049f4da  83ec08               sub esp, 8
// 0049f4dd  d95c2404             fstp dword ptr [esp + 4]
// 0049f4e1  8bf1                 mov esi, ecx
// 0049f4e3  d9ee                 fldz 
// 0049f4e5  8d4c240c             lea ecx, [esp + 0xc]
// 0049f4e9  d91c24               fstp dword ptr [esp]
// 0049f4ec  50                   push eax
// 0049f4ed  e82e930d00           call 0x578820
// 0049f4f2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049f4f6  50                   push eax
// 0049f4f7  51                   push ecx
// 0049f4f8  8bce                 mov ecx, esi
// 0049f4fa  e861ffffff           call 0x49f460
// 0049f4ff  5e                   pop esi
// 0049f500  83c410               add esp, 0x10
// 0049f503  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
