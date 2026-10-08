// roc 2012-06 00703fa0  unit: TextXmlParser  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00703fa0
//
// 00703fa0  83ec0c               sub esp, 0xc
// 00703fa3  56                   push esi
// 00703fa4  8b742414             mov esi, dword ptr [esp + 0x14]
// 00703fa8  8bce                 mov ecx, esi
// 00703faa  e831751900           call 0x89b4e0
// 00703faf  8bce                 mov ecx, esi
// 00703fb1  e80a7a1900           call 0x89b9c0
// 00703fb6  837c242400           cmp dword ptr [esp + 0x24], 0
// 00703fbb  751f                 jne 0x703fdc
// 00703fbd  8d442418             lea eax, [esp + 0x18]
// 00703fc1  50                   push eax
// 00703fc2  8d4c2408             lea ecx, [esp + 8]
// 00703fc6  51                   push ecx
// 00703fc7  8bce                 mov ecx, esi
// 00703fc9  e812761900           call 0x89b5e0
// 00703fce  8bce                 mov ecx, esi
// 00703fd0  e88b761900           call 0x89b660
// 00703fd5  5e                   pop esi
// 00703fd6  83c40c               add esp, 0xc
// 00703fd9  c21400               ret 0x14
// 00703fdc  8d542418             lea edx, [esp + 0x18]
// 00703fe0  52                   push edx
// 00703fe1  8d442408             lea eax, [esp + 8]
// 00703fe5  50                   push eax
// 00703fe6  8bce                 mov ecx, esi
// 00703fe8  e8837b1900           call 0x89bb70
// 00703fed  8bce                 mov ecx, esi
// 00703fef  e86c761900           call 0x89b660
// 00703ff4  5e                   pop esi
// 00703ff5  83c40c               add esp, 0xc
// 00703ff8  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
