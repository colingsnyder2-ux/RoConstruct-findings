// roc 2008-06 00633960  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633960
//
// 00633960  6aff                 push -1
// 00633962  68596f7c00           push 0x7c6f59
// 00633967  64a100000000         mov eax, dword ptr fs:[0]
// 0063396d  50                   push eax
// 0063396e  64892500000000       mov dword ptr fs:[0], esp
// 00633975  83ec10               sub esp, 0x10
// 00633978  53                   push ebx
// 00633979  33db                 xor ebx, ebx
// 0063397b  895c2404             mov dword ptr [esp + 4], ebx
// 0063397f  56                   push esi
// 00633980  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00633984  8b06                 mov eax, dword ptr [esi]
// 00633986  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00633989  57                   push edi
// 0063398a  8bf9                 mov edi, ecx
// 0063398c  3bc3                 cmp eax, ebx
// 0063398e  7405                 je 0x633995
// 00633990  395808               cmp dword ptr [eax + 8], ebx
// 00633993  7521                 jne 0x6339b6
// 00633995  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00633999  895804               mov dword ptr [eax + 4], ebx
// 0063399c  895808               mov dword ptr [eax + 8], ebx
// 0063399f  88580c               mov byte ptr [eax + 0xc], bl
// 006339a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006339a6  64890d00000000       mov dword ptr fs:[0], ecx
// 006339ad  5f                   pop edi
// 006339ae  5e                   pop esi
// 006339af  5b                   pop ebx
// 006339b0  83c41c               add esp, 0x1c
// 006339b3  c20c00               ret 0xc
// 006339b6  8d4608               lea eax, [esi + 8]
// 006339b9  50                   push eax
// 006339ba  8d4c2434             lea ecx, [esp + 0x34]
// 006339be  e83dffffff           call 0x633900
// 006339c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006339c7  51                   push ecx
// 006339c8  83ec08               sub esp, 8
// 006339cb  8bd4                 mov edx, esp
// 006339cd  89642440             mov dword ptr [esp + 0x40], esp
// 006339d1  52                   push edx
// 006339d2  8bce                 mov ecx, esi
// 006339d4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006339dc  e8cfdbe5ff           call 0x4915b0
// 006339e1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006339e5  895c2420             mov dword ptr [esp + 0x20], ebx
// 006339e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 006339ed  8b0f                 mov ecx, dword ptr [edi]
// 006339ef  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006339f3  8d44241c             lea eax, [esp + 0x1c]
// 006339f7  50                   push eax
// 006339f8  8d542440             lea edx, [esp + 0x40]
// 006339fc  52                   push edx
// 006339fd  57                   push edi
// 006339fe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00633a03  e8f86ef3ff           call 0x56a900
// 00633a08  8b442418             mov eax, dword ptr [esp + 0x18]
// 00633a0c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00633a14  c644242401           mov byte ptr [esp + 0x24], 1
// 00633a19  3bc3                 cmp eax, ebx
// 00633a1b  742c                 je 0x633a49
// 00633a1d  8bf0                 mov esi, eax
// 00633a1f  83c004               add eax, 4
// 00633a22  83c9ff               or ecx, 0xffffffff
// 00633a25  f00fc108             lock xadd dword ptr [eax], ecx
// 00633a29  751e                 jne 0x633a49
// 00633a2b  8b16                 mov edx, dword ptr [esi]
// 00633a2d  8b4204               mov eax, dword ptr [edx + 4]
// 00633a30  8bce                 mov ecx, esi
// 00633a32  ffd0                 call eax
// 00633a34  8d4e08               lea ecx, [esi + 8]
// 00633a37  83caff               or edx, 0xffffffff
// 00633a3a  f00fc111             lock xadd dword ptr [ecx], edx
// 00633a3e  7509                 jne 0x633a49
// 00633a40  8b06                 mov eax, dword ptr [esi]
// 00633a42  8b5008               mov edx, dword ptr [eax + 8]
// 00633a45  8bce                 mov ecx, esi
// 00633a47  ffd2                 call edx
// 00633a49  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00633a4d  885c2424             mov byte ptr [esp + 0x24], bl
// 00633a51  3bcb                 cmp ecx, ebx
// 00633a53  7408                 je 0x633a5d
// 00633a55  8b01                 mov eax, dword ptr [ecx]
// 00633a57  8b10                 mov edx, dword ptr [eax]
// 00633a59  6a01                 push 1
// 00633a5b  ffd2                 call edx
// 00633a5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633a61  8bc7                 mov eax, edi
// 00633a63  5f                   pop edi
// 00633a64  5e                   pop esi
// 00633a65  64890d00000000       mov dword ptr fs:[0], ecx
// 00633a6c  5b                   pop ebx
// 00633a6d  83c41c               add esp, 0x1c
// 00633a70  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
