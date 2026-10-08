// roc 2008-06 004b1f80  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1f80
//
// 004b1f80  6aff                 push -1
// 004b1f82  68596f7c00           push 0x7c6f59
// 004b1f87  64a100000000         mov eax, dword ptr fs:[0]
// 004b1f8d  50                   push eax
// 004b1f8e  64892500000000       mov dword ptr fs:[0], esp
// 004b1f95  83ec10               sub esp, 0x10
// 004b1f98  53                   push ebx
// 004b1f99  33db                 xor ebx, ebx
// 004b1f9b  895c2404             mov dword ptr [esp + 4], ebx
// 004b1f9f  56                   push esi
// 004b1fa0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004b1fa4  8b06                 mov eax, dword ptr [esi]
// 004b1fa6  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004b1fa9  57                   push edi
// 004b1faa  8bf9                 mov edi, ecx
// 004b1fac  3bc3                 cmp eax, ebx
// 004b1fae  7405                 je 0x4b1fb5
// 004b1fb0  395808               cmp dword ptr [eax + 8], ebx
// 004b1fb3  7521                 jne 0x4b1fd6
// 004b1fb5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b1fb9  895804               mov dword ptr [eax + 4], ebx
// 004b1fbc  895808               mov dword ptr [eax + 8], ebx
// 004b1fbf  88580c               mov byte ptr [eax + 0xc], bl
// 004b1fc2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b1fc6  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1fcd  5f                   pop edi
// 004b1fce  5e                   pop esi
// 004b1fcf  5b                   pop ebx
// 004b1fd0  83c41c               add esp, 0x1c
// 004b1fd3  c20c00               ret 0xc
// 004b1fd6  8d4608               lea eax, [esi + 8]
// 004b1fd9  50                   push eax
// 004b1fda  8d4c2434             lea ecx, [esp + 0x34]
// 004b1fde  e83dffffff           call 0x4b1f20
// 004b1fe3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004b1fe7  51                   push ecx
// 004b1fe8  83ec08               sub esp, 8
// 004b1feb  8bd4                 mov edx, esp
// 004b1fed  89642440             mov dword ptr [esp + 0x40], esp
// 004b1ff1  52                   push edx
// 004b1ff2  8bce                 mov ecx, esi
// 004b1ff4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004b1ffc  e8aff5fdff           call 0x4915b0
// 004b2001  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004b2005  895c2420             mov dword ptr [esp + 0x20], ebx
// 004b2009  895c2424             mov dword ptr [esp + 0x24], ebx
// 004b200d  8b0f                 mov ecx, dword ptr [edi]
// 004b200f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004b2013  8d44241c             lea eax, [esp + 0x1c]
// 004b2017  50                   push eax
// 004b2018  8d542440             lea edx, [esp + 0x40]
// 004b201c  52                   push edx
// 004b201d  57                   push edi
// 004b201e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 004b2023  e8d8880b00           call 0x56a900
// 004b2028  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b202c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004b2034  c644242401           mov byte ptr [esp + 0x24], 1
// 004b2039  3bc3                 cmp eax, ebx
// 004b203b  742c                 je 0x4b2069
// 004b203d  8bf0                 mov esi, eax
// 004b203f  83c004               add eax, 4
// 004b2042  83c9ff               or ecx, 0xffffffff
// 004b2045  f00fc108             lock xadd dword ptr [eax], ecx
// 004b2049  751e                 jne 0x4b2069
// 004b204b  8b16                 mov edx, dword ptr [esi]
// 004b204d  8b4204               mov eax, dword ptr [edx + 4]
// 004b2050  8bce                 mov ecx, esi
// 004b2052  ffd0                 call eax
// 004b2054  8d4e08               lea ecx, [esi + 8]
// 004b2057  83caff               or edx, 0xffffffff
// 004b205a  f00fc111             lock xadd dword ptr [ecx], edx
// 004b205e  7509                 jne 0x4b2069
// 004b2060  8b06                 mov eax, dword ptr [esi]
// 004b2062  8b5008               mov edx, dword ptr [eax + 8]
// 004b2065  8bce                 mov ecx, esi
// 004b2067  ffd2                 call edx
// 004b2069  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004b206d  885c2424             mov byte ptr [esp + 0x24], bl
// 004b2071  3bcb                 cmp ecx, ebx
// 004b2073  7408                 je 0x4b207d
// 004b2075  8b01                 mov eax, dword ptr [ecx]
// 004b2077  8b10                 mov edx, dword ptr [eax]
// 004b2079  6a01                 push 1
// 004b207b  ffd2                 call edx
// 004b207d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b2081  8bc7                 mov eax, edi
// 004b2083  5f                   pop edi
// 004b2084  5e                   pop esi
// 004b2085  64890d00000000       mov dword ptr fs:[0], ecx
// 004b208c  5b                   pop ebx
// 004b208d  83c41c               add esp, 0x1c
// 004b2090  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
