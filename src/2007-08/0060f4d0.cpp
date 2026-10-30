// from server: 100% by auto
// roc 2007-08 0060f4d0  unit: RBX::Ball  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f4d0
//
// 0060f4d0  837f5004             cmp dword ptr [edi + 0x50], 4
// 0060f4d4  7c17                 jl 0x60f4ed
// 0060f4d6  8b4748               mov eax, dword ptr [edi + 0x48]
// 0060f4d9  f6400503             test byte ptr [eax + 5], 3
// 0060f4dd  740e                 je 0x60f4ed
// 0060f4df  50                   push eax
// 0060f4e0  8b442408             mov eax, dword ptr [esp + 8]
// 0060f4e4  50                   push eax
// 0060f4e5  e826fbffff           call 0x60f010
// 0060f4ea  83c408               add esp, 8
// 0060f4ed  8b4728               mov eax, dword ptr [edi + 0x28]
// 0060f4f0  8b5714               mov edx, dword ptr [edi + 0x14]
// 0060f4f3  3bc2                 cmp eax, edx
// 0060f4f5  53                   push ebx
// 0060f4f6  8b5f08               mov ebx, dword ptr [edi + 8]
// 0060f4f9  55                   push ebp
// 0060f4fa  56                   push esi
// 0060f4fb  8beb                 mov ebp, ebx
// 0060f4fd  7711                 ja 0x60f510
// 0060f4ff  90                   nop 
// 0060f500  8b4808               mov ecx, dword ptr [eax + 8]
// 0060f503  3be9                 cmp ebp, ecx
// 0060f505  7302                 jae 0x60f509
// 0060f507  8be9                 mov ebp, ecx
// 0060f509  83c018               add eax, 0x18
// 0060f50c  3bc2                 cmp eax, edx
// 0060f50e  76f0                 jbe 0x60f500
// 0060f510  8b7720               mov esi, dword ptr [edi + 0x20]
// 0060f513  3bf3                 cmp esi, ebx
// 0060f515  7324                 jae 0x60f53b
// 0060f517  837e0804             cmp dword ptr [esi + 8], 4
// 0060f51b  7c16                 jl 0x60f533
// 0060f51d  8b06                 mov eax, dword ptr [esi]
// 0060f51f  f6400503             test byte ptr [eax + 5], 3
// 0060f523  740e                 je 0x60f533
// 0060f525  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0060f529  50                   push eax
// 0060f52a  51                   push ecx
// 0060f52b  e8e0faffff           call 0x60f010
// 0060f530  83c408               add esp, 8
// 0060f533  83c610               add esi, 0x10
// 0060f536  3b7708               cmp esi, dword ptr [edi + 8]
// 0060f539  72dc                 jb 0x60f517
// 0060f53b  3bf5                 cmp esi, ebp
// 0060f53d  770c                 ja 0x60f54b
// 0060f53f  33c0                 xor eax, eax
// 0060f541  894608               mov dword ptr [esi + 8], eax
// 0060f544  83c610               add esi, 0x10
// 0060f547  3bf5                 cmp esi, ebp
// 0060f549  76f6                 jbe 0x60f541
// 0060f54b  2b6f20               sub ebp, dword ptr [edi + 0x20]
// 0060f54e  8b7730               mov esi, dword ptr [edi + 0x30]
// 0060f551  c1fd04               sar ebp, 4
// 0060f554  81fe204e0000         cmp esi, 0x4e20
// 0060f55a  7f57                 jg 0x60f5b3
// 0060f55c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0060f55f  2b4f28               sub ecx, dword ptr [edi + 0x28]
// 0060f562  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0060f567  f7e9                 imul ecx
// 0060f569  c1fa02               sar edx, 2
// 0060f56c  8bc2                 mov eax, edx
// 0060f56e  c1e81f               shr eax, 0x1f
// 0060f571  03c2                 add eax, edx
// 0060f573  03c0                 add eax, eax
// 0060f575  03c0                 add eax, eax
// 0060f577  3bc6                 cmp eax, esi
// 0060f579  7d16                 jge 0x60f591
// 0060f57b  83fe10               cmp esi, 0x10
// 0060f57e  7e11                 jle 0x60f591
// 0060f580  8bc6                 mov eax, esi
// 0060f582  99                   cdq 
// 0060f583  2bc2                 sub eax, edx
// 0060f585  d1f8                 sar eax, 1
// 0060f587  50                   push eax
// 0060f588  57                   push edi
// 0060f589  e80265fbff           call 0x5c5a90
// 0060f58e  83c408               add esp, 8
// 0060f591  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0060f594  8d0cad00000000       lea ecx, [ebp*4]
// 0060f59b  3bc8                 cmp ecx, eax
// 0060f59d  7d14                 jge 0x60f5b3
// 0060f59f  83f85a               cmp eax, 0x5a
// 0060f5a2  7e0f                 jle 0x60f5b3
// 0060f5a4  99                   cdq 
// 0060f5a5  2bc2                 sub eax, edx
// 0060f5a7  d1f8                 sar eax, 1
// 0060f5a9  50                   push eax
// 0060f5aa  57                   push edi
// 0060f5ab  e88064fbff           call 0x5c5a30
// 0060f5b0  83c408               add esp, 8
// 0060f5b3  5e                   pop esi
// 0060f5b4  5d                   pop ebp
// 0060f5b5  5b                   pop ebx
// 0060f5b6  c3                   ret 
// library lua-5.1.4/lgc.c (function _traversestack)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
