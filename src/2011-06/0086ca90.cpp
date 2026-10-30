// roc 2011-06 0086ca90  unit: CXTPStatusBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ca90
//
// 0086ca90  53                   push ebx
// 0086ca91  56                   push esi
// 0086ca92  8bf1                 mov esi, ecx
// 0086ca94  57                   push edi
// 0086ca95  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 0086ca9b  33db                 xor ebx, ebx
// 0086ca9d  33d2                 xor edx, edx
// 0086ca9f  85ff                 test edi, edi
// 0086caa1  7e20                 jle 0x86cac3
// 0086caa3  85d2                 test edx, edx
// 0086caa5  7c22                 jl 0x86cac9
// 0086caa7  3bd7                 cmp edx, edi
// 0086caa9  7d1e                 jge 0x86cac9
// 0086caab  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0086cab1  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0086cab4  e8674ebeff           call 0x451920
// 0086cab9  85c0                 test eax, eax
// 0086cabb  7401                 je 0x86cabe
// 0086cabd  43                   inc ebx
// 0086cabe  42                   inc edx
// 0086cabf  3bd7                 cmp edx, edi
// 0086cac1  7ce0                 jl 0x86caa3
// 0086cac3  5f                   pop edi
// 0086cac4  5e                   pop esi
// 0086cac5  8bc3                 mov eax, ebx
// 0086cac7  5b                   pop ebx
// 0086cac8  c3                   ret 
// 0086cac9  e83cd8f9ff           call 0x80a30a
// copied from an identical function in another client (function ?GetVisiblePaneCount@CXTPStatusBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp