// roc 2009-12 0085b330  unit: CXTPStatusBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b330
//
// 0085b330  53                   push ebx
// 0085b331  56                   push esi
// 0085b332  8bf1                 mov esi, ecx
// 0085b334  57                   push edi
// 0085b335  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 0085b33b  33db                 xor ebx, ebx
// 0085b33d  33d2                 xor edx, edx
// 0085b33f  85ff                 test edi, edi
// 0085b341  7e20                 jle 0x85b363
// 0085b343  85d2                 test edx, edx
// 0085b345  7c22                 jl 0x85b369
// 0085b347  3bd7                 cmp edx, edi
// 0085b349  7d1e                 jge 0x85b369
// 0085b34b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0085b351  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0085b354  e89780f1ff           call 0x7733f0
// 0085b359  85c0                 test eax, eax
// 0085b35b  7401                 je 0x85b35e
// 0085b35d  43                   inc ebx
// 0085b35e  42                   inc edx
// 0085b35f  3bd7                 cmp edx, edi
// 0085b361  7ce0                 jl 0x85b343
// 0085b363  5f                   pop edi
// 0085b364  5e                   pop esi
// 0085b365  8bc3                 mov eax, ebx
// 0085b367  5b                   pop ebx
// 0085b368  c3                   ret 
// 0085b369  e89e87f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetVisiblePaneCount@CXTPStatusBar@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp