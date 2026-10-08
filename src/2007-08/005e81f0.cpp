// roc 2007-08 005e81f0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e81f0
//
// 005e81f0  6aff                 push -1
// 005e81f2  68d9b57500           push 0x75b5d9
// 005e81f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e81fd  50                   push eax
// 005e81fe  64892500000000       mov dword ptr fs:[0], esp
// 005e8205  83ec10               sub esp, 0x10
// 005e8208  53                   push ebx
// 005e8209  33db                 xor ebx, ebx
// 005e820b  895c2404             mov dword ptr [esp + 4], ebx
// 005e820f  56                   push esi
// 005e8210  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e8214  8b06                 mov eax, dword ptr [esi]
// 005e8216  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e8219  3bc3                 cmp eax, ebx
// 005e821b  57                   push edi
// 005e821c  8bf9                 mov edi, ecx
// 005e821e  7405                 je 0x5e8225
// 005e8220  395808               cmp dword ptr [eax + 8], ebx
// 005e8223  7521                 jne 0x5e8246
// 005e8225  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e8229  895804               mov dword ptr [eax + 4], ebx
// 005e822c  895808               mov dword ptr [eax + 8], ebx
// 005e822f  88580c               mov byte ptr [eax + 0xc], bl
// 005e8232  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e8236  64890d00000000       mov dword ptr fs:[0], ecx
// 005e823d  5f                   pop edi
// 005e823e  5e                   pop esi
// 005e823f  5b                   pop ebx
// 005e8240  83c41c               add esp, 0x1c
// 005e8243  c20c00               ret 0xc
// 005e8246  8d4608               lea eax, [esi + 8]
// 005e8249  50                   push eax
// 005e824a  8d4c2434             lea ecx, [esp + 0x34]
// 005e824e  e83dffffff           call 0x5e8190
// 005e8253  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e8257  51                   push ecx
// 005e8258  83ec08               sub esp, 8
// 005e825b  8bd4                 mov edx, esp
// 005e825d  89642440             mov dword ptr [esp + 0x40], esp
// 005e8261  52                   push edx
// 005e8262  8bce                 mov ecx, esi
// 005e8264  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e826c  e87ff6e2ff           call 0x4178f0
// 005e8271  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e8275  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e8279  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e827d  8b0f                 mov ecx, dword ptr [edi]
// 005e827f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e8283  8d44241c             lea eax, [esp + 0x1c]
// 005e8287  50                   push eax
// 005e8288  8d542440             lea edx, [esp + 0x40]
// 005e828c  52                   push edx
// 005e828d  57                   push edi
// 005e828e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e8293  e888f11300           call 0x727420
// 005e8298  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e829c  3bc3                 cmp eax, ebx
// 005e829e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e82a6  c644242401           mov byte ptr [esp + 0x24], 1
// 005e82ab  742c                 je 0x5e82d9
// 005e82ad  8bf0                 mov esi, eax
// 005e82af  83c004               add eax, 4
// 005e82b2  83c9ff               or ecx, 0xffffffff
// 005e82b5  f00fc108             lock xadd dword ptr [eax], ecx
// 005e82b9  751e                 jne 0x5e82d9
// 005e82bb  8b16                 mov edx, dword ptr [esi]
// 005e82bd  8b4204               mov eax, dword ptr [edx + 4]
// 005e82c0  8bce                 mov ecx, esi
// 005e82c2  ffd0                 call eax
// 005e82c4  8d4e08               lea ecx, [esi + 8]
// 005e82c7  83caff               or edx, 0xffffffff
// 005e82ca  f00fc111             lock xadd dword ptr [ecx], edx
// 005e82ce  7509                 jne 0x5e82d9
// 005e82d0  8b06                 mov eax, dword ptr [esi]
// 005e82d2  8b5008               mov edx, dword ptr [eax + 8]
// 005e82d5  8bce                 mov ecx, esi
// 005e82d7  ffd2                 call edx
// 005e82d9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e82dd  3bcb                 cmp ecx, ebx
// 005e82df  885c2424             mov byte ptr [esp + 0x24], bl
// 005e82e3  7408                 je 0x5e82ed
// 005e82e5  8b01                 mov eax, dword ptr [ecx]
// 005e82e7  8b10                 mov edx, dword ptr [eax]
// 005e82e9  6a01                 push 1
// 005e82eb  ffd2                 call edx
// 005e82ed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e82f1  8bc7                 mov eax, edi
// 005e82f3  5f                   pop edi
// 005e82f4  5e                   pop esi
// 005e82f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e82fc  5b                   pop ebx
// 005e82fd  83c41c               add esp, 0x1c
// 005e8300  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
