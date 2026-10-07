// roc 2010-06 0060d5b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d5b0
//
// 0060d5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0060d5b6  6aff                 push -1
// 0060d5b8  68e8679900           push 0x9967e8
// 0060d5bd  50                   push eax
// 0060d5be  64892500000000       mov dword ptr fs:[0], esp
// 0060d5c5  56                   push esi
// 0060d5c6  57                   push edi
// 0060d5c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060d5cb  6a08                 push 8
// 0060d5cd  56                   push esi
// 0060d5ce  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060d5d6  e8c5491100           call 0x721fa0
// 0060d5db  8bf8                 mov edi, eax
// 0060d5dd  83c408               add esp, 8
// 0060d5e0  85ff                 test edi, edi
// 0060d5e2  7421                 je 0x60d605
// 0060d5e4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060d5e8  8907                 mov dword ptr [edi], eax
// 0060d5ea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060d5ee  894f04               mov dword ptr [edi + 4], ecx
// 0060d5f1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060d5f5  85c0                 test eax, eax
// 0060d5f7  740c                 je 0x60d605
// 0060d5f9  83c004               add eax, 4
// 0060d5fc  ba01000000           mov edx, 1
// 0060d601  f00fc110             lock xadd dword ptr [eax], edx
// 0060d605  a14c23be00           mov eax, dword ptr [0xbe234c]
// 0060d60a  50                   push eax
// 0060d60b  68f0d8ffff           push 0xffffd8f0
// 0060d610  56                   push esi
// 0060d611  e88a411100           call 0x7217a0
// 0060d616  6afe                 push -2
// 0060d618  56                   push esi
// 0060d619  e812451100           call 0x721b30
// 0060d61e  8b742434             mov esi, dword ptr [esp + 0x34]
// 0060d622  83c414               add esp, 0x14
// 0060d625  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0060d62d  85f6                 test esi, esi
// 0060d62f  742a                 je 0x60d65b
// 0060d631  8d4e04               lea ecx, [esi + 4]
// 0060d634  83caff               or edx, 0xffffffff
// 0060d637  f00fc111             lock xadd dword ptr [ecx], edx
// 0060d63b  751e                 jne 0x60d65b
// 0060d63d  8b06                 mov eax, dword ptr [esi]
// 0060d63f  8b5004               mov edx, dword ptr [eax + 4]
// 0060d642  8bce                 mov ecx, esi
// 0060d644  ffd2                 call edx
// 0060d646  8d4608               lea eax, [esi + 8]
// 0060d649  83c9ff               or ecx, 0xffffffff
// 0060d64c  f00fc108             lock xadd dword ptr [eax], ecx
// 0060d650  7509                 jne 0x60d65b
// 0060d652  8b16                 mov edx, dword ptr [esi]
// 0060d654  8b4208               mov eax, dword ptr [edx + 8]
// 0060d657  8bce                 mov ecx, esi
// 0060d659  ffd0                 call eax
// 0060d65b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060d65f  8bc7                 mov eax, edi
// 0060d661  5f                   pop edi
// 0060d662  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d669  5e                   pop esi
// 0060d66a  83c40c               add esp, 0xc
// 0060d66d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
