// roc 2012-06 006640f0  unit: seg_00660000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006640f0
//
// 006640f0  56                   push esi
// 006640f1  8b742408             mov esi, dword ptr [esp + 8]
// 006640f5  8b4604               mov eax, dword ptr [esi + 4]
// 006640f8  8b08                 mov ecx, dword ptr [eax]
// 006640fa  57                   push edi
// 006640fb  6a18                 push 0x18
// 006640fd  6a01                 push 1
// 006640ff  56                   push esi
// 00664100  ffd1                 call ecx
// 00664102  8bf8                 mov edi, eax
// 00664104  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0066410a  c70790a75900         mov dword ptr [edi], 0x59a790
// 00664110  8b4628               mov eax, dword ptr [esi + 0x28]
// 00664113  48                   dec eax
// 00664114  83c40c               add esp, 0xc
// 00664117  83f804               cmp eax, 4
// 0066411a  771f                 ja 0x66413b
// 0066411c  ff248560426600       jmp dword ptr [eax*4 + 0x664260]
// 00664123  837e2401             cmp dword ptr [esi + 0x24], 1
// 00664127  742b                 je 0x664154
// 00664129  eb16                 jmp 0x664141
// 0066412b  837e2403             cmp dword ptr [esi + 0x24], 3
// 0066412f  7423                 je 0x664154
// 00664131  eb0e                 jmp 0x664141
// 00664133  837e2404             cmp dword ptr [esi + 0x24], 4
// 00664137  741b                 je 0x664154
// 00664139  eb06                 jmp 0x664141
// 0066413b  837e2401             cmp dword ptr [esi + 0x24], 1
// 0066413f  7d13                 jge 0x664154
// 00664141  8b16                 mov edx, dword ptr [esi]
// 00664143  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0066414a  8b06                 mov eax, dword ptr [esi]
// 0066414c  8b08                 mov ecx, dword ptr [eax]
// 0066414e  56                   push esi
// 0066414f  ffd1                 call ecx
// 00664151  83c404               add esp, 4
// 00664154  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00664157  8bc1                 mov eax, ecx
// 00664159  ba01000000           mov edx, 1
// 0066415e  2bc2                 sub eax, edx
// 00664160  0f8491000000         je 0x6641f7
// 00664166  2bc2                 sub eax, edx
// 00664168  7453                 je 0x6641bd
// 0066416a  83e802               sub eax, 2
// 0066416d  741b                 je 0x66418a
// 0066416f  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 00664172  0f858e000000         jne 0x664206
// 00664178  8b5624               mov edx, dword ptr [esi + 0x24]
// 0066417b  895664               mov dword ptr [esi + 0x64], edx
// 0066417e  c74704803e6600       mov dword ptr [edi + 4], 0x663e80
// 00664185  e9bb000000           jmp 0x664245
// 0066418a  8b4628               mov eax, dword ptr [esi + 0x28]
// 0066418d  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00664194  83f805               cmp eax, 5
// 00664197  7513                 jne 0x6641ac
// 00664199  8bc6                 mov eax, esi
// 0066419b  c74704a03f6600       mov dword ptr [edi + 4], 0x663fa0
// 006641a2  e8e9faffff           call 0x663c90
// 006641a7  e999000000           jmp 0x664245
// 006641ac  83f804               cmp eax, 4
// 006641af  7555                 jne 0x664206
// 006641b1  c74704803e6600       mov dword ptr [edi + 4], 0x663e80
// 006641b8  e988000000           jmp 0x664245
// 006641bd  8b4628               mov eax, dword ptr [esi + 0x28]
// 006641c0  c7466403000000       mov dword ptr [esi + 0x64], 3
// 006641c7  83f803               cmp eax, 3
// 006641ca  7510                 jne 0x6641dc
// 006641cc  8bc6                 mov eax, esi
// 006641ce  c74704603d6600       mov dword ptr [edi + 4], 0x663d60
// 006641d5  e8b6faffff           call 0x663c90
// 006641da  eb69                 jmp 0x664245
// 006641dc  3bc2                 cmp eax, edx
// 006641de  7509                 jne 0x6641e9
// 006641e0  c74704403f6600       mov dword ptr [edi + 4], 0x663f40
// 006641e7  eb5c                 jmp 0x664245
// 006641e9  83f802               cmp eax, 2
// 006641ec  7518                 jne 0x664206
// 006641ee  c74704803e6600       mov dword ptr [edi + 4], 0x663e80
// 006641f5  eb4e                 jmp 0x664245
// 006641f7  8b4628               mov eax, dword ptr [esi + 0x28]
// 006641fa  895664               mov dword ptr [esi + 0x64], edx
// 006641fd  3bc2                 cmp eax, edx
// 006641ff  741a                 je 0x66421b
// 00664201  83f803               cmp eax, 3
// 00664204  7415                 je 0x66421b
// 00664206  8b06                 mov eax, dword ptr [esi]
// 00664208  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0066420f  8b0e                 mov ecx, dword ptr [esi]
// 00664211  8b11                 mov edx, dword ptr [ecx]
// 00664213  56                   push esi
// 00664214  ffd2                 call edx
// 00664216  83c404               add esp, 4
// 00664219  eb2a                 jmp 0x664245
// 0066421b  c74704103f6600       mov dword ptr [edi + 4], 0x663f10
// 00664222  395624               cmp dword ptr [esi + 0x24], edx
// 00664225  8bc2                 mov eax, edx
// 00664227  7e1c                 jle 0x664245
// 00664229  b954000000           mov ecx, 0x54
// 0066422e  8bff                 mov edi, edi
// 00664230  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00664236  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 0066423b  03c2                 add eax, edx
// 0066423d  83c154               add ecx, 0x54
// 00664240  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00664243  7ceb                 jl 0x664230
// 00664245  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00664249  740a                 je 0x664255
// 0066424b  5f                   pop edi
// 0066424c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00664253  5e                   pop esi
// 00664254  c3                   ret 
// 00664255  8b4664               mov eax, dword ptr [esi + 0x64]
// 00664258  5f                   pop edi
// 00664259  894668               mov dword ptr [esi + 0x68], eax
// 0066425c  5e                   pop esi
// 0066425d  c3                   ret 
// 0066425e  8bff                 mov edi, edi
// 00664260  234166               and eax, dword ptr [ecx + 0x66]
// 00664263  002b                 add byte ptr [ebx], ch
// 00664265  41                   inc ecx
// 00664266  66002b               add byte ptr [ebx], ch
// 00664269  41                   inc ecx
// 0066426a  660033               add byte ptr [ebx], dh
// 0066426d  41                   inc ecx
// 0066426e  660033               add byte ptr [ebx], dh
// 00664271  41                   inc ecx
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
