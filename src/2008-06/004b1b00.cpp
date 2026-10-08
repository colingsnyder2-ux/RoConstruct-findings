// roc 2008-06 004b1b00  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1b00
//
// 004b1b00  6aff                 push -1
// 004b1b02  68596f7c00           push 0x7c6f59
// 004b1b07  64a100000000         mov eax, dword ptr fs:[0]
// 004b1b0d  50                   push eax
// 004b1b0e  64892500000000       mov dword ptr fs:[0], esp
// 004b1b15  83ec10               sub esp, 0x10
// 004b1b18  53                   push ebx
// 004b1b19  33db                 xor ebx, ebx
// 004b1b1b  895c2404             mov dword ptr [esp + 4], ebx
// 004b1b1f  56                   push esi
// 004b1b20  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004b1b24  8b06                 mov eax, dword ptr [esi]
// 004b1b26  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004b1b29  57                   push edi
// 004b1b2a  8bf9                 mov edi, ecx
// 004b1b2c  3bc3                 cmp eax, ebx
// 004b1b2e  7405                 je 0x4b1b35
// 004b1b30  395808               cmp dword ptr [eax + 8], ebx
// 004b1b33  7521                 jne 0x4b1b56
// 004b1b35  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b1b39  895804               mov dword ptr [eax + 4], ebx
// 004b1b3c  895808               mov dword ptr [eax + 8], ebx
// 004b1b3f  88580c               mov byte ptr [eax + 0xc], bl
// 004b1b42  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b1b46  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1b4d  5f                   pop edi
// 004b1b4e  5e                   pop esi
// 004b1b4f  5b                   pop ebx
// 004b1b50  83c41c               add esp, 0x1c
// 004b1b53  c20c00               ret 0xc
// 004b1b56  8d4608               lea eax, [esi + 8]
// 004b1b59  50                   push eax
// 004b1b5a  8d4c2434             lea ecx, [esp + 0x34]
// 004b1b5e  e83dffffff           call 0x4b1aa0
// 004b1b63  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b1b67  51                   push ecx
// 004b1b68  83ec08               sub esp, 8
// 004b1b6b  8bd4                 mov edx, esp
// 004b1b6d  89642440             mov dword ptr [esp + 0x40], esp
// 004b1b71  52                   push edx
// 004b1b72  8bce                 mov ecx, esi
// 004b1b74  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004b1b7c  e82ffafdff           call 0x4915b0
// 004b1b81  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004b1b85  895c2420             mov dword ptr [esp + 0x20], ebx
// 004b1b89  895c2424             mov dword ptr [esp + 0x24], ebx
// 004b1b8d  8b0f                 mov ecx, dword ptr [edi]
// 004b1b8f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004b1b93  8d44241c             lea eax, [esp + 0x1c]
// 004b1b97  50                   push eax
// 004b1b98  8d542440             lea edx, [esp + 0x40]
// 004b1b9c  52                   push edx
// 004b1b9d  57                   push edi
// 004b1b9e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004b1ba3  e8588d0b00           call 0x56a900
// 004b1ba8  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b1bac  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004b1bb4  c644242401           mov byte ptr [esp + 0x24], 1
// 004b1bb9  3bc3                 cmp eax, ebx
// 004b1bbb  742c                 je 0x4b1be9
// 004b1bbd  8bf0                 mov esi, eax
// 004b1bbf  83c004               add eax, 4
// 004b1bc2  83c9ff               or ecx, 0xffffffff
// 004b1bc5  f00fc108             lock xadd dword ptr [eax], ecx
// 004b1bc9  751e                 jne 0x4b1be9
// 004b1bcb  8b16                 mov edx, dword ptr [esi]
// 004b1bcd  8b4204               mov eax, dword ptr [edx + 4]
// 004b1bd0  8bce                 mov ecx, esi
// 004b1bd2  ffd0                 call eax
// 004b1bd4  8d4e08               lea ecx, [esi + 8]
// 004b1bd7  83caff               or edx, 0xffffffff
// 004b1bda  f00fc111             lock xadd dword ptr [ecx], edx
// 004b1bde  7509                 jne 0x4b1be9
// 004b1be0  8b06                 mov eax, dword ptr [esi]
// 004b1be2  8b5008               mov edx, dword ptr [eax + 8]
// 004b1be5  8bce                 mov ecx, esi
// 004b1be7  ffd2                 call edx
// 004b1be9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b1bed  885c2424             mov byte ptr [esp + 0x24], bl
// 004b1bf1  3bcb                 cmp ecx, ebx
// 004b1bf3  7408                 je 0x4b1bfd
// 004b1bf5  8b01                 mov eax, dword ptr [ecx]
// 004b1bf7  8b10                 mov edx, dword ptr [eax]
// 004b1bf9  6a01                 push 1
// 004b1bfb  ffd2                 call edx
// 004b1bfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b1c01  8bc7                 mov eax, edi
// 004b1c03  5f                   pop edi
// 004b1c04  5e                   pop esi
// 004b1c05  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1c0c  5b                   pop ebx
// 004b1c0d  83c41c               add esp, 0x1c
// 004b1c10  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
