// roc 2007-08 005f28b0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f28b0
//
// 005f28b0  6aff                 push -1
// 005f28b2  68d9b57500           push 0x75b5d9
// 005f28b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f28bd  50                   push eax
// 005f28be  64892500000000       mov dword ptr fs:[0], esp
// 005f28c5  83ec10               sub esp, 0x10
// 005f28c8  53                   push ebx
// 005f28c9  33db                 xor ebx, ebx
// 005f28cb  895c2404             mov dword ptr [esp + 4], ebx
// 005f28cf  56                   push esi
// 005f28d0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f28d4  8b06                 mov eax, dword ptr [esi]
// 005f28d6  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f28d9  3bc3                 cmp eax, ebx
// 005f28db  57                   push edi
// 005f28dc  8bf9                 mov edi, ecx
// 005f28de  7405                 je 0x5f28e5
// 005f28e0  395808               cmp dword ptr [eax + 8], ebx
// 005f28e3  7521                 jne 0x5f2906
// 005f28e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f28e9  895804               mov dword ptr [eax + 4], ebx
// 005f28ec  895808               mov dword ptr [eax + 8], ebx
// 005f28ef  88580c               mov byte ptr [eax + 0xc], bl
// 005f28f2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f28f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005f28fd  5f                   pop edi
// 005f28fe  5e                   pop esi
// 005f28ff  5b                   pop ebx
// 005f2900  83c41c               add esp, 0x1c
// 005f2903  c20c00               ret 0xc
// 005f2906  8d4608               lea eax, [esi + 8]
// 005f2909  50                   push eax
// 005f290a  8d4c2434             lea ecx, [esp + 0x34]
// 005f290e  e83dffffff           call 0x5f2850
// 005f2913  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f2917  51                   push ecx
// 005f2918  83ec08               sub esp, 8
// 005f291b  8bd4                 mov edx, esp
// 005f291d  89642440             mov dword ptr [esp + 0x40], esp
// 005f2921  52                   push edx
// 005f2922  8bce                 mov ecx, esi
// 005f2924  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005f292c  e8bf4fe2ff           call 0x4178f0
// 005f2931  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f2935  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f2939  895c2424             mov dword ptr [esp + 0x24], ebx
// 005f293d  8b0f                 mov ecx, dword ptr [edi]
// 005f293f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005f2943  8d44241c             lea eax, [esp + 0x1c]
// 005f2947  50                   push eax
// 005f2948  8d542440             lea edx, [esp + 0x40]
// 005f294c  52                   push edx
// 005f294d  57                   push edi
// 005f294e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005f2953  e8c84a1300           call 0x727420
// 005f2958  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f295c  3bc3                 cmp eax, ebx
// 005f295e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f2966  c644242401           mov byte ptr [esp + 0x24], 1
// 005f296b  742c                 je 0x5f2999
// 005f296d  8bf0                 mov esi, eax
// 005f296f  83c004               add eax, 4
// 005f2972  83c9ff               or ecx, 0xffffffff
// 005f2975  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2979  751e                 jne 0x5f2999
// 005f297b  8b16                 mov edx, dword ptr [esi]
// 005f297d  8b4204               mov eax, dword ptr [edx + 4]
// 005f2980  8bce                 mov ecx, esi
// 005f2982  ffd0                 call eax
// 005f2984  8d4e08               lea ecx, [esi + 8]
// 005f2987  83caff               or edx, 0xffffffff
// 005f298a  f00fc111             lock xadd dword ptr [ecx], edx
// 005f298e  7509                 jne 0x5f2999
// 005f2990  8b06                 mov eax, dword ptr [esi]
// 005f2992  8b5008               mov edx, dword ptr [eax + 8]
// 005f2995  8bce                 mov ecx, esi
// 005f2997  ffd2                 call edx
// 005f2999  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f299d  3bcb                 cmp ecx, ebx
// 005f299f  885c2424             mov byte ptr [esp + 0x24], bl
// 005f29a3  7408                 je 0x5f29ad
// 005f29a5  8b01                 mov eax, dword ptr [ecx]
// 005f29a7  8b10                 mov edx, dword ptr [eax]
// 005f29a9  6a01                 push 1
// 005f29ab  ffd2                 call edx
// 005f29ad  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f29b1  8bc7                 mov eax, edi
// 005f29b3  5f                   pop edi
// 005f29b4  5e                   pop esi
// 005f29b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f29bc  5b                   pop ebx
// 005f29bd  83c41c               add esp, 0x1c
// 005f29c0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
