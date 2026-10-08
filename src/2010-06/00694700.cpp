// roc 2010-06 00694700  unit: RBX::VLighting::?$BoundFuncDesc  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00694700
//
// 00694700  8b442404             mov eax, dword ptr [esp + 4]
// 00694704  83ec0c               sub esp, 0xc
// 00694707  56                   push esi
// 00694708  6a00                 push 0
// 0069470a  68ec50bc00           push 0xbc50ec
// 0069470f  684090b700           push 0xb79040
// 00694714  6a00                 push 0
// 00694716  50                   push eax
// 00694717  8bf1                 mov esi, ecx
// 00694719  e8cc441100           call 0x7a8bea
// 0069471e  83c414               add esp, 0x14
// 00694721  85c0                 test eax, eax
// 00694723  751e                 jne 0x694743
// 00694725  68540aa000           push 0xa00a54
// 0069472a  8d4c2408             lea ecx, [esp + 8]
// 0069472e  ff159ca89e00         call dword ptr [0x9ea89c]
// 00694734  689022b100           push 0xb12290
// 00694739  8d4c2408             lea ecx, [esp + 8]
// 0069473d  51                   push ecx
// 0069473e  e86f421100           call 0x7a89b2
// 00694743  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00694746  8b5638               mov edx, dword ptr [esi + 0x38]
// 00694749  03c8                 add ecx, eax
// 0069474b  ffd2                 call edx
// 0069474d  d95c2414             fstp dword ptr [esp + 0x14]
// 00694751  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00694755  8d442414             lea eax, [esp + 0x14]
// 00694759  50                   push eax
// 0069475a  83c104               add ecx, 4
// 0069475d  e85e1adbff           call 0x4461c0
// 00694762  5e                   pop esi
// 00694763  83c40c               add esp, 0xc
// 00694766  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
