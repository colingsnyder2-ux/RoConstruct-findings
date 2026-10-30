// roc 2009-12 00860710  unit: CXTPToolTipContextToolTip  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860710
//
// 00860710  83ec18               sub esp, 0x18
// 00860713  56                   push esi
// 00860714  8d44240c             lea eax, [esp + 0xc]
// 00860718  57                   push edi
// 00860719  50                   push eax
// 0086071a  e851c0fdff           call 0x83c770
// 0086071f  8bc8                 mov ecx, eax
// 00860721  e81abcfdff           call 0x83c340
// 00860726  8b742424             mov esi, dword ptr [esp + 0x24]
// 0086072a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086072e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00860731  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 00860737  8d50fc               lea edx, [eax - 4]
// 0086073a  3bd1                 cmp edx, ecx
// 0086073c  7d0b                 jge 0x860749
// 0086073e  2bc1                 sub eax, ecx
// 00860740  6a00                 push 0
// 00860742  83e804               sub eax, 4
// 00860745  50                   push eax
// 00860746  56                   push esi
// 00860747  ffd7                 call edi
// 00860749  8b0e                 mov ecx, dword ptr [esi]
// 0086074b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086074f  3bc1                 cmp eax, ecx
// 00860751  7e08                 jle 0x86075b
// 00860753  6a00                 push 0
// 00860755  2bc1                 sub eax, ecx
// 00860757  50                   push eax
// 00860758  56                   push esi
// 00860759  ffd7                 call edi
// 0086075b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086075f  83c0fc               add eax, -4
// 00860762  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00860765  7d1b                 jge 0x860782
// 00860767  8d4c2408             lea ecx, [esp + 8]
// 0086076b  51                   push ecx
// 0086076c  ff1538cc9800         call dword ptr [0x98cc38]
// 00860772  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00860776  2b560c               sub edx, dword ptr [esi + 0xc]
// 00860779  83ea03               sub edx, 3
// 0086077c  52                   push edx
// 0086077d  6a00                 push 0
// 0086077f  56                   push esi
// 00860780  ffd7                 call edi
// 00860782  5f                   pop edi
// 00860783  5e                   pop esi
// 00860784  83c418               add esp, 0x18
// 00860787  c20400               ret 4
// copied from an identical function in another client (function ?EnsureVisible@CXTPToolTipContextToolTip@@IAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp