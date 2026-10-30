// roc 2012-06 009e7a20  unit: CXTPStatusBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7a20
//
// 009e7a20  53                   push ebx
// 009e7a21  56                   push esi
// 009e7a22  8bf1                 mov esi, ecx
// 009e7a24  57                   push edi
// 009e7a25  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 009e7a2b  33db                 xor ebx, ebx
// 009e7a2d  33d2                 xor edx, edx
// 009e7a2f  85ff                 test edi, edi
// 009e7a31  7e20                 jle 0x9e7a53
// 009e7a33  85d2                 test edx, edx
// 009e7a35  7c22                 jl 0x9e7a59
// 009e7a37  3bd7                 cmp edx, edi
// 009e7a39  7d1e                 jge 0x9e7a59
// 009e7a3b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009e7a41  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 009e7a44  e837f4ffff           call 0x9e6e80
// 009e7a49  85c0                 test eax, eax
// 009e7a4b  7401                 je 0x9e7a4e
// 009e7a4d  43                   inc ebx
// 009e7a4e  42                   inc edx
// 009e7a4f  3bd7                 cmp edx, edi
// 009e7a51  7ce0                 jl 0x9e7a33
// 009e7a53  5f                   pop edi
// 009e7a54  5e                   pop esi
// 009e7a55  8bc3                 mov eax, ebx
// 009e7a57  5b                   pop ebx
// 009e7a58  c3                   ret 
// 009e7a59  e862a9f9ff           call 0x9823c0
// copied from an identical function in another client (function ?GetVisiblePaneCount@CXTPStatusBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp