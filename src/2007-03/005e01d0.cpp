// roc 2007-03 005e01d0  unit: seg_005e0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e01d0
//
// 005e01d0  6aff                 push -1
// 005e01d2  68e9c87500           push 0x75c8e9
// 005e01d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e01dd  50                   push eax
// 005e01de  64892500000000       mov dword ptr fs:[0], esp
// 005e01e5  83ec10               sub esp, 0x10
// 005e01e8  53                   push ebx
// 005e01e9  33db                 xor ebx, ebx
// 005e01eb  895c2404             mov dword ptr [esp + 4], ebx
// 005e01ef  56                   push esi
// 005e01f0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e01f4  8b06                 mov eax, dword ptr [esi]
// 005e01f6  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e01f9  3bc3                 cmp eax, ebx
// 005e01fb  57                   push edi
// 005e01fc  8bf9                 mov edi, ecx
// 005e01fe  7405                 je 0x5e0205
// 005e0200  395808               cmp dword ptr [eax + 8], ebx
// 005e0203  7521                 jne 0x5e0226
// 005e0205  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0209  895804               mov dword ptr [eax + 4], ebx
// 005e020c  895808               mov dword ptr [eax + 8], ebx
// 005e020f  88580c               mov byte ptr [eax + 0xc], bl
// 005e0212  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0216  64890d00000000       mov dword ptr fs:[0], ecx
// 005e021d  5f                   pop edi
// 005e021e  5e                   pop esi
// 005e021f  5b                   pop ebx
// 005e0220  83c41c               add esp, 0x1c
// 005e0223  c20c00               ret 0xc
// 005e0226  8d4608               lea eax, [esi + 8]
// 005e0229  50                   push eax
// 005e022a  8d4c2434             lea ecx, [esp + 0x34]
// 005e022e  e83dffffff           call 0x5e0170
// 005e0233  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e0237  51                   push ecx
// 005e0238  83ec08               sub esp, 8
// 005e023b  8bd4                 mov edx, esp
// 005e023d  89642440             mov dword ptr [esp + 0x40], esp
// 005e0241  52                   push edx
// 005e0242  8bce                 mov ecx, esi
// 005e0244  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e024c  e8ff8be3ff           call 0x418e50
// 005e0251  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e0255  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e0259  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e025d  8b0f                 mov ecx, dword ptr [edi]
// 005e025f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e0263  8d44241c             lea eax, [esp + 0x1c]
// 005e0267  50                   push eax
// 005e0268  8d542440             lea edx, [esp + 0x40]
// 005e026c  52                   push edx
// 005e026d  57                   push edi
// 005e026e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e0273  e898771400           call 0x727a10
// 005e0278  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e027c  3bc3                 cmp eax, ebx
// 005e027e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e0286  c644242401           mov byte ptr [esp + 0x24], 1
// 005e028b  742c                 je 0x5e02b9
// 005e028d  8bf0                 mov esi, eax
// 005e028f  83c004               add eax, 4
// 005e0292  83c9ff               or ecx, 0xffffffff
// 005e0295  f00fc108             lock xadd dword ptr [eax], ecx
// 005e0299  751e                 jne 0x5e02b9
// 005e029b  8b16                 mov edx, dword ptr [esi]
// 005e029d  8b4204               mov eax, dword ptr [edx + 4]
// 005e02a0  8bce                 mov ecx, esi
// 005e02a2  ffd0                 call eax
// 005e02a4  8d4e08               lea ecx, [esi + 8]
// 005e02a7  83caff               or edx, 0xffffffff
// 005e02aa  f00fc111             lock xadd dword ptr [ecx], edx
// 005e02ae  7509                 jne 0x5e02b9
// 005e02b0  8b06                 mov eax, dword ptr [esi]
// 005e02b2  8b5008               mov edx, dword ptr [eax + 8]
// 005e02b5  8bce                 mov ecx, esi
// 005e02b7  ffd2                 call edx
// 005e02b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e02bd  3bcb                 cmp ecx, ebx
// 005e02bf  885c2424             mov byte ptr [esp + 0x24], bl
// 005e02c3  7408                 je 0x5e02cd
// 005e02c5  8b01                 mov eax, dword ptr [ecx]
// 005e02c7  8b10                 mov edx, dword ptr [eax]
// 005e02c9  6a01                 push 1
// 005e02cb  ffd2                 call edx
// 005e02cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e02d1  8bc7                 mov eax, edi
// 005e02d3  5f                   pop edi
// 005e02d4  5e                   pop esi
// 005e02d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e02dc  5b                   pop ebx
// 005e02dd  83c41c               add esp, 0x1c
// 005e02e0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
