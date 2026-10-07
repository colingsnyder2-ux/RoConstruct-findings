// roc 2008-06 006dd420  unit: CRobloxTreeCtrl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd420
//
// 006dd420  83ec10               sub esp, 0x10
// 006dd423  55                   push ebp
// 006dd424  56                   push esi
// 006dd425  6a00                 push 0
// 006dd427  8be9                 mov ebp, ecx
// 006dd429  8b4534               mov eax, dword ptr [ebp + 0x34]
// 006dd42c  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd42f  6a00                 push 0
// 006dd431  680a110000           push 0x110a
// 006dd436  50                   push eax
// 006dd437  ff15142e8000         call dword ptr [0x802e14]
// 006dd43d  8bf0                 mov esi, eax
// 006dd43f  85f6                 test esi, esi
// 006dd441  0f84bf000000         je 0x6dd506
// 006dd447  53                   push ebx
// 006dd448  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006dd44c  57                   push edi
// 006dd44d  8d4900               lea ecx, [ecx]
// 006dd450  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006dd453  6a02                 push 2
// 006dd455  56                   push esi
// 006dd456  e8c1ee0d00           call 0x7bc31c
// 006dd45b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 006dd45e  51                   push ecx
// 006dd45f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006dd462  8d542414             lea edx, [esp + 0x14]
// 006dd466  8bf8                 mov edi, eax
// 006dd468  52                   push edx
// 006dd469  d1ef                 shr edi, 1
// 006dd46b  56                   push esi
// 006dd46c  83e701               and edi, 1
// 006dd46f  e8be3afcff           call 0x6a0f32
// 006dd474  8b442424             mov eax, dword ptr [esp + 0x24]
// 006dd478  50                   push eax
// 006dd479  8d4c2414             lea ecx, [esp + 0x14]
// 006dd47d  51                   push ecx
// 006dd47e  8bd1                 mov edx, ecx
// 006dd480  52                   push edx
// 006dd481  ff155c2b8000         call dword ptr [0x802b5c]
// 006dd487  6a00                 push 0
// 006dd489  8bcb                 mov ecx, ebx
// 006dd48b  56                   push esi
// 006dd48c  85c0                 test eax, eax
// 006dd48e  7433                 je 0x6dd4c3
// 006dd490  e8b7ee0d00           call 0x7bc34c
// 006dd495  85ff                 test edi, edi
// 006dd497  7504                 jne 0x6dd49d
// 006dd499  85c0                 test eax, eax
// 006dd49b  743c                 je 0x6dd4d9
// 006dd49d  8a4c2428             mov cl, byte ptr [esp + 0x28]
// 006dd4a1  f6c108               test cl, 8
// 006dd4a4  740a                 je 0x6dd4b0
// 006dd4a6  85c0                 test eax, eax
// 006dd4a8  7406                 je 0x6dd4b0
// 006dd4aa  6a02                 push 2
// 006dd4ac  6a00                 push 0
// 006dd4ae  eb2d                 jmp 0x6dd4dd
// 006dd4b0  f6c104               test cl, 4
// 006dd4b3  7430                 je 0x6dd4e5
// 006dd4b5  85c0                 test eax, eax
// 006dd4b7  742c                 je 0x6dd4e5
// 006dd4b9  50                   push eax
// 006dd4ba  8bcb                 mov ecx, ebx
// 006dd4bc  e885ee0d00           call 0x7bc346
// 006dd4c1  eb22                 jmp 0x6dd4e5
// 006dd4c3  e884ee0d00           call 0x7bc34c
// 006dd4c8  85ff                 test edi, edi
// 006dd4ca  7409                 je 0x6dd4d5
// 006dd4cc  85c0                 test eax, eax
// 006dd4ce  7509                 jne 0x6dd4d9
// 006dd4d0  6a02                 push 2
// 006dd4d2  50                   push eax
// 006dd4d3  eb08                 jmp 0x6dd4dd
// 006dd4d5  85c0                 test eax, eax
// 006dd4d7  740c                 je 0x6dd4e5
// 006dd4d9  6a02                 push 2
// 006dd4db  6a02                 push 2
// 006dd4dd  56                   push esi
// 006dd4de  8bcd                 mov ecx, ebp
// 006dd4e0  e81bf5ffff           call 0x6dca00
// 006dd4e5  8b4534               mov eax, dword ptr [ebp + 0x34]
// 006dd4e8  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd4eb  56                   push esi
// 006dd4ec  6a06                 push 6
// 006dd4ee  680a110000           push 0x110a
// 006dd4f3  50                   push eax
// 006dd4f4  ff15142e8000         call dword ptr [0x802e14]
// 006dd4fa  8bf0                 mov esi, eax
// 006dd4fc  85f6                 test esi, esi
// 006dd4fe  0f854cffffff         jne 0x6dd450
// 006dd504  5f                   pop edi
// 006dd505  5b                   pop ebx
// 006dd506  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 006dd509  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dd50c  52                   push edx
// 006dd50d  ff15942c8000         call dword ptr [0x802c94]
// 006dd513  5e                   pop esi
// 006dd514  5d                   pop ebp
// 006dd515  83c410               add esp, 0x10
// 006dd518  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?UpdateSelectionForRect@CXTTreeBase@@MAEXPBUtagRECT@@IAAV?$CTypedPtrList@VCPtrList@@PAU_TREEITEM@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
