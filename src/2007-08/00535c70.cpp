// roc 2007-08 00535c70  unit: std::logic_error  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535c70
//
// 00535c70  64a100000000         mov eax, dword ptr fs:[0]
// 00535c76  6aff                 push -1
// 00535c78  68880a7500           push 0x750a88
// 00535c7d  50                   push eax
// 00535c7e  64892500000000       mov dword ptr fs:[0], esp
// 00535c85  53                   push ebx
// 00535c86  56                   push esi
// 00535c87  57                   push edi
// 00535c88  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00535c8c  6a08                 push 8
// 00535c8e  53                   push ebx
// 00535c8f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00535c97  e814890800           call 0x5be5b0
// 00535c9c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00535ca0  8bf8                 mov edi, eax
// 00535ca2  83c408               add esp, 8
// 00535ca5  85ff                 test edi, edi
// 00535ca7  7419                 je 0x535cc2
// 00535ca9  85f6                 test esi, esi
// 00535cab  8b442420             mov eax, dword ptr [esp + 0x20]
// 00535caf  8907                 mov dword ptr [edi], eax
// 00535cb1  897704               mov dword ptr [edi + 4], esi
// 00535cb4  740c                 je 0x535cc2
// 00535cb6  8d4e04               lea ecx, [esi + 4]
// 00535cb9  ba01000000           mov edx, 1
// 00535cbe  f00fc111             lock xadd dword ptr [ecx], edx
// 00535cc2  a188be8a00           mov eax, dword ptr [0x8abe88]
// 00535cc7  50                   push eax
// 00535cc8  68f0d8ffff           push 0xffffd8f0
// 00535ccd  53                   push ebx
// 00535cce  e82d810800           call 0x5bde00
// 00535cd3  6afe                 push -2
// 00535cd5  53                   push ebx
// 00535cd6  e885840800           call 0x5be160
// 00535cdb  83c414               add esp, 0x14
// 00535cde  85f6                 test esi, esi
// 00535ce0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00535ce8  742a                 je 0x535d14
// 00535cea  8d4e04               lea ecx, [esi + 4]
// 00535ced  83caff               or edx, 0xffffffff
// 00535cf0  f00fc111             lock xadd dword ptr [ecx], edx
// 00535cf4  751e                 jne 0x535d14
// 00535cf6  8b06                 mov eax, dword ptr [esi]
// 00535cf8  8b5004               mov edx, dword ptr [eax + 4]
// 00535cfb  8bce                 mov ecx, esi
// 00535cfd  ffd2                 call edx
// 00535cff  8d4608               lea eax, [esi + 8]
// 00535d02  83c9ff               or ecx, 0xffffffff
// 00535d05  f00fc108             lock xadd dword ptr [eax], ecx
// 00535d09  7509                 jne 0x535d14
// 00535d0b  8b16                 mov edx, dword ptr [esi]
// 00535d0d  8b4208               mov eax, dword ptr [edx + 8]
// 00535d10  8bce                 mov ecx, esi
// 00535d12  ffd0                 call eax
// 00535d14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00535d18  8bc7                 mov eax, edi
// 00535d1a  5f                   pop edi
// 00535d1b  5e                   pop esi
// 00535d1c  64890d00000000       mov dword ptr fs:[0], ecx
// 00535d23  5b                   pop ebx
// 00535d24  83c40c               add esp, 0xc
// 00535d27  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
