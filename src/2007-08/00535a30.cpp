// roc 2007-08 00535a30  unit: std::logic_error  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535a30
//
// 00535a30  64a100000000         mov eax, dword ptr fs:[0]
// 00535a36  6aff                 push -1
// 00535a38  68880a7500           push 0x750a88
// 00535a3d  50                   push eax
// 00535a3e  64892500000000       mov dword ptr fs:[0], esp
// 00535a45  53                   push ebx
// 00535a46  56                   push esi
// 00535a47  57                   push edi
// 00535a48  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00535a4c  6a08                 push 8
// 00535a4e  53                   push ebx
// 00535a4f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00535a57  e8548b0800           call 0x5be5b0
// 00535a5c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00535a60  8bf8                 mov edi, eax
// 00535a62  83c408               add esp, 8
// 00535a65  85ff                 test edi, edi
// 00535a67  7419                 je 0x535a82
// 00535a69  85f6                 test esi, esi
// 00535a6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535a6f  8907                 mov dword ptr [edi], eax
// 00535a71  897704               mov dword ptr [edi + 4], esi
// 00535a74  740c                 je 0x535a82
// 00535a76  8d4e04               lea ecx, [esi + 4]
// 00535a79  ba01000000           mov edx, 1
// 00535a7e  f00fc111             lock xadd dword ptr [ecx], edx
// 00535a82  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00535a87  50                   push eax
// 00535a88  68f0d8ffff           push 0xffffd8f0
// 00535a8d  53                   push ebx
// 00535a8e  e86d830800           call 0x5bde00
// 00535a93  6afe                 push -2
// 00535a95  53                   push ebx
// 00535a96  e8c5860800           call 0x5be160
// 00535a9b  83c414               add esp, 0x14
// 00535a9e  85f6                 test esi, esi
// 00535aa0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00535aa8  742a                 je 0x535ad4
// 00535aaa  8d4e04               lea ecx, [esi + 4]
// 00535aad  83caff               or edx, 0xffffffff
// 00535ab0  f00fc111             lock xadd dword ptr [ecx], edx
// 00535ab4  751e                 jne 0x535ad4
// 00535ab6  8b06                 mov eax, dword ptr [esi]
// 00535ab8  8b5004               mov edx, dword ptr [eax + 4]
// 00535abb  8bce                 mov ecx, esi
// 00535abd  ffd2                 call edx
// 00535abf  8d4608               lea eax, [esi + 8]
// 00535ac2  83c9ff               or ecx, 0xffffffff
// 00535ac5  f00fc108             lock xadd dword ptr [eax], ecx
// 00535ac9  7509                 jne 0x535ad4
// 00535acb  8b16                 mov edx, dword ptr [esi]
// 00535acd  8b4208               mov eax, dword ptr [edx + 8]
// 00535ad0  8bce                 mov ecx, esi
// 00535ad2  ffd0                 call eax
// 00535ad4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00535ad8  8bc7                 mov eax, edi
// 00535ada  5f                   pop edi
// 00535adb  5e                   pop esi
// 00535adc  64890d00000000       mov dword ptr fs:[0], ecx
// 00535ae3  5b                   pop ebx
// 00535ae4  83c40c               add esp, 0xc
// 00535ae7  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
