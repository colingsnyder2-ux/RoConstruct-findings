// roc 2009-06 00784220  unit: CXTColorDialog  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00784220
//
// 00784220  6aff                 push -1
// 00784222  6846a48700           push 0x87a446
// 00784227  64a100000000         mov eax, dword ptr fs:[0]
// 0078422d  50                   push eax
// 0078422e  51                   push ecx
// 0078422f  56                   push esi
// 00784230  57                   push edi
// 00784231  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00784236  33c4                 xor eax, esp
// 00784238  50                   push eax
// 00784239  8d442410             lea eax, [esp + 0x10]
// 0078423d  64a300000000         mov dword ptr fs:[0], eax
// 00784243  8bf9                 mov edi, ecx
// 00784245  897c240c             mov dword ptr [esp + 0xc], edi
// 00784249  c7079cd68f00         mov dword ptr [edi], 0x8fd69c
// 0078424f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00784257  33f6                 xor esi, esi
// 00784259  e858840c00           call 0x84c6b6
// 0078425e  85c0                 test eax, eax
// 00784260  7e39                 jle 0x78429b
// 00784262  85f6                 test esi, esi
// 00784264  7c66                 jl 0x7842cc
// 00784266  3bb790000000         cmp esi, dword ptr [edi + 0x90]
// 0078426c  7d5e                 jge 0x7842cc
// 0078426e  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00784274  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00784277  33c0                 xor eax, eax
// 00784279  85c9                 test ecx, ecx
// 0078427b  0f95c0               setne al
// 0078427e  85c0                 test eax, eax
// 00784280  744a                 je 0x7842cc
// 00784282  85c9                 test ecx, ecx
// 00784284  7409                 je 0x78428f
// 00784286  8b11                 mov edx, dword ptr [ecx]
// 00784288  8b4204               mov eax, dword ptr [edx + 4]
// 0078428b  6a01                 push 1
// 0078428d  ffd0                 call eax
// 0078428f  8bcf                 mov ecx, edi
// 00784291  46                   inc esi
// 00784292  e81f840c00           call 0x84c6b6
// 00784297  3bf0                 cmp esi, eax
// 00784299  7cc7                 jl 0x784262
// 0078429b  8d8fb0000000         lea ecx, [edi + 0xb0]
// 007842a1  c644241800           mov byte ptr [esp + 0x18], 0
// 007842a6  e8077c0c00           call 0x84beb2
// 007842ab  8bcf                 mov ecx, edi
// 007842ad  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007842b5  e8b87f0c00           call 0x84c272
// 007842ba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007842be  64890d00000000       mov dword ptr fs:[0], ecx
// 007842c5  59                   pop ecx
// 007842c6  5f                   pop edi
// 007842c7  5e                   pop esi
// 007842c8  83c410               add esp, 0x10
// 007842cb  c3                   ret 
// 007842cc  e8134af9ff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTColorDialog@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp