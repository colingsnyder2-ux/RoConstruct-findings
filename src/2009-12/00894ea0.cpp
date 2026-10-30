// roc 2009-12 00894ea0  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894ea0
//
// 00894ea0  53                   push ebx
// 00894ea1  55                   push ebp
// 00894ea2  56                   push esi
// 00894ea3  8be9                 mov ebp, ecx
// 00894ea5  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00894eab  57                   push edi
// 00894eac  e87f63f1ff           call 0x7ab230
// 00894eb1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00894eb5  8bd8                 mov ebx, eax
// 00894eb7  33f6                 xor esi, esi
// 00894eb9  85db                 test ebx, ebx
// 00894ebb  7e2f                 jle 0x894eec
// 00894ebd  8d4900               lea ecx, [ecx]
// 00894ec0  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00894ec6  56                   push esi
// 00894ec7  e8842b0300           call 0x8c7a50
// 00894ecc  397810               cmp dword ptr [eax + 0x10], edi
// 00894ecf  7d1b                 jge 0x894eec
// 00894ed1  897810               mov dword ptr [eax + 0x10], edi
// 00894ed4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00894ed7  2bcf                 sub ecx, edi
// 00894ed9  83f928               cmp ecx, 0x28
// 00894edc  7d06                 jge 0x894ee4
// 00894ede  83c728               add edi, 0x28
// 00894ee1  897818               mov dword ptr [eax + 0x18], edi
// 00894ee4  8b7818               mov edi, dword ptr [eax + 0x18]
// 00894ee7  46                   inc esi
// 00894ee8  3bf3                 cmp esi, ebx
// 00894eea  7cd4                 jl 0x894ec0
// 00894eec  83c3ff               add ebx, -1
// 00894eef  783f                 js 0x894f30
// 00894ef1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00894ef5  eb09                 jmp 0x894f00
// 00894ef7  8da42400000000       lea esp, [esp]
// 00894efe  8bff                 mov edi, edi
// 00894f00  8b8d84020000         mov ecx, dword ptr [ebp + 0x284]
// 00894f06  53                   push ebx
// 00894f07  e8442b0300           call 0x8c7a50
// 00894f0c  397018               cmp dword ptr [eax + 0x18], esi
// 00894f0f  7e1f                 jle 0x894f30
// 00894f11  8bd6                 mov edx, esi
// 00894f13  897018               mov dword ptr [eax + 0x18], esi
// 00894f16  2b5010               sub edx, dword ptr [eax + 0x10]
// 00894f19  83fa28               cmp edx, 0x28
// 00894f1c  7d06                 jge 0x894f24
// 00894f1e  83c6d8               add esi, -0x28
// 00894f21  897010               mov dword ptr [eax + 0x10], esi
// 00894f24  8b7010               mov esi, dword ptr [eax + 0x10]
// 00894f27  3bf7                 cmp esi, edi
// 00894f29  7c11                 jl 0x894f3c
// 00894f2b  83eb01               sub ebx, 1
// 00894f2e  79d0                 jns 0x894f00
// 00894f30  5f                   pop edi
// 00894f31  5e                   pop esi
// 00894f32  5d                   pop ebp
// 00894f33  b801000000           mov eax, 1
// 00894f38  5b                   pop ebx
// 00894f39  c20800               ret 8
// 00894f3c  5f                   pop edi
// 00894f3d  5e                   pop esi
// 00894f3e  5d                   pop ebp
// 00894f3f  33c0                 xor eax, eax
// 00894f41  5b                   pop ebx
// 00894f42  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?ShrinkContextHeaders@CXTPRibbonBar@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
