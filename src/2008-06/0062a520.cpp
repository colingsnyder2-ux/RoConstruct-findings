// roc 2008-06 0062a520  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a520
//
// 0062a520  6aff                 push -1
// 0062a522  68596f7c00           push 0x7c6f59
// 0062a527  64a100000000         mov eax, dword ptr fs:[0]
// 0062a52d  50                   push eax
// 0062a52e  64892500000000       mov dword ptr fs:[0], esp
// 0062a535  83ec10               sub esp, 0x10
// 0062a538  53                   push ebx
// 0062a539  33db                 xor ebx, ebx
// 0062a53b  895c2404             mov dword ptr [esp + 4], ebx
// 0062a53f  56                   push esi
// 0062a540  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0062a544  8b06                 mov eax, dword ptr [esi]
// 0062a546  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0062a549  57                   push edi
// 0062a54a  8bf9                 mov edi, ecx
// 0062a54c  3bc3                 cmp eax, ebx
// 0062a54e  7405                 je 0x62a555
// 0062a550  395808               cmp dword ptr [eax + 8], ebx
// 0062a553  7521                 jne 0x62a576
// 0062a555  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062a559  895804               mov dword ptr [eax + 4], ebx
// 0062a55c  895808               mov dword ptr [eax + 8], ebx
// 0062a55f  88580c               mov byte ptr [eax + 0xc], bl
// 0062a562  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062a566  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a56d  5f                   pop edi
// 0062a56e  5e                   pop esi
// 0062a56f  5b                   pop ebx
// 0062a570  83c41c               add esp, 0x1c
// 0062a573  c20c00               ret 0xc
// 0062a576  8d4608               lea eax, [esi + 8]
// 0062a579  50                   push eax
// 0062a57a  8d4c2434             lea ecx, [esp + 0x34]
// 0062a57e  e83dffffff           call 0x62a4c0
// 0062a583  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0062a587  51                   push ecx
// 0062a588  83ec08               sub esp, 8
// 0062a58b  8bd4                 mov edx, esp
// 0062a58d  89642440             mov dword ptr [esp + 0x40], esp
// 0062a591  52                   push edx
// 0062a592  8bce                 mov ecx, esi
// 0062a594  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0062a59c  e80f70e6ff           call 0x4915b0
// 0062a5a1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0062a5a5  895c2420             mov dword ptr [esp + 0x20], ebx
// 0062a5a9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0062a5ad  8b0f                 mov ecx, dword ptr [edi]
// 0062a5af  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0062a5b3  8d44241c             lea eax, [esp + 0x1c]
// 0062a5b7  50                   push eax
// 0062a5b8  8d542440             lea edx, [esp + 0x40]
// 0062a5bc  52                   push edx
// 0062a5bd  57                   push edi
// 0062a5be  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0062a5c3  e83803f4ff           call 0x56a900
// 0062a5c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062a5cc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0062a5d4  c644242401           mov byte ptr [esp + 0x24], 1
// 0062a5d9  3bc3                 cmp eax, ebx
// 0062a5db  742c                 je 0x62a609
// 0062a5dd  8bf0                 mov esi, eax
// 0062a5df  83c004               add eax, 4
// 0062a5e2  83c9ff               or ecx, 0xffffffff
// 0062a5e5  f00fc108             lock xadd dword ptr [eax], ecx
// 0062a5e9  751e                 jne 0x62a609
// 0062a5eb  8b16                 mov edx, dword ptr [esi]
// 0062a5ed  8b4204               mov eax, dword ptr [edx + 4]
// 0062a5f0  8bce                 mov ecx, esi
// 0062a5f2  ffd0                 call eax
// 0062a5f4  8d4e08               lea ecx, [esi + 8]
// 0062a5f7  83caff               or edx, 0xffffffff
// 0062a5fa  f00fc111             lock xadd dword ptr [ecx], edx
// 0062a5fe  7509                 jne 0x62a609
// 0062a600  8b06                 mov eax, dword ptr [esi]
// 0062a602  8b5008               mov edx, dword ptr [eax + 8]
// 0062a605  8bce                 mov ecx, esi
// 0062a607  ffd2                 call edx
// 0062a609  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062a60d  885c2424             mov byte ptr [esp + 0x24], bl
// 0062a611  3bcb                 cmp ecx, ebx
// 0062a613  7408                 je 0x62a61d
// 0062a615  8b01                 mov eax, dword ptr [ecx]
// 0062a617  8b10                 mov edx, dword ptr [eax]
// 0062a619  6a01                 push 1
// 0062a61b  ffd2                 call edx
// 0062a61d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062a621  8bc7                 mov eax, edi
// 0062a623  5f                   pop edi
// 0062a624  5e                   pop esi
// 0062a625  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a62c  5b                   pop ebx
// 0062a62d  83c41c               add esp, 0x1c
// 0062a630  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
