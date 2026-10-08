// roc 2007-08 004cdf90  unit: 0RBX::View  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cdf90
//
// 004cdf90  6aff                 push -1
// 004cdf92  68d9b57500           push 0x75b5d9
// 004cdf97  64a100000000         mov eax, dword ptr fs:[0]
// 004cdf9d  50                   push eax
// 004cdf9e  64892500000000       mov dword ptr fs:[0], esp
// 004cdfa5  83ec10               sub esp, 0x10
// 004cdfa8  53                   push ebx
// 004cdfa9  33db                 xor ebx, ebx
// 004cdfab  895c2404             mov dword ptr [esp + 4], ebx
// 004cdfaf  56                   push esi
// 004cdfb0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004cdfb4  8b06                 mov eax, dword ptr [esi]
// 004cdfb6  8b4014               mov eax, dword ptr [eax + 0x14]
// 004cdfb9  3bc3                 cmp eax, ebx
// 004cdfbb  57                   push edi
// 004cdfbc  8bf9                 mov edi, ecx
// 004cdfbe  7405                 je 0x4cdfc5
// 004cdfc0  395808               cmp dword ptr [eax + 8], ebx
// 004cdfc3  7521                 jne 0x4cdfe6
// 004cdfc5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004cdfc9  895804               mov dword ptr [eax + 4], ebx
// 004cdfcc  895808               mov dword ptr [eax + 8], ebx
// 004cdfcf  88580c               mov byte ptr [eax + 0xc], bl
// 004cdfd2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cdfd6  64890d00000000       mov dword ptr fs:[0], ecx
// 004cdfdd  5f                   pop edi
// 004cdfde  5e                   pop esi
// 004cdfdf  5b                   pop ebx
// 004cdfe0  83c41c               add esp, 0x1c
// 004cdfe3  c20c00               ret 0xc
// 004cdfe6  8d4608               lea eax, [esi + 8]
// 004cdfe9  50                   push eax
// 004cdfea  8d4c2434             lea ecx, [esp + 0x34]
// 004cdfee  e8ddfcffff           call 0x4cdcd0
// 004cdff3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004cdff7  51                   push ecx
// 004cdff8  83ec08               sub esp, 8
// 004cdffb  8bd4                 mov edx, esp
// 004cdffd  89642440             mov dword ptr [esp + 0x40], esp
// 004ce001  52                   push edx
// 004ce002  8bce                 mov ecx, esi
// 004ce004  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004ce00c  e8df98f4ff           call 0x4178f0
// 004ce011  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004ce015  895c2420             mov dword ptr [esp + 0x20], ebx
// 004ce019  895c2424             mov dword ptr [esp + 0x24], ebx
// 004ce01d  8b0f                 mov ecx, dword ptr [edi]
// 004ce01f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004ce023  8d44241c             lea eax, [esp + 0x1c]
// 004ce027  50                   push eax
// 004ce028  8d542440             lea edx, [esp + 0x40]
// 004ce02c  52                   push edx
// 004ce02d  57                   push edi
// 004ce02e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004ce033  e8e8932500           call 0x727420
// 004ce038  8b442418             mov eax, dword ptr [esp + 0x18]
// 004ce03c  3bc3                 cmp eax, ebx
// 004ce03e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004ce046  c644242401           mov byte ptr [esp + 0x24], 1
// 004ce04b  742c                 je 0x4ce079
// 004ce04d  8bf0                 mov esi, eax
// 004ce04f  83c004               add eax, 4
// 004ce052  83c9ff               or ecx, 0xffffffff
// 004ce055  f00fc108             lock xadd dword ptr [eax], ecx
// 004ce059  751e                 jne 0x4ce079
// 004ce05b  8b16                 mov edx, dword ptr [esi]
// 004ce05d  8b4204               mov eax, dword ptr [edx + 4]
// 004ce060  8bce                 mov ecx, esi
// 004ce062  ffd0                 call eax
// 004ce064  8d4e08               lea ecx, [esi + 8]
// 004ce067  83caff               or edx, 0xffffffff
// 004ce06a  f00fc111             lock xadd dword ptr [ecx], edx
// 004ce06e  7509                 jne 0x4ce079
// 004ce070  8b06                 mov eax, dword ptr [esi]
// 004ce072  8b5008               mov edx, dword ptr [eax + 8]
// 004ce075  8bce                 mov ecx, esi
// 004ce077  ffd2                 call edx
// 004ce079  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004ce07d  3bcb                 cmp ecx, ebx
// 004ce07f  885c2424             mov byte ptr [esp + 0x24], bl
// 004ce083  7408                 je 0x4ce08d
// 004ce085  8b01                 mov eax, dword ptr [ecx]
// 004ce087  8b10                 mov edx, dword ptr [eax]
// 004ce089  6a01                 push 1
// 004ce08b  ffd2                 call edx
// 004ce08d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ce091  8bc7                 mov eax, edi
// 004ce093  5f                   pop edi
// 004ce094  5e                   pop esi
// 004ce095  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce09c  5b                   pop ebx
// 004ce09d  83c41c               add esp, 0x1c
// 004ce0a0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
