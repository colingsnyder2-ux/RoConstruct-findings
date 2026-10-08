// roc 2007-03 00583360  unit: seg_00580000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00583360
//
// 00583360  d9442408             fld dword ptr [esp + 8]
// 00583364  83ec10               sub esp, 0x10
// 00583367  56                   push esi
// 00583368  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058336c  83ec10               sub esp, 0x10
// 0058336f  8bc4                 mov eax, esp
// 00583371  d918                 fstp dword ptr [eax]
// 00583373  56                   push esi
// 00583374  d9442434             fld dword ptr [esp + 0x34]
// 00583378  d95804               fstp dword ptr [eax + 4]
// 0058337b  d9442438             fld dword ptr [esp + 0x38]
// 0058337f  d95808               fstp dword ptr [eax + 8]
// 00583382  d9442424             fld dword ptr [esp + 0x24]
// 00583386  d9580c               fstp dword ptr [eax + 0xc]
// 00583389  e852fcffff           call 0x582fe0
// 0058338e  83c414               add esp, 0x14
// 00583391  8bc6                 mov eax, esi
// 00583393  5e                   pop esi
// 00583394  83c410               add esp, 0x10
// 00583397  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ?closest@BrickColor@RBX@@SA?AV12@VColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
