// roc 2012-06 00a1e620  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e620
//
// 00a1e620  53                   push ebx
// 00a1e621  55                   push ebp
// 00a1e622  56                   push esi
// 00a1e623  8be9                 mov ebp, ecx
// 00a1e625  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00a1e62b  57                   push edi
// 00a1e62c  e8ef66a4ff           call 0x464d20
// 00a1e631  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a1e635  8bd8                 mov ebx, eax
// 00a1e637  33f6                 xor esi, esi
// 00a1e639  85db                 test ebx, ebx
// 00a1e63b  7e2f                 jle 0xa1e66c
// 00a1e63d  8d4900               lea ecx, [ecx]
// 00a1e640  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00a1e646  56                   push esi
// 00a1e647  e884950300           call 0xa57bd0
// 00a1e64c  397810               cmp dword ptr [eax + 0x10], edi
// 00a1e64f  7d1b                 jge 0xa1e66c
// 00a1e651  897810               mov dword ptr [eax + 0x10], edi
// 00a1e654  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00a1e657  2bcf                 sub ecx, edi
// 00a1e659  83f928               cmp ecx, 0x28
// 00a1e65c  7d06                 jge 0xa1e664
// 00a1e65e  83c728               add edi, 0x28
// 00a1e661  897818               mov dword ptr [eax + 0x18], edi
// 00a1e664  8b7818               mov edi, dword ptr [eax + 0x18]
// 00a1e667  46                   inc esi
// 00a1e668  3bf3                 cmp esi, ebx
// 00a1e66a  7cd4                 jl 0xa1e640
// 00a1e66c  83c3ff               add ebx, -1
// 00a1e66f  783f                 js 0xa1e6b0
// 00a1e671  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a1e675  eb09                 jmp 0xa1e680
// 00a1e677  8da42400000000       lea esp, [esp]
// 00a1e67e  8bff                 mov edi, edi
// 00a1e680  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00a1e686  53                   push ebx
// 00a1e687  e844950300           call 0xa57bd0
// 00a1e68c  397018               cmp dword ptr [eax + 0x18], esi
// 00a1e68f  7e1f                 jle 0xa1e6b0
// 00a1e691  8bd6                 mov edx, esi
// 00a1e693  897018               mov dword ptr [eax + 0x18], esi
// 00a1e696  2b5010               sub edx, dword ptr [eax + 0x10]
// 00a1e699  83fa28               cmp edx, 0x28
// 00a1e69c  7d06                 jge 0xa1e6a4
// 00a1e69e  83c6d8               add esi, -0x28
// 00a1e6a1  897010               mov dword ptr [eax + 0x10], esi
// 00a1e6a4  8b7010               mov esi, dword ptr [eax + 0x10]
// 00a1e6a7  3bf7                 cmp esi, edi
// 00a1e6a9  7c11                 jl 0xa1e6bc
// 00a1e6ab  83eb01               sub ebx, 1
// 00a1e6ae  79d0                 jns 0xa1e680
// 00a1e6b0  5f                   pop edi
// 00a1e6b1  5e                   pop esi
// 00a1e6b2  5d                   pop ebp
// 00a1e6b3  b801000000           mov eax, 1
// 00a1e6b8  5b                   pop ebx
// 00a1e6b9  c20800               ret 8
// 00a1e6bc  5f                   pop edi
// 00a1e6bd  5e                   pop esi
// 00a1e6be  5d                   pop ebp
// 00a1e6bf  33c0                 xor eax, eax
// 00a1e6c1  5b                   pop ebx
// 00a1e6c2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
