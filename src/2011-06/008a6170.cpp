// roc 2011-06 008a6170  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6170
//
// 008a6170  53                   push ebx
// 008a6171  55                   push ebp
// 008a6172  56                   push esi
// 008a6173  8be9                 mov ebp, ecx
// 008a6175  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 008a617b  57                   push edi
// 008a617c  e83f8f0300           call 0x8df0c0
// 008a6181  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a6185  8bd8                 mov ebx, eax
// 008a6187  33f6                 xor esi, esi
// 008a6189  85db                 test ebx, ebx
// 008a618b  7e2f                 jle 0x8a61bc
// 008a618d  8d4900               lea ecx, [ecx]
// 008a6190  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 008a6196  56                   push esi
// 008a6197  e8341e0500           call 0x8f7fd0
// 008a619c  397810               cmp dword ptr [eax + 0x10], edi
// 008a619f  7d1b                 jge 0x8a61bc
// 008a61a1  897810               mov dword ptr [eax + 0x10], edi
// 008a61a4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 008a61a7  2bcf                 sub ecx, edi
// 008a61a9  83f928               cmp ecx, 0x28
// 008a61ac  7d06                 jge 0x8a61b4
// 008a61ae  83c728               add edi, 0x28
// 008a61b1  897818               mov dword ptr [eax + 0x18], edi
// 008a61b4  8b7818               mov edi, dword ptr [eax + 0x18]
// 008a61b7  46                   inc esi
// 008a61b8  3bf3                 cmp esi, ebx
// 008a61ba  7cd4                 jl 0x8a6190
// 008a61bc  83c3ff               add ebx, -1
// 008a61bf  783f                 js 0x8a6200
// 008a61c1  8b742418             mov esi, dword ptr [esp + 0x18]
// 008a61c5  eb09                 jmp 0x8a61d0
// 008a61c7  8da42400000000       lea esp, [esp]
// 008a61ce  8bff                 mov edi, edi
// 008a61d0  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 008a61d6  53                   push ebx
// 008a61d7  e8f41d0500           call 0x8f7fd0
// 008a61dc  397018               cmp dword ptr [eax + 0x18], esi
// 008a61df  7e1f                 jle 0x8a6200
// 008a61e1  8bd6                 mov edx, esi
// 008a61e3  897018               mov dword ptr [eax + 0x18], esi
// 008a61e6  2b5010               sub edx, dword ptr [eax + 0x10]
// 008a61e9  83fa28               cmp edx, 0x28
// 008a61ec  7d06                 jge 0x8a61f4
// 008a61ee  83c6d8               add esi, -0x28
// 008a61f1  897010               mov dword ptr [eax + 0x10], esi
// 008a61f4  8b7010               mov esi, dword ptr [eax + 0x10]
// 008a61f7  3bf7                 cmp esi, edi
// 008a61f9  7c11                 jl 0x8a620c
// 008a61fb  83eb01               sub ebx, 1
// 008a61fe  79d0                 jns 0x8a61d0
// 008a6200  5f                   pop edi
// 008a6201  5e                   pop esi
// 008a6202  5d                   pop ebp
// 008a6203  b801000000           mov eax, 1
// 008a6208  5b                   pop ebx
// 008a6209  c20800               ret 8
// 008a620c  5f                   pop edi
// 008a620d  5e                   pop esi
// 008a620e  5d                   pop ebp
// 008a620f  33c0                 xor eax, eax
// 008a6211  5b                   pop ebx
// 008a6212  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
