// roc 2007-08 005c48b0  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c48b0
//
// 005c48b0  6aff                 push -1
// 005c48b2  68b8987500           push 0x7598b8
// 005c48b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c48bd  50                   push eax
// 005c48be  64892500000000       mov dword ptr fs:[0], esp
// 005c48c5  83ec6c               sub esp, 0x6c
// 005c48c8  a188be8a00           mov eax, dword ptr [0x8abe88]
// 005c48cd  55                   push ebp
// 005c48ce  56                   push esi
// 005c48cf  57                   push edi
// 005c48d0  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 005c48d7  50                   push eax
// 005c48d8  6a01                 push 1
// 005c48da  57                   push edi
// 005c48db  e860a9ffff           call 0x5bf240
// 005c48e0  8b7004               mov esi, dword ptr [eax + 4]
// 005c48e3  8b28                 mov ebp, dword ptr [eax]
// 005c48e5  83c40c               add esp, 0xc
// 005c48e8  85f6                 test esi, esi
// 005c48ea  896c2410             mov dword ptr [esp + 0x10], ebp
// 005c48ee  89742414             mov dword ptr [esp + 0x14], esi
// 005c48f2  740c                 je 0x5c4900
// 005c48f4  8d4e04               lea ecx, [esi + 4]
// 005c48f7  ba01000000           mov edx, 1
// 005c48fc  f00fc111             lock xadd dword ptr [ecx], edx
// 005c4900  6a02                 push 2
// 005c4902  57                   push edi
// 005c4903  8d4c2430             lea ecx, [esp + 0x30]
// 005c4907  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 005c4912  e899fbffff           call 0x5c44b0
// 005c4917  6a01                 push 1
// 005c4919  83ec50               sub esp, 0x50
// 005c491c  8d44247c             lea eax, [esp + 0x7c]
// 005c4920  8bcc                 mov ecx, esp
// 005c4922  89642460             mov dword ptr [esp + 0x60], esp
// 005c4926  50                   push eax
// 005c4927  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 005c492f  e80cf8ffff           call 0x5c4140
// 005c4934  8d4c246c             lea ecx, [esp + 0x6c]
// 005c4938  51                   push ecx
// 005c4939  8bcd                 mov ecx, ebp
// 005c493b  e8e0feffff           call 0x5c4820
// 005c4940  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005c4944  50                   push eax
// 005c4945  c684248400000002     mov byte ptr [esp + 0x84], 2
// 005c494d  e89e3b1600           call 0x7284f0
// 005c4952  8d4c2418             lea ecx, [esp + 0x18]
// 005c4956  c684248000000001     mov byte ptr [esp + 0x80], 1
// 005c495e  e8fd3a1600           call 0x728460
// 005c4963  8b542428             mov edx, dword ptr [esp + 0x28]
// 005c4967  83ec10               sub esp, 0x10
// 005c496a  8bcc                 mov ecx, esp
// 005c496c  8964241c             mov dword ptr [esp + 0x1c], esp
// 005c4970  52                   push edx
// 005c4971  e8aa381600           call 0x728220
// 005c4976  57                   push edi
// 005c4977  e814edffff           call 0x5c3690
// 005c497c  83c414               add esp, 0x14
// 005c497f  8d4c2428             lea ecx, [esp + 0x28]
// 005c4983  c684248000000000     mov byte ptr [esp + 0x80], 0
// 005c498b  e840eeffff           call 0x5c37d0
// 005c4990  85f6                 test esi, esi
// 005c4992  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 005c499d  742a                 je 0x5c49c9
// 005c499f  8d4604               lea eax, [esi + 4]
// 005c49a2  83c9ff               or ecx, 0xffffffff
// 005c49a5  f00fc108             lock xadd dword ptr [eax], ecx
// 005c49a9  751e                 jne 0x5c49c9
// 005c49ab  8b16                 mov edx, dword ptr [esi]
// 005c49ad  8b4204               mov eax, dword ptr [edx + 4]
// 005c49b0  8bce                 mov ecx, esi
// 005c49b2  ffd0                 call eax
// 005c49b4  8d4e08               lea ecx, [esi + 8]
// 005c49b7  83caff               or edx, 0xffffffff
// 005c49ba  f00fc111             lock xadd dword ptr [ecx], edx
// 005c49be  7509                 jne 0x5c49c9
// 005c49c0  8b06                 mov eax, dword ptr [esi]
// 005c49c2  8b5008               mov edx, dword ptr [eax + 8]
// 005c49c5  8bce                 mov ecx, esi
// 005c49c7  ffd2                 call edx
// 005c49c9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 005c49cd  5f                   pop edi
// 005c49ce  5e                   pop esi
// 005c49cf  b801000000           mov eax, 1
// 005c49d4  64890d00000000       mov dword ptr fs:[0], ecx
// 005c49db  5d                   pop ebp
// 005c49dc  83c478               add esp, 0x78
// 005c49df  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?connect@SignalBridge@Lua@RBX@@SAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
