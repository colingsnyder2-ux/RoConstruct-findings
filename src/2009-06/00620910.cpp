// roc 2009-06 00620910  unit: TextXmlParser  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620910
//
// 00620910  83ec0c               sub esp, 0xc
// 00620913  56                   push esi
// 00620914  8b742414             mov esi, dword ptr [esp + 0x14]
// 00620918  8bce                 mov ecx, esi
// 0062091a  e8d1180900           call 0x6b21f0
// 0062091f  8bce                 mov ecx, esi
// 00620921  e88a190900           call 0x6b22b0
// 00620926  837c242400           cmp dword ptr [esp + 0x24], 0
// 0062092b  751f                 jne 0x62094c
// 0062092d  8d442418             lea eax, [esp + 0x18]
// 00620931  50                   push eax
// 00620932  8d4c2408             lea ecx, [esp + 8]
// 00620936  51                   push ecx
// 00620937  8bce                 mov ecx, esi
// 00620939  e8a21b0900           call 0x6b24e0
// 0062093e  8bce                 mov ecx, esi
// 00620940  e8ab210900           call 0x6b2af0
// 00620945  5e                   pop esi
// 00620946  83c40c               add esp, 0xc
// 00620949  c21400               ret 0x14
// 0062094c  8d542418             lea edx, [esp + 0x18]
// 00620950  52                   push edx
// 00620951  8d442408             lea eax, [esp + 8]
// 00620955  50                   push eax
// 00620956  8bce                 mov ecx, esi
// 00620958  e8031c0900           call 0x6b2560
// 0062095d  8bce                 mov ecx, esi
// 0062095f  e88c210900           call 0x6b2af0
// 00620964  5e                   pop esi
// 00620965  83c40c               add esp, 0xc
// 00620968  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
