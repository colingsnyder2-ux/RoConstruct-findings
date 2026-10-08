// roc 2008-06 0048de50  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048de50
//
// 0048de50  6aff                 push -1
// 0048de52  68596f7c00           push 0x7c6f59
// 0048de57  64a100000000         mov eax, dword ptr fs:[0]
// 0048de5d  50                   push eax
// 0048de5e  64892500000000       mov dword ptr fs:[0], esp
// 0048de65  83ec10               sub esp, 0x10
// 0048de68  53                   push ebx
// 0048de69  33db                 xor ebx, ebx
// 0048de6b  895c2404             mov dword ptr [esp + 4], ebx
// 0048de6f  56                   push esi
// 0048de70  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0048de74  8b06                 mov eax, dword ptr [esi]
// 0048de76  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0048de79  57                   push edi
// 0048de7a  8bf9                 mov edi, ecx
// 0048de7c  3bc3                 cmp eax, ebx
// 0048de7e  7405                 je 0x48de85
// 0048de80  395808               cmp dword ptr [eax + 8], ebx
// 0048de83  7521                 jne 0x48dea6
// 0048de85  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048de89  895804               mov dword ptr [eax + 4], ebx
// 0048de8c  895808               mov dword ptr [eax + 8], ebx
// 0048de8f  88580c               mov byte ptr [eax + 0xc], bl
// 0048de92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048de96  64890d00000000       mov dword ptr fs:[0], ecx
// 0048de9d  5f                   pop edi
// 0048de9e  5e                   pop esi
// 0048de9f  5b                   pop ebx
// 0048dea0  83c41c               add esp, 0x1c
// 0048dea3  c20c00               ret 0xc
// 0048dea6  8d4608               lea eax, [esi + 8]
// 0048dea9  50                   push eax
// 0048deaa  8d4c2434             lea ecx, [esp + 0x34]
// 0048deae  e83dffffff           call 0x48ddf0
// 0048deb3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0048deb7  51                   push ecx
// 0048deb8  83ec08               sub esp, 8
// 0048debb  8bd4                 mov edx, esp
// 0048debd  89642440             mov dword ptr [esp + 0x40], esp
// 0048dec1  52                   push edx
// 0048dec2  8bce                 mov ecx, esi
// 0048dec4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0048decc  e8df360000           call 0x4915b0
// 0048ded1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0048ded5  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048ded9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0048dedd  8b0f                 mov ecx, dword ptr [edi]
// 0048dedf  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0048dee3  8d44241c             lea eax, [esp + 0x1c]
// 0048dee7  50                   push eax
// 0048dee8  8d542440             lea edx, [esp + 0x40]
// 0048deec  52                   push edx
// 0048deed  57                   push edi
// 0048deee  c644243c02           mov byte ptr [esp + 0x3c], 2
// 0048def3  e808ca0d00           call 0x56a900
// 0048def8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048defc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0048df04  c644242401           mov byte ptr [esp + 0x24], 1
// 0048df09  3bc3                 cmp eax, ebx
// 0048df0b  742c                 je 0x48df39
// 0048df0d  8bf0                 mov esi, eax
// 0048df0f  83c004               add eax, 4
// 0048df12  83c9ff               or ecx, 0xffffffff
// 0048df15  f00fc108             lock xadd dword ptr [eax], ecx
// 0048df19  751e                 jne 0x48df39
// 0048df1b  8b16                 mov edx, dword ptr [esi]
// 0048df1d  8b4204               mov eax, dword ptr [edx + 4]
// 0048df20  8bce                 mov ecx, esi
// 0048df22  ffd0                 call eax
// 0048df24  8d4e08               lea ecx, [esi + 8]
// 0048df27  83caff               or edx, 0xffffffff
// 0048df2a  f00fc111             lock xadd dword ptr [ecx], edx
// 0048df2e  7509                 jne 0x48df39
// 0048df30  8b06                 mov eax, dword ptr [esi]
// 0048df32  8b5008               mov edx, dword ptr [eax + 8]
// 0048df35  8bce                 mov ecx, esi
// 0048df37  ffd2                 call edx
// 0048df39  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048df3d  885c2424             mov byte ptr [esp + 0x24], bl
// 0048df41  3bcb                 cmp ecx, ebx
// 0048df43  7408                 je 0x48df4d
// 0048df45  8b01                 mov eax, dword ptr [ecx]
// 0048df47  8b10                 mov edx, dword ptr [eax]
// 0048df49  6a01                 push 1
// 0048df4b  ffd2                 call edx
// 0048df4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048df51  8bc7                 mov eax, edi
// 0048df53  5f                   pop edi
// 0048df54  5e                   pop esi
// 0048df55  64890d00000000       mov dword ptr fs:[0], ecx
// 0048df5c  5b                   pop ebx
// 0048df5d  83c41c               add esp, 0x1c
// 0048df60  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
