// roc 2007-03 00537c50  unit: seg_00530000  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537c50
//
// 00537c50  64a100000000         mov eax, dword ptr fs:[0]
// 00537c56  6aff                 push -1
// 00537c58  68a8d57400           push 0x74d5a8
// 00537c5d  50                   push eax
// 00537c5e  64892500000000       mov dword ptr fs:[0], esp
// 00537c65  53                   push ebx
// 00537c66  56                   push esi
// 00537c67  57                   push edi
// 00537c68  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00537c6c  6a08                 push 8
// 00537c6e  53                   push ebx
// 00537c6f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00537c77  e8041e0800           call 0x5b9a80
// 00537c7c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00537c80  8bf8                 mov edi, eax
// 00537c82  83c408               add esp, 8
// 00537c85  85ff                 test edi, edi
// 00537c87  7419                 je 0x537ca2
// 00537c89  85f6                 test esi, esi
// 00537c8b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00537c8f  8907                 mov dword ptr [edi], eax
// 00537c91  897704               mov dword ptr [edi + 4], esi
// 00537c94  740c                 je 0x537ca2
// 00537c96  8d4e04               lea ecx, [esi + 4]
// 00537c99  ba01000000           mov edx, 1
// 00537c9e  f00fc111             lock xadd dword ptr [ecx], edx
// 00537ca2  a1b07f8a00           mov eax, dword ptr [0x8a7fb0]
// 00537ca7  50                   push eax
// 00537ca8  68f0d8ffff           push 0xffffd8f0
// 00537cad  53                   push ebx
// 00537cae  e81d160800           call 0x5b92d0
// 00537cb3  6afe                 push -2
// 00537cb5  53                   push ebx
// 00537cb6  e875190800           call 0x5b9630
// 00537cbb  83c414               add esp, 0x14
// 00537cbe  85f6                 test esi, esi
// 00537cc0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00537cc8  742a                 je 0x537cf4
// 00537cca  8d4e04               lea ecx, [esi + 4]
// 00537ccd  83caff               or edx, 0xffffffff
// 00537cd0  f00fc111             lock xadd dword ptr [ecx], edx
// 00537cd4  751e                 jne 0x537cf4
// 00537cd6  8b06                 mov eax, dword ptr [esi]
// 00537cd8  8b5004               mov edx, dword ptr [eax + 4]
// 00537cdb  8bce                 mov ecx, esi
// 00537cdd  ffd2                 call edx
// 00537cdf  8d4608               lea eax, [esi + 8]
// 00537ce2  83c9ff               or ecx, 0xffffffff
// 00537ce5  f00fc108             lock xadd dword ptr [eax], ecx
// 00537ce9  7509                 jne 0x537cf4
// 00537ceb  8b16                 mov edx, dword ptr [esi]
// 00537ced  8b4208               mov eax, dword ptr [edx + 8]
// 00537cf0  8bce                 mov ecx, esi
// 00537cf2  ffd0                 call eax
// 00537cf4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00537cf8  8bc7                 mov eax, edi
// 00537cfa  5f                   pop edi
// 00537cfb  5e                   pop esi
// 00537cfc  64890d00000000       mov dword ptr fs:[0], ecx
// 00537d03  5b                   pop ebx
// 00537d04  83c40c               add esp, 0xc
// 00537d07  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
