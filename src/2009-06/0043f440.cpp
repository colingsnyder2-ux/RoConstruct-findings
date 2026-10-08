// roc 2009-06 0043f440  unit: RBX::MergeBinder  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043f440
//
// 0043f440  6aff                 push -1
// 0043f442  68a0028500           push 0x8502a0
// 0043f447  64a100000000         mov eax, dword ptr fs:[0]
// 0043f44d  50                   push eax
// 0043f44e  64892500000000       mov dword ptr fs:[0], esp
// 0043f455  83ec18               sub esp, 0x18
// 0043f458  53                   push ebx
// 0043f459  56                   push esi
// 0043f45a  33db                 xor ebx, ebx
// 0043f45c  57                   push edi
// 0043f45d  8bf1                 mov esi, ecx
// 0043f45f  895c240c             mov dword ptr [esp + 0xc], ebx
// 0043f463  895c2410             mov dword ptr [esp + 0x10], ebx
// 0043f467  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0043f46b  8d44240c             lea eax, [esp + 0xc]
// 0043f46f  50                   push eax
// 0043f470  8bcf                 mov ecx, edi
// 0043f472  895c2430             mov dword ptr [esp + 0x30], ebx
// 0043f476  e855aa1c00           call 0x609ed0
// 0043f47b  84c0                 test al, al
// 0043f47d  0f84eb000000         je 0x43f56e
// 0043f483  8d4c240c             lea ecx, [esp + 0xc]
// 0043f487  e864d02000           call 0x64c4f0
// 0043f48c  84c0                 test al, al
// 0043f48e  7516                 jne 0x43f4a6
// 0043f490  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0043f494  8b11                 mov edx, dword ptr [ecx]
// 0043f496  8b12                 mov edx, dword ptr [edx]
// 0043f498  8d44240c             lea eax, [esp + 0xc]
// 0043f49c  50                   push eax
// 0043f49d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0043f4a1  50                   push eax
// 0043f4a2  ffd2                 call edx
// 0043f4a4  eb78                 jmp 0x43f51e
// 0043f4a6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0043f4aa  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0043f4ae  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0043f4b2  89442414             mov dword ptr [esp + 0x14], eax
// 0043f4b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0043f4ba  894c2418             mov dword ptr [esp + 0x18], ecx
// 0043f4be  8954241c             mov dword ptr [esp + 0x1c], edx
// 0043f4c2  89442420             mov dword ptr [esp + 0x20], eax
// 0043f4c6  3bc3                 cmp eax, ebx
// 0043f4c8  740c                 je 0x43f4d6
// 0043f4ca  83c004               add eax, 4
// 0043f4cd  b901000000           mov ecx, 1
// 0043f4d2  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f4d6  8d542414             lea edx, [esp + 0x14]
// 0043f4da  52                   push edx
// 0043f4db  8d4e04               lea ecx, [esi + 4]
// 0043f4de  c644243001           mov byte ptr [esp + 0x30], 1
// 0043f4e3  e828feffff           call 0x43f310
// 0043f4e8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0043f4ec  885c242c             mov byte ptr [esp + 0x2c], bl
// 0043f4f0  3bf3                 cmp esi, ebx
// 0043f4f2  742a                 je 0x43f51e
// 0043f4f4  8d4604               lea eax, [esi + 4]
// 0043f4f7  83c9ff               or ecx, 0xffffffff
// 0043f4fa  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f4fe  751e                 jne 0x43f51e
// 0043f500  8b16                 mov edx, dword ptr [esi]
// 0043f502  8b4204               mov eax, dword ptr [edx + 4]
// 0043f505  8bce                 mov ecx, esi
// 0043f507  ffd0                 call eax
// 0043f509  8d4e08               lea ecx, [esi + 8]
// 0043f50c  83caff               or edx, 0xffffffff
// 0043f50f  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f513  7509                 jne 0x43f51e
// 0043f515  8b06                 mov eax, dword ptr [esi]
// 0043f517  8b5008               mov edx, dword ptr [eax + 8]
// 0043f51a  8bce                 mov ecx, esi
// 0043f51c  ffd2                 call edx
// 0043f51e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043f522  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0043f52a  3bf3                 cmp esi, ebx
// 0043f52c  742a                 je 0x43f558
// 0043f52e  8d4604               lea eax, [esi + 4]
// 0043f531  83c9ff               or ecx, 0xffffffff
// 0043f534  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f538  751e                 jne 0x43f558
// 0043f53a  8b16                 mov edx, dword ptr [esi]
// 0043f53c  8b4204               mov eax, dword ptr [edx + 4]
// 0043f53f  8bce                 mov ecx, esi
// 0043f541  ffd0                 call eax
// 0043f543  8d4e08               lea ecx, [esi + 8]
// 0043f546  83caff               or edx, 0xffffffff
// 0043f549  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f54d  7509                 jne 0x43f558
// 0043f54f  8b06                 mov eax, dword ptr [esi]
// 0043f551  8b5008               mov edx, dword ptr [eax + 8]
// 0043f554  8bce                 mov ecx, esi
// 0043f556  ffd2                 call edx
// 0043f558  5f                   pop edi
// 0043f559  5e                   pop esi
// 0043f55a  b001                 mov al, 1
// 0043f55c  5b                   pop ebx
// 0043f55d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043f561  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f568  83c424               add esp, 0x24
// 0043f56b  c20c00               ret 0xc
// 0043f56e  a1acb0a400           mov eax, dword ptr [0xa4b0ac]
// 0043f573  50                   push eax
// 0043f574  8bcf                 mov ecx, edi
// 0043f576  e835a41c00           call 0x6099b0
// 0043f57b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043f57f  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0043f587  84c0                 test al, al
// 0043f589  7444                 je 0x43f5cf
// 0043f58b  3bf3                 cmp esi, ebx
// 0043f58d  742a                 je 0x43f5b9
// 0043f58f  8d4e04               lea ecx, [esi + 4]
// 0043f592  83caff               or edx, 0xffffffff
// 0043f595  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f599  751e                 jne 0x43f5b9
// 0043f59b  8b06                 mov eax, dword ptr [esi]
// 0043f59d  8b5004               mov edx, dword ptr [eax + 4]
// 0043f5a0  8bce                 mov ecx, esi
// 0043f5a2  ffd2                 call edx
// 0043f5a4  8d4608               lea eax, [esi + 8]
// 0043f5a7  83c9ff               or ecx, 0xffffffff
// 0043f5aa  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f5ae  7509                 jne 0x43f5b9
// 0043f5b0  8b16                 mov edx, dword ptr [esi]
// 0043f5b2  8b4208               mov eax, dword ptr [edx + 8]
// 0043f5b5  8bce                 mov ecx, esi
// 0043f5b7  ffd0                 call eax
// 0043f5b9  5f                   pop edi
// 0043f5ba  5e                   pop esi
// 0043f5bb  b001                 mov al, 1
// 0043f5bd  5b                   pop ebx
// 0043f5be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043f5c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f5c9  83c424               add esp, 0x24
// 0043f5cc  c20c00               ret 0xc
// 0043f5cf  3bf3                 cmp esi, ebx
// 0043f5d1  742a                 je 0x43f5fd
// 0043f5d3  8d4e04               lea ecx, [esi + 4]
// 0043f5d6  83caff               or edx, 0xffffffff
// 0043f5d9  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f5dd  751e                 jne 0x43f5fd
// 0043f5df  8b06                 mov eax, dword ptr [esi]
// 0043f5e1  8b5004               mov edx, dword ptr [eax + 4]
// 0043f5e4  8bce                 mov ecx, esi
// 0043f5e6  ffd2                 call edx
// 0043f5e8  8d4608               lea eax, [esi + 8]
// 0043f5eb  83c9ff               or ecx, 0xffffffff
// 0043f5ee  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f5f2  7509                 jne 0x43f5fd
// 0043f5f4  8b16                 mov edx, dword ptr [esi]
// 0043f5f6  8b4208               mov eax, dword ptr [edx + 8]
// 0043f5f9  8bce                 mov ecx, esi
// 0043f5fb  ffd0                 call eax
// 0043f5fd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0043f601  5f                   pop edi
// 0043f602  5e                   pop esi
// 0043f603  32c0                 xor al, al
// 0043f605  5b                   pop ebx
// 0043f606  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f60d  83c424               add esp, 0x24
// 0043f610  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@2@PBVIIDREF@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
