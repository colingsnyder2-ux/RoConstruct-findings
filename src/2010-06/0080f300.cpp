// roc 2010-06 0080f300  unit: CXTPStatusBar  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f300
//
// 0080f300  53                   push ebx
// 0080f301  56                   push esi
// 0080f302  8bf1                 mov esi, ecx
// 0080f304  57                   push edi
// 0080f305  8bbea0000000         mov edi, dword ptr [esi + 0xa0]
// 0080f30b  33db                 xor ebx, ebx
// 0080f30d  33d2                 xor edx, edx
// 0080f30f  85ff                 test edi, edi
// 0080f311  7e20                 jle 0x80f333
// 0080f313  85d2                 test edx, edx
// 0080f315  7c22                 jl 0x80f339
// 0080f317  3bd7                 cmp edx, edi
// 0080f319  7d1e                 jge 0x80f339
// 0080f31b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0080f321  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0080f324  e8c72e0700           call 0x8821f0
// 0080f329  85c0                 test eax, eax
// 0080f32b  7401                 je 0x80f32e
// 0080f32d  43                   inc ebx
// 0080f32e  42                   inc edx
// 0080f32f  3bd7                 cmp edx, edi
// 0080f331  7ce0                 jl 0x80f313
// 0080f333  5f                   pop edi
// 0080f334  5e                   pop esi
// 0080f335  8bc3                 mov eax, ebx
// 0080f337  5b                   pop ebx
// 0080f338  c3                   ret 
// 0080f339  e80e89f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetVisiblePaneCount@CXTPStatusBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp