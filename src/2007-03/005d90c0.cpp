// roc 2007-03 005d90c0  unit: seg_005d0000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d90c0
//
// 005d90c0  6aff                 push -1
// 005d90c2  68e8397500           push 0x7539e8
// 005d90c7  64a100000000         mov eax, dword ptr fs:[0]
// 005d90cd  50                   push eax
// 005d90ce  64892500000000       mov dword ptr fs:[0], esp
// 005d90d5  83ec0c               sub esp, 0xc
// 005d90d8  53                   push ebx
// 005d90d9  56                   push esi
// 005d90da  8bf1                 mov esi, ecx
// 005d90dc  8d4608               lea eax, [esi + 8]
// 005d90df  57                   push edi
// 005d90e0  50                   push eax
// 005d90e1  e8eac4fdff           call 0x5b55d0
// 005d90e6  51                   push ecx
// 005d90e7  8bcc                 mov ecx, esp
// 005d90e9  89642414             mov dword ptr [esp + 0x14], esp
// 005d90ed  51                   push ecx
// 005d90ee  8bce                 mov ecx, esi
// 005d90f0  e8bb22ffff           call 0x5cb3b0
// 005d90f5  e80696f9ff           call 0x572700
// 005d90fa  33db                 xor ebx, ebx
// 005d90fc  83c408               add esp, 8
// 005d90ff  3ac3                 cmp al, bl
// 005d9101  745b                 je 0x5d915e
// 005d9103  8d542410             lea edx, [esp + 0x10]
// 005d9107  52                   push edx
// 005d9108  8bce                 mov ecx, esi
// 005d910a  e8a122ffff           call 0x5cb3b0
// 005d910f  8b00                 mov eax, dword ptr [eax]
// 005d9111  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005d9114  50                   push eax
// 005d9115  81c130020000         add ecx, 0x230
// 005d911b  895c2424             mov dword ptr [esp + 0x24], ebx
// 005d911f  e8fcdd0000           call 0x5e6f20
// 005d9124  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005d9128  3bfb                 cmp edi, ebx
// 005d912a  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005d9132  742a                 je 0x5d915e
// 005d9134  8d4704               lea eax, [edi + 4]
// 005d9137  83c9ff               or ecx, 0xffffffff
// 005d913a  f00fc108             lock xadd dword ptr [eax], ecx
// 005d913e  751e                 jne 0x5d915e
// 005d9140  8b17                 mov edx, dword ptr [edi]
// 005d9142  8b4204               mov eax, dword ptr [edx + 4]
// 005d9145  8bcf                 mov ecx, edi
// 005d9147  ffd0                 call eax
// 005d9149  8d4f08               lea ecx, [edi + 8]
// 005d914c  83caff               or edx, 0xffffffff
// 005d914f  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9153  7509                 jne 0x5d915e
// 005d9155  8b07                 mov eax, dword ptr [edi]
// 005d9157  8b5008               mov edx, dword ptr [eax + 8]
// 005d915a  8bcf                 mov ecx, edi
// 005d915c  ffd2                 call edx
// 005d915e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d9162  885e18               mov byte ptr [esi + 0x18], bl
// 005d9165  5f                   pop edi
// 005d9166  5e                   pop esi
// 005d9167  64890d00000000       mov dword ptr fs:[0], ecx
// 005d916e  5b                   pop ebx
// 005d916f  83c418               add esp, 0x18
// 005d9172  c3                   ret 
// library rbxgs/tool\MegaDragger.cpp (function ?startDragging@MegaDragger@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/MegaDragger.cpp
