// roc 2009-12 00839040  unit: CXTPDockingPaneManager  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839040
//
// 00839040  55                   push ebp
// 00839041  57                   push edi
// 00839042  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00839046  8be9                 mov ebp, ecx
// 00839048  85ff                 test edi, edi
// 0083904a  746f                 je 0x8390bb
// 0083904c  83bdd000000000       cmp dword ptr [ebp + 0xd0], 0
// 00839053  7466                 je 0x8390bb
// 00839055  8b4730               mov eax, dword ptr [edi + 0x30]
// 00839058  53                   push ebx
// 00839059  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0083905d  56                   push esi
// 0083905e  85c0                 test eax, eax
// 00839060  752e                 jne 0x839090
// 00839062  e819f6ffff           call 0x838680
// 00839067  8b7004               mov esi, dword ptr [eax + 4]
// 0083906a  85f6                 test esi, esi
// 0083906c  742c                 je 0x83909a
// 0083906e  8bff                 mov edi, edi
// 00839070  8bc6                 mov eax, esi
// 00839072  8b36                 mov esi, dword ptr [esi]
// 00839074  397808               cmp dword ptr [eax + 8], edi
// 00839077  7511                 jne 0x83908a
// 00839079  8b4014               mov eax, dword ptr [eax + 0x14]
// 0083907c  85c0                 test eax, eax
// 0083907e  740a                 je 0x83908a
// 00839080  53                   push ebx
// 00839081  8d48ac               lea ecx, [eax - 0x54]
// 00839084  57                   push edi
// 00839085  e8b69f0700           call 0x8b3040
// 0083908a  85f6                 test esi, esi
// 0083908c  75e2                 jne 0x839070
// 0083908e  eb0a                 jmp 0x83909a
// 00839090  53                   push ebx
// 00839091  8d48ac               lea ecx, [eax - 0x54]
// 00839094  57                   push edi
// 00839095  e8667f0700           call 0x8b1000
// 0083909a  83bd4001000000       cmp dword ptr [ebp + 0x140], 0
// 008390a1  7409                 je 0x8390ac
// 008390a3  6a01                 push 1
// 008390a5  8bcf                 mov ecx, edi
// 008390a7  e824370200           call 0x85c7d0
// 008390ac  5e                   pop esi
// 008390ad  85db                 test ebx, ebx
// 008390af  5b                   pop ebx
// 008390b0  7409                 je 0x8390bb
// 008390b2  8b07                 mov eax, dword ptr [edi]
// 008390b4  8b5058               mov edx, dword ptr [eax + 0x58]
// 008390b7  8bcf                 mov ecx, edi
// 008390b9  ffd2                 call edx
// 008390bb  5f                   pop edi
// 008390bc  5d                   pop ebp
// 008390bd  c20800               ret 8
// copied from an identical function in another client (function ?ShowPane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp