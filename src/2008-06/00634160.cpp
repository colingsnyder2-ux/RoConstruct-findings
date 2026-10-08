// roc 2008-06 00634160  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634160
//
// 00634160  6aff                 push -1
// 00634162  68596f7c00           push 0x7c6f59
// 00634167  64a100000000         mov eax, dword ptr fs:[0]
// 0063416d  50                   push eax
// 0063416e  64892500000000       mov dword ptr fs:[0], esp
// 00634175  83ec10               sub esp, 0x10
// 00634178  53                   push ebx
// 00634179  33db                 xor ebx, ebx
// 0063417b  895c2404             mov dword ptr [esp + 4], ebx
// 0063417f  56                   push esi
// 00634180  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00634184  8b06                 mov eax, dword ptr [esi]
// 00634186  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00634189  57                   push edi
// 0063418a  8bf9                 mov edi, ecx
// 0063418c  3bc3                 cmp eax, ebx
// 0063418e  7405                 je 0x634195
// 00634190  395808               cmp dword ptr [eax + 8], ebx
// 00634193  7521                 jne 0x6341b6
// 00634195  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00634199  895804               mov dword ptr [eax + 4], ebx
// 0063419c  895808               mov dword ptr [eax + 8], ebx
// 0063419f  88580c               mov byte ptr [eax + 0xc], bl
// 006341a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006341a6  64890d00000000       mov dword ptr fs:[0], ecx
// 006341ad  5f                   pop edi
// 006341ae  5e                   pop esi
// 006341af  5b                   pop ebx
// 006341b0  83c41c               add esp, 0x1c
// 006341b3  c20c00               ret 0xc
// 006341b6  8d4608               lea eax, [esi + 8]
// 006341b9  50                   push eax
// 006341ba  8d4c2434             lea ecx, [esp + 0x34]
// 006341be  e83dffffff           call 0x634100
// 006341c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006341c7  51                   push ecx
// 006341c8  83ec08               sub esp, 8
// 006341cb  8bd4                 mov edx, esp
// 006341cd  89642440             mov dword ptr [esp + 0x40], esp
// 006341d1  52                   push edx
// 006341d2  8bce                 mov ecx, esi
// 006341d4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006341dc  e8cfd3e5ff           call 0x4915b0
// 006341e1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006341e5  895c2420             mov dword ptr [esp + 0x20], ebx
// 006341e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 006341ed  8b0f                 mov ecx, dword ptr [edi]
// 006341ef  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006341f3  8d44241c             lea eax, [esp + 0x1c]
// 006341f7  50                   push eax
// 006341f8  8d542440             lea edx, [esp + 0x40]
// 006341fc  52                   push edx
// 006341fd  57                   push edi
// 006341fe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00634203  e8f866f3ff           call 0x56a900
// 00634208  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063420c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00634214  c644242401           mov byte ptr [esp + 0x24], 1
// 00634219  3bc3                 cmp eax, ebx
// 0063421b  742c                 je 0x634249
// 0063421d  8bf0                 mov esi, eax
// 0063421f  83c004               add eax, 4
// 00634222  83c9ff               or ecx, 0xffffffff
// 00634225  f00fc108             lock xadd dword ptr [eax], ecx
// 00634229  751e                 jne 0x634249
// 0063422b  8b16                 mov edx, dword ptr [esi]
// 0063422d  8b4204               mov eax, dword ptr [edx + 4]
// 00634230  8bce                 mov ecx, esi
// 00634232  ffd0                 call eax
// 00634234  8d4e08               lea ecx, [esi + 8]
// 00634237  83caff               or edx, 0xffffffff
// 0063423a  f00fc111             lock xadd dword ptr [ecx], edx
// 0063423e  7509                 jne 0x634249
// 00634240  8b06                 mov eax, dword ptr [esi]
// 00634242  8b5008               mov edx, dword ptr [eax + 8]
// 00634245  8bce                 mov ecx, esi
// 00634247  ffd2                 call edx
// 00634249  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063424d  885c2424             mov byte ptr [esp + 0x24], bl
// 00634251  3bcb                 cmp ecx, ebx
// 00634253  7408                 je 0x63425d
// 00634255  8b01                 mov eax, dword ptr [ecx]
// 00634257  8b10                 mov edx, dword ptr [eax]
// 00634259  6a01                 push 1
// 0063425b  ffd2                 call edx
// 0063425d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634261  8bc7                 mov eax, edi
// 00634263  5f                   pop edi
// 00634264  5e                   pop esi
// 00634265  64890d00000000       mov dword ptr fs:[0], ecx
// 0063426c  5b                   pop ebx
// 0063426d  83c41c               add esp, 0x1c
// 00634270  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
