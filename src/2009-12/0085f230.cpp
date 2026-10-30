// roc 2009-12 0085f230  unit: CXTColorDialog  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f230
//
// 0085f230  6aff                 push -1
// 0085f232  68f6e69500           push 0x95e6f6
// 0085f237  64a100000000         mov eax, dword ptr fs:[0]
// 0085f23d  50                   push eax
// 0085f23e  51                   push ecx
// 0085f23f  56                   push esi
// 0085f240  57                   push edi
// 0085f241  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f246  33c4                 xor eax, esp
// 0085f248  50                   push eax
// 0085f249  8d442410             lea eax, [esp + 0x10]
// 0085f24d  64a300000000         mov dword ptr fs:[0], eax
// 0085f253  8bf9                 mov edi, ecx
// 0085f255  897c240c             mov dword ptr [esp + 0xc], edi
// 0085f259  c70744db9f00         mov dword ptr [edi], 0x9fdb44
// 0085f25f  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0085f267  33f6                 xor esi, esi
// 0085f269  e8b4790c00           call 0x926c22
// 0085f26e  85c0                 test eax, eax
// 0085f270  7e39                 jle 0x85f2ab
// 0085f272  85f6                 test esi, esi
// 0085f274  7c66                 jl 0x85f2dc
// 0085f276  3bb790000000         cmp esi, dword ptr [edi + 0x90]
// 0085f27c  7d5e                 jge 0x85f2dc
// 0085f27e  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 0085f284  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0085f287  33c0                 xor eax, eax
// 0085f289  85c9                 test ecx, ecx
// 0085f28b  0f95c0               setne al
// 0085f28e  85c0                 test eax, eax
// 0085f290  744a                 je 0x85f2dc
// 0085f292  85c9                 test ecx, ecx
// 0085f294  7409                 je 0x85f29f
// 0085f296  8b11                 mov edx, dword ptr [ecx]
// 0085f298  8b4204               mov eax, dword ptr [edx + 4]
// 0085f29b  6a01                 push 1
// 0085f29d  ffd0                 call eax
// 0085f29f  8bcf                 mov ecx, edi
// 0085f2a1  46                   inc esi
// 0085f2a2  e87b790c00           call 0x926c22
// 0085f2a7  3bf0                 cmp esi, eax
// 0085f2a9  7cc7                 jl 0x85f272
// 0085f2ab  8d8fb0000000         lea ecx, [edi + 0xb0]
// 0085f2b1  c644241800           mov byte ptr [esp + 0x18], 0
// 0085f2b6  e899710c00           call 0x926454
// 0085f2bb  8bcf                 mov ecx, edi
// 0085f2bd  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0085f2c5  e814750c00           call 0x9267de
// 0085f2ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085f2ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0085f2d5  59                   pop ecx
// 0085f2d6  5f                   pop edi
// 0085f2d7  5e                   pop esi
// 0085f2d8  83c410               add esp, 0x10
// 0085f2db  c3                   ret 
// 0085f2dc  e82b48f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ??1CXTColorDialog@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp