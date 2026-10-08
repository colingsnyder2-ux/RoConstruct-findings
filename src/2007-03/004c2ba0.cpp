// roc 2007-03 004c2ba0  unit: seg_004c0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2ba0
//
// 004c2ba0  6aff                 push -1
// 004c2ba2  68e9c87500           push 0x75c8e9
// 004c2ba7  64a100000000         mov eax, dword ptr fs:[0]
// 004c2bad  50                   push eax
// 004c2bae  64892500000000       mov dword ptr fs:[0], esp
// 004c2bb5  83ec10               sub esp, 0x10
// 004c2bb8  53                   push ebx
// 004c2bb9  33db                 xor ebx, ebx
// 004c2bbb  895c2404             mov dword ptr [esp + 4], ebx
// 004c2bbf  56                   push esi
// 004c2bc0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004c2bc4  8b06                 mov eax, dword ptr [esi]
// 004c2bc6  8b4014               mov eax, dword ptr [eax + 0x14]
// 004c2bc9  3bc3                 cmp eax, ebx
// 004c2bcb  57                   push edi
// 004c2bcc  8bf9                 mov edi, ecx
// 004c2bce  7405                 je 0x4c2bd5
// 004c2bd0  395808               cmp dword ptr [eax + 8], ebx
// 004c2bd3  7521                 jne 0x4c2bf6
// 004c2bd5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c2bd9  895804               mov dword ptr [eax + 4], ebx
// 004c2bdc  895808               mov dword ptr [eax + 8], ebx
// 004c2bdf  88580c               mov byte ptr [eax + 0xc], bl
// 004c2be2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c2be6  64890d00000000       mov dword ptr fs:[0], ecx
// 004c2bed  5f                   pop edi
// 004c2bee  5e                   pop esi
// 004c2bef  5b                   pop ebx
// 004c2bf0  83c41c               add esp, 0x1c
// 004c2bf3  c20c00               ret 0xc
// 004c2bf6  8d4608               lea eax, [esi + 8]
// 004c2bf9  50                   push eax
// 004c2bfa  8d4c2434             lea ecx, [esp + 0x34]
// 004c2bfe  e85dfcffff           call 0x4c2860
// 004c2c03  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004c2c07  51                   push ecx
// 004c2c08  83ec08               sub esp, 8
// 004c2c0b  8bd4                 mov edx, esp
// 004c2c0d  89642440             mov dword ptr [esp + 0x40], esp
// 004c2c11  52                   push edx
// 004c2c12  8bce                 mov ecx, esi
// 004c2c14  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004c2c1c  e82f62f5ff           call 0x418e50
// 004c2c21  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004c2c25  895c2420             mov dword ptr [esp + 0x20], ebx
// 004c2c29  895c2424             mov dword ptr [esp + 0x24], ebx
// 004c2c2d  8b0f                 mov ecx, dword ptr [edi]
// 004c2c2f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004c2c33  8d44241c             lea eax, [esp + 0x1c]
// 004c2c37  50                   push eax
// 004c2c38  8d542440             lea edx, [esp + 0x40]
// 004c2c3c  52                   push edx
// 004c2c3d  57                   push edi
// 004c2c3e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004c2c43  e8c84d2600           call 0x727a10
// 004c2c48  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c2c4c  3bc3                 cmp eax, ebx
// 004c2c4e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004c2c56  c644242401           mov byte ptr [esp + 0x24], 1
// 004c2c5b  742c                 je 0x4c2c89
// 004c2c5d  8bf0                 mov esi, eax
// 004c2c5f  83c004               add eax, 4
// 004c2c62  83c9ff               or ecx, 0xffffffff
// 004c2c65  f00fc108             lock xadd dword ptr [eax], ecx
// 004c2c69  751e                 jne 0x4c2c89
// 004c2c6b  8b16                 mov edx, dword ptr [esi]
// 004c2c6d  8b4204               mov eax, dword ptr [edx + 4]
// 004c2c70  8bce                 mov ecx, esi
// 004c2c72  ffd0                 call eax
// 004c2c74  8d4e08               lea ecx, [esi + 8]
// 004c2c77  83caff               or edx, 0xffffffff
// 004c2c7a  f00fc111             lock xadd dword ptr [ecx], edx
// 004c2c7e  7509                 jne 0x4c2c89
// 004c2c80  8b06                 mov eax, dword ptr [esi]
// 004c2c82  8b5008               mov edx, dword ptr [eax + 8]
// 004c2c85  8bce                 mov ecx, esi
// 004c2c87  ffd2                 call edx
// 004c2c89  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004c2c8d  3bcb                 cmp ecx, ebx
// 004c2c8f  885c2424             mov byte ptr [esp + 0x24], bl
// 004c2c93  7408                 je 0x4c2c9d
// 004c2c95  8b01                 mov eax, dword ptr [ecx]
// 004c2c97  8b10                 mov edx, dword ptr [eax]
// 004c2c99  6a01                 push 1
// 004c2c9b  ffd2                 call edx
// 004c2c9d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c2ca1  8bc7                 mov eax, edi
// 004c2ca3  5f                   pop edi
// 004c2ca4  5e                   pop esi
// 004c2ca5  64890d00000000       mov dword ptr fs:[0], ecx
// 004c2cac  5b                   pop ebx
// 004c2cad  83c41c               add esp, 0x1c
// 004c2cb0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
