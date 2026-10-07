// roc 2012-06 006a4830  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a4830
//
// 006a4830  64a100000000         mov eax, dword ptr fs:[0]
// 006a4836  6aff                 push -1
// 006a4838  68e852ad00           push 0xad52e8
// 006a483d  50                   push eax
// 006a483e  64892500000000       mov dword ptr fs:[0], esp
// 006a4845  56                   push esi
// 006a4846  57                   push edi
// 006a4847  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a484b  6a08                 push 8
// 006a484d  56                   push esi
// 006a484e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a4856  e8e5e21800           call 0x832b40
// 006a485b  8bf8                 mov edi, eax
// 006a485d  83c408               add esp, 8
// 006a4860  85ff                 test edi, edi
// 006a4862  7421                 je 0x6a4885
// 006a4864  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a4868  8907                 mov dword ptr [edi], eax
// 006a486a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a486e  894f04               mov dword ptr [edi + 4], ecx
// 006a4871  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a4875  85c0                 test eax, eax
// 006a4877  740c                 je 0x6a4885
// 006a4879  83c004               add eax, 4
// 006a487c  ba01000000           mov edx, 1
// 006a4881  f00fc110             lock xadd dword ptr [eax], edx
// 006a4885  a17c0ede00           mov eax, dword ptr [0xde0e7c]
// 006a488a  50                   push eax
// 006a488b  68f0d8ffff           push 0xffffd8f0
// 006a4890  56                   push esi
// 006a4891  e8aada1800           call 0x832340
// 006a4896  6afe                 push -2
// 006a4898  56                   push esi
// 006a4899  e832de1800           call 0x8326d0
// 006a489e  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a48a2  83c414               add esp, 0x14
// 006a48a5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a48ad  85f6                 test esi, esi
// 006a48af  742a                 je 0x6a48db
// 006a48b1  8d4e04               lea ecx, [esi + 4]
// 006a48b4  83caff               or edx, 0xffffffff
// 006a48b7  f00fc111             lock xadd dword ptr [ecx], edx
// 006a48bb  751e                 jne 0x6a48db
// 006a48bd  8b06                 mov eax, dword ptr [esi]
// 006a48bf  8b5004               mov edx, dword ptr [eax + 4]
// 006a48c2  8bce                 mov ecx, esi
// 006a48c4  ffd2                 call edx
// 006a48c6  8d4608               lea eax, [esi + 8]
// 006a48c9  83c9ff               or ecx, 0xffffffff
// 006a48cc  f00fc108             lock xadd dword ptr [eax], ecx
// 006a48d0  7509                 jne 0x6a48db
// 006a48d2  8b16                 mov edx, dword ptr [esi]
// 006a48d4  8b4208               mov eax, dword ptr [edx + 8]
// 006a48d7  8bce                 mov ecx, esi
// 006a48d9  ffd0                 call eax
// 006a48db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a48df  8bc7                 mov eax, edi
// 006a48e1  5f                   pop edi
// 006a48e2  64890d00000000       mov dword ptr fs:[0], ecx
// 006a48e9  5e                   pop esi
// 006a48ea  83c40c               add esp, 0xc
// 006a48ed  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
