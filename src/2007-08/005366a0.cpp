// roc 2007-08 005366a0  unit: boost::any::placeholder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005366a0
//
// 005366a0  6aff                 push -1
// 005366a2  68880a7500           push 0x750a88
// 005366a7  64a100000000         mov eax, dword ptr fs:[0]
// 005366ad  50                   push eax
// 005366ae  64892500000000       mov dword ptr fs:[0], esp
// 005366b5  51                   push ecx
// 005366b6  53                   push ebx
// 005366b7  56                   push esi
// 005366b8  57                   push edi
// 005366b9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005366bd  85db                 test ebx, ebx
// 005366bf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005366c3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005366cb  7512                 jne 0x5366df
// 005366cd  8b442420             mov eax, dword ptr [esp + 0x20]
// 005366d1  50                   push eax
// 005366d2  e879740800           call 0x5bdb50
// 005366d7  83c404               add esp, 4
// 005366da  e98c000000           jmp 0x53676b
// 005366df  8b742420             mov esi, dword ptr [esp + 0x20]
// 005366e3  56                   push esi
// 005366e4  e8976e0800           call 0x5bd580
// 005366e9  68a0665300           push 0x5366a0
// 005366ee  56                   push esi
// 005366ef  e88c760800           call 0x5bdd80
// 005366f4  68f0d8ffff           push 0xffffd8f0
// 005366f9  56                   push esi
// 005366fa  e861770800           call 0x5bde60
// 005366ff  53                   push ebx
// 00536700  56                   push esi
// 00536701  e87a760800           call 0x5bdd80
// 00536706  6afe                 push -2
// 00536708  56                   push esi
// 00536709  e852770800           call 0x5bde60
// 0053670e  6aff                 push -1
// 00536710  56                   push esi
// 00536711  e85a700800           call 0x5bd770
// 00536716  83c42c               add esp, 0x2c
// 00536719  85c0                 test eax, eax
// 0053671b  7543                 jne 0x536760
// 0053671d  6afe                 push -2
// 0053671f  56                   push esi
// 00536720  e86b6e0800           call 0x5bd590
// 00536725  85ff                 test edi, edi
// 00536727  8bc4                 mov eax, esp
// 00536729  8918                 mov dword ptr [eax], ebx
// 0053672b  89642414             mov dword ptr [esp + 0x14], esp
// 0053672f  897804               mov dword ptr [eax + 4], edi
// 00536732  740c                 je 0x536740
// 00536734  8d4f04               lea ecx, [edi + 4]
// 00536737  ba01000000           mov edx, 1
// 0053673c  f00fc111             lock xadd dword ptr [ecx], edx
// 00536740  56                   push esi
// 00536741  e8eaf2ffff           call 0x535a30
// 00536746  53                   push ebx
// 00536747  56                   push esi
// 00536748  e833760800           call 0x5bdd80
// 0053674d  6afe                 push -2
// 0053674f  56                   push esi
// 00536750  e8eb6f0800           call 0x5bd740
// 00536755  6afc                 push -4
// 00536757  56                   push esi
// 00536758  e823790800           call 0x5be080
// 0053675d  83c424               add esp, 0x24
// 00536760  6afe                 push -2
// 00536762  56                   push esi
// 00536763  e8786e0800           call 0x5bd5e0
// 00536768  83c408               add esp, 8
// 0053676b  85ff                 test edi, edi
// 0053676d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00536775  742a                 je 0x5367a1
// 00536777  8d4704               lea eax, [edi + 4]
// 0053677a  83c9ff               or ecx, 0xffffffff
// 0053677d  f00fc108             lock xadd dword ptr [eax], ecx
// 00536781  751e                 jne 0x5367a1
// 00536783  8b17                 mov edx, dword ptr [edi]
// 00536785  8b4204               mov eax, dword ptr [edx + 4]
// 00536788  8bcf                 mov ecx, edi
// 0053678a  ffd0                 call eax
// 0053678c  8d4f08               lea ecx, [edi + 8]
// 0053678f  83caff               or edx, 0xffffffff
// 00536792  f00fc111             lock xadd dword ptr [ecx], edx
// 00536796  7509                 jne 0x5367a1
// 00536798  8b07                 mov eax, dword ptr [edi]
// 0053679a  8b5008               mov edx, dword ptr [eax + 8]
// 0053679d  8bcf                 mov ecx, edi
// 0053679f  ffd2                 call edx
// 005367a1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005367a5  5f                   pop edi
// 005367a6  5e                   pop esi
// 005367a7  64890d00000000       mov dword ptr fs:[0], ecx
// 005367ae  5b                   pop ebx
// 005367af  83c410               add esp, 0x10
// 005367b2  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
