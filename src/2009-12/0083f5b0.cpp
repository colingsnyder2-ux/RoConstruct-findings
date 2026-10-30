// roc 2009-12 0083f5b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083f5b0
//
// 0083f5b0  83ec10               sub esp, 0x10
// 0083f5b3  53                   push ebx
// 0083f5b4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0083f5b8  56                   push esi
// 0083f5b9  8bf1                 mov esi, ecx
// 0083f5bb  85db                 test ebx, ebx
// 0083f5bd  7553                 jne 0x83f612
// 0083f5bf  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0083f5c5  85c0                 test eax, eax
// 0083f5c7  7449                 je 0x83f612
// 0083f5c9  57                   push edi
// 0083f5ca  8b7820               mov edi, dword ptr [eax + 0x20]
// 0083f5cd  ff15eccb9800         call dword ptr [0x98cbec]
// 0083f5d3  3bc7                 cmp eax, edi
// 0083f5d5  5f                   pop edi
// 0083f5d6  753a                 jne 0x83f612
// 0083f5d8  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0083f5de  e80d7bfcff           call 0x8070f0
// 0083f5e3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0083f5e9  8d542408             lea edx, [esp + 8]
// 0083f5ed  52                   push edx
// 0083f5ee  51                   push ecx
// 0083f5ef  c744241864000000     mov dword ptr [esp + 0x18], 0x64
// 0083f5f7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083f5fb  895c2410             mov dword ptr [esp + 0x10], ebx
// 0083f5ff  8974241c             mov dword ptr [esp + 0x1c], esi
// 0083f603  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083f606  6862280000           push 0x2862
// 0083f60b  50                   push eax
// 0083f60c  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0083f612  53                   push ebx
// 0083f613  8bce                 mov ecx, esi
// 0083f615  e8a6c20400           call 0x88b8c0
// 0083f61a  5e                   pop esi
// 0083f61b  5b                   pop ebx
// 0083f61c  83c410               add esp, 0x10
// 0083f61f  c20400               ret 4
// copied from an identical function in another client (function ?OnSetSelected@CCustomizeEdit@CXTPCustomizeSheet@@EAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp