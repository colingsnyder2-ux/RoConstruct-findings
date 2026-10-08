// roc 2008-06 005594c0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005594c0
//
// 005594c0  6aff                 push -1
// 005594c2  68596f7c00           push 0x7c6f59
// 005594c7  64a100000000         mov eax, dword ptr fs:[0]
// 005594cd  50                   push eax
// 005594ce  64892500000000       mov dword ptr fs:[0], esp
// 005594d5  83ec10               sub esp, 0x10
// 005594d8  53                   push ebx
// 005594d9  33db                 xor ebx, ebx
// 005594db  895c2404             mov dword ptr [esp + 4], ebx
// 005594df  56                   push esi
// 005594e0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005594e4  8b06                 mov eax, dword ptr [esi]
// 005594e6  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005594e9  57                   push edi
// 005594ea  8bf9                 mov edi, ecx
// 005594ec  3bc3                 cmp eax, ebx
// 005594ee  7405                 je 0x5594f5
// 005594f0  395808               cmp dword ptr [eax + 8], ebx
// 005594f3  7521                 jne 0x559516
// 005594f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005594f9  895804               mov dword ptr [eax + 4], ebx
// 005594fc  895808               mov dword ptr [eax + 8], ebx
// 005594ff  88580c               mov byte ptr [eax + 0xc], bl
// 00559502  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00559506  64890d00000000       mov dword ptr fs:[0], ecx
// 0055950d  5f                   pop edi
// 0055950e  5e                   pop esi
// 0055950f  5b                   pop ebx
// 00559510  83c41c               add esp, 0x1c
// 00559513  c20c00               ret 0xc
// 00559516  8d4608               lea eax, [esi + 8]
// 00559519  50                   push eax
// 0055951a  8d4c2434             lea ecx, [esp + 0x34]
// 0055951e  e8fd1cedff           call 0x42b220
// 00559523  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00559527  51                   push ecx
// 00559528  83ec08               sub esp, 8
// 0055952b  8bd4                 mov edx, esp
// 0055952d  89642440             mov dword ptr [esp + 0x40], esp
// 00559531  52                   push edx
// 00559532  8bce                 mov ecx, esi
// 00559534  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0055953c  e86f80f3ff           call 0x4915b0
// 00559541  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00559545  895c2420             mov dword ptr [esp + 0x20], ebx
// 00559549  895c2424             mov dword ptr [esp + 0x24], ebx
// 0055954d  8b0f                 mov ecx, dword ptr [edi]
// 0055954f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00559553  8d44241c             lea eax, [esp + 0x1c]
// 00559557  50                   push eax
// 00559558  8d542440             lea edx, [esp + 0x40]
// 0055955c  52                   push edx
// 0055955d  57                   push edi
// 0055955e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00559563  e898130100           call 0x56a900
// 00559568  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055956c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00559574  c644242401           mov byte ptr [esp + 0x24], 1
// 00559579  3bc3                 cmp eax, ebx
// 0055957b  742c                 je 0x5595a9
// 0055957d  8bf0                 mov esi, eax
// 0055957f  83c004               add eax, 4
// 00559582  83c9ff               or ecx, 0xffffffff
// 00559585  f00fc108             lock xadd dword ptr [eax], ecx
// 00559589  751e                 jne 0x5595a9
// 0055958b  8b16                 mov edx, dword ptr [esi]
// 0055958d  8b4204               mov eax, dword ptr [edx + 4]
// 00559590  8bce                 mov ecx, esi
// 00559592  ffd0                 call eax
// 00559594  8d4e08               lea ecx, [esi + 8]
// 00559597  83caff               or edx, 0xffffffff
// 0055959a  f00fc111             lock xadd dword ptr [ecx], edx
// 0055959e  7509                 jne 0x5595a9
// 005595a0  8b06                 mov eax, dword ptr [esi]
// 005595a2  8b5008               mov edx, dword ptr [eax + 8]
// 005595a5  8bce                 mov ecx, esi
// 005595a7  ffd2                 call edx
// 005595a9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005595ad  885c2424             mov byte ptr [esp + 0x24], bl
// 005595b1  3bcb                 cmp ecx, ebx
// 005595b3  7408                 je 0x5595bd
// 005595b5  8b01                 mov eax, dword ptr [ecx]
// 005595b7  8b10                 mov edx, dword ptr [eax]
// 005595b9  6a01                 push 1
// 005595bb  ffd2                 call edx
// 005595bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005595c1  8bc7                 mov eax, edi
// 005595c3  5f                   pop edi
// 005595c4  5e                   pop esi
// 005595c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005595cc  5b                   pop ebx
// 005595cd  83c41c               add esp, 0x1c
// 005595d0  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
