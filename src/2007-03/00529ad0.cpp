// roc 2007-03 00529ad0  unit: seg_00520000  size: 397 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529ad0
//
// 00529ad0  83ec18               sub esp, 0x18
// 00529ad3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00529ad7  53                   push ebx
// 00529ad8  55                   push ebp
// 00529ad9  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00529add  56                   push esi
// 00529ade  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 00529ae1  57                   push edi
// 00529ae2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00529ae6  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 00529aec  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 00529aef  03f6                 add esi, esi
// 00529af1  83c002               add eax, 2
// 00529af4  03f6                 add esi, esi
// 00529af6  50                   push eax
// 00529af7  83c1fc               add ecx, -4
// 00529afa  03f6                 add esi, esi
// 00529afc  51                   push ecx
// 00529afd  8bc6                 mov eax, esi
// 00529aff  e86cf9ffff           call 0x529470
// 00529b04  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 00529b0a  b980000000           mov ecx, 0x80
// 00529b0f  2bc8                 sub ecx, eax
// 00529b11  c1e109               shl ecx, 9
// 00529b14  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00529b18  33c9                 xor ecx, ecx
// 00529b1a  c1e006               shl eax, 6
// 00529b1d  83c408               add esp, 8
// 00529b20  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 00529b23  89442410             mov dword ptr [esp + 0x10], eax
// 00529b27  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00529b2b  0f8e24010000         jle 0x529c55
// 00529b31  8b442434             mov eax, dword ptr [esp + 0x34]
// 00529b35  83c6fe               add esi, -2
// 00529b38  83c004               add eax, 4
// 00529b3b  89742424             mov dword ptr [esp + 0x24], esi
// 00529b3f  89442420             mov dword ptr [esp + 0x20], eax
// 00529b43  8b542438             mov edx, dword ptr [esp + 0x38]
// 00529b47  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00529b4a  8b78f8               mov edi, dword ptr [eax - 8]
// 00529b4d  8b28                 mov ebp, dword ptr [eax]
// 00529b4f  0fb617               movzx edx, byte ptr [edi]
// 00529b52  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00529b56  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00529b5a  8b48fc               mov ecx, dword ptr [eax - 4]
// 00529b5d  0fb631               movzx esi, byte ptr [ecx]
// 00529b60  0fb64500             movzx eax, byte ptr [ebp]
// 00529b64  03c6                 add eax, esi
// 00529b66  03d0                 add edx, eax
// 00529b68  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00529b6c  83c501               add ebp, 1
// 00529b6f  83c701               add edi, 1
// 00529b72  89542434             mov dword ptr [esp + 0x34], edx
// 00529b76  03c3                 add eax, ebx
// 00529b78  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 00529b7c  03d2                 add edx, edx
// 00529b7e  2bd6                 sub edx, esi
// 00529b80  0faf742414           imul esi, dword ptr [esp + 0x14]
// 00529b85  83c101               add ecx, 1
// 00529b88  03c3                 add eax, ebx
// 00529b8a  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00529b8e  03d0                 add edx, eax
// 00529b90  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00529b95  8d943200800000       lea edx, [edx + esi + 0x8000]
// 00529b9c  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00529ba0  c1fa10               sar edx, 0x10
// 00529ba3  8816                 mov byte ptr [esi], dl
// 00529ba5  8b542434             mov edx, dword ptr [esp + 0x34]
// 00529ba9  83c601               add esi, 1
// 00529bac  85db                 test ebx, ebx
// 00529bae  8974242c             mov dword ptr [esp + 0x2c], esi
// 00529bb2  89442434             mov dword ptr [esp + 0x34], eax
// 00529bb6  895c2418             mov dword ptr [esp + 0x18], ebx
// 00529bba  7657                 jbe 0x529c13
// 00529bbc  8d642400             lea esp, [esp]
// 00529bc0  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 00529bc4  0fb631               movzx esi, byte ptr [ecx]
// 00529bc7  0fb64501             movzx eax, byte ptr [ebp + 1]
// 00529bcb  83c701               add edi, 1
// 00529bce  83c501               add ebp, 1
// 00529bd1  2bd6                 sub edx, esi
// 00529bd3  0faf742414           imul esi, dword ptr [esp + 0x14]
// 00529bd8  83c101               add ecx, 1
// 00529bdb  03c3                 add eax, ebx
// 00529bdd  0fb619               movzx ebx, byte ptr [ecx]
// 00529be0  03c3                 add eax, ebx
// 00529be2  03d0                 add edx, eax
// 00529be4  03542434             add edx, dword ptr [esp + 0x34]
// 00529be8  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00529bed  8d943200800000       lea edx, [edx + esi + 0x8000]
// 00529bf4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00529bf8  c1fa10               sar edx, 0x10
// 00529bfb  8816                 mov byte ptr [esi], dl
// 00529bfd  8b542434             mov edx, dword ptr [esp + 0x34]
// 00529c01  83c601               add esi, 1
// 00529c04  836c241801           sub dword ptr [esp + 0x18], 1
// 00529c09  8974242c             mov dword ptr [esp + 0x2c], esi
// 00529c0d  89442434             mov dword ptr [esp + 0x34], eax
// 00529c11  75ad                 jne 0x529bc0
// 00529c13  0fb609               movzx ecx, byte ptr [ecx]
// 00529c16  03c0                 add eax, eax
// 00529c18  2bc1                 sub eax, ecx
// 00529c1a  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 00529c1f  03c2                 add eax, edx
// 00529c21  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00529c26  8b542430             mov edx, dword ptr [esp + 0x30]
// 00529c2a  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 00529c31  8b442420             mov eax, dword ptr [esp + 0x20]
// 00529c35  c1f910               sar ecx, 0x10
// 00529c38  880e                 mov byte ptr [esi], cl
// 00529c3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00529c3e  83c101               add ecx, 1
// 00529c41  83c004               add eax, 4
// 00529c44  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 00529c47  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00529c4b  89442420             mov dword ptr [esp + 0x20], eax
// 00529c4f  0f8ceefeffff         jl 0x529b43
// 00529c55  5f                   pop edi
// 00529c56  5e                   pop esi
// 00529c57  5d                   pop ebp
// 00529c58  5b                   pop ebx
// 00529c59  83c418               add esp, 0x18
// 00529c5c  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
