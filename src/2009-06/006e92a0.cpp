// roc 2009-06 006e92a0  unit: RBX::PartDropTool  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e92a0
//
// 006e92a0  837f5004             cmp dword ptr [edi + 0x50], 4
// 006e92a4  7c17                 jl 0x6e92bd
// 006e92a6  8b4748               mov eax, dword ptr [edi + 0x48]
// 006e92a9  f6400503             test byte ptr [eax + 5], 3
// 006e92ad  740e                 je 0x6e92bd
// 006e92af  50                   push eax
// 006e92b0  8b442408             mov eax, dword ptr [esp + 8]
// 006e92b4  50                   push eax
// 006e92b5  e846fbffff           call 0x6e8e00
// 006e92ba  83c408               add esp, 8
// 006e92bd  8b4728               mov eax, dword ptr [edi + 0x28]
// 006e92c0  8b5714               mov edx, dword ptr [edi + 0x14]
// 006e92c3  53                   push ebx
// 006e92c4  8b5f08               mov ebx, dword ptr [edi + 8]
// 006e92c7  55                   push ebp
// 006e92c8  56                   push esi
// 006e92c9  8beb                 mov ebp, ebx
// 006e92cb  3bc2                 cmp eax, edx
// 006e92cd  7711                 ja 0x6e92e0
// 006e92cf  90                   nop 
// 006e92d0  8b4808               mov ecx, dword ptr [eax + 8]
// 006e92d3  3be9                 cmp ebp, ecx
// 006e92d5  7302                 jae 0x6e92d9
// 006e92d7  8be9                 mov ebp, ecx
// 006e92d9  83c018               add eax, 0x18
// 006e92dc  3bc2                 cmp eax, edx
// 006e92de  76f0                 jbe 0x6e92d0
// 006e92e0  8b7720               mov esi, dword ptr [edi + 0x20]
// 006e92e3  3bf3                 cmp esi, ebx
// 006e92e5  7324                 jae 0x6e930b
// 006e92e7  837e0804             cmp dword ptr [esi + 8], 4
// 006e92eb  7c16                 jl 0x6e9303
// 006e92ed  8b06                 mov eax, dword ptr [esi]
// 006e92ef  f6400503             test byte ptr [eax + 5], 3
// 006e92f3  740e                 je 0x6e9303
// 006e92f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e92f9  50                   push eax
// 006e92fa  51                   push ecx
// 006e92fb  e800fbffff           call 0x6e8e00
// 006e9300  83c408               add esp, 8
// 006e9303  83c610               add esi, 0x10
// 006e9306  3b7708               cmp esi, dword ptr [edi + 8]
// 006e9309  72dc                 jb 0x6e92e7
// 006e930b  3bf5                 cmp esi, ebp
// 006e930d  770c                 ja 0x6e931b
// 006e930f  33c0                 xor eax, eax
// 006e9311  894608               mov dword ptr [esi + 8], eax
// 006e9314  83c610               add esi, 0x10
// 006e9317  3bf5                 cmp esi, ebp
// 006e9319  76f6                 jbe 0x6e9311
// 006e931b  2b6f20               sub ebp, dword ptr [edi + 0x20]
// 006e931e  8b7730               mov esi, dword ptr [edi + 0x30]
// 006e9321  c1fd04               sar ebp, 4
// 006e9324  81fe204e0000         cmp esi, 0x4e20
// 006e932a  7f57                 jg 0x6e9383
// 006e932c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 006e932f  2b4f28               sub ecx, dword ptr [edi + 0x28]
// 006e9332  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006e9337  f7e9                 imul ecx
// 006e9339  c1fa02               sar edx, 2
// 006e933c  8bc2                 mov eax, edx
// 006e933e  c1e81f               shr eax, 0x1f
// 006e9341  03c2                 add eax, edx
// 006e9343  03c0                 add eax, eax
// 006e9345  03c0                 add eax, eax
// 006e9347  3bc6                 cmp eax, esi
// 006e9349  7d16                 jge 0x6e9361
// 006e934b  83fe10               cmp esi, 0x10
// 006e934e  7e11                 jle 0x6e9361
// 006e9350  8bc6                 mov eax, esi
// 006e9352  99                   cdq 
// 006e9353  2bc2                 sub eax, edx
// 006e9355  d1f8                 sar eax, 1
// 006e9357  50                   push eax
// 006e9358  57                   push edi
// 006e9359  e8e299fdff           call 0x6c2d40
// 006e935e  83c408               add esp, 8
// 006e9361  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006e9364  8d0cad00000000       lea ecx, [ebp*4]
// 006e936b  3bc8                 cmp ecx, eax
// 006e936d  7d14                 jge 0x6e9383
// 006e936f  83f85a               cmp eax, 0x5a
// 006e9372  7e0f                 jle 0x6e9383
// 006e9374  99                   cdq 
// 006e9375  2bc2                 sub eax, edx
// 006e9377  d1f8                 sar eax, 1
// 006e9379  50                   push eax
// 006e937a  57                   push edi
// 006e937b  e86099fdff           call 0x6c2ce0
// 006e9380  83c408               add esp, 8
// 006e9383  5e                   pop esi
// 006e9384  5d                   pop ebp
// 006e9385  5b                   pop ebx
// 006e9386  c3                   ret 
// library lua-5.1.4/lgc.c (function _traversestack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
