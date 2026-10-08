// roc 2007-08 0052e6d0  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e6d0
//
// 0052e6d0  6aff                 push -1
// 0052e6d2  68d9b57500           push 0x75b5d9
// 0052e6d7  64a100000000         mov eax, dword ptr fs:[0]
// 0052e6dd  50                   push eax
// 0052e6de  64892500000000       mov dword ptr fs:[0], esp
// 0052e6e5  83ec10               sub esp, 0x10
// 0052e6e8  53                   push ebx
// 0052e6e9  33db                 xor ebx, ebx
// 0052e6eb  895c2404             mov dword ptr [esp + 4], ebx
// 0052e6ef  56                   push esi
// 0052e6f0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0052e6f4  8b06                 mov eax, dword ptr [esi]
// 0052e6f6  8b4014               mov eax, dword ptr [eax + 0x14]
// 0052e6f9  3bc3                 cmp eax, ebx
// 0052e6fb  57                   push edi
// 0052e6fc  8bf9                 mov edi, ecx
// 0052e6fe  7405                 je 0x52e705
// 0052e700  395808               cmp dword ptr [eax + 8], ebx
// 0052e703  7521                 jne 0x52e726
// 0052e705  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052e709  895804               mov dword ptr [eax + 4], ebx
// 0052e70c  895808               mov dword ptr [eax + 8], ebx
// 0052e70f  88580c               mov byte ptr [eax + 0xc], bl
// 0052e712  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052e716  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e71d  5f                   pop edi
// 0052e71e  5e                   pop esi
// 0052e71f  5b                   pop ebx
// 0052e720  83c41c               add esp, 0x1c
// 0052e723  c20c00               ret 0xc
// 0052e726  8d4608               lea eax, [esi + 8]
// 0052e729  50                   push eax
// 0052e72a  8d4c2434             lea ecx, [esp + 0x34]
// 0052e72e  e83dffffff           call 0x52e670
// 0052e733  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052e737  51                   push ecx
// 0052e738  83ec08               sub esp, 8
// 0052e73b  8bd4                 mov edx, esp
// 0052e73d  89642440             mov dword ptr [esp + 0x40], esp
// 0052e741  52                   push edx
// 0052e742  8bce                 mov ecx, esi
// 0052e744  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0052e74c  e89f91eeff           call 0x4178f0
// 0052e751  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052e755  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052e759  895c2424             mov dword ptr [esp + 0x24], ebx
// 0052e75d  8b0f                 mov ecx, dword ptr [edi]
// 0052e75f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0052e763  8d44241c             lea eax, [esp + 0x1c]
// 0052e767  50                   push eax
// 0052e768  8d542440             lea edx, [esp + 0x40]
// 0052e76c  52                   push edx
// 0052e76d  57                   push edi
// 0052e76e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0052e773  e8a88c1f00           call 0x727420
// 0052e778  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052e77c  3bc3                 cmp eax, ebx
// 0052e77e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0052e786  c644242401           mov byte ptr [esp + 0x24], 1
// 0052e78b  742c                 je 0x52e7b9
// 0052e78d  8bf0                 mov esi, eax
// 0052e78f  83c004               add eax, 4
// 0052e792  83c9ff               or ecx, 0xffffffff
// 0052e795  f00fc108             lock xadd dword ptr [eax], ecx
// 0052e799  751e                 jne 0x52e7b9
// 0052e79b  8b16                 mov edx, dword ptr [esi]
// 0052e79d  8b4204               mov eax, dword ptr [edx + 4]
// 0052e7a0  8bce                 mov ecx, esi
// 0052e7a2  ffd0                 call eax
// 0052e7a4  8d4e08               lea ecx, [esi + 8]
// 0052e7a7  83caff               or edx, 0xffffffff
// 0052e7aa  f00fc111             lock xadd dword ptr [ecx], edx
// 0052e7ae  7509                 jne 0x52e7b9
// 0052e7b0  8b06                 mov eax, dword ptr [esi]
// 0052e7b2  8b5008               mov edx, dword ptr [eax + 8]
// 0052e7b5  8bce                 mov ecx, esi
// 0052e7b7  ffd2                 call edx
// 0052e7b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052e7bd  3bcb                 cmp ecx, ebx
// 0052e7bf  885c2424             mov byte ptr [esp + 0x24], bl
// 0052e7c3  7408                 je 0x52e7cd
// 0052e7c5  8b01                 mov eax, dword ptr [ecx]
// 0052e7c7  8b10                 mov edx, dword ptr [eax]
// 0052e7c9  6a01                 push 1
// 0052e7cb  ffd2                 call edx
// 0052e7cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052e7d1  8bc7                 mov eax, edi
// 0052e7d3  5f                   pop edi
// 0052e7d4  5e                   pop esi
// 0052e7d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e7dc  5b                   pop ebx
// 0052e7dd  83c41c               add esp, 0x1c
// 0052e7e0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
