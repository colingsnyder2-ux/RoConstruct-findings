// roc 2008-06 0059d0d0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d0d0
//
// 0059d0d0  8b442404             mov eax, dword ptr [esp + 4]
// 0059d0d4  83ec0c               sub esp, 0xc
// 0059d0d7  56                   push esi
// 0059d0d8  6a00                 push 0
// 0059d0da  6850dd9200           push 0x92dd50
// 0059d0df  68fc919200           push 0x9291fc
// 0059d0e4  6a00                 push 0
// 0059d0e6  50                   push eax
// 0059d0e7  8bf1                 mov esi, ecx
// 0059d0e9  e8d8461000           call 0x6a17c6
// 0059d0ee  83c414               add esp, 0x14
// 0059d0f1  85c0                 test eax, eax
// 0059d0f3  751e                 jne 0x59d113
// 0059d0f5  6834ba8000           push 0x80ba34
// 0059d0fa  8d4c2408             lea ecx, [esp + 8]
// 0059d0fe  ff1564288000         call dword ptr [0x802864]
// 0059d104  682c368d00           push 0x8d362c
// 0059d109  8d4c2408             lea ecx, [esp + 8]
// 0059d10d  51                   push ecx
// 0059d10e  e879441000           call 0x6a158c
// 0059d113  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059d117  83c204               add edx, 4
// 0059d11a  52                   push edx
// 0059d11b  50                   push eax
// 0059d11c  8bce                 mov ecx, esi
// 0059d11e  e82dffffff           call 0x59d050
// 0059d123  5e                   pop esi
// 0059d124  83c40c               add esp, 0xc
// 0059d127  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?execute@?$BoundFuncDesc@VPartInstance@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
