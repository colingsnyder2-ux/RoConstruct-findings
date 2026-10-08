// roc 2008-06 005560c0  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005560c0
//
// 005560c0  6aff                 push -1
// 005560c2  68596f7c00           push 0x7c6f59
// 005560c7  64a100000000         mov eax, dword ptr fs:[0]
// 005560cd  50                   push eax
// 005560ce  64892500000000       mov dword ptr fs:[0], esp
// 005560d5  83ec10               sub esp, 0x10
// 005560d8  53                   push ebx
// 005560d9  33db                 xor ebx, ebx
// 005560db  895c2404             mov dword ptr [esp + 4], ebx
// 005560df  56                   push esi
// 005560e0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005560e4  8b06                 mov eax, dword ptr [esi]
// 005560e6  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005560e9  57                   push edi
// 005560ea  8bf9                 mov edi, ecx
// 005560ec  3bc3                 cmp eax, ebx
// 005560ee  7405                 je 0x5560f5
// 005560f0  395808               cmp dword ptr [eax + 8], ebx
// 005560f3  7521                 jne 0x556116
// 005560f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005560f9  895804               mov dword ptr [eax + 4], ebx
// 005560fc  895808               mov dword ptr [eax + 8], ebx
// 005560ff  88580c               mov byte ptr [eax + 0xc], bl
// 00556102  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00556106  64890d00000000       mov dword ptr fs:[0], ecx
// 0055610d  5f                   pop edi
// 0055610e  5e                   pop esi
// 0055610f  5b                   pop ebx
// 00556110  83c41c               add esp, 0x1c
// 00556113  c20c00               ret 0xc
// 00556116  8d4608               lea eax, [esi + 8]
// 00556119  50                   push eax
// 0055611a  8d4c2434             lea ecx, [esp + 0x34]
// 0055611e  e83dffffff           call 0x556060
// 00556123  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00556127  51                   push ecx
// 00556128  83ec08               sub esp, 8
// 0055612b  8bd4                 mov edx, esp
// 0055612d  89642440             mov dword ptr [esp + 0x40], esp
// 00556131  52                   push edx
// 00556132  8bce                 mov ecx, esi
// 00556134  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0055613c  e86fb4f3ff           call 0x4915b0
// 00556141  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00556145  895c2420             mov dword ptr [esp + 0x20], ebx
// 00556149  895c2424             mov dword ptr [esp + 0x24], ebx
// 0055614d  8b0f                 mov ecx, dword ptr [edi]
// 0055614f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00556153  8d44241c             lea eax, [esp + 0x1c]
// 00556157  50                   push eax
// 00556158  8d542440             lea edx, [esp + 0x40]
// 0055615c  52                   push edx
// 0055615d  57                   push edi
// 0055615e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00556163  e898470100           call 0x56a900
// 00556168  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055616c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00556174  c644242401           mov byte ptr [esp + 0x24], 1
// 00556179  3bc3                 cmp eax, ebx
// 0055617b  742c                 je 0x5561a9
// 0055617d  8bf0                 mov esi, eax
// 0055617f  83c004               add eax, 4
// 00556182  83c9ff               or ecx, 0xffffffff
// 00556185  f00fc108             lock xadd dword ptr [eax], ecx
// 00556189  751e                 jne 0x5561a9
// 0055618b  8b16                 mov edx, dword ptr [esi]
// 0055618d  8b4204               mov eax, dword ptr [edx + 4]
// 00556190  8bce                 mov ecx, esi
// 00556192  ffd0                 call eax
// 00556194  8d4e08               lea ecx, [esi + 8]
// 00556197  83caff               or edx, 0xffffffff
// 0055619a  f00fc111             lock xadd dword ptr [ecx], edx
// 0055619e  7509                 jne 0x5561a9
// 005561a0  8b06                 mov eax, dword ptr [esi]
// 005561a2  8b5008               mov edx, dword ptr [eax + 8]
// 005561a5  8bce                 mov ecx, esi
// 005561a7  ffd2                 call edx
// 005561a9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005561ad  885c2424             mov byte ptr [esp + 0x24], bl
// 005561b1  3bcb                 cmp ecx, ebx
// 005561b3  7408                 je 0x5561bd
// 005561b5  8b01                 mov eax, dword ptr [ecx]
// 005561b7  8b10                 mov edx, dword ptr [eax]
// 005561b9  6a01                 push 1
// 005561bb  ffd2                 call edx
// 005561bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005561c1  8bc7                 mov eax, edi
// 005561c3  5f                   pop edi
// 005561c4  5e                   pop esi
// 005561c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005561cc  5b                   pop ebx
// 005561cd  83c41c               add esp, 0x1c
// 005561d0  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
