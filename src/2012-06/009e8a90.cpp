// roc 2012-06 009e8a90  unit: CXTPStatusBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8a90
//
// 009e8a90  56                   push esi
// 009e8a91  57                   push edi
// 009e8a92  8bf1                 mov esi, ecx
// 009e8a94  33ff                 xor edi, edi
// 009e8a96  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 009e8a9c  7e25                 jle 0x9e8ac3
// 009e8a9e  8bff                 mov edi, edi
// 009e8aa0  85ff                 test edi, edi
// 009e8aa2  7c46                 jl 0x9e8aea
// 009e8aa4  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 009e8aaa  7d3e                 jge 0x9e8aea
// 009e8aac  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009e8ab2  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 009e8ab5  e8d09bf9ff           call 0x98268a
// 009e8aba  47                   inc edi
// 009e8abb  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 009e8ac1  7cdd                 jl 0x9e8aa0
// 009e8ac3  6aff                 push -1
// 009e8ac5  6a00                 push 0
// 009e8ac7  8d8e98000000         lea ecx, [esi + 0x98]
// 009e8acd  e88ef7faff           call 0x998260
// 009e8ad2  6a01                 push 1
// 009e8ad4  6a01                 push 1
// 009e8ad6  8bce                 mov ecx, esi
// 009e8ad8  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 009e8ae2  e8a9f9ffff           call 0x9e8490
// 009e8ae7  5f                   pop edi
// 009e8ae8  5e                   pop esi
// 009e8ae9  c3                   ret 
// 009e8aea  e8d198f9ff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPStatusBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp