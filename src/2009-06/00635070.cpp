// roc 2009-06 00635070  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635070
//
// 00635070  64a100000000         mov eax, dword ptr fs:[0]
// 00635076  6aff                 push -1
// 00635078  6808b08600           push 0x86b008
// 0063507d  50                   push eax
// 0063507e  64892500000000       mov dword ptr fs:[0], esp
// 00635085  56                   push esi
// 00635086  57                   push edi
// 00635087  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063508b  6a08                 push 8
// 0063508d  56                   push esi
// 0063508e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00635096  e8354d0800           call 0x6b9dd0
// 0063509b  8bf8                 mov edi, eax
// 0063509d  83c408               add esp, 8
// 006350a0  85ff                 test edi, edi
// 006350a2  7421                 je 0x6350c5
// 006350a4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006350a8  8907                 mov dword ptr [edi], eax
// 006350aa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006350ae  894f04               mov dword ptr [edi + 4], ecx
// 006350b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 006350b5  85c0                 test eax, eax
// 006350b7  740c                 je 0x6350c5
// 006350b9  83c004               add eax, 4
// 006350bc  ba01000000           mov edx, 1
// 006350c1  f00fc110             lock xadd dword ptr [eax], edx
// 006350c5  a1a428a200           mov eax, dword ptr [0xa228a4]
// 006350ca  50                   push eax
// 006350cb  68f0d8ffff           push 0xffffd8f0
// 006350d0  56                   push esi
// 006350d1  e8fa440800           call 0x6b95d0
// 006350d6  6afe                 push -2
// 006350d8  56                   push esi
// 006350d9  e882480800           call 0x6b9960
// 006350de  8b742434             mov esi, dword ptr [esp + 0x34]
// 006350e2  83c414               add esp, 0x14
// 006350e5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006350ed  85f6                 test esi, esi
// 006350ef  742a                 je 0x63511b
// 006350f1  8d4e04               lea ecx, [esi + 4]
// 006350f4  83caff               or edx, 0xffffffff
// 006350f7  f00fc111             lock xadd dword ptr [ecx], edx
// 006350fb  751e                 jne 0x63511b
// 006350fd  8b06                 mov eax, dword ptr [esi]
// 006350ff  8b5004               mov edx, dword ptr [eax + 4]
// 00635102  8bce                 mov ecx, esi
// 00635104  ffd2                 call edx
// 00635106  8d4608               lea eax, [esi + 8]
// 00635109  83c9ff               or ecx, 0xffffffff
// 0063510c  f00fc108             lock xadd dword ptr [eax], ecx
// 00635110  7509                 jne 0x63511b
// 00635112  8b16                 mov edx, dword ptr [esi]
// 00635114  8b4208               mov eax, dword ptr [edx + 8]
// 00635117  8bce                 mov ecx, esi
// 00635119  ffd0                 call eax
// 0063511b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063511f  8bc7                 mov eax, edi
// 00635121  5f                   pop edi
// 00635122  64890d00000000       mov dword ptr fs:[0], ecx
// 00635129  5e                   pop esi
// 0063512a  83c40c               add esp, 0xc
// 0063512d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
