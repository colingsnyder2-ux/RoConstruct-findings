// roc 2008-06 006c1b90  unit: CXTPToolBar::CControlButtonCustomize  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1b90
//
// 006c1b90  56                   push esi
// 006c1b91  8bf1                 mov esi, ecx
// 006c1b93  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c1b99  85c9                 test ecx, ecx
// 006c1b9b  0f84c6000000         je 0x6c1c67
// 006c1ba1  57                   push edi
// 006c1ba2  e86932ffff           call 0x6b4e10
// 006c1ba7  8bf8                 mov edi, eax
// 006c1ba9  85ff                 test edi, edi
// 006c1bab  0f84b5000000         je 0x6c1c66
// 006c1bb1  8b4774               mov eax, dword ptr [edi + 0x74]
// 006c1bb4  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 006c1bbb  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 006c1bc1  85c9                 test ecx, ecx
// 006c1bc3  747f                 je 0x6c1c44
// 006c1bc5  f681d000000010       test byte ptr [ecx + 0xd0], 0x10
// 006c1bcc  7416                 je 0x6c1be4
// 006c1bce  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006c1bd4  8b11                 mov edx, dword ptr [ecx]
// 006c1bd6  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006c1bdc  83e0ef               and eax, 0xffffffef
// 006c1bdf  50                   push eax
// 006c1be0  ffd2                 call edx
// 006c1be2  eb14                 jmp 0x6c1bf8
// 006c1be4  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 006c1bea  8b01                 mov eax, dword ptr [ecx]
// 006c1bec  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006c1bf2  83ca10               or edx, 0x10
// 006c1bf5  52                   push edx
// 006c1bf6  ffd0                 call eax
// 006c1bf8  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 006c1bfe  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006c1c04  c1e804               shr eax, 4
// 006c1c07  f7d0                 not eax
// 006c1c09  83e001               and eax, 1
// 006c1c0c  3986a0000000         cmp dword ptr [esi + 0xa0], eax
// 006c1c12  740f                 je 0x6c1c23
// 006c1c14  6a01                 push 1
// 006c1c16  8bce                 mov ecx, esi
// 006c1c18  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 006c1c1e  e8ad9cfeff           call 0x6ab8d0
// 006c1c23  8b9674010000         mov edx, dword ptr [esi + 0x174]
// 006c1c29  8b8a00010000         mov ecx, dword ptr [edx + 0x100]
// 006c1c2f  8b01                 mov eax, dword ptr [ecx]
// 006c1c31  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 006c1c37  ffd2                 call edx
// 006c1c39  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006c1c3f  e80c32ffff           call 0x6b4e50
// 006c1c44  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 006c1c4b  7419                 je 0x6c1c66
// 006c1c4d  8bcf                 mov ecx, edi
// 006c1c4f  e8fc2cfeff           call 0x6a4950
// 006c1c54  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 006c1c5a  8b01                 mov eax, dword ptr [ecx]
// 006c1c5c  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 006c1c62  6a01                 push 1
// 006c1c64  ffd2                 call edx
// 006c1c66  5f                   pop edi
// 006c1c67  5e                   pop esi
// 006c1c68  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnExecute@CControlButtonCustomize@CXTPToolBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
