// roc 2008-06 007222f0  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007222f0
//
// 007222f0  53                   push ebx
// 007222f1  55                   push ebp
// 007222f2  56                   push esi
// 007222f3  8be9                 mov ebp, ecx
// 007222f5  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 007222fb  57                   push edi
// 007222fc  e84f1a0700           call 0x793d50
// 00722301  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00722305  8bd8                 mov ebx, eax
// 00722307  33f6                 xor esi, esi
// 00722309  85db                 test ebx, ebx
// 0072230b  7e2f                 jle 0x72233c
// 0072230d  8d4900               lea ecx, [ecx]
// 00722310  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00722316  56                   push esi
// 00722317  e864240500           call 0x774780
// 0072231c  397810               cmp dword ptr [eax + 0x10], edi
// 0072231f  7d1b                 jge 0x72233c
// 00722321  897810               mov dword ptr [eax + 0x10], edi
// 00722324  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00722327  2bcf                 sub ecx, edi
// 00722329  83f928               cmp ecx, 0x28
// 0072232c  7d06                 jge 0x722334
// 0072232e  83c728               add edi, 0x28
// 00722331  897818               mov dword ptr [eax + 0x18], edi
// 00722334  8b7818               mov edi, dword ptr [eax + 0x18]
// 00722337  46                   inc esi
// 00722338  3bf3                 cmp esi, ebx
// 0072233a  7cd4                 jl 0x722310
// 0072233c  83c3ff               add ebx, -1
// 0072233f  783f                 js 0x722380
// 00722341  8b742418             mov esi, dword ptr [esp + 0x18]
// 00722345  eb09                 jmp 0x722350
// 00722347  8da42400000000       lea esp, [esp]
// 0072234e  8bff                 mov edi, edi
// 00722350  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00722356  53                   push ebx
// 00722357  e824240500           call 0x774780
// 0072235c  397018               cmp dword ptr [eax + 0x18], esi
// 0072235f  7e1f                 jle 0x722380
// 00722361  8bd6                 mov edx, esi
// 00722363  897018               mov dword ptr [eax + 0x18], esi
// 00722366  2b5010               sub edx, dword ptr [eax + 0x10]
// 00722369  83fa28               cmp edx, 0x28
// 0072236c  7d06                 jge 0x722374
// 0072236e  83c6d8               add esi, -0x28
// 00722371  897010               mov dword ptr [eax + 0x10], esi
// 00722374  8b7010               mov esi, dword ptr [eax + 0x10]
// 00722377  3bf7                 cmp esi, edi
// 00722379  7c11                 jl 0x72238c
// 0072237b  83eb01               sub ebx, 1
// 0072237e  79d0                 jns 0x722350
// 00722380  5f                   pop edi
// 00722381  5e                   pop esi
// 00722382  5d                   pop ebp
// 00722383  b801000000           mov eax, 1
// 00722388  5b                   pop ebx
// 00722389  c20800               ret 8
// 0072238c  5f                   pop edi
// 0072238d  5e                   pop esi
// 0072238e  5d                   pop ebp
// 0072238f  33c0                 xor eax, eax
// 00722391  5b                   pop ebx
// 00722392  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
