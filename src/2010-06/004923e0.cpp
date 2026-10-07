// roc 2010-06 004923e0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004923e0
//
// 004923e0  d9e8                 fld1 
// 004923e2  8b442408             mov eax, dword ptr [esp + 8]
// 004923e6  83ec10               sub esp, 0x10
// 004923e9  56                   push esi
// 004923ea  83ec08               sub esp, 8
// 004923ed  d95c2404             fstp dword ptr [esp + 4]
// 004923f1  8bf1                 mov esi, ecx
// 004923f3  d9ee                 fldz 
// 004923f5  8d4c240c             lea ecx, [esp + 0xc]
// 004923f9  d91c24               fstp dword ptr [esp]
// 004923fc  50                   push eax
// 004923fd  e89e770c00           call 0x559ba0
// 00492402  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00492406  50                   push eax
// 00492407  51                   push ecx
// 00492408  8bce                 mov ecx, esi
// 0049240a  e861ffffff           call 0x492370
// 0049240f  5e                   pop esi
// 00492410  83c410               add esp, 0x10
// 00492413  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
