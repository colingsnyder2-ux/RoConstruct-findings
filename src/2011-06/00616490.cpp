// roc 2011-06 00616490  unit: MemoryBinder  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00616490
//
// 00616490  83ec0c               sub esp, 0xc
// 00616493  56                   push esi
// 00616494  8b742414             mov esi, dword ptr [esp + 0x14]
// 00616498  8bce                 mov ecx, esi
// 0061649a  e8e1761400           call 0x75db80
// 0061649f  8bce                 mov ecx, esi
// 006164a1  e86a791400           call 0x75de10
// 006164a6  837c242400           cmp dword ptr [esp + 0x24], 0
// 006164ab  751f                 jne 0x6164cc
// 006164ad  8d442418             lea eax, [esp + 0x18]
// 006164b1  50                   push eax
// 006164b2  8d4c2408             lea ecx, [esp + 8]
// 006164b6  51                   push ecx
// 006164b7  8bce                 mov ecx, esi
// 006164b9  e882771400           call 0x75dc40
// 006164be  8bce                 mov ecx, esi
// 006164c0  e8bb771400           call 0x75dc80
// 006164c5  5e                   pop esi
// 006164c6  83c40c               add esp, 0xc
// 006164c9  c21400               ret 0x14
// 006164cc  8d542418             lea edx, [esp + 0x18]
// 006164d0  52                   push edx
// 006164d1  8d442408             lea eax, [esp + 8]
// 006164d5  50                   push eax
// 006164d6  8bce                 mov ecx, esi
// 006164d8  e8a37a1400           call 0x75df80
// 006164dd  8bce                 mov ecx, esi
// 006164df  e89c771400           call 0x75dc80
// 006164e4  5e                   pop esi
// 006164e5  83c40c               add esp, 0xc
// 006164e8  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
