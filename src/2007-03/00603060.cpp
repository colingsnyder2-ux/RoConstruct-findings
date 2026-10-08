// roc 2007-03 00603060  unit: seg_00600000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00603060
//
// 00603060  6aff                 push -1
// 00603062  68e9c87500           push 0x75c8e9
// 00603067  64a100000000         mov eax, dword ptr fs:[0]
// 0060306d  50                   push eax
// 0060306e  64892500000000       mov dword ptr fs:[0], esp
// 00603075  83ec10               sub esp, 0x10
// 00603078  53                   push ebx
// 00603079  33db                 xor ebx, ebx
// 0060307b  895c2404             mov dword ptr [esp + 4], ebx
// 0060307f  56                   push esi
// 00603080  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00603084  8b06                 mov eax, dword ptr [esi]
// 00603086  8b4014               mov eax, dword ptr [eax + 0x14]
// 00603089  3bc3                 cmp eax, ebx
// 0060308b  57                   push edi
// 0060308c  8bf9                 mov edi, ecx
// 0060308e  7405                 je 0x603095
// 00603090  395808               cmp dword ptr [eax + 8], ebx
// 00603093  7521                 jne 0x6030b6
// 00603095  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00603099  895804               mov dword ptr [eax + 4], ebx
// 0060309c  895808               mov dword ptr [eax + 8], ebx
// 0060309f  88580c               mov byte ptr [eax + 0xc], bl
// 006030a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006030a6  64890d00000000       mov dword ptr fs:[0], ecx
// 006030ad  5f                   pop edi
// 006030ae  5e                   pop esi
// 006030af  5b                   pop ebx
// 006030b0  83c41c               add esp, 0x1c
// 006030b3  c20c00               ret 0xc
// 006030b6  8d4608               lea eax, [esi + 8]
// 006030b9  50                   push eax
// 006030ba  8d4c2434             lea ecx, [esp + 0x34]
// 006030be  e83dffffff           call 0x603000
// 006030c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006030c7  51                   push ecx
// 006030c8  83ec08               sub esp, 8
// 006030cb  8bd4                 mov edx, esp
// 006030cd  89642440             mov dword ptr [esp + 0x40], esp
// 006030d1  52                   push edx
// 006030d2  8bce                 mov ecx, esi
// 006030d4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006030dc  e86f5de1ff           call 0x418e50
// 006030e1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006030e5  895c2420             mov dword ptr [esp + 0x20], ebx
// 006030e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 006030ed  8b0f                 mov ecx, dword ptr [edi]
// 006030ef  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006030f3  8d44241c             lea eax, [esp + 0x1c]
// 006030f7  50                   push eax
// 006030f8  8d542440             lea edx, [esp + 0x40]
// 006030fc  52                   push edx
// 006030fd  57                   push edi
// 006030fe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00603103  e808491200           call 0x727a10
// 00603108  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060310c  3bc3                 cmp eax, ebx
// 0060310e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00603116  c644242401           mov byte ptr [esp + 0x24], 1
// 0060311b  742c                 je 0x603149
// 0060311d  8bf0                 mov esi, eax
// 0060311f  83c004               add eax, 4
// 00603122  83c9ff               or ecx, 0xffffffff
// 00603125  f00fc108             lock xadd dword ptr [eax], ecx
// 00603129  751e                 jne 0x603149
// 0060312b  8b16                 mov edx, dword ptr [esi]
// 0060312d  8b4204               mov eax, dword ptr [edx + 4]
// 00603130  8bce                 mov ecx, esi
// 00603132  ffd0                 call eax
// 00603134  8d4e08               lea ecx, [esi + 8]
// 00603137  83caff               or edx, 0xffffffff
// 0060313a  f00fc111             lock xadd dword ptr [ecx], edx
// 0060313e  7509                 jne 0x603149
// 00603140  8b06                 mov eax, dword ptr [esi]
// 00603142  8b5008               mov edx, dword ptr [eax + 8]
// 00603145  8bce                 mov ecx, esi
// 00603147  ffd2                 call edx
// 00603149  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060314d  3bcb                 cmp ecx, ebx
// 0060314f  885c2424             mov byte ptr [esp + 0x24], bl
// 00603153  7408                 je 0x60315d
// 00603155  8b01                 mov eax, dword ptr [ecx]
// 00603157  8b10                 mov edx, dword ptr [eax]
// 00603159  6a01                 push 1
// 0060315b  ffd2                 call edx
// 0060315d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00603161  8bc7                 mov eax, edi
// 00603163  5f                   pop edi
// 00603164  5e                   pop esi
// 00603165  64890d00000000       mov dword ptr fs:[0], ecx
// 0060316c  5b                   pop ebx
// 0060316d  83c41c               add esp, 0x1c
// 00603170  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
