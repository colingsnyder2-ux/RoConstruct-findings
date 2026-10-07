// roc 2012-06 00709b20  unit: MemoryBinder  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00709b20
//
// 00709b20  64a100000000         mov eax, dword ptr fs:[0]
// 00709b26  6aff                 push -1
// 00709b28  68e852ad00           push 0xad52e8
// 00709b2d  50                   push eax
// 00709b2e  64892500000000       mov dword ptr fs:[0], esp
// 00709b35  56                   push esi
// 00709b36  57                   push edi
// 00709b37  8b742418             mov esi, dword ptr [esp + 0x18]
// 00709b3b  6a08                 push 8
// 00709b3d  56                   push esi
// 00709b3e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00709b46  e8f58f1200           call 0x832b40
// 00709b4b  8bf8                 mov edi, eax
// 00709b4d  83c408               add esp, 8
// 00709b50  85ff                 test edi, edi
// 00709b52  7421                 je 0x709b75
// 00709b54  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00709b58  8907                 mov dword ptr [edi], eax
// 00709b5a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00709b5e  894f04               mov dword ptr [edi + 4], ecx
// 00709b61  8b442420             mov eax, dword ptr [esp + 0x20]
// 00709b65  85c0                 test eax, eax
// 00709b67  740c                 je 0x709b75
// 00709b69  83c004               add eax, 4
// 00709b6c  ba01000000           mov edx, 1
// 00709b71  f00fc110             lock xadd dword ptr [eax], edx
// 00709b75  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 00709b7a  50                   push eax
// 00709b7b  68f0d8ffff           push 0xffffd8f0
// 00709b80  56                   push esi
// 00709b81  e8ba871200           call 0x832340
// 00709b86  6afe                 push -2
// 00709b88  56                   push esi
// 00709b89  e8428b1200           call 0x8326d0
// 00709b8e  8b742434             mov esi, dword ptr [esp + 0x34]
// 00709b92  83c414               add esp, 0x14
// 00709b95  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00709b9d  85f6                 test esi, esi
// 00709b9f  742a                 je 0x709bcb
// 00709ba1  8d4e04               lea ecx, [esi + 4]
// 00709ba4  83caff               or edx, 0xffffffff
// 00709ba7  f00fc111             lock xadd dword ptr [ecx], edx
// 00709bab  751e                 jne 0x709bcb
// 00709bad  8b06                 mov eax, dword ptr [esi]
// 00709baf  8b5004               mov edx, dword ptr [eax + 4]
// 00709bb2  8bce                 mov ecx, esi
// 00709bb4  ffd2                 call edx
// 00709bb6  8d4608               lea eax, [esi + 8]
// 00709bb9  83c9ff               or ecx, 0xffffffff
// 00709bbc  f00fc108             lock xadd dword ptr [eax], ecx
// 00709bc0  7509                 jne 0x709bcb
// 00709bc2  8b16                 mov edx, dword ptr [esi]
// 00709bc4  8b4208               mov eax, dword ptr [edx + 8]
// 00709bc7  8bce                 mov ecx, esi
// 00709bc9  ffd0                 call eax
// 00709bcb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00709bcf  8bc7                 mov eax, edi
// 00709bd1  5f                   pop edi
// 00709bd2  64890d00000000       mov dword ptr fs:[0], ecx
// 00709bd9  5e                   pop esi
// 00709bda  83c40c               add esp, 0xc
// 00709bdd  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
