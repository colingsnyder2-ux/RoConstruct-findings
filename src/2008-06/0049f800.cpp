// roc 2008-06 0049f800  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f800
//
// 0049f800  6aff                 push -1
// 0049f802  68596f7c00           push 0x7c6f59
// 0049f807  64a100000000         mov eax, dword ptr fs:[0]
// 0049f80d  50                   push eax
// 0049f80e  64892500000000       mov dword ptr fs:[0], esp
// 0049f815  83ec10               sub esp, 0x10
// 0049f818  53                   push ebx
// 0049f819  33db                 xor ebx, ebx
// 0049f81b  895c2404             mov dword ptr [esp + 4], ebx
// 0049f81f  56                   push esi
// 0049f820  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0049f824  8b06                 mov eax, dword ptr [esi]
// 0049f826  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0049f829  57                   push edi
// 0049f82a  8bf9                 mov edi, ecx
// 0049f82c  3bc3                 cmp eax, ebx
// 0049f82e  7405                 je 0x49f835
// 0049f830  395808               cmp dword ptr [eax + 8], ebx
// 0049f833  7521                 jne 0x49f856
// 0049f835  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049f839  895804               mov dword ptr [eax + 4], ebx
// 0049f83c  895808               mov dword ptr [eax + 8], ebx
// 0049f83f  88580c               mov byte ptr [eax + 0xc], bl
// 0049f842  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049f846  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f84d  5f                   pop edi
// 0049f84e  5e                   pop esi
// 0049f84f  5b                   pop ebx
// 0049f850  83c41c               add esp, 0x1c
// 0049f853  c20c00               ret 0xc
// 0049f856  8d4608               lea eax, [esi + 8]
// 0049f859  50                   push eax
// 0049f85a  8d4c2434             lea ecx, [esp + 0x34]
// 0049f85e  e83dffffff           call 0x49f7a0
// 0049f863  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049f867  51                   push ecx
// 0049f868  83ec08               sub esp, 8
// 0049f86b  8bd4                 mov edx, esp
// 0049f86d  89642440             mov dword ptr [esp + 0x40], esp
// 0049f871  52                   push edx
// 0049f872  8bce                 mov ecx, esi
// 0049f874  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0049f87c  e82f1dffff           call 0x4915b0
// 0049f881  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049f885  895c2420             mov dword ptr [esp + 0x20], ebx
// 0049f889  895c2424             mov dword ptr [esp + 0x24], ebx
// 0049f88d  8b0f                 mov ecx, dword ptr [edi]
// 0049f88f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0049f893  8d44241c             lea eax, [esp + 0x1c]
// 0049f897  50                   push eax
// 0049f898  8d542440             lea edx, [esp + 0x40]
// 0049f89c  52                   push edx
// 0049f89d  57                   push edi
// 0049f89e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0049f8a3  e858b00c00           call 0x56a900
// 0049f8a8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049f8ac  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0049f8b4  c644242401           mov byte ptr [esp + 0x24], 1
// 0049f8b9  3bc3                 cmp eax, ebx
// 0049f8bb  742c                 je 0x49f8e9
// 0049f8bd  8bf0                 mov esi, eax
// 0049f8bf  83c004               add eax, 4
// 0049f8c2  83c9ff               or ecx, 0xffffffff
// 0049f8c5  f00fc108             lock xadd dword ptr [eax], ecx
// 0049f8c9  751e                 jne 0x49f8e9
// 0049f8cb  8b16                 mov edx, dword ptr [esi]
// 0049f8cd  8b4204               mov eax, dword ptr [edx + 4]
// 0049f8d0  8bce                 mov ecx, esi
// 0049f8d2  ffd0                 call eax
// 0049f8d4  8d4e08               lea ecx, [esi + 8]
// 0049f8d7  83caff               or edx, 0xffffffff
// 0049f8da  f00fc111             lock xadd dword ptr [ecx], edx
// 0049f8de  7509                 jne 0x49f8e9
// 0049f8e0  8b06                 mov eax, dword ptr [esi]
// 0049f8e2  8b5008               mov edx, dword ptr [eax + 8]
// 0049f8e5  8bce                 mov ecx, esi
// 0049f8e7  ffd2                 call edx
// 0049f8e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049f8ed  885c2424             mov byte ptr [esp + 0x24], bl
// 0049f8f1  3bcb                 cmp ecx, ebx
// 0049f8f3  7408                 je 0x49f8fd
// 0049f8f5  8b01                 mov eax, dword ptr [ecx]
// 0049f8f7  8b10                 mov edx, dword ptr [eax]
// 0049f8f9  6a01                 push 1
// 0049f8fb  ffd2                 call edx
// 0049f8fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049f901  8bc7                 mov eax, edi
// 0049f903  5f                   pop edi
// 0049f904  5e                   pop esi
// 0049f905  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f90c  5b                   pop ebx
// 0049f90d  83c41c               add esp, 0x1c
// 0049f910  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
