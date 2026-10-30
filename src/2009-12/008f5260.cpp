// roc 2009-12 008f5260  unit: CXTCaptionButtonTheme  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f5260
//
// 008f5260  6aff                 push -1
// 008f5262  68386d9600           push 0x966d38
// 008f5267  64a100000000         mov eax, dword ptr fs:[0]
// 008f526d  50                   push eax
// 008f526e  83ec08               sub esp, 8
// 008f5271  53                   push ebx
// 008f5272  56                   push esi
// 008f5273  57                   push edi
// 008f5274  a10052b600           mov eax, dword ptr [0xb65200]
// 008f5279  33c4                 xor eax, esp
// 008f527b  50                   push eax
// 008f527c  8d442418             lea eax, [esp + 0x18]
// 008f5280  64a300000000         mov dword ptr fs:[0], eax
// 008f5286  8b4134               mov eax, dword ptr [ecx + 0x34]
// 008f5289  83f8ff               cmp eax, -1
// 008f528c  7503                 jne 0x8f5291
// 008f528e  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008f5291  8b742428             mov esi, dword ptr [esp + 0x28]
// 008f5295  8b16                 mov edx, dword ptr [esi]
// 008f5297  50                   push eax
// 008f5298  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f529b  8bce                 mov ecx, esi
// 008f529d  ffd0                 call eax
// 008f529f  8bd8                 mov ebx, eax
// 008f52a1  895c2410             mov dword ptr [esp + 0x10], ebx
// 008f52a5  89742414             mov dword ptr [esp + 0x14], esi
// 008f52a9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f52ad  8b11                 mov edx, dword ptr [ecx]
// 008f52af  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 008f52b5  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008f52bd  ffd0                 call eax
// 008f52bf  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008f52c3  a803                 test al, 3
// 008f52c5  7406                 je 0x8f52cd
// 008f52c7  6afe                 push -2
// 008f52c9  6afe                 push -2
// 008f52cb  eb04                 jmp 0x8f52d1
// 008f52cd  6afc                 push -4
// 008f52cf  6afc                 push -4
// 008f52d1  57                   push edi
// 008f52d2  ff1558ca9800         call dword ptr [0x98ca58]
// 008f52d8  8b4e04               mov ecx, dword ptr [esi + 4]
// 008f52db  57                   push edi
// 008f52dc  51                   push ecx
// 008f52dd  ff15d4ca9800         call dword ptr [0x98cad4]
// 008f52e3  8b16                 mov edx, dword ptr [esi]
// 008f52e5  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f52e8  53                   push ebx
// 008f52e9  8bce                 mov ecx, esi
// 008f52eb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008f52f3  ffd0                 call eax
// 008f52f5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f52f9  64890d00000000       mov dword ptr fs:[0], ecx
// 008f5300  59                   pop ecx
// 008f5301  5f                   pop edi
// 008f5302  5e                   pop esi
// 008f5303  5b                   pop ebx
// 008f5304  83c414               add esp, 0x14
// 008f5307  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawFocusRect@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp