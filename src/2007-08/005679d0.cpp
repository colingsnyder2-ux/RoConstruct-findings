// roc 2007-08 005679d0  unit: TextXmlParser  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005679d0
//
// 005679d0  83ec0c               sub esp, 0xc
// 005679d3  56                   push esi
// 005679d4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005679d8  8bce                 mov ecx, esi
// 005679da  e8818c0700           call 0x5e0660
// 005679df  8bce                 mov ecx, esi
// 005679e1  e8fa8d0700           call 0x5e07e0
// 005679e6  837c242400           cmp dword ptr [esp + 0x24], 0
// 005679eb  751f                 jne 0x567a0c
// 005679ed  8d442418             lea eax, [esp + 0x18]
// 005679f1  50                   push eax
// 005679f2  8d4c2408             lea ecx, [esp + 8]
// 005679f6  51                   push ecx
// 005679f7  8bce                 mov ecx, esi
// 005679f9  e8628f0700           call 0x5e0960
// 005679fe  8bce                 mov ecx, esi
// 00567a00  e89b950700           call 0x5e0fa0
// 00567a05  5e                   pop esi
// 00567a06  83c40c               add esp, 0xc
// 00567a09  c21400               ret 0x14
// 00567a0c  8d542418             lea edx, [esp + 0x18]
// 00567a10  52                   push edx
// 00567a11  8d442408             lea eax, [esp + 8]
// 00567a15  50                   push eax
// 00567a16  8bce                 mov ecx, esi
// 00567a18  e8c38f0700           call 0x5e09e0
// 00567a1d  8bce                 mov ecx, esi
// 00567a1f  e87c950700           call 0x5e0fa0
// 00567a24  5e                   pop esi
// 00567a25  83c40c               add esp, 0xc
// 00567a28  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
