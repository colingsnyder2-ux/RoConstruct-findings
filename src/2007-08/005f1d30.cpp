// roc 2007-08 005f1d30  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1d30
//
// 005f1d30  6aff                 push -1
// 005f1d32  68d9b57500           push 0x75b5d9
// 005f1d37  64a100000000         mov eax, dword ptr fs:[0]
// 005f1d3d  50                   push eax
// 005f1d3e  64892500000000       mov dword ptr fs:[0], esp
// 005f1d45  83ec10               sub esp, 0x10
// 005f1d48  53                   push ebx
// 005f1d49  33db                 xor ebx, ebx
// 005f1d4b  895c2404             mov dword ptr [esp + 4], ebx
// 005f1d4f  56                   push esi
// 005f1d50  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f1d54  8b06                 mov eax, dword ptr [esi]
// 005f1d56  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f1d59  3bc3                 cmp eax, ebx
// 005f1d5b  57                   push edi
// 005f1d5c  8bf9                 mov edi, ecx
// 005f1d5e  7405                 je 0x5f1d65
// 005f1d60  395808               cmp dword ptr [eax + 8], ebx
// 005f1d63  7521                 jne 0x5f1d86
// 005f1d65  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f1d69  895804               mov dword ptr [eax + 4], ebx
// 005f1d6c  895808               mov dword ptr [eax + 8], ebx
// 005f1d6f  88580c               mov byte ptr [eax + 0xc], bl
// 005f1d72  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f1d76  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1d7d  5f                   pop edi
// 005f1d7e  5e                   pop esi
// 005f1d7f  5b                   pop ebx
// 005f1d80  83c41c               add esp, 0x1c
// 005f1d83  c20c00               ret 0xc
// 005f1d86  8d4608               lea eax, [esi + 8]
// 005f1d89  50                   push eax
// 005f1d8a  8d4c2434             lea ecx, [esp + 0x34]
// 005f1d8e  e83dffffff           call 0x5f1cd0
// 005f1d93  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f1d97  51                   push ecx
// 005f1d98  83ec08               sub esp, 8
// 005f1d9b  8bd4                 mov edx, esp
// 005f1d9d  89642440             mov dword ptr [esp + 0x40], esp
// 005f1da1  52                   push edx
// 005f1da2  8bce                 mov ecx, esi
// 005f1da4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005f1dac  e83f5be2ff           call 0x4178f0
// 005f1db1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f1db5  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f1db9  895c2424             mov dword ptr [esp + 0x24], ebx
// 005f1dbd  8b0f                 mov ecx, dword ptr [edi]
// 005f1dbf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005f1dc3  8d44241c             lea eax, [esp + 0x1c]
// 005f1dc7  50                   push eax
// 005f1dc8  8d542440             lea edx, [esp + 0x40]
// 005f1dcc  52                   push edx
// 005f1dcd  57                   push edi
// 005f1dce  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005f1dd3  e848561300           call 0x727420
// 005f1dd8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1ddc  3bc3                 cmp eax, ebx
// 005f1dde  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f1de6  c644242401           mov byte ptr [esp + 0x24], 1
// 005f1deb  742c                 je 0x5f1e19
// 005f1ded  8bf0                 mov esi, eax
// 005f1def  83c004               add eax, 4
// 005f1df2  83c9ff               or ecx, 0xffffffff
// 005f1df5  f00fc108             lock xadd dword ptr [eax], ecx
// 005f1df9  751e                 jne 0x5f1e19
// 005f1dfb  8b16                 mov edx, dword ptr [esi]
// 005f1dfd  8b4204               mov eax, dword ptr [edx + 4]
// 005f1e00  8bce                 mov ecx, esi
// 005f1e02  ffd0                 call eax
// 005f1e04  8d4e08               lea ecx, [esi + 8]
// 005f1e07  83caff               or edx, 0xffffffff
// 005f1e0a  f00fc111             lock xadd dword ptr [ecx], edx
// 005f1e0e  7509                 jne 0x5f1e19
// 005f1e10  8b06                 mov eax, dword ptr [esi]
// 005f1e12  8b5008               mov edx, dword ptr [eax + 8]
// 005f1e15  8bce                 mov ecx, esi
// 005f1e17  ffd2                 call edx
// 005f1e19  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f1e1d  3bcb                 cmp ecx, ebx
// 005f1e1f  885c2424             mov byte ptr [esp + 0x24], bl
// 005f1e23  7408                 je 0x5f1e2d
// 005f1e25  8b01                 mov eax, dword ptr [ecx]
// 005f1e27  8b10                 mov edx, dword ptr [eax]
// 005f1e29  6a01                 push 1
// 005f1e2b  ffd2                 call edx
// 005f1e2d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f1e31  8bc7                 mov eax, edi
// 005f1e33  5f                   pop edi
// 005f1e34  5e                   pop esi
// 005f1e35  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1e3c  5b                   pop ebx
// 005f1e3d  83c41c               add esp, 0x1c
// 005f1e40  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
