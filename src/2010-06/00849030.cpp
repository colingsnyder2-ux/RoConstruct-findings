// roc 2010-06 00849030  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849030
//
// 00849030  53                   push ebx
// 00849031  55                   push ebp
// 00849032  56                   push esi
// 00849033  8be9                 mov ebp, ecx
// 00849035  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 0084903b  57                   push edi
// 0084903c  e81f640500           call 0x89f460
// 00849041  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00849045  8bd8                 mov ebx, eax
// 00849047  33f6                 xor esi, esi
// 00849049  85db                 test ebx, ebx
// 0084904b  7e2f                 jle 0x84907c
// 0084904d  8d4900               lea ecx, [ecx]
// 00849050  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00849056  56                   push esi
// 00849057  e8942b0300           call 0x87bbf0
// 0084905c  397810               cmp dword ptr [eax + 0x10], edi
// 0084905f  7d1b                 jge 0x84907c
// 00849061  897810               mov dword ptr [eax + 0x10], edi
// 00849064  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00849067  2bcf                 sub ecx, edi
// 00849069  83f928               cmp ecx, 0x28
// 0084906c  7d06                 jge 0x849074
// 0084906e  83c728               add edi, 0x28
// 00849071  897818               mov dword ptr [eax + 0x18], edi
// 00849074  8b7818               mov edi, dword ptr [eax + 0x18]
// 00849077  46                   inc esi
// 00849078  3bf3                 cmp esi, ebx
// 0084907a  7cd4                 jl 0x849050
// 0084907c  83c3ff               add ebx, -1
// 0084907f  783f                 js 0x8490c0
// 00849081  8b742418             mov esi, dword ptr [esp + 0x18]
// 00849085  eb09                 jmp 0x849090
// 00849087  8da42400000000       lea esp, [esp]
// 0084908e  8bff                 mov edi, edi
// 00849090  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00849096  53                   push ebx
// 00849097  e8542b0300           call 0x87bbf0
// 0084909c  397018               cmp dword ptr [eax + 0x18], esi
// 0084909f  7e1f                 jle 0x8490c0
// 008490a1  8bd6                 mov edx, esi
// 008490a3  897018               mov dword ptr [eax + 0x18], esi
// 008490a6  2b5010               sub edx, dword ptr [eax + 0x10]
// 008490a9  83fa28               cmp edx, 0x28
// 008490ac  7d06                 jge 0x8490b4
// 008490ae  83c6d8               add esi, -0x28
// 008490b1  897010               mov dword ptr [eax + 0x10], esi
// 008490b4  8b7010               mov esi, dword ptr [eax + 0x10]
// 008490b7  3bf7                 cmp esi, edi
// 008490b9  7c11                 jl 0x8490cc
// 008490bb  83eb01               sub ebx, 1
// 008490be  79d0                 jns 0x849090
// 008490c0  5f                   pop edi
// 008490c1  5e                   pop esi
// 008490c2  5d                   pop ebp
// 008490c3  b801000000           mov eax, 1
// 008490c8  5b                   pop ebx
// 008490c9  c20800               ret 8
// 008490cc  5f                   pop edi
// 008490cd  5e                   pop esi
// 008490ce  5d                   pop ebp
// 008490cf  33c0                 xor eax, eax
// 008490d1  5b                   pop ebx
// 008490d2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
