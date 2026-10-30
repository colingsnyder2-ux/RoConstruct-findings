// roc 2009-12 0086c3a0  unit: CSelectionCaption  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c3a0
//
// 0086c3a0  57                   push edi
// 0086c3a1  8bf9                 mov edi, ecx
// 0086c3a3  e804a30b00           call 0x9266ac
// 0086c3a8  80bf8000000000       cmp byte ptr [edi + 0x80], 0
// 0086c3af  756b                 jne 0x86c41c
// 0086c3b1  53                   push ebx
// 0086c3b2  8b1dd8ca9800         mov ebx, dword ptr [0x98cad8]
// 0086c3b8  6a12                 push 0x12
// 0086c3ba  ffd3                 call ebx
// 0086c3bc  6a0f                 push 0xf
// 0086c3be  894778               mov dword ptr [edi + 0x78], eax
// 0086c3c1  ffd3                 call ebx
// 0086c3c3  6a0f                 push 0xf
// 0086c3c5  894770               mov dword ptr [edi + 0x70], eax
// 0086c3c8  ffd3                 call ebx
// 0086c3ca  894774               mov dword ptr [edi + 0x74], eax
// 0086c3cd  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 0086c3d3  50                   push eax
// 0086c3d4  ff1584cc9800         call dword ptr [0x98cc84]
// 0086c3da  85c0                 test eax, eax
// 0086c3dc  743d                 je 0x86c41b
// 0086c3de  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 0086c3e4  8b4774               mov eax, dword ptr [edi + 0x74]
// 0086c3e7  8b9274010000         mov edx, dword ptr [edx + 0x174]
// 0086c3ed  56                   push esi
// 0086c3ee  8db7dc000000         lea esi, [edi + 0xdc]
// 0086c3f4  50                   push eax
// 0086c3f5  8bce                 mov ecx, esi
// 0086c3f7  ffd2                 call edx
// 0086c3f9  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0086c3fc  8b06                 mov eax, dword ptr [esi]
// 0086c3fe  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0086c404  51                   push ecx
// 0086c405  8bce                 mov ecx, esi
// 0086c407  ffd2                 call edx
// 0086c409  8b3e                 mov edi, dword ptr [esi]
// 0086c40b  6a15                 push 0x15
// 0086c40d  ffd3                 call ebx
// 0086c40f  50                   push eax
// 0086c410  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 0086c416  8bce                 mov ecx, esi
// 0086c418  ffd0                 call eax
// 0086c41a  5e                   pop esi
// 0086c41b  5b                   pop ebx
// 0086c41c  5f                   pop edi
// 0086c41d  c3                   ret 
// copied from an identical function in another client (function ?OnSysColorChange@CXTCaption@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp