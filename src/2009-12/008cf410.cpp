// roc 2009-12 008cf410  unit: CXTPTabManagerItem  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf410
//
// 008cf410  56                   push esi
// 008cf411  57                   push edi
// 008cf412  8bf1                 mov esi, ecx
// 008cf414  33ff                 xor edi, edi
// 008cf416  e845efffff           call 0x8ce360
// 008cf41b  83f805               cmp eax, 5
// 008cf41e  7526                 jne 0x8cf446
// 008cf420  8b06                 mov eax, dword ptr [esi]
// 008cf422  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008cf425  53                   push ebx
// 008cf426  8bce                 mov ecx, esi
// 008cf428  ffd2                 call edx
// 008cf42a  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008cf430  8b01                 mov eax, dword ptr [ecx]
// 008cf432  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008cf435  8b5e5c               mov ebx, dword ptr [esi + 0x5c]
// 008cf438  56                   push esi
// 008cf439  ffd2                 call edx
// 008cf43b  8bf8                 mov edi, eax
// 008cf43d  0faffb               imul edi, ebx
// 008cf440  5b                   pop ebx
// 008cf441  8bc7                 mov eax, edi
// 008cf443  5f                   pop edi
// 008cf444  5e                   pop esi
// 008cf445  c3                   ret 
// 008cf446  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008cf449  33c0                 xor eax, eax
// 008cf44b  85d2                 test edx, edx
// 008cf44d  7e1b                 jle 0x8cf46a
// 008cf44f  90                   nop 
// 008cf450  85c0                 test eax, eax
// 008cf452  7c0c                 jl 0x8cf460
// 008cf454  3bc2                 cmp eax, edx
// 008cf456  7d08                 jge 0x8cf460
// 008cf458  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008cf45b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008cf45e  eb02                 jmp 0x8cf462
// 008cf460  33c9                 xor ecx, ecx
// 008cf462  037920               add edi, dword ptr [ecx + 0x20]
// 008cf465  40                   inc eax
// 008cf466  3bc2                 cmp eax, edx
// 008cf468  7ce6                 jl 0x8cf450
// 008cf46a  8bc7                 mov eax, edi
// 008cf46c  5f                   pop edi
// 008cf46d  5e                   pop esi
// 008cf46e  c3                   ret 
// copied from an identical function in another client (function ?GetItemsLength@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp