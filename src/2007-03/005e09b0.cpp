// roc 2007-03 005e09b0  unit: seg_005e0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e09b0
//
// 005e09b0  6aff                 push -1
// 005e09b2  68e9c87500           push 0x75c8e9
// 005e09b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e09bd  50                   push eax
// 005e09be  64892500000000       mov dword ptr fs:[0], esp
// 005e09c5  83ec10               sub esp, 0x10
// 005e09c8  53                   push ebx
// 005e09c9  33db                 xor ebx, ebx
// 005e09cb  895c2404             mov dword ptr [esp + 4], ebx
// 005e09cf  56                   push esi
// 005e09d0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e09d4  8b06                 mov eax, dword ptr [esi]
// 005e09d6  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e09d9  3bc3                 cmp eax, ebx
// 005e09db  57                   push edi
// 005e09dc  8bf9                 mov edi, ecx
// 005e09de  7405                 je 0x5e09e5
// 005e09e0  395808               cmp dword ptr [eax + 8], ebx
// 005e09e3  7521                 jne 0x5e0a06
// 005e09e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e09e9  895804               mov dword ptr [eax + 4], ebx
// 005e09ec  895808               mov dword ptr [eax + 8], ebx
// 005e09ef  88580c               mov byte ptr [eax + 0xc], bl
// 005e09f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e09f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e09fd  5f                   pop edi
// 005e09fe  5e                   pop esi
// 005e09ff  5b                   pop ebx
// 005e0a00  83c41c               add esp, 0x1c
// 005e0a03  c20c00               ret 0xc
// 005e0a06  8d4608               lea eax, [esi + 8]
// 005e0a09  50                   push eax
// 005e0a0a  8d4c2434             lea ecx, [esp + 0x34]
// 005e0a0e  e83dffffff           call 0x5e0950
// 005e0a13  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e0a17  51                   push ecx
// 005e0a18  83ec08               sub esp, 8
// 005e0a1b  8bd4                 mov edx, esp
// 005e0a1d  89642440             mov dword ptr [esp + 0x40], esp
// 005e0a21  52                   push edx
// 005e0a22  8bce                 mov ecx, esi
// 005e0a24  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e0a2c  e81f84e3ff           call 0x418e50
// 005e0a31  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e0a35  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e0a39  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e0a3d  8b0f                 mov ecx, dword ptr [edi]
// 005e0a3f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e0a43  8d44241c             lea eax, [esp + 0x1c]
// 005e0a47  50                   push eax
// 005e0a48  8d542440             lea edx, [esp + 0x40]
// 005e0a4c  52                   push edx
// 005e0a4d  57                   push edi
// 005e0a4e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e0a53  e8b86f1400           call 0x727a10
// 005e0a58  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e0a5c  3bc3                 cmp eax, ebx
// 005e0a5e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e0a66  c644242401           mov byte ptr [esp + 0x24], 1
// 005e0a6b  742c                 je 0x5e0a99
// 005e0a6d  8bf0                 mov esi, eax
// 005e0a6f  83c004               add eax, 4
// 005e0a72  83c9ff               or ecx, 0xffffffff
// 005e0a75  f00fc108             lock xadd dword ptr [eax], ecx
// 005e0a79  751e                 jne 0x5e0a99
// 005e0a7b  8b16                 mov edx, dword ptr [esi]
// 005e0a7d  8b4204               mov eax, dword ptr [edx + 4]
// 005e0a80  8bce                 mov ecx, esi
// 005e0a82  ffd0                 call eax
// 005e0a84  8d4e08               lea ecx, [esi + 8]
// 005e0a87  83caff               or edx, 0xffffffff
// 005e0a8a  f00fc111             lock xadd dword ptr [ecx], edx
// 005e0a8e  7509                 jne 0x5e0a99
// 005e0a90  8b06                 mov eax, dword ptr [esi]
// 005e0a92  8b5008               mov edx, dword ptr [eax + 8]
// 005e0a95  8bce                 mov ecx, esi
// 005e0a97  ffd2                 call edx
// 005e0a99  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e0a9d  3bcb                 cmp ecx, ebx
// 005e0a9f  885c2424             mov byte ptr [esp + 0x24], bl
// 005e0aa3  7408                 je 0x5e0aad
// 005e0aa5  8b01                 mov eax, dword ptr [ecx]
// 005e0aa7  8b10                 mov edx, dword ptr [eax]
// 005e0aa9  6a01                 push 1
// 005e0aab  ffd2                 call edx
// 005e0aad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0ab1  8bc7                 mov eax, edi
// 005e0ab3  5f                   pop edi
// 005e0ab4  5e                   pop esi
// 005e0ab5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0abc  5b                   pop ebx
// 005e0abd  83c41c               add esp, 0x1c
// 005e0ac0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
