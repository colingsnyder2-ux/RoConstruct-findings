// roc 2008-06 0041ac20  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ac20
//
// 0041ac20  6aff                 push -1
// 0041ac22  68596f7c00           push 0x7c6f59
// 0041ac27  64a100000000         mov eax, dword ptr fs:[0]
// 0041ac2d  50                   push eax
// 0041ac2e  64892500000000       mov dword ptr fs:[0], esp
// 0041ac35  83ec10               sub esp, 0x10
// 0041ac38  53                   push ebx
// 0041ac39  33db                 xor ebx, ebx
// 0041ac3b  895c2404             mov dword ptr [esp + 4], ebx
// 0041ac3f  56                   push esi
// 0041ac40  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0041ac44  8b06                 mov eax, dword ptr [esi]
// 0041ac46  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0041ac49  57                   push edi
// 0041ac4a  8bf9                 mov edi, ecx
// 0041ac4c  3bc3                 cmp eax, ebx
// 0041ac4e  7405                 je 0x41ac55
// 0041ac50  395808               cmp dword ptr [eax + 8], ebx
// 0041ac53  7521                 jne 0x41ac76
// 0041ac55  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0041ac59  895804               mov dword ptr [eax + 4], ebx
// 0041ac5c  895808               mov dword ptr [eax + 8], ebx
// 0041ac5f  88580c               mov byte ptr [eax + 0xc], bl
// 0041ac62  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041ac66  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ac6d  5f                   pop edi
// 0041ac6e  5e                   pop esi
// 0041ac6f  5b                   pop ebx
// 0041ac70  83c41c               add esp, 0x1c
// 0041ac73  c20c00               ret 0xc
// 0041ac76  8d4608               lea eax, [esi + 8]
// 0041ac79  50                   push eax
// 0041ac7a  8d4c2434             lea ecx, [esp + 0x34]
// 0041ac7e  e8bdfeffff           call 0x41ab40
// 0041ac83  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0041ac87  51                   push ecx
// 0041ac88  83ec08               sub esp, 8
// 0041ac8b  8bd4                 mov edx, esp
// 0041ac8d  89642440             mov dword ptr [esp + 0x40], esp
// 0041ac91  52                   push edx
// 0041ac92  8bce                 mov ecx, esi
// 0041ac94  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0041ac9c  e80f690700           call 0x4915b0
// 0041aca1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0041aca5  895c2420             mov dword ptr [esp + 0x20], ebx
// 0041aca9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0041acad  8b0f                 mov ecx, dword ptr [edi]
// 0041acaf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0041acb3  8d44241c             lea eax, [esp + 0x1c]
// 0041acb7  50                   push eax
// 0041acb8  8d542440             lea edx, [esp + 0x40]
// 0041acbc  52                   push edx
// 0041acbd  57                   push edi
// 0041acbe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0041acc3  e838fc1400           call 0x56a900
// 0041acc8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041accc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0041acd4  c644242401           mov byte ptr [esp + 0x24], 1
// 0041acd9  3bc3                 cmp eax, ebx
// 0041acdb  742c                 je 0x41ad09
// 0041acdd  8bf0                 mov esi, eax
// 0041acdf  83c004               add eax, 4
// 0041ace2  83c9ff               or ecx, 0xffffffff
// 0041ace5  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ace9  751e                 jne 0x41ad09
// 0041aceb  8b16                 mov edx, dword ptr [esi]
// 0041aced  8b4204               mov eax, dword ptr [edx + 4]
// 0041acf0  8bce                 mov ecx, esi
// 0041acf2  ffd0                 call eax
// 0041acf4  8d4e08               lea ecx, [esi + 8]
// 0041acf7  83caff               or edx, 0xffffffff
// 0041acfa  f00fc111             lock xadd dword ptr [ecx], edx
// 0041acfe  7509                 jne 0x41ad09
// 0041ad00  8b06                 mov eax, dword ptr [esi]
// 0041ad02  8b5008               mov edx, dword ptr [eax + 8]
// 0041ad05  8bce                 mov ecx, esi
// 0041ad07  ffd2                 call edx
// 0041ad09  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041ad0d  885c2424             mov byte ptr [esp + 0x24], bl
// 0041ad11  3bcb                 cmp ecx, ebx
// 0041ad13  7408                 je 0x41ad1d
// 0041ad15  8b01                 mov eax, dword ptr [ecx]
// 0041ad17  8b10                 mov edx, dword ptr [eax]
// 0041ad19  6a01                 push 1
// 0041ad1b  ffd2                 call edx
// 0041ad1d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041ad21  8bc7                 mov eax, edi
// 0041ad23  5f                   pop edi
// 0041ad24  5e                   pop esi
// 0041ad25  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ad2c  5b                   pop ebx
// 0041ad2d  83c41c               add esp, 0x1c
// 0041ad30  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
