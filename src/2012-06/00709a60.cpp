// roc 2012-06 00709a60  unit: MemoryBinder  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00709a60
//
// 00709a60  64a100000000         mov eax, dword ptr fs:[0]
// 00709a66  6aff                 push -1
// 00709a68  68e852ad00           push 0xad52e8
// 00709a6d  50                   push eax
// 00709a6e  64892500000000       mov dword ptr fs:[0], esp
// 00709a75  56                   push esi
// 00709a76  57                   push edi
// 00709a77  8b742418             mov esi, dword ptr [esp + 0x18]
// 00709a7b  6a08                 push 8
// 00709a7d  56                   push esi
// 00709a7e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00709a86  e8b5901200           call 0x832b40
// 00709a8b  8bf8                 mov edi, eax
// 00709a8d  83c408               add esp, 8
// 00709a90  85ff                 test edi, edi
// 00709a92  7421                 je 0x709ab5
// 00709a94  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00709a98  8907                 mov dword ptr [edi], eax
// 00709a9a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00709a9e  894f04               mov dword ptr [edi + 4], ecx
// 00709aa1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00709aa5  85c0                 test eax, eax
// 00709aa7  740c                 je 0x709ab5
// 00709aa9  83c004               add eax, 4
// 00709aac  ba01000000           mov edx, 1
// 00709ab1  f00fc110             lock xadd dword ptr [eax], edx
// 00709ab5  a1589eda00           mov eax, dword ptr [0xda9e58]
// 00709aba  50                   push eax
// 00709abb  68f0d8ffff           push 0xffffd8f0
// 00709ac0  56                   push esi
// 00709ac1  e87a881200           call 0x832340
// 00709ac6  6afe                 push -2
// 00709ac8  56                   push esi
// 00709ac9  e8028c1200           call 0x8326d0
// 00709ace  8b742434             mov esi, dword ptr [esp + 0x34]
// 00709ad2  83c414               add esp, 0x14
// 00709ad5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00709add  85f6                 test esi, esi
// 00709adf  742a                 je 0x709b0b
// 00709ae1  8d4e04               lea ecx, [esi + 4]
// 00709ae4  83caff               or edx, 0xffffffff
// 00709ae7  f00fc111             lock xadd dword ptr [ecx], edx
// 00709aeb  751e                 jne 0x709b0b
// 00709aed  8b06                 mov eax, dword ptr [esi]
// 00709aef  8b5004               mov edx, dword ptr [eax + 4]
// 00709af2  8bce                 mov ecx, esi
// 00709af4  ffd2                 call edx
// 00709af6  8d4608               lea eax, [esi + 8]
// 00709af9  83c9ff               or ecx, 0xffffffff
// 00709afc  f00fc108             lock xadd dword ptr [eax], ecx
// 00709b00  7509                 jne 0x709b0b
// 00709b02  8b16                 mov edx, dword ptr [esi]
// 00709b04  8b4208               mov eax, dword ptr [edx + 8]
// 00709b07  8bce                 mov ecx, esi
// 00709b09  ffd0                 call eax
// 00709b0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00709b0f  8bc7                 mov eax, edi
// 00709b11  5f                   pop edi
// 00709b12  64890d00000000       mov dword ptr fs:[0], ecx
// 00709b19  5e                   pop esi
// 00709b1a  83c40c               add esp, 0xc
// 00709b1d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
