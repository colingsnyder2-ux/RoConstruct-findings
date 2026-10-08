// roc 2007-03 00531a50  unit: seg_00530000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00531a50
//
// 00531a50  6aff                 push -1
// 00531a52  68e9c87500           push 0x75c8e9
// 00531a57  64a100000000         mov eax, dword ptr fs:[0]
// 00531a5d  50                   push eax
// 00531a5e  64892500000000       mov dword ptr fs:[0], esp
// 00531a65  83ec10               sub esp, 0x10
// 00531a68  53                   push ebx
// 00531a69  33db                 xor ebx, ebx
// 00531a6b  895c2404             mov dword ptr [esp + 4], ebx
// 00531a6f  56                   push esi
// 00531a70  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00531a74  8b06                 mov eax, dword ptr [esi]
// 00531a76  8b4014               mov eax, dword ptr [eax + 0x14]
// 00531a79  3bc3                 cmp eax, ebx
// 00531a7b  57                   push edi
// 00531a7c  8bf9                 mov edi, ecx
// 00531a7e  7405                 je 0x531a85
// 00531a80  395808               cmp dword ptr [eax + 8], ebx
// 00531a83  7521                 jne 0x531aa6
// 00531a85  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00531a89  895804               mov dword ptr [eax + 4], ebx
// 00531a8c  895808               mov dword ptr [eax + 8], ebx
// 00531a8f  88580c               mov byte ptr [eax + 0xc], bl
// 00531a92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531a96  64890d00000000       mov dword ptr fs:[0], ecx
// 00531a9d  5f                   pop edi
// 00531a9e  5e                   pop esi
// 00531a9f  5b                   pop ebx
// 00531aa0  83c41c               add esp, 0x1c
// 00531aa3  c20c00               ret 0xc
// 00531aa6  8d4608               lea eax, [esi + 8]
// 00531aa9  50                   push eax
// 00531aaa  8d4c2434             lea ecx, [esp + 0x34]
// 00531aae  e83dffffff           call 0x5319f0
// 00531ab3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00531ab7  51                   push ecx
// 00531ab8  83ec08               sub esp, 8
// 00531abb  8bd4                 mov edx, esp
// 00531abd  89642440             mov dword ptr [esp + 0x40], esp
// 00531ac1  52                   push edx
// 00531ac2  8bce                 mov ecx, esi
// 00531ac4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00531acc  e87f73eeff           call 0x418e50
// 00531ad1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00531ad5  895c2420             mov dword ptr [esp + 0x20], ebx
// 00531ad9  895c2424             mov dword ptr [esp + 0x24], ebx
// 00531add  8b0f                 mov ecx, dword ptr [edi]
// 00531adf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00531ae3  8d44241c             lea eax, [esp + 0x1c]
// 00531ae7  50                   push eax
// 00531ae8  8d542440             lea edx, [esp + 0x40]
// 00531aec  52                   push edx
// 00531aed  57                   push edi
// 00531aee  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00531af3  e8185f1f00           call 0x727a10
// 00531af8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00531afc  3bc3                 cmp eax, ebx
// 00531afe  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00531b06  c644242401           mov byte ptr [esp + 0x24], 1
// 00531b0b  742c                 je 0x531b39
// 00531b0d  8bf0                 mov esi, eax
// 00531b0f  83c004               add eax, 4
// 00531b12  83c9ff               or ecx, 0xffffffff
// 00531b15  f00fc108             lock xadd dword ptr [eax], ecx
// 00531b19  751e                 jne 0x531b39
// 00531b1b  8b16                 mov edx, dword ptr [esi]
// 00531b1d  8b4204               mov eax, dword ptr [edx + 4]
// 00531b20  8bce                 mov ecx, esi
// 00531b22  ffd0                 call eax
// 00531b24  8d4e08               lea ecx, [esi + 8]
// 00531b27  83caff               or edx, 0xffffffff
// 00531b2a  f00fc111             lock xadd dword ptr [ecx], edx
// 00531b2e  7509                 jne 0x531b39
// 00531b30  8b06                 mov eax, dword ptr [esi]
// 00531b32  8b5008               mov edx, dword ptr [eax + 8]
// 00531b35  8bce                 mov ecx, esi
// 00531b37  ffd2                 call edx
// 00531b39  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00531b3d  3bcb                 cmp ecx, ebx
// 00531b3f  885c2424             mov byte ptr [esp + 0x24], bl
// 00531b43  7408                 je 0x531b4d
// 00531b45  8b01                 mov eax, dword ptr [ecx]
// 00531b47  8b10                 mov edx, dword ptr [eax]
// 00531b49  6a01                 push 1
// 00531b4b  ffd2                 call edx
// 00531b4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531b51  8bc7                 mov eax, edi
// 00531b53  5f                   pop edi
// 00531b54  5e                   pop esi
// 00531b55  64890d00000000       mov dword ptr fs:[0], ecx
// 00531b5c  5b                   pop ebx
// 00531b5d  83c41c               add esp, 0x1c
// 00531b60  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
