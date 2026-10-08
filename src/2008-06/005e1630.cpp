// roc 2008-06 005e1630  unit: RBX::VLighting::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1630
//
// 005e1630  8b442404             mov eax, dword ptr [esp + 4]
// 005e1634  83ec0c               sub esp, 0xc
// 005e1637  56                   push esi
// 005e1638  6a00                 push 0
// 005e163a  6864499500           push 0x954964
// 005e163f  68fc919200           push 0x9291fc
// 005e1644  6a00                 push 0
// 005e1646  50                   push eax
// 005e1647  8bf1                 mov esi, ecx
// 005e1649  e878010c00           call 0x6a17c6
// 005e164e  83c414               add esp, 0x14
// 005e1651  85c0                 test eax, eax
// 005e1653  751e                 jne 0x5e1673
// 005e1655  6834ba8000           push 0x80ba34
// 005e165a  8d4c2408             lea ecx, [esp + 8]
// 005e165e  ff1564288000         call dword ptr [0x802864]
// 005e1664  682c368d00           push 0x8d362c
// 005e1669  8d4c2408             lea ecx, [esp + 8]
// 005e166d  51                   push ecx
// 005e166e  e819ff0b00           call 0x6a158c
// 005e1673  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e1677  83c204               add edx, 4
// 005e167a  52                   push edx
// 005e167b  50                   push eax
// 005e167c  8bce                 mov ecx, esi
// 005e167e  e84dffffff           call 0x5e15d0
// 005e1683  5e                   pop esi
// 005e1684  83c40c               add esp, 0xc
// 005e1687  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
