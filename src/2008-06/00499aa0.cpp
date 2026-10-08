// roc 2008-06 00499aa0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499aa0
//
// 00499aa0  6aff                 push -1
// 00499aa2  68596f7c00           push 0x7c6f59
// 00499aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00499aad  50                   push eax
// 00499aae  64892500000000       mov dword ptr fs:[0], esp
// 00499ab5  83ec10               sub esp, 0x10
// 00499ab8  53                   push ebx
// 00499ab9  33db                 xor ebx, ebx
// 00499abb  895c2404             mov dword ptr [esp + 4], ebx
// 00499abf  56                   push esi
// 00499ac0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00499ac4  8b06                 mov eax, dword ptr [esi]
// 00499ac6  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00499ac9  57                   push edi
// 00499aca  8bf9                 mov edi, ecx
// 00499acc  3bc3                 cmp eax, ebx
// 00499ace  7405                 je 0x499ad5
// 00499ad0  395808               cmp dword ptr [eax + 8], ebx
// 00499ad3  7521                 jne 0x499af6
// 00499ad5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00499ad9  895804               mov dword ptr [eax + 4], ebx
// 00499adc  895808               mov dword ptr [eax + 8], ebx
// 00499adf  88580c               mov byte ptr [eax + 0xc], bl
// 00499ae2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00499ae6  64890d00000000       mov dword ptr fs:[0], ecx
// 00499aed  5f                   pop edi
// 00499aee  5e                   pop esi
// 00499aef  5b                   pop ebx
// 00499af0  83c41c               add esp, 0x1c
// 00499af3  c20c00               ret 0xc
// 00499af6  8d4608               lea eax, [esi + 8]
// 00499af9  50                   push eax
// 00499afa  8d4c2434             lea ecx, [esp + 0x34]
// 00499afe  e83dffffff           call 0x499a40
// 00499b03  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00499b07  51                   push ecx
// 00499b08  83ec08               sub esp, 8
// 00499b0b  8bd4                 mov edx, esp
// 00499b0d  89642440             mov dword ptr [esp + 0x40], esp
// 00499b11  52                   push edx
// 00499b12  8bce                 mov ecx, esi
// 00499b14  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00499b1c  e88f7affff           call 0x4915b0
// 00499b21  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00499b25  895c2420             mov dword ptr [esp + 0x20], ebx
// 00499b29  895c2424             mov dword ptr [esp + 0x24], ebx
// 00499b2d  8b0f                 mov ecx, dword ptr [edi]
// 00499b2f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00499b33  8d44241c             lea eax, [esp + 0x1c]
// 00499b37  50                   push eax
// 00499b38  8d542440             lea edx, [esp + 0x40]
// 00499b3c  52                   push edx
// 00499b3d  57                   push edi
// 00499b3e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00499b43  e8b80d0d00           call 0x56a900
// 00499b48  8b442418             mov eax, dword ptr [esp + 0x18]
// 00499b4c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00499b54  c644242401           mov byte ptr [esp + 0x24], 1
// 00499b59  3bc3                 cmp eax, ebx
// 00499b5b  742c                 je 0x499b89
// 00499b5d  8bf0                 mov esi, eax
// 00499b5f  83c004               add eax, 4
// 00499b62  83c9ff               or ecx, 0xffffffff
// 00499b65  f00fc108             lock xadd dword ptr [eax], ecx
// 00499b69  751e                 jne 0x499b89
// 00499b6b  8b16                 mov edx, dword ptr [esi]
// 00499b6d  8b4204               mov eax, dword ptr [edx + 4]
// 00499b70  8bce                 mov ecx, esi
// 00499b72  ffd0                 call eax
// 00499b74  8d4e08               lea ecx, [esi + 8]
// 00499b77  83caff               or edx, 0xffffffff
// 00499b7a  f00fc111             lock xadd dword ptr [ecx], edx
// 00499b7e  7509                 jne 0x499b89
// 00499b80  8b06                 mov eax, dword ptr [esi]
// 00499b82  8b5008               mov edx, dword ptr [eax + 8]
// 00499b85  8bce                 mov ecx, esi
// 00499b87  ffd2                 call edx
// 00499b89  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00499b8d  885c2424             mov byte ptr [esp + 0x24], bl
// 00499b91  3bcb                 cmp ecx, ebx
// 00499b93  7408                 je 0x499b9d
// 00499b95  8b01                 mov eax, dword ptr [ecx]
// 00499b97  8b10                 mov edx, dword ptr [eax]
// 00499b99  6a01                 push 1
// 00499b9b  ffd2                 call edx
// 00499b9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00499ba1  8bc7                 mov eax, edi
// 00499ba3  5f                   pop edi
// 00499ba4  5e                   pop esi
// 00499ba5  64890d00000000       mov dword ptr fs:[0], ecx
// 00499bac  5b                   pop ebx
// 00499bad  83c41c               add esp, 0x1c
// 00499bb0  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
