// roc 2008-06 0059c640  unit: RBX::PartInstance  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c640
//
// 0059c640  64a100000000         mov eax, dword ptr fs:[0]
// 0059c646  6aff                 push -1
// 0059c648  6850267d00           push 0x7d2650
// 0059c64d  50                   push eax
// 0059c64e  64892500000000       mov dword ptr fs:[0], esp
// 0059c655  83ec10               sub esp, 0x10
// 0059c658  53                   push ebx
// 0059c659  55                   push ebp
// 0059c65a  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0059c65e  56                   push esi
// 0059c65f  6a00                 push 0
// 0059c661  6850dd9200           push 0x92dd50
// 0059c666  687c909200           push 0x92907c
// 0059c66b  6a00                 push 0
// 0059c66d  55                   push ebp
// 0059c66e  e853511000           call 0x6a17c6
// 0059c673  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0059c677  83c414               add esp, 0x14
// 0059c67a  85c0                 test eax, eax
// 0059c67c  0f849c000000         je 0x59c71e
// 0059c682  50                   push eax
// 0059c683  8d442418             lea eax, [esp + 0x18]
// 0059c687  50                   push eax
// 0059c688  e8b3c30700           call 0x618a40
// 0059c68d  83c408               add esp, 8
// 0059c690  8b7004               mov esi, dword ptr [eax + 4]
// 0059c693  8b08                 mov ecx, dword ptr [eax]
// 0059c695  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0059c69d  894c240c             mov dword ptr [esp + 0xc], ecx
// 0059c6a1  89742410             mov dword ptr [esp + 0x10], esi
// 0059c6a5  85f6                 test esi, esi
// 0059c6a7  740c                 je 0x59c6b5
// 0059c6a9  8d5608               lea edx, [esi + 8]
// 0059c6ac  b801000000           mov eax, 1
// 0059c6b1  f00fc102             lock xadd dword ptr [edx], eax
// 0059c6b5  8d4c240c             lea ecx, [esp + 0xc]
// 0059c6b9  51                   push ecx
// 0059c6ba  8bcb                 mov ecx, ebx
// 0059c6bc  c644242801           mov byte ptr [esp + 0x28], 1
// 0059c6c1  e8eafcffff           call 0x59c3b0
// 0059c6c6  c644242400           mov byte ptr [esp + 0x24], 0
// 0059c6cb  85f6                 test esi, esi
// 0059c6cd  7415                 je 0x59c6e4
// 0059c6cf  8d5608               lea edx, [esi + 8]
// 0059c6d2  83c8ff               or eax, 0xffffffff
// 0059c6d5  f00fc102             lock xadd dword ptr [edx], eax
// 0059c6d9  7509                 jne 0x59c6e4
// 0059c6db  8b16                 mov edx, dword ptr [esi]
// 0059c6dd  8b4208               mov eax, dword ptr [edx + 8]
// 0059c6e0  8bce                 mov ecx, esi
// 0059c6e2  ffd0                 call eax
// 0059c6e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0059c6e8  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0059c6f0  85f6                 test esi, esi
// 0059c6f2  742a                 je 0x59c71e
// 0059c6f4  8d4e04               lea ecx, [esi + 4]
// 0059c6f7  83caff               or edx, 0xffffffff
// 0059c6fa  f00fc111             lock xadd dword ptr [ecx], edx
// 0059c6fe  751e                 jne 0x59c71e
// 0059c700  8b06                 mov eax, dword ptr [esi]
// 0059c702  8b5004               mov edx, dword ptr [eax + 4]
// 0059c705  8bce                 mov ecx, esi
// 0059c707  ffd2                 call edx
// 0059c709  8d4608               lea eax, [esi + 8]
// 0059c70c  83c9ff               or ecx, 0xffffffff
// 0059c70f  f00fc108             lock xadd dword ptr [eax], ecx
// 0059c713  7509                 jne 0x59c71e
// 0059c715  8b16                 mov edx, dword ptr [esi]
// 0059c717  8b4208               mov eax, dword ptr [edx + 8]
// 0059c71a  8bce                 mov ecx, esi
// 0059c71c  ffd0                 call eax
// 0059c71e  8bcd                 mov ecx, ebp
// 0059c720  33f6                 xor esi, esi
// 0059c722  e8f9e6eeff           call 0x48ae20
// 0059c727  85c0                 test eax, eax
// 0059c729  763b                 jbe 0x59c766
// 0059c72b  57                   push edi
// 0059c72c  8d642400             lea esp, [esp]
// 0059c730  8bbd08010000         mov edi, dword ptr [ebp + 0x108]
// 0059c736  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0059c739  2b4f0c               sub ecx, dword ptr [edi + 0xc]
// 0059c73c  c1f903               sar ecx, 3
// 0059c73f  3bf1                 cmp esi, ecx
// 0059c741  7206                 jb 0x59c749
// 0059c743  ff1590288000         call dword ptr [0x802890]
// 0059c749  8b570c               mov edx, dword ptr [edi + 0xc]
// 0059c74c  8b04f2               mov eax, dword ptr [edx + esi*8]
// 0059c74f  53                   push ebx
// 0059c750  50                   push eax
// 0059c751  e8eafeffff           call 0x59c640
// 0059c756  83c408               add esp, 8
// 0059c759  8bcd                 mov ecx, ebp
// 0059c75b  46                   inc esi
// 0059c75c  e8bfe6eeff           call 0x48ae20
// 0059c761  3bf0                 cmp esi, eax
// 0059c763  72cb                 jb 0x59c730
// 0059c765  5f                   pop edi
// 0059c766  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059c76a  5e                   pop esi
// 0059c76b  5d                   pop ebp
// 0059c76c  5b                   pop ebx
// 0059c76d  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c774  83c41c               add esp, 0x1c
// 0059c777  c3                   ret 
// library rbxgs/roc_unit_64aa12fe31ddf0b7.cpp (function ?findParts@PartInstance@RBX@@SAXPAVInstance@2@AAV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_64aa12fe31ddf0b7.cpp
