// roc 2007-08 00586bf0  unit: RBX::VHat::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586bf0
//
// 00586bf0  d9442408             fld dword ptr [esp + 8]
// 00586bf4  83ec10               sub esp, 0x10
// 00586bf7  56                   push esi
// 00586bf8  8b742418             mov esi, dword ptr [esp + 0x18]
// 00586bfc  83ec10               sub esp, 0x10
// 00586bff  8bc4                 mov eax, esp
// 00586c01  d918                 fstp dword ptr [eax]
// 00586c03  56                   push esi
// 00586c04  d9442434             fld dword ptr [esp + 0x34]
// 00586c08  d95804               fstp dword ptr [eax + 4]
// 00586c0b  d9442438             fld dword ptr [esp + 0x38]
// 00586c0f  d95808               fstp dword ptr [eax + 8]
// 00586c12  d9442424             fld dword ptr [esp + 0x24]
// 00586c16  d9580c               fstp dword ptr [eax + 0xc]
// 00586c19  e852fcffff           call 0x586870
// 00586c1e  83c414               add esp, 0x14
// 00586c21  8bc6                 mov eax, esi
// 00586c23  5e                   pop esi
// 00586c24  83c410               add esp, 0x10
// 00586c27  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?closest@BrickColor@RBX@@SA?AV12@VColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
