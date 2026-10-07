// roc 2010-06 00588b40  unit: seg_00580000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588b40
//
// 00588b40  83ec18               sub esp, 0x18
// 00588b43  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00588b47  53                   push ebx
// 00588b48  55                   push ebp
// 00588b49  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00588b4d  56                   push esi
// 00588b4e  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 00588b51  57                   push edi
// 00588b52  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00588b56  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 00588b5c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 00588b5f  03f6                 add esi, esi
// 00588b61  83c002               add eax, 2
// 00588b64  03f6                 add esi, esi
// 00588b66  50                   push eax
// 00588b67  83c1fc               add ecx, -4
// 00588b6a  03f6                 add esi, esi
// 00588b6c  51                   push ecx
// 00588b6d  8bc6                 mov eax, esi
// 00588b6f  e83cf9ffff           call 0x5884b0
// 00588b74  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00588b7a  b980000000           mov ecx, 0x80
// 00588b7f  2bc8                 sub ecx, eax
// 00588b81  c1e109               shl ecx, 9
// 00588b84  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00588b88  33c9                 xor ecx, ecx
// 00588b8a  c1e006               shl eax, 6
// 00588b8d  83c408               add esp, 8
// 00588b90  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 00588b93  89442410             mov dword ptr [esp + 0x10], eax
// 00588b97  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00588b9b  0f8e0e010000         jle 0x588caf
// 00588ba1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00588ba5  83c6fe               add esi, -2
// 00588ba8  83c004               add eax, 4
// 00588bab  89742424             mov dword ptr [esp + 0x24], esi
// 00588baf  89442420             mov dword ptr [esp + 0x20], eax
// 00588bb3  8b542438             mov edx, dword ptr [esp + 0x38]
// 00588bb7  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00588bba  8b78f8               mov edi, dword ptr [eax - 8]
// 00588bbd  8b28                 mov ebp, dword ptr [eax]
// 00588bbf  0fb617               movzx edx, byte ptr [edi]
// 00588bc2  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00588bc6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00588bca  8b48fc               mov ecx, dword ptr [eax - 4]
// 00588bcd  0fb631               movzx esi, byte ptr [ecx]
// 00588bd0  0fb64500             movzx eax, byte ptr [ebp]
// 00588bd4  03c6                 add eax, esi
// 00588bd6  03d0                 add edx, eax
// 00588bd8  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00588bdc  45                   inc ebp
// 00588bdd  47                   inc edi
// 00588bde  89542434             mov dword ptr [esp + 0x34], edx
// 00588be2  03c3                 add eax, ebx
// 00588be4  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00588be8  03d2                 add edx, edx
// 00588bea  2bd6                 sub edx, esi
// 00588bec  0faf742414           imul esi, dword ptr [esp + 0x14]
// 00588bf1  41                   inc ecx
// 00588bf2  03c3                 add eax, ebx
// 00588bf4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00588bf8  03d0                 add edx, eax
// 00588bfa  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00588bff  8d943200800000       lea edx, [edx + esi + 0x8000]
// 00588c06  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00588c0a  c1fa10               sar edx, 0x10
// 00588c0d  8816                 mov byte ptr [esi], dl
// 00588c0f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00588c13  46                   inc esi
// 00588c14  8974242c             mov dword ptr [esp + 0x2c], esi
// 00588c18  89442434             mov dword ptr [esp + 0x34], eax
// 00588c1c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00588c20  85db                 test ebx, ebx
// 00588c22  764b                 jbe 0x588c6f
// 00588c24  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00588c28  0fb631               movzx esi, byte ptr [ecx]
// 00588c2b  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00588c2f  47                   inc edi
// 00588c30  45                   inc ebp
// 00588c31  2bd6                 sub edx, esi
// 00588c33  0faf742414           imul esi, dword ptr [esp + 0x14]
// 00588c38  41                   inc ecx
// 00588c39  03c3                 add eax, ebx
// 00588c3b  0fb619               movzx ebx, byte ptr [ecx]
// 00588c3e  03c3                 add eax, ebx
// 00588c40  03d0                 add edx, eax
// 00588c42  03542434             add edx, dword ptr [esp + 0x34]
// 00588c46  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00588c4b  8d943200800000       lea edx, [edx + esi + 0x8000]
// 00588c52  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00588c56  c1fa10               sar edx, 0x10
// 00588c59  8816                 mov byte ptr [esi], dl
// 00588c5b  8b542434             mov edx, dword ptr [esp + 0x34]
// 00588c5f  46                   inc esi
// 00588c60  836c241801           sub dword ptr [esp + 0x18], 1
// 00588c65  8974242c             mov dword ptr [esp + 0x2c], esi
// 00588c69  89442434             mov dword ptr [esp + 0x34], eax
// 00588c6d  75b5                 jne 0x588c24
// 00588c6f  0fb609               movzx ecx, byte ptr [ecx]
// 00588c72  03c0                 add eax, eax
// 00588c74  2bc1                 sub eax, ecx
// 00588c76  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 00588c7b  03c2                 add eax, edx
// 00588c7d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00588c82  8b542430             mov edx, dword ptr [esp + 0x30]
// 00588c86  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 00588c8d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00588c91  c1f910               sar ecx, 0x10
// 00588c94  880e                 mov byte ptr [esi], cl
// 00588c96  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00588c9a  41                   inc ecx
// 00588c9b  83c004               add eax, 4
// 00588c9e  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00588ca1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00588ca5  89442420             mov dword ptr [esp + 0x20], eax
// 00588ca9  0f8c04ffffff         jl 0x588bb3
// 00588caf  5f                   pop edi
// 00588cb0  5e                   pop esi
// 00588cb1  5d                   pop ebp
// 00588cb2  5b                   pop ebx
// 00588cb3  83c418               add esp, 0x18
// 00588cb6  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
