// roc 2008-06 005da0c0  unit: RBX::VPartInstance::?$FilteredSelection  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005da0c0
//
// 005da0c0  6aff                 push -1
// 005da0c2  68596f7c00           push 0x7c6f59
// 005da0c7  64a100000000         mov eax, dword ptr fs:[0]
// 005da0cd  50                   push eax
// 005da0ce  64892500000000       mov dword ptr fs:[0], esp
// 005da0d5  83ec10               sub esp, 0x10
// 005da0d8  53                   push ebx
// 005da0d9  33db                 xor ebx, ebx
// 005da0db  895c2404             mov dword ptr [esp + 4], ebx
// 005da0df  56                   push esi
// 005da0e0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005da0e4  8b06                 mov eax, dword ptr [esi]
// 005da0e6  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005da0e9  57                   push edi
// 005da0ea  8bf9                 mov edi, ecx
// 005da0ec  3bc3                 cmp eax, ebx
// 005da0ee  7405                 je 0x5da0f5
// 005da0f0  395808               cmp dword ptr [eax + 8], ebx
// 005da0f3  7521                 jne 0x5da116
// 005da0f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005da0f9  895804               mov dword ptr [eax + 4], ebx
// 005da0fc  895808               mov dword ptr [eax + 8], ebx
// 005da0ff  88580c               mov byte ptr [eax + 0xc], bl
// 005da102  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005da106  64890d00000000       mov dword ptr fs:[0], ecx
// 005da10d  5f                   pop edi
// 005da10e  5e                   pop esi
// 005da10f  5b                   pop ebx
// 005da110  83c41c               add esp, 0x1c
// 005da113  c20c00               ret 0xc
// 005da116  8d4608               lea eax, [esi + 8]
// 005da119  50                   push eax
// 005da11a  8d4c2434             lea ecx, [esp + 0x34]
// 005da11e  e82ddcefff           call 0x4d7d50
// 005da123  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da127  51                   push ecx
// 005da128  83ec08               sub esp, 8
// 005da12b  8bd4                 mov edx, esp
// 005da12d  89642440             mov dword ptr [esp + 0x40], esp
// 005da131  52                   push edx
// 005da132  8bce                 mov ecx, esi
// 005da134  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005da13c  e86f74ebff           call 0x4915b0
// 005da141  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005da145  895c2420             mov dword ptr [esp + 0x20], ebx
// 005da149  895c2424             mov dword ptr [esp + 0x24], ebx
// 005da14d  8b0f                 mov ecx, dword ptr [edi]
// 005da14f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005da153  8d44241c             lea eax, [esp + 0x1c]
// 005da157  50                   push eax
// 005da158  8d542440             lea edx, [esp + 0x40]
// 005da15c  52                   push edx
// 005da15d  57                   push edi
// 005da15e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005da163  e89807f9ff           call 0x56a900
// 005da168  8b442418             mov eax, dword ptr [esp + 0x18]
// 005da16c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005da174  c644242401           mov byte ptr [esp + 0x24], 1
// 005da179  3bc3                 cmp eax, ebx
// 005da17b  742c                 je 0x5da1a9
// 005da17d  8bf0                 mov esi, eax
// 005da17f  83c004               add eax, 4
// 005da182  83c9ff               or ecx, 0xffffffff
// 005da185  f00fc108             lock xadd dword ptr [eax], ecx
// 005da189  751e                 jne 0x5da1a9
// 005da18b  8b16                 mov edx, dword ptr [esi]
// 005da18d  8b4204               mov eax, dword ptr [edx + 4]
// 005da190  8bce                 mov ecx, esi
// 005da192  ffd0                 call eax
// 005da194  8d4e08               lea ecx, [esi + 8]
// 005da197  83caff               or edx, 0xffffffff
// 005da19a  f00fc111             lock xadd dword ptr [ecx], edx
// 005da19e  7509                 jne 0x5da1a9
// 005da1a0  8b06                 mov eax, dword ptr [esi]
// 005da1a2  8b5008               mov edx, dword ptr [eax + 8]
// 005da1a5  8bce                 mov ecx, esi
// 005da1a7  ffd2                 call edx
// 005da1a9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005da1ad  885c2424             mov byte ptr [esp + 0x24], bl
// 005da1b1  3bcb                 cmp ecx, ebx
// 005da1b3  7408                 je 0x5da1bd
// 005da1b5  8b01                 mov eax, dword ptr [ecx]
// 005da1b7  8b10                 mov edx, dword ptr [eax]
// 005da1b9  6a01                 push 1
// 005da1bb  ffd2                 call edx
// 005da1bd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005da1c1  8bc7                 mov eax, edi
// 005da1c3  5f                   pop edi
// 005da1c4  5e                   pop esi
// 005da1c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005da1cc  5b                   pop ebx
// 005da1cd  83c41c               add esp, 0x1c
// 005da1d0  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
