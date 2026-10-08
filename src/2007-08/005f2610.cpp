// roc 2007-08 005f2610  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2610
//
// 005f2610  6aff                 push -1
// 005f2612  68d9b57500           push 0x75b5d9
// 005f2617  64a100000000         mov eax, dword ptr fs:[0]
// 005f261d  50                   push eax
// 005f261e  64892500000000       mov dword ptr fs:[0], esp
// 005f2625  83ec10               sub esp, 0x10
// 005f2628  53                   push ebx
// 005f2629  33db                 xor ebx, ebx
// 005f262b  895c2404             mov dword ptr [esp + 4], ebx
// 005f262f  56                   push esi
// 005f2630  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f2634  8b06                 mov eax, dword ptr [esi]
// 005f2636  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f2639  3bc3                 cmp eax, ebx
// 005f263b  57                   push edi
// 005f263c  8bf9                 mov edi, ecx
// 005f263e  7405                 je 0x5f2645
// 005f2640  395808               cmp dword ptr [eax + 8], ebx
// 005f2643  7521                 jne 0x5f2666
// 005f2645  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f2649  895804               mov dword ptr [eax + 4], ebx
// 005f264c  895808               mov dword ptr [eax + 8], ebx
// 005f264f  88580c               mov byte ptr [eax + 0xc], bl
// 005f2652  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2656  64890d00000000       mov dword ptr fs:[0], ecx
// 005f265d  5f                   pop edi
// 005f265e  5e                   pop esi
// 005f265f  5b                   pop ebx
// 005f2660  83c41c               add esp, 0x1c
// 005f2663  c20c00               ret 0xc
// 005f2666  8d4608               lea eax, [esi + 8]
// 005f2669  50                   push eax
// 005f266a  8d4c2434             lea ecx, [esp + 0x34]
// 005f266e  e83dffffff           call 0x5f25b0
// 005f2673  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f2677  51                   push ecx
// 005f2678  83ec08               sub esp, 8
// 005f267b  8bd4                 mov edx, esp
// 005f267d  89642440             mov dword ptr [esp + 0x40], esp
// 005f2681  52                   push edx
// 005f2682  8bce                 mov ecx, esi
// 005f2684  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005f268c  e85f52e2ff           call 0x4178f0
// 005f2691  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f2695  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f2699  895c2424             mov dword ptr [esp + 0x24], ebx
// 005f269d  8b0f                 mov ecx, dword ptr [edi]
// 005f269f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005f26a3  8d44241c             lea eax, [esp + 0x1c]
// 005f26a7  50                   push eax
// 005f26a8  8d542440             lea edx, [esp + 0x40]
// 005f26ac  52                   push edx
// 005f26ad  57                   push edi
// 005f26ae  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005f26b3  e8684d1300           call 0x727420
// 005f26b8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f26bc  3bc3                 cmp eax, ebx
// 005f26be  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f26c6  c644242401           mov byte ptr [esp + 0x24], 1
// 005f26cb  742c                 je 0x5f26f9
// 005f26cd  8bf0                 mov esi, eax
// 005f26cf  83c004               add eax, 4
// 005f26d2  83c9ff               or ecx, 0xffffffff
// 005f26d5  f00fc108             lock xadd dword ptr [eax], ecx
// 005f26d9  751e                 jne 0x5f26f9
// 005f26db  8b16                 mov edx, dword ptr [esi]
// 005f26dd  8b4204               mov eax, dword ptr [edx + 4]
// 005f26e0  8bce                 mov ecx, esi
// 005f26e2  ffd0                 call eax
// 005f26e4  8d4e08               lea ecx, [esi + 8]
// 005f26e7  83caff               or edx, 0xffffffff
// 005f26ea  f00fc111             lock xadd dword ptr [ecx], edx
// 005f26ee  7509                 jne 0x5f26f9
// 005f26f0  8b06                 mov eax, dword ptr [esi]
// 005f26f2  8b5008               mov edx, dword ptr [eax + 8]
// 005f26f5  8bce                 mov ecx, esi
// 005f26f7  ffd2                 call edx
// 005f26f9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f26fd  3bcb                 cmp ecx, ebx
// 005f26ff  885c2424             mov byte ptr [esp + 0x24], bl
// 005f2703  7408                 je 0x5f270d
// 005f2705  8b01                 mov eax, dword ptr [ecx]
// 005f2707  8b10                 mov edx, dword ptr [eax]
// 005f2709  6a01                 push 1
// 005f270b  ffd2                 call edx
// 005f270d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2711  8bc7                 mov eax, edi
// 005f2713  5f                   pop edi
// 005f2714  5e                   pop esi
// 005f2715  64890d00000000       mov dword ptr fs:[0], ecx
// 005f271c  5b                   pop ebx
// 005f271d  83c41c               add esp, 0x1c
// 005f2720  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
