// roc 2007-08 00578be0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578be0
//
// 00578be0  8b442404             mov eax, dword ptr [esp + 4]
// 00578be4  83ec0c               sub esp, 0xc
// 00578be7  56                   push esi
// 00578be8  6a00                 push 0
// 00578bea  68284a8800           push 0x884a28
// 00578bef  689c208800           push 0x88209c
// 00578bf4  6a00                 push 0
// 00578bf6  50                   push eax
// 00578bf7  8bf1                 mov esi, ecx
// 00578bf9  e838810b00           call 0x630d36
// 00578bfe  83c414               add esp, 0x14
// 00578c01  85c0                 test eax, eax
// 00578c03  751e                 jne 0x578c23
// 00578c05  68046e7800           push 0x786e04
// 00578c0a  8d4c2408             lea ecx, [esp + 8]
// 00578c0e  ff1510e77700         call dword ptr [0x77e710]
// 00578c14  680c1e8400           push 0x841e0c
// 00578c19  8d4c2408             lea ecx, [esp + 8]
// 00578c1d  51                   push ecx
// 00578c1e  e87b7f0b00           call 0x630b9e
// 00578c23  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578c27  83c204               add edx, 4
// 00578c2a  52                   push edx
// 00578c2b  50                   push eax
// 00578c2c  8bce                 mov ecx, esi
// 00578c2e  e83dffffff           call 0x578b70
// 00578c33  5e                   pop esi
// 00578c34  83c40c               add esp, 0xc
// 00578c37  c20800               ret 8
// library rbxgs/v8datamodel\PartInstance.cpp (function ?execute@?$BoundFuncDesc@VPartInstance@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
