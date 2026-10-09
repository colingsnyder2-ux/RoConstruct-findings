// roc 2009-12 00714910  unit: RBX::VLighting::?$BoundFuncDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00714910
//
// 00714910  8b442404             mov eax, dword ptr [esp + 4]
// 00714914  83ec0c               sub esp, 0xc
// 00714917  56                   push esi
// 00714918  6a00                 push 0
// 0071491a  683cbdb400           push 0xb4bd3c
// 0071491f  684000b000           push 0xb00040
// 00714924  6a00                 push 0
// 00714926  50                   push eax
// 00714927  8bf1                 mov esi, ecx
// 00714929  e87c010e00           call 0x7f4aaa
// 0071492e  83c414               add esp, 0x14
// 00714931  85c0                 test eax, eax
// 00714933  751e                 jne 0x714953
// 00714935  689cfe9900           push 0x99fe9c
// 0071493a  8d4c2408             lea ecx, [esp + 8]
// 0071493e  ff15a4b79800         call dword ptr [0x98b7a4]
// 00714944  6814d8a900           push 0xa9d814
// 00714949  8d4c2408             lea ecx, [esp + 8]
// 0071494d  51                   push ecx
// 0071494e  e825ff0d00           call 0x7f4878
// 00714953  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00714956  8b5638               mov edx, dword ptr [esi + 0x38]
// 00714959  03c8                 add ecx, eax
// 0071495b  ffd2                 call edx
// 0071495d  d95c2414             fstp dword ptr [esp + 0x14]
// 00714961  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00714965  8d442414             lea eax, [esp + 0x14]
// 00714969  50                   push eax
// 0071496a  83c104               add ecx, 4
// 0071496d  e8ae05d3ff           call 0x444f20
// 00714972  5e                   pop esi
// 00714973  83c40c               add esp, 0xc
// 00714976  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
