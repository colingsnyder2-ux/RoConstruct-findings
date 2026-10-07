// roc 2008-06 0065ba70  unit: RBX::BallBallContact  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065ba70
//
// 0065ba70  837f5004             cmp dword ptr [edi + 0x50], 4
// 0065ba74  7c17                 jl 0x65ba8d
// 0065ba76  8b4748               mov eax, dword ptr [edi + 0x48]
// 0065ba79  f6400503             test byte ptr [eax + 5], 3
// 0065ba7d  740e                 je 0x65ba8d
// 0065ba7f  50                   push eax
// 0065ba80  8b442408             mov eax, dword ptr [esp + 8]
// 0065ba84  50                   push eax
// 0065ba85  e846fbffff           call 0x65b5d0
// 0065ba8a  83c408               add esp, 8
// 0065ba8d  8b4728               mov eax, dword ptr [edi + 0x28]
// 0065ba90  8b5714               mov edx, dword ptr [edi + 0x14]
// 0065ba93  53                   push ebx
// 0065ba94  8b5f08               mov ebx, dword ptr [edi + 8]
// 0065ba97  55                   push ebp
// 0065ba98  56                   push esi
// 0065ba99  8beb                 mov ebp, ebx
// 0065ba9b  3bc2                 cmp eax, edx
// 0065ba9d  7711                 ja 0x65bab0
// 0065ba9f  90                   nop 
// 0065baa0  8b4808               mov ecx, dword ptr [eax + 8]
// 0065baa3  3be9                 cmp ebp, ecx
// 0065baa5  7302                 jae 0x65baa9
// 0065baa7  8be9                 mov ebp, ecx
// 0065baa9  83c018               add eax, 0x18
// 0065baac  3bc2                 cmp eax, edx
// 0065baae  76f0                 jbe 0x65baa0
// 0065bab0  8b7720               mov esi, dword ptr [edi + 0x20]
// 0065bab3  3bf3                 cmp esi, ebx
// 0065bab5  7324                 jae 0x65badb
// 0065bab7  837e0804             cmp dword ptr [esi + 8], 4
// 0065babb  7c16                 jl 0x65bad3
// 0065babd  8b06                 mov eax, dword ptr [esi]
// 0065babf  f6400503             test byte ptr [eax + 5], 3
// 0065bac3  740e                 je 0x65bad3
// 0065bac5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0065bac9  50                   push eax
// 0065baca  51                   push ecx
// 0065bacb  e800fbffff           call 0x65b5d0
// 0065bad0  83c408               add esp, 8
// 0065bad3  83c610               add esi, 0x10
// 0065bad6  3b7708               cmp esi, dword ptr [edi + 8]
// 0065bad9  72dc                 jb 0x65bab7
// 0065badb  3bf5                 cmp esi, ebp
// 0065badd  770c                 ja 0x65baeb
// 0065badf  33c0                 xor eax, eax
// 0065bae1  894608               mov dword ptr [esi + 8], eax
// 0065bae4  83c610               add esi, 0x10
// 0065bae7  3bf5                 cmp esi, ebp
// 0065bae9  76f6                 jbe 0x65bae1
// 0065baeb  2b6f20               sub ebp, dword ptr [edi + 0x20]
// 0065baee  8b7730               mov esi, dword ptr [edi + 0x30]
// 0065baf1  c1fd04               sar ebp, 4
// 0065baf4  81fe204e0000         cmp esi, 0x4e20
// 0065bafa  7f57                 jg 0x65bb53
// 0065bafc  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0065baff  2b4f28               sub ecx, dword ptr [edi + 0x28]
// 0065bb02  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0065bb07  f7e9                 imul ecx
// 0065bb09  c1fa02               sar edx, 2
// 0065bb0c  8bc2                 mov eax, edx
// 0065bb0e  c1e81f               shr eax, 0x1f
// 0065bb11  03c2                 add eax, edx
// 0065bb13  03c0                 add eax, eax
// 0065bb15  03c0                 add eax, eax
// 0065bb17  3bc6                 cmp eax, esi
// 0065bb19  7d16                 jge 0x65bb31
// 0065bb1b  83fe10               cmp esi, 0x10
// 0065bb1e  7e11                 jle 0x65bb31
// 0065bb20  8bc6                 mov eax, esi
// 0065bb22  99                   cdq 
// 0065bb23  2bc2                 sub eax, edx
// 0065bb25  d1f8                 sar eax, 1
// 0065bb27  50                   push eax
// 0065bb28  57                   push edi
// 0065bb29  e8a25ffcff           call 0x621ad0
// 0065bb2e  83c408               add esp, 8
// 0065bb31  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0065bb34  8d0cad00000000       lea ecx, [ebp*4]
// 0065bb3b  3bc8                 cmp ecx, eax
// 0065bb3d  7d14                 jge 0x65bb53
// 0065bb3f  83f85a               cmp eax, 0x5a
// 0065bb42  7e0f                 jle 0x65bb53
// 0065bb44  99                   cdq 
// 0065bb45  2bc2                 sub eax, edx
// 0065bb47  d1f8                 sar eax, 1
// 0065bb49  50                   push eax
// 0065bb4a  57                   push edi
// 0065bb4b  e8205ffcff           call 0x621a70
// 0065bb50  83c408               add esp, 8
// 0065bb53  5e                   pop esi
// 0065bb54  5d                   pop ebp
// 0065bb55  5b                   pop ebx
// 0065bb56  c3                   ret 
// library lua-5.1.4/lgc.c (function _traversestack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
