// roc 2007-03 00537d10  unit: seg_00530000  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537d10
//
// 00537d10  64a100000000         mov eax, dword ptr fs:[0]
// 00537d16  6aff                 push -1
// 00537d18  68a8d57400           push 0x74d5a8
// 00537d1d  50                   push eax
// 00537d1e  64892500000000       mov dword ptr fs:[0], esp
// 00537d25  53                   push ebx
// 00537d26  56                   push esi
// 00537d27  57                   push edi
// 00537d28  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00537d2c  6a08                 push 8
// 00537d2e  53                   push ebx
// 00537d2f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00537d37  e8441d0800           call 0x5b9a80
// 00537d3c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00537d40  8bf8                 mov edi, eax
// 00537d42  83c408               add esp, 8
// 00537d45  85ff                 test edi, edi
// 00537d47  7419                 je 0x537d62
// 00537d49  85f6                 test esi, esi
// 00537d4b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00537d4f  8907                 mov dword ptr [edi], eax
// 00537d51  897704               mov dword ptr [edi + 4], esi
// 00537d54  740c                 je 0x537d62
// 00537d56  8d4e04               lea ecx, [esi + 4]
// 00537d59  ba01000000           mov edx, 1
// 00537d5e  f00fc111             lock xadd dword ptr [ecx], edx
// 00537d62  a158828a00           mov eax, dword ptr [0x8a8258]
// 00537d67  50                   push eax
// 00537d68  68f0d8ffff           push 0xffffd8f0
// 00537d6d  53                   push ebx
// 00537d6e  e85d150800           call 0x5b92d0
// 00537d73  6afe                 push -2
// 00537d75  53                   push ebx
// 00537d76  e8b5180800           call 0x5b9630
// 00537d7b  83c414               add esp, 0x14
// 00537d7e  85f6                 test esi, esi
// 00537d80  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00537d88  742a                 je 0x537db4
// 00537d8a  8d4e04               lea ecx, [esi + 4]
// 00537d8d  83caff               or edx, 0xffffffff
// 00537d90  f00fc111             lock xadd dword ptr [ecx], edx
// 00537d94  751e                 jne 0x537db4
// 00537d96  8b06                 mov eax, dword ptr [esi]
// 00537d98  8b5004               mov edx, dword ptr [eax + 4]
// 00537d9b  8bce                 mov ecx, esi
// 00537d9d  ffd2                 call edx
// 00537d9f  8d4608               lea eax, [esi + 8]
// 00537da2  83c9ff               or ecx, 0xffffffff
// 00537da5  f00fc108             lock xadd dword ptr [eax], ecx
// 00537da9  7509                 jne 0x537db4
// 00537dab  8b16                 mov edx, dword ptr [esi]
// 00537dad  8b4208               mov eax, dword ptr [edx + 8]
// 00537db0  8bce                 mov ecx, esi
// 00537db2  ffd0                 call eax
// 00537db4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00537db8  8bc7                 mov eax, edi
// 00537dba  5f                   pop edi
// 00537dbb  5e                   pop esi
// 00537dbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00537dc3  5b                   pop ebx
// 00537dc4  83c40c               add esp, 0xc
// 00537dc7  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
