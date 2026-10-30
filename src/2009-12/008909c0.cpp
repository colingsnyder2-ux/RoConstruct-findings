// roc 2009-12 008909c0  unit: CXTPDockContext  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008909c0
//
// 008909c0  83ec18               sub esp, 0x18
// 008909c3  53                   push ebx
// 008909c4  56                   push esi
// 008909c5  8bf1                 mov esi, ecx
// 008909c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 008909ca  57                   push edi
// 008909cb  e8003bf7ff           call 0x8044d0
// 008909d0  8bd8                 mov ebx, eax
// 008909d2  8b4604               mov eax, dword ptr [esi + 4]
// 008909d5  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 008909dc  756c                 jne 0x890a4a
// 008909de  f680ec0000000f       test byte ptr [eax + 0xec], 0xf
// 008909e5  7509                 jne 0x8909f0
// 008909e7  5f                   pop edi
// 008909e8  5e                   pop esi
// 008909e9  33c0                 xor eax, eax
// 008909eb  5b                   pop ebx
// 008909ec  83c418               add esp, 0x18
// 008909ef  c3                   ret 
// 008909f0  8b4618               mov eax, dword ptr [esi + 0x18]
// 008909f3  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008909f6  8b5620               mov edx, dword ptr [esi + 0x20]
// 008909f9  89442414             mov dword ptr [esp + 0x14], eax
// 008909fd  8b4624               mov eax, dword ptr [esi + 0x24]
// 00890a00  89442420             mov dword ptr [esp + 0x20], eax
// 00890a04  8b4614               mov eax, dword ptr [esi + 0x14]
// 00890a07  894c2418             mov dword ptr [esp + 0x18], ecx
// 00890a0b  8954241c             mov dword ptr [esp + 0x1c], edx
// 00890a0f  83f803               cmp eax, 3
// 00890a12  7709                 ja 0x890a1d
// 00890a14  8bbc8390000000       mov edi, dword ptr [ebx + eax*4 + 0x90]
// 00890a1b  eb02                 jmp 0x890a1f
// 00890a1d  33ff                 xor edi, edi
// 00890a1f  8d4c2414             lea ecx, [esp + 0x14]
// 00890a23  51                   push ecx
// 00890a24  8bcf                 mov ecx, edi
// 00890a26  e8cf33f6ff           call 0x7f3dfa
// 00890a2b  8b4604               mov eax, dword ptr [esi + 4]
// 00890a2e  57                   push edi
// 00890a2f  8d542418             lea edx, [esp + 0x18]
// 00890a33  52                   push edx
// 00890a34  50                   push eax
// 00890a35  8bcb                 mov ecx, ebx
// 00890a37  e85437f8ff           call 0x814190
// 00890a3c  6a00                 push 0
// 00890a3e  8bcb                 mov ecx, ebx
// 00890a40  e85b3ff8ff           call 0x8149a0
// 00890a45  e99c000000           jmp 0x890ae6
// 00890a4a  f680ec00000010       test byte ptr [eax + 0xec], 0x10
// 00890a51  7494                 je 0x8909e7
// 00890a53  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 00890a56  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 00890a5a  748b                 je 0x8909e7
// 00890a5c  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00890a5f  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00890a62  894c240c             mov dword ptr [esp + 0xc], ecx
// 00890a66  89542410             mov dword ptr [esp + 0x10], edx
// 00890a6a  85c9                 test ecx, ecx
// 00890a6c  7e04                 jle 0x890a72
// 00890a6e  85d2                 test edx, edx
// 00890a70  7f2d                 jg 0x890a9f
// 00890a72  8b5618               mov edx, dword ptr [esi + 0x18]
// 00890a75  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00890a78  8954240c             mov dword ptr [esp + 0xc], edx
// 00890a7c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00890a80  8b5020               mov edx, dword ptr [eax + 0x20]
// 00890a83  52                   push edx
// 00890a84  ff15bccb9800         call dword ptr [0x98cbbc]
// 00890a8a  50                   push eax
// 00890a8b  e89a30f6ff           call 0x7f3b2a
// 00890a90  8b5020               mov edx, dword ptr [eax + 0x20]
// 00890a93  8d4c240c             lea ecx, [esp + 0xc]
// 00890a97  51                   push ecx
// 00890a98  52                   push edx
// 00890a99  ff1554cc9800         call dword ptr [0x98cc54]
// 00890a9f  8b4604               mov eax, dword ptr [esi + 4]
// 00890aa2  50                   push eax
// 00890aa3  8bcb                 mov ecx, ebx
// 00890aa5  e88637f8ff           call 0x814230
// 00890aaa  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890aad  8b11                 mov edx, dword ptr [ecx]
// 00890aaf  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 00890ab5  6a46                 push 0x46
// 00890ab7  6a00                 push 0
// 00890ab9  8d44241c             lea eax, [esp + 0x1c]
// 00890abd  50                   push eax
// 00890abe  ffd2                 call edx
// 00890ac0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00890ac4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00890ac8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00890acc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00890ad0  03cf                 add ecx, edi
// 00890ad2  6a01                 push 1
// 00890ad4  2bcf                 sub ecx, edi
// 00890ad6  51                   push ecx
// 00890ad7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00890ada  03c2                 add eax, edx
// 00890adc  2bc2                 sub eax, edx
// 00890ade  50                   push eax
// 00890adf  57                   push edi
// 00890ae0  52                   push edx
// 00890ae1  e84c31f6ff           call 0x7f3c32
// 00890ae6  8b5374               mov edx, dword ptr [ebx + 0x74]
// 00890ae9  5f                   pop edi
// 00890aea  5e                   pop esi
// 00890aeb  c7424c01000000       mov dword ptr [edx + 0x4c], 1
// 00890af2  b801000000           mov eax, 1
// 00890af7  5b                   pop ebx
// 00890af8  83c418               add esp, 0x18
// 00890afb  c3                   ret 
// copied from an identical function in another client (function ?ToggleDocking@CXTPDockContext@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp