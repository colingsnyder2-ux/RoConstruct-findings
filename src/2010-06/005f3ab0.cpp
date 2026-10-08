// roc 2010-06 005f3ab0  unit: ArchiveBinder  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f3ab0
//
// 005f3ab0  83ec0c               sub esp, 0xc
// 005f3ab3  56                   push esi
// 005f3ab4  8b742414             mov esi, dword ptr [esp + 0x14]
// 005f3ab8  8bce                 mov ecx, esi
// 005f3aba  e811421200           call 0x717cd0
// 005f3abf  8bce                 mov ecx, esi
// 005f3ac1  e8aa441200           call 0x717f70
// 005f3ac6  837c242400           cmp dword ptr [esp + 0x24], 0
// 005f3acb  751f                 jne 0x5f3aec
// 005f3acd  8d442418             lea eax, [esp + 0x18]
// 005f3ad1  50                   push eax
// 005f3ad2  8d4c2408             lea ecx, [esp + 8]
// 005f3ad6  51                   push ecx
// 005f3ad7  8bce                 mov ecx, esi
// 005f3ad9  e8b2421200           call 0x717d90
// 005f3ade  8bce                 mov ecx, esi
// 005f3ae0  e8eb421200           call 0x717dd0
// 005f3ae5  5e                   pop esi
// 005f3ae6  83c40c               add esp, 0xc
// 005f3ae9  c21400               ret 0x14
// 005f3aec  8d542418             lea edx, [esp + 0x18]
// 005f3af0  52                   push edx
// 005f3af1  8d442408             lea eax, [esp + 8]
// 005f3af5  50                   push eax
// 005f3af6  8bce                 mov ecx, esi
// 005f3af8  e803461200           call 0x718100
// 005f3afd  8bce                 mov ecx, esi
// 005f3aff  e8cc421200           call 0x717dd0
// 005f3b04  5e                   pop esi
// 005f3b05  83c40c               add esp, 0xc
// 005f3b08  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
