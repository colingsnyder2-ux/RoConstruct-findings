// roc 2009-12 00622a20  unit: seg_00620000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622a20
//
// 00622a20  53                   push ebx
// 00622a21  55                   push ebp
// 00622a22  56                   push esi
// 00622a23  57                   push edi
// 00622a24  6800040000           push 0x400
// 00622a29  8bf1                 mov esi, ecx
// 00622a2b  8b4804               mov ecx, dword ptr [eax + 4]
// 00622a2e  8b11                 mov edx, dword ptr [ecx]
// 00622a30  6a01                 push 1
// 00622a32  50                   push eax
// 00622a33  ffd2                 call edx
// 00622a35  c1e609               shl esi, 9
// 00622a38  83c40c               add esp, 0xc
// 00622a3b  81ee00020000         sub esi, 0x200
// 00622a41  8be8                 mov ebp, eax
// 00622a43  8bde                 mov ebx, esi
// 00622a45  bf90aa9c00           mov edi, 0x9caa90
// 00622a4a  8bf5                 mov esi, ebp
// 00622a4c  8d642400             lea esp, [esp]
// 00622a50  33c9                 xor ecx, ecx
// 00622a52  eb0c                 jmp 0x622a60
// 00622a54  8da42400000000       lea esp, [esp]
// 00622a5b  eb03                 jmp 0x622a60
// 00622a5d  8d4900               lea ecx, [ecx]
// 00622a60  0fb6140f             movzx edx, byte ptr [edi + ecx]
// 00622a64  69d2fe010000         imul edx, edx, 0x1fe
// 00622a6a  b801fe0000           mov eax, 0xfe01
// 00622a6f  2bc2                 sub eax, edx
// 00622a71  99                   cdq 
// 00622a72  f7fb                 idiv ebx
// 00622a74  41                   inc ecx
// 00622a75  83c604               add esi, 4
// 00622a78  83f910               cmp ecx, 0x10
// 00622a7b  8946fc               mov dword ptr [esi - 4], eax
// 00622a7e  7ce0                 jl 0x622a60
// 00622a80  83c710               add edi, 0x10
// 00622a83  81ff90ab9c00         cmp edi, 0x9cab90
// 00622a89  7cc5                 jl 0x622a50
// 00622a8b  5f                   pop edi
// 00622a8c  5e                   pop esi
// 00622a8d  8bc5                 mov eax, ebp
// 00622a8f  5d                   pop ebp
// 00622a90  5b                   pop ebx
// 00622a91  c3                   ret 
// library jpeg-6b/jquant1.c (function _make_odither_array)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
