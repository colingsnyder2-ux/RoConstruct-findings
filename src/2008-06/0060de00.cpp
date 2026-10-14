// roc 2008-06 0060de00  unit: RBX::BlockBlockContact  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060de00
//
// 0060de00  6aff                 push -1
// 0060de02  6868917d00           push 0x7d9168
// 0060de07  64a100000000         mov eax, dword ptr fs:[0]
// 0060de0d  50                   push eax
// 0060de0e  64892500000000       mov dword ptr fs:[0], esp
// 0060de15  83ec0c               sub esp, 0xc
// 0060de18  53                   push ebx
// 0060de19  56                   push esi
// 0060de1a  8bf1                 mov esi, ecx
// 0060de1c  8d4608               lea eax, [esi + 8]
// 0060de1f  57                   push edi
// 0060de20  50                   push eax
// 0060de21  e80a100000           call 0x60ee30
// 0060de26  51                   push ecx
// 0060de27  8bcc                 mov ecx, esp
// 0060de29  89642414             mov dword ptr [esp + 0x14], esp
// 0060de2d  51                   push ecx
// 0060de2e  8bce                 mov ecx, esi
// 0060de30  e8cbccfbff           call 0x5cab00
// 0060de35  e8b6b7f8ff           call 0x5995f0
// 0060de3a  33db                 xor ebx, ebx
// 0060de3c  83c408               add esp, 8
// 0060de3f  3ac3                 cmp al, bl
// 0060de41  745b                 je 0x60de9e
// 0060de43  8d542410             lea edx, [esp + 0x10]
// 0060de47  52                   push edx
// 0060de48  8bce                 mov ecx, esi
// 0060de4a  e8b1ccfbff           call 0x5cab00
// 0060de4f  8b00                 mov eax, dword ptr [eax]
// 0060de51  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0060de54  50                   push eax
// 0060de55  81c188020000         add ecx, 0x288
// 0060de5b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0060de5f  e8dc400300           call 0x641f40
// 0060de64  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060de68  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060de70  3bfb                 cmp edi, ebx
// 0060de72  742a                 je 0x60de9e
// 0060de74  8d4704               lea eax, [edi + 4]
// 0060de77  83c9ff               or ecx, 0xffffffff
// 0060de7a  f00fc108             lock xadd dword ptr [eax], ecx
// 0060de7e  751e                 jne 0x60de9e
// 0060de80  8b17                 mov edx, dword ptr [edi]
// 0060de82  8b4204               mov eax, dword ptr [edx + 4]
// 0060de85  8bcf                 mov ecx, edi
// 0060de87  ffd0                 call eax
// 0060de89  8d4f08               lea ecx, [edi + 8]
// 0060de8c  83caff               or edx, 0xffffffff
// 0060de8f  f00fc111             lock xadd dword ptr [ecx], edx
// 0060de93  7509                 jne 0x60de9e
// 0060de95  8b07                 mov eax, dword ptr [edi]
// 0060de97  8b5008               mov edx, dword ptr [eax + 8]
// 0060de9a  8bcf                 mov ecx, edi
// 0060de9c  ffd2                 call edx
// 0060de9e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060dea2  885e20               mov byte ptr [esi + 0x20], bl
// 0060dea5  5f                   pop edi
// 0060dea6  5e                   pop esi
// 0060dea7  64890d00000000       mov dword ptr fs:[0], ecx
// 0060deae  5b                   pop ebx
// 0060deaf  83c418               add esp, 0x18
// 0060deb2  c3                   ret 
// library rbxgs-dll/roc_unit_918703e0b52a5bc3.cpp (function ?startDragging@MegaDragger@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_unit_918703e0b52a5bc3.cpp
