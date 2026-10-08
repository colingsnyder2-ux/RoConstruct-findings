// roc 2009-06 0067a2f0  unit: RBX::VLighting::?$BoundFuncDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067a2f0
//
// 0067a2f0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a2f4  83ec0c               sub esp, 0xc
// 0067a2f7  56                   push esi
// 0067a2f8  6a00                 push 0
// 0067a2fa  68848aa100           push 0xa18a84
// 0067a2ff  68c4bf9d00           push 0x9dbfc4
// 0067a304  6a00                 push 0
// 0067a306  50                   push eax
// 0067a307  8bf1                 mov esi, ecx
// 0067a309  e86cf90900           call 0x719c7a
// 0067a30e  83c414               add esp, 0x14
// 0067a311  85c0                 test eax, eax
// 0067a313  751e                 jne 0x67a333
// 0067a315  6850d38a00           push 0x8ad350
// 0067a31a  8d4c2408             lea ecx, [esp + 8]
// 0067a31e  ff1570e98900         call dword ptr [0x89e970]
// 0067a324  68b04b9800           push 0x984bb0
// 0067a329  8d4c2408             lea ecx, [esp + 8]
// 0067a32d  51                   push ecx
// 0067a32e  e817f70900           call 0x719a4a
// 0067a333  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0067a336  8b5638               mov edx, dword ptr [esi + 0x38]
// 0067a339  03c8                 add ecx, eax
// 0067a33b  ffd2                 call edx
// 0067a33d  d95c2414             fstp dword ptr [esp + 0x14]
// 0067a341  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067a345  8d442414             lea eax, [esp + 0x14]
// 0067a349  50                   push eax
// 0067a34a  83c104               add ecx, 4
// 0067a34d  e8ce65dcff           call 0x440920
// 0067a352  5e                   pop esi
// 0067a353  83c40c               add esp, 0xc
// 0067a356  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
