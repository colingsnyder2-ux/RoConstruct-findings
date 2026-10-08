// roc 2007-08 005af090  unit: RBX::VLighting::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af090
//
// 005af090  8b442404             mov eax, dword ptr [esp + 4]
// 005af094  83ec0c               sub esp, 0xc
// 005af097  56                   push esi
// 005af098  6a00                 push 0
// 005af09a  686c958a00           push 0x8a956c
// 005af09f  689c208800           push 0x88209c
// 005af0a4  6a00                 push 0
// 005af0a6  50                   push eax
// 005af0a7  8bf1                 mov esi, ecx
// 005af0a9  e8881c0800           call 0x630d36
// 005af0ae  83c414               add esp, 0x14
// 005af0b1  85c0                 test eax, eax
// 005af0b3  751e                 jne 0x5af0d3
// 005af0b5  68046e7800           push 0x786e04
// 005af0ba  8d4c2408             lea ecx, [esp + 8]
// 005af0be  ff1510e77700         call dword ptr [0x77e710]
// 005af0c4  680c1e8400           push 0x841e0c
// 005af0c9  8d4c2408             lea ecx, [esp + 8]
// 005af0cd  51                   push ecx
// 005af0ce  e8cb1a0800           call 0x630b9e
// 005af0d3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005af0d7  83c204               add edx, 4
// 005af0da  52                   push edx
// 005af0db  50                   push eax
// 005af0dc  8bce                 mov ecx, esi
// 005af0de  e81d80feff           call 0x597100
// 005af0e3  5e                   pop esi
// 005af0e4  83c40c               add esp, 0xc
// 005af0e7  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
