// roc 2009-06 007b7c50  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7c50
//
// 007b7c50  53                   push ebx
// 007b7c51  55                   push ebp
// 007b7c52  56                   push esi
// 007b7c53  8be9                 mov ebp, ecx
// 007b7c55  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 007b7c5b  57                   push edi
// 007b7c5c  e85f4a0300           call 0x7ec6c0
// 007b7c61  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007b7c65  8bd8                 mov ebx, eax
// 007b7c67  33f6                 xor esi, esi
// 007b7c69  85db                 test ebx, ebx
// 007b7c6b  7e2f                 jle 0x7b7c9c
// 007b7c6d  8d4900               lea ecx, [ecx]
// 007b7c70  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 007b7c76  56                   push esi
// 007b7c77  e854520300           call 0x7eced0
// 007b7c7c  397810               cmp dword ptr [eax + 0x10], edi
// 007b7c7f  7d1b                 jge 0x7b7c9c
// 007b7c81  897810               mov dword ptr [eax + 0x10], edi
// 007b7c84  8b4818               mov ecx, dword ptr [eax + 0x18]
// 007b7c87  2bcf                 sub ecx, edi
// 007b7c89  83f928               cmp ecx, 0x28
// 007b7c8c  7d06                 jge 0x7b7c94
// 007b7c8e  83c728               add edi, 0x28
// 007b7c91  897818               mov dword ptr [eax + 0x18], edi
// 007b7c94  8b7818               mov edi, dword ptr [eax + 0x18]
// 007b7c97  46                   inc esi
// 007b7c98  3bf3                 cmp esi, ebx
// 007b7c9a  7cd4                 jl 0x7b7c70
// 007b7c9c  83c3ff               add ebx, -1
// 007b7c9f  783f                 js 0x7b7ce0
// 007b7ca1  8b742418             mov esi, dword ptr [esp + 0x18]
// 007b7ca5  eb09                 jmp 0x7b7cb0
// 007b7ca7  8da42400000000       lea esp, [esp]
// 007b7cae  8bff                 mov edi, edi
// 007b7cb0  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 007b7cb6  53                   push ebx
// 007b7cb7  e814520300           call 0x7eced0
// 007b7cbc  397018               cmp dword ptr [eax + 0x18], esi
// 007b7cbf  7e1f                 jle 0x7b7ce0
// 007b7cc1  8bd6                 mov edx, esi
// 007b7cc3  897018               mov dword ptr [eax + 0x18], esi
// 007b7cc6  2b5010               sub edx, dword ptr [eax + 0x10]
// 007b7cc9  83fa28               cmp edx, 0x28
// 007b7ccc  7d06                 jge 0x7b7cd4
// 007b7cce  83c6d8               add esi, -0x28
// 007b7cd1  897010               mov dword ptr [eax + 0x10], esi
// 007b7cd4  8b7010               mov esi, dword ptr [eax + 0x10]
// 007b7cd7  3bf7                 cmp esi, edi
// 007b7cd9  7c11                 jl 0x7b7cec
// 007b7cdb  83eb01               sub ebx, 1
// 007b7cde  79d0                 jns 0x7b7cb0
// 007b7ce0  5f                   pop edi
// 007b7ce1  5e                   pop esi
// 007b7ce2  5d                   pop ebp
// 007b7ce3  b801000000           mov eax, 1
// 007b7ce8  5b                   pop ebx
// 007b7ce9  c20800               ret 8
// 007b7cec  5f                   pop edi
// 007b7ced  5e                   pop esi
// 007b7cee  5d                   pop ebp
// 007b7cef  33c0                 xor eax, eax
// 007b7cf1  5b                   pop ebx
// 007b7cf2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
