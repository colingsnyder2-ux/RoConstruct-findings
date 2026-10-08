// roc 2007-08 005369f0  unit: boost::any::placeholder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005369f0
//
// 005369f0  6aff                 push -1
// 005369f2  68880a7500           push 0x750a88
// 005369f7  64a100000000         mov eax, dword ptr fs:[0]
// 005369fd  50                   push eax
// 005369fe  64892500000000       mov dword ptr fs:[0], esp
// 00536a05  51                   push ecx
// 00536a06  53                   push ebx
// 00536a07  56                   push esi
// 00536a08  57                   push edi
// 00536a09  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00536a0d  85db                 test ebx, ebx
// 00536a0f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00536a13  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00536a1b  7512                 jne 0x536a2f
// 00536a1d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00536a21  50                   push eax
// 00536a22  e829710800           call 0x5bdb50
// 00536a27  83c404               add esp, 4
// 00536a2a  e98c000000           jmp 0x536abb
// 00536a2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00536a33  56                   push esi
// 00536a34  e8476b0800           call 0x5bd580
// 00536a39  68f0695300           push 0x5369f0
// 00536a3e  56                   push esi
// 00536a3f  e83c730800           call 0x5bdd80
// 00536a44  68f0d8ffff           push 0xffffd8f0
// 00536a49  56                   push esi
// 00536a4a  e811740800           call 0x5bde60
// 00536a4f  53                   push ebx
// 00536a50  56                   push esi
// 00536a51  e82a730800           call 0x5bdd80
// 00536a56  6afe                 push -2
// 00536a58  56                   push esi
// 00536a59  e802740800           call 0x5bde60
// 00536a5e  6aff                 push -1
// 00536a60  56                   push esi
// 00536a61  e80a6d0800           call 0x5bd770
// 00536a66  83c42c               add esp, 0x2c
// 00536a69  85c0                 test eax, eax
// 00536a6b  7543                 jne 0x536ab0
// 00536a6d  6afe                 push -2
// 00536a6f  56                   push esi
// 00536a70  e81b6b0800           call 0x5bd590
// 00536a75  85ff                 test edi, edi
// 00536a77  8bc4                 mov eax, esp
// 00536a79  8918                 mov dword ptr [eax], ebx
// 00536a7b  89642414             mov dword ptr [esp + 0x14], esp
// 00536a7f  897804               mov dword ptr [eax + 4], edi
// 00536a82  740c                 je 0x536a90
// 00536a84  8d4f04               lea ecx, [edi + 4]
// 00536a87  ba01000000           mov edx, 1
// 00536a8c  f00fc111             lock xadd dword ptr [ecx], edx
// 00536a90  56                   push esi
// 00536a91  e8daf1ffff           call 0x535c70
// 00536a96  53                   push ebx
// 00536a97  56                   push esi
// 00536a98  e8e3720800           call 0x5bdd80
// 00536a9d  6afe                 push -2
// 00536a9f  56                   push esi
// 00536aa0  e89b6c0800           call 0x5bd740
// 00536aa5  6afc                 push -4
// 00536aa7  56                   push esi
// 00536aa8  e8d3750800           call 0x5be080
// 00536aad  83c424               add esp, 0x24
// 00536ab0  6afe                 push -2
// 00536ab2  56                   push esi
// 00536ab3  e8286b0800           call 0x5bd5e0
// 00536ab8  83c408               add esp, 8
// 00536abb  85ff                 test edi, edi
// 00536abd  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00536ac5  742a                 je 0x536af1
// 00536ac7  8d4704               lea eax, [edi + 4]
// 00536aca  83c9ff               or ecx, 0xffffffff
// 00536acd  f00fc108             lock xadd dword ptr [eax], ecx
// 00536ad1  751e                 jne 0x536af1
// 00536ad3  8b17                 mov edx, dword ptr [edi]
// 00536ad5  8b4204               mov eax, dword ptr [edx + 4]
// 00536ad8  8bcf                 mov ecx, edi
// 00536ada  ffd0                 call eax
// 00536adc  8d4f08               lea ecx, [edi + 8]
// 00536adf  83caff               or edx, 0xffffffff
// 00536ae2  f00fc111             lock xadd dword ptr [ecx], edx
// 00536ae6  7509                 jne 0x536af1
// 00536ae8  8b07                 mov eax, dword ptr [edi]
// 00536aea  8b5008               mov edx, dword ptr [eax + 8]
// 00536aed  8bcf                 mov ecx, edi
// 00536aef  ffd2                 call edx
// 00536af1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00536af5  5f                   pop edi
// 00536af6  5e                   pop esi
// 00536af7  64890d00000000       mov dword ptr fs:[0], ecx
// 00536afe  5b                   pop ebx
// 00536aff  83c410               add esp, 0x10
// 00536b02  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
