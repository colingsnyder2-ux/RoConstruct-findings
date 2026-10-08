// roc 2008-06 0048e170  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e170
//
// 0048e170  6aff                 push -1
// 0048e172  68596f7c00           push 0x7c6f59
// 0048e177  64a100000000         mov eax, dword ptr fs:[0]
// 0048e17d  50                   push eax
// 0048e17e  64892500000000       mov dword ptr fs:[0], esp
// 0048e185  83ec10               sub esp, 0x10
// 0048e188  53                   push ebx
// 0048e189  33db                 xor ebx, ebx
// 0048e18b  895c2404             mov dword ptr [esp + 4], ebx
// 0048e18f  56                   push esi
// 0048e190  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0048e194  8b06                 mov eax, dword ptr [esi]
// 0048e196  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0048e199  57                   push edi
// 0048e19a  8bf9                 mov edi, ecx
// 0048e19c  3bc3                 cmp eax, ebx
// 0048e19e  7405                 je 0x48e1a5
// 0048e1a0  395808               cmp dword ptr [eax + 8], ebx
// 0048e1a3  7521                 jne 0x48e1c6
// 0048e1a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048e1a9  895804               mov dword ptr [eax + 4], ebx
// 0048e1ac  895808               mov dword ptr [eax + 8], ebx
// 0048e1af  88580c               mov byte ptr [eax + 0xc], bl
// 0048e1b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048e1b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e1bd  5f                   pop edi
// 0048e1be  5e                   pop esi
// 0048e1bf  5b                   pop ebx
// 0048e1c0  83c41c               add esp, 0x1c
// 0048e1c3  c20c00               ret 0xc
// 0048e1c6  8d4608               lea eax, [esi + 8]
// 0048e1c9  50                   push eax
// 0048e1ca  8d4c2434             lea ecx, [esp + 0x34]
// 0048e1ce  e83dffffff           call 0x48e110
// 0048e1d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0048e1d7  51                   push ecx
// 0048e1d8  83ec08               sub esp, 8
// 0048e1db  8bd4                 mov edx, esp
// 0048e1dd  89642440             mov dword ptr [esp + 0x40], esp
// 0048e1e1  52                   push edx
// 0048e1e2  8bce                 mov ecx, esi
// 0048e1e4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0048e1ec  e8bf330000           call 0x4915b0
// 0048e1f1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0048e1f5  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048e1f9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0048e1fd  8b0f                 mov ecx, dword ptr [edi]
// 0048e1ff  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0048e203  8d44241c             lea eax, [esp + 0x1c]
// 0048e207  50                   push eax
// 0048e208  8d542440             lea edx, [esp + 0x40]
// 0048e20c  52                   push edx
// 0048e20d  57                   push edi
// 0048e20e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0048e213  e8e8c60d00           call 0x56a900
// 0048e218  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048e21c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0048e224  c644242401           mov byte ptr [esp + 0x24], 1
// 0048e229  3bc3                 cmp eax, ebx
// 0048e22b  742c                 je 0x48e259
// 0048e22d  8bf0                 mov esi, eax
// 0048e22f  83c004               add eax, 4
// 0048e232  83c9ff               or ecx, 0xffffffff
// 0048e235  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e239  751e                 jne 0x48e259
// 0048e23b  8b16                 mov edx, dword ptr [esi]
// 0048e23d  8b4204               mov eax, dword ptr [edx + 4]
// 0048e240  8bce                 mov ecx, esi
// 0048e242  ffd0                 call eax
// 0048e244  8d4e08               lea ecx, [esi + 8]
// 0048e247  83caff               or edx, 0xffffffff
// 0048e24a  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e24e  7509                 jne 0x48e259
// 0048e250  8b06                 mov eax, dword ptr [esi]
// 0048e252  8b5008               mov edx, dword ptr [eax + 8]
// 0048e255  8bce                 mov ecx, esi
// 0048e257  ffd2                 call edx
// 0048e259  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048e25d  885c2424             mov byte ptr [esp + 0x24], bl
// 0048e261  3bcb                 cmp ecx, ebx
// 0048e263  7408                 je 0x48e26d
// 0048e265  8b01                 mov eax, dword ptr [ecx]
// 0048e267  8b10                 mov edx, dword ptr [eax]
// 0048e269  6a01                 push 1
// 0048e26b  ffd2                 call edx
// 0048e26d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048e271  8bc7                 mov eax, edi
// 0048e273  5f                   pop edi
// 0048e274  5e                   pop esi
// 0048e275  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e27c  5b                   pop ebx
// 0048e27d  83c41c               add esp, 0x1c
// 0048e280  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
