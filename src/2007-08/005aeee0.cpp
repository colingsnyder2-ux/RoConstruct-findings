// roc 2007-08 005aeee0  unit: RBX::VLighting::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aeee0
//
// 005aeee0  8b442404             mov eax, dword ptr [esp + 4]
// 005aeee4  83ec0c               sub esp, 0xc
// 005aeee7  56                   push esi
// 005aeee8  6a00                 push 0
// 005aeeea  686c958a00           push 0x8a956c
// 005aeeef  689c208800           push 0x88209c
// 005aeef4  6a00                 push 0
// 005aeef6  50                   push eax
// 005aeef7  8bf1                 mov esi, ecx
// 005aeef9  e8381e0800           call 0x630d36
// 005aeefe  83c414               add esp, 0x14
// 005aef01  85c0                 test eax, eax
// 005aef03  751e                 jne 0x5aef23
// 005aef05  68046e7800           push 0x786e04
// 005aef0a  8d4c2408             lea ecx, [esp + 8]
// 005aef0e  ff1510e77700         call dword ptr [0x77e710]
// 005aef14  680c1e8400           push 0x841e0c
// 005aef19  8d4c2408             lea ecx, [esp + 8]
// 005aef1d  51                   push ecx
// 005aef1e  e87b1c0800           call 0x630b9e
// 005aef23  8b542418             mov edx, dword ptr [esp + 0x18]
// 005aef27  83c204               add edx, 4
// 005aef2a  52                   push edx
// 005aef2b  50                   push eax
// 005aef2c  8bce                 mov ecx, esi
// 005aef2e  e84dffffff           call 0x5aee80
// 005aef33  5e                   pop esi
// 005aef34  83c40c               add esp, 0xc
// 005aef37  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
