// roc 2007-03 005e0c50  unit: seg_005e0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0c50
//
// 005e0c50  6aff                 push -1
// 005e0c52  68e9c87500           push 0x75c8e9
// 005e0c57  64a100000000         mov eax, dword ptr fs:[0]
// 005e0c5d  50                   push eax
// 005e0c5e  64892500000000       mov dword ptr fs:[0], esp
// 005e0c65  83ec10               sub esp, 0x10
// 005e0c68  53                   push ebx
// 005e0c69  33db                 xor ebx, ebx
// 005e0c6b  895c2404             mov dword ptr [esp + 4], ebx
// 005e0c6f  56                   push esi
// 005e0c70  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e0c74  8b06                 mov eax, dword ptr [esi]
// 005e0c76  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e0c79  3bc3                 cmp eax, ebx
// 005e0c7b  57                   push edi
// 005e0c7c  8bf9                 mov edi, ecx
// 005e0c7e  7405                 je 0x5e0c85
// 005e0c80  395808               cmp dword ptr [eax + 8], ebx
// 005e0c83  7521                 jne 0x5e0ca6
// 005e0c85  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0c89  895804               mov dword ptr [eax + 4], ebx
// 005e0c8c  895808               mov dword ptr [eax + 8], ebx
// 005e0c8f  88580c               mov byte ptr [eax + 0xc], bl
// 005e0c92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0c96  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0c9d  5f                   pop edi
// 005e0c9e  5e                   pop esi
// 005e0c9f  5b                   pop ebx
// 005e0ca0  83c41c               add esp, 0x1c
// 005e0ca3  c20c00               ret 0xc
// 005e0ca6  8d4608               lea eax, [esi + 8]
// 005e0ca9  50                   push eax
// 005e0caa  8d4c2434             lea ecx, [esp + 0x34]
// 005e0cae  e83dffffff           call 0x5e0bf0
// 005e0cb3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e0cb7  51                   push ecx
// 005e0cb8  83ec08               sub esp, 8
// 005e0cbb  8bd4                 mov edx, esp
// 005e0cbd  89642440             mov dword ptr [esp + 0x40], esp
// 005e0cc1  52                   push edx
// 005e0cc2  8bce                 mov ecx, esi
// 005e0cc4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e0ccc  e87f81e3ff           call 0x418e50
// 005e0cd1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e0cd5  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e0cd9  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e0cdd  8b0f                 mov ecx, dword ptr [edi]
// 005e0cdf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e0ce3  8d44241c             lea eax, [esp + 0x1c]
// 005e0ce7  50                   push eax
// 005e0ce8  8d542440             lea edx, [esp + 0x40]
// 005e0cec  52                   push edx
// 005e0ced  57                   push edi
// 005e0cee  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e0cf3  e8186d1400           call 0x727a10
// 005e0cf8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e0cfc  3bc3                 cmp eax, ebx
// 005e0cfe  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e0d06  c644242401           mov byte ptr [esp + 0x24], 1
// 005e0d0b  742c                 je 0x5e0d39
// 005e0d0d  8bf0                 mov esi, eax
// 005e0d0f  83c004               add eax, 4
// 005e0d12  83c9ff               or ecx, 0xffffffff
// 005e0d15  f00fc108             lock xadd dword ptr [eax], ecx
// 005e0d19  751e                 jne 0x5e0d39
// 005e0d1b  8b16                 mov edx, dword ptr [esi]
// 005e0d1d  8b4204               mov eax, dword ptr [edx + 4]
// 005e0d20  8bce                 mov ecx, esi
// 005e0d22  ffd0                 call eax
// 005e0d24  8d4e08               lea ecx, [esi + 8]
// 005e0d27  83caff               or edx, 0xffffffff
// 005e0d2a  f00fc111             lock xadd dword ptr [ecx], edx
// 005e0d2e  7509                 jne 0x5e0d39
// 005e0d30  8b06                 mov eax, dword ptr [esi]
// 005e0d32  8b5008               mov edx, dword ptr [eax + 8]
// 005e0d35  8bce                 mov ecx, esi
// 005e0d37  ffd2                 call edx
// 005e0d39  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e0d3d  3bcb                 cmp ecx, ebx
// 005e0d3f  885c2424             mov byte ptr [esp + 0x24], bl
// 005e0d43  7408                 je 0x5e0d4d
// 005e0d45  8b01                 mov eax, dword ptr [ecx]
// 005e0d47  8b10                 mov edx, dword ptr [eax]
// 005e0d49  6a01                 push 1
// 005e0d4b  ffd2                 call edx
// 005e0d4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0d51  8bc7                 mov eax, edi
// 005e0d53  5f                   pop edi
// 005e0d54  5e                   pop esi
// 005e0d55  64890d00000000       mov dword ptr fs:[0], ecx
// 005e0d5c  5b                   pop ebx
// 005e0d5d  83c41c               add esp, 0x1c
// 005e0d60  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
