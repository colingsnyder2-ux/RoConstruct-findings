// roc 2008-06 006ae5a0  unit: CXTPPaintManager  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae5a0
//
// 006ae5a0  51                   push ecx
// 006ae5a1  53                   push ebx
// 006ae5a2  56                   push esi
// 006ae5a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006ae5a7  83befc00000004       cmp dword ptr [esi + 0xfc], 4
// 006ae5ae  8bd9                 mov ebx, ecx
// 006ae5b0  57                   push edi
// 006ae5b1  895c240c             mov dword ptr [esp + 0xc], ebx
// 006ae5b5  755e                 jne 0x6ae615
// 006ae5b7  8bce                 mov ecx, esi
// 006ae5b9  e8d2c9ffff           call 0x6aaf90
// 006ae5be  83f804               cmp eax, 4
// 006ae5c1  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006ae5c7  7424                 je 0x6ae5ed
// 006ae5c9  83f8ff               cmp eax, -1
// 006ae5cc  750f                 jne 0x6ae5dd
// 006ae5ce  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ae5d4  85c9                 test ecx, ecx
// 006ae5d6  7405                 je 0x6ae5dd
// 006ae5d8  e8e3d1ffff           call 0x6ab7c0
// 006ae5dd  85c0                 test eax, eax
// 006ae5df  7430                 je 0x6ae611
// 006ae5e1  83f804               cmp eax, 4
// 006ae5e4  742b                 je 0x6ae611
// 006ae5e6  bf01000000           mov edi, 1
// 006ae5eb  eb44                 jmp 0x6ae631
// 006ae5ed  83f8ff               cmp eax, -1
// 006ae5f0  750f                 jne 0x6ae601
// 006ae5f2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ae5f8  85c9                 test ecx, ecx
// 006ae5fa  7405                 je 0x6ae601
// 006ae5fc  e8bfd1ffff           call 0x6ab7c0
// 006ae601  85c0                 test eax, eax
// 006ae603  740c                 je 0x6ae611
// 006ae605  83f803               cmp eax, 3
// 006ae608  7407                 je 0x6ae611
// 006ae60a  bf01000000           mov edi, 1
// 006ae60f  eb20                 jmp 0x6ae631
// 006ae611  33ff                 xor edi, edi
// 006ae613  eb1c                 jmp 0x6ae631
// 006ae615  8bbe9c000000         mov edi, dword ptr [esi + 0x9c]
// 006ae61b  83ffff               cmp edi, -1
// 006ae61e  7511                 jne 0x6ae631
// 006ae620  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006ae626  85c9                 test ecx, ecx
// 006ae628  7407                 je 0x6ae631
// 006ae62a  e891d1ffff           call 0x6ab7c0
// 006ae62f  8bf8                 mov edi, eax
// 006ae631  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006ae637  83f809               cmp eax, 9
// 006ae63a  7405                 je 0x6ae641
// 006ae63c  83f80b               cmp eax, 0xb
// 006ae63f  753b                 jne 0x6ae67c
// 006ae641  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006ae647  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 006ae64e  742c                 je 0x6ae67c
// 006ae650  8b13                 mov edx, dword ptr [ebx]
// 006ae652  8bf0                 mov esi, eax
// 006ae654  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006ae65a  8bb6f8000000         mov esi, dword ptr [esi + 0xf8]
// 006ae660  50                   push eax
// 006ae661  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006ae667  56                   push esi
// 006ae668  6a00                 push 0
// 006ae66a  6a00                 push 0
// 006ae66c  57                   push edi
// 006ae66d  6a00                 push 0
// 006ae66f  6a00                 push 0
// 006ae671  8bcb                 mov ecx, ebx
// 006ae673  ffd0                 call eax
// 006ae675  5f                   pop edi
// 006ae676  5e                   pop esi
// 006ae677  5b                   pop ebx
// 006ae678  59                   pop ecx
// 006ae679  c20400               ret 4
// 006ae67c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 006ae682  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006ae688  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 006ae68e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 006ae694  55                   push ebp
// 006ae695  83f9ff               cmp ecx, -1
// 006ae698  750f                 jne 0x6ae6a9
// 006ae69a  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 006ae6a0  85ed                 test ebp, ebp
// 006ae6a2  7405                 je 0x6ae6a9
// 006ae6a4  8b6d38               mov ebp, dword ptr [ebp + 0x38]
// 006ae6a7  eb02                 jmp 0x6ae6ab
// 006ae6a9  8be9                 mov ebp, ecx
// 006ae6ab  8b1b                 mov ebx, dword ptr [ebx]
// 006ae6ad  52                   push edx
// 006ae6ae  8b16                 mov edx, dword ptr [esi]
// 006ae6b0  50                   push eax
// 006ae6b1  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 006ae6b7  8bce                 mov ecx, esi
// 006ae6b9  ffd0                 call eax
// 006ae6bb  8b16                 mov edx, dword ptr [esi]
// 006ae6bd  50                   push eax
// 006ae6be  8b4278               mov eax, dword ptr [edx + 0x78]
// 006ae6c1  55                   push ebp
// 006ae6c2  57                   push edi
// 006ae6c3  8bce                 mov ecx, esi
// 006ae6c5  ffd0                 call eax
// 006ae6c7  8b16                 mov edx, dword ptr [esi]
// 006ae6c9  50                   push eax
// 006ae6ca  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006ae6cd  8bce                 mov ecx, esi
// 006ae6cf  ffd0                 call eax
// 006ae6d1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006ae6d5  8b9380000000         mov edx, dword ptr [ebx + 0x80]
// 006ae6db  50                   push eax
// 006ae6dc  ffd2                 call edx
// 006ae6de  5d                   pop ebp
// 006ae6df  5f                   pop edi
// 006ae6e0  5e                   pop esi
// 006ae6e1  5b                   pop ebx
// 006ae6e2  59                   pop ecx
// 006ae6e3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPaintManager.cpp (function ?GetControlTextColor@CXTPPaintManager@@UAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp
