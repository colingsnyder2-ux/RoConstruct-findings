// roc 2007-08 005f2370  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2370
//
// 005f2370  6aff                 push -1
// 005f2372  68d9b57500           push 0x75b5d9
// 005f2377  64a100000000         mov eax, dword ptr fs:[0]
// 005f237d  50                   push eax
// 005f237e  64892500000000       mov dword ptr fs:[0], esp
// 005f2385  83ec10               sub esp, 0x10
// 005f2388  53                   push ebx
// 005f2389  33db                 xor ebx, ebx
// 005f238b  895c2404             mov dword ptr [esp + 4], ebx
// 005f238f  56                   push esi
// 005f2390  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f2394  8b06                 mov eax, dword ptr [esi]
// 005f2396  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f2399  3bc3                 cmp eax, ebx
// 005f239b  57                   push edi
// 005f239c  8bf9                 mov edi, ecx
// 005f239e  7405                 je 0x5f23a5
// 005f23a0  395808               cmp dword ptr [eax + 8], ebx
// 005f23a3  7521                 jne 0x5f23c6
// 005f23a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f23a9  895804               mov dword ptr [eax + 4], ebx
// 005f23ac  895808               mov dword ptr [eax + 8], ebx
// 005f23af  88580c               mov byte ptr [eax + 0xc], bl
// 005f23b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f23b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005f23bd  5f                   pop edi
// 005f23be  5e                   pop esi
// 005f23bf  5b                   pop ebx
// 005f23c0  83c41c               add esp, 0x1c
// 005f23c3  c20c00               ret 0xc
// 005f23c6  8d4608               lea eax, [esi + 8]
// 005f23c9  50                   push eax
// 005f23ca  8d4c2434             lea ecx, [esp + 0x34]
// 005f23ce  e83dffffff           call 0x5f2310
// 005f23d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f23d7  51                   push ecx
// 005f23d8  83ec08               sub esp, 8
// 005f23db  8bd4                 mov edx, esp
// 005f23dd  89642440             mov dword ptr [esp + 0x40], esp
// 005f23e1  52                   push edx
// 005f23e2  8bce                 mov ecx, esi
// 005f23e4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005f23ec  e8ff54e2ff           call 0x4178f0
// 005f23f1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f23f5  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f23f9  895c2424             mov dword ptr [esp + 0x24], ebx
// 005f23fd  8b0f                 mov ecx, dword ptr [edi]
// 005f23ff  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005f2403  8d44241c             lea eax, [esp + 0x1c]
// 005f2407  50                   push eax
// 005f2408  8d542440             lea edx, [esp + 0x40]
// 005f240c  52                   push edx
// 005f240d  57                   push edi
// 005f240e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005f2413  e808501300           call 0x727420
// 005f2418  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f241c  3bc3                 cmp eax, ebx
// 005f241e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f2426  c644242401           mov byte ptr [esp + 0x24], 1
// 005f242b  742c                 je 0x5f2459
// 005f242d  8bf0                 mov esi, eax
// 005f242f  83c004               add eax, 4
// 005f2432  83c9ff               or ecx, 0xffffffff
// 005f2435  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2439  751e                 jne 0x5f2459
// 005f243b  8b16                 mov edx, dword ptr [esi]
// 005f243d  8b4204               mov eax, dword ptr [edx + 4]
// 005f2440  8bce                 mov ecx, esi
// 005f2442  ffd0                 call eax
// 005f2444  8d4e08               lea ecx, [esi + 8]
// 005f2447  83caff               or edx, 0xffffffff
// 005f244a  f00fc111             lock xadd dword ptr [ecx], edx
// 005f244e  7509                 jne 0x5f2459
// 005f2450  8b06                 mov eax, dword ptr [esi]
// 005f2452  8b5008               mov edx, dword ptr [eax + 8]
// 005f2455  8bce                 mov ecx, esi
// 005f2457  ffd2                 call edx
// 005f2459  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f245d  3bcb                 cmp ecx, ebx
// 005f245f  885c2424             mov byte ptr [esp + 0x24], bl
// 005f2463  7408                 je 0x5f246d
// 005f2465  8b01                 mov eax, dword ptr [ecx]
// 005f2467  8b10                 mov edx, dword ptr [eax]
// 005f2469  6a01                 push 1
// 005f246b  ffd2                 call edx
// 005f246d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2471  8bc7                 mov eax, edi
// 005f2473  5f                   pop edi
// 005f2474  5e                   pop esi
// 005f2475  64890d00000000       mov dword ptr fs:[0], ecx
// 005f247c  5b                   pop ebx
// 005f247d  83c41c               add esp, 0x1c
// 005f2480  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
