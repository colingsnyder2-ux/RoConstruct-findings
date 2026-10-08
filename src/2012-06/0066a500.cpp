// from server: 100% by auto
// roc 2012-06 0066a500  unit: seg_00660000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a500
//
// 0066a500  83ec18               sub esp, 0x18
// 0066a503  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0066a507  53                   push ebx
// 0066a508  55                   push ebp
// 0066a509  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066a50d  56                   push esi
// 0066a50e  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 0066a511  57                   push edi
// 0066a512  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0066a516  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 0066a51c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0066a51f  03f6                 add esi, esi
// 0066a521  83c002               add eax, 2
// 0066a524  03f6                 add esi, esi
// 0066a526  50                   push eax
// 0066a527  83c1fc               add ecx, -4
// 0066a52a  03f6                 add esi, esi
// 0066a52c  51                   push ecx
// 0066a52d  8bc6                 mov eax, esi
// 0066a52f  e83cf9ffff           call 0x669e70
// 0066a534  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0066a53a  b980000000           mov ecx, 0x80
// 0066a53f  2bc8                 sub ecx, eax
// 0066a541  c1e109               shl ecx, 9
// 0066a544  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066a548  33c9                 xor ecx, ecx
// 0066a54a  c1e006               shl eax, 6
// 0066a54d  83c408               add esp, 8
// 0066a550  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 0066a553  89442410             mov dword ptr [esp + 0x10], eax
// 0066a557  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066a55b  0f8e0e010000         jle 0x66a66f
// 0066a561  8b442434             mov eax, dword ptr [esp + 0x34]
// 0066a565  83c6fe               add esi, -2
// 0066a568  83c004               add eax, 4
// 0066a56b  89742424             mov dword ptr [esp + 0x24], esi
// 0066a56f  89442420             mov dword ptr [esp + 0x20], eax
// 0066a573  8b542438             mov edx, dword ptr [esp + 0x38]
// 0066a577  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0066a57a  8b78f8               mov edi, dword ptr [eax - 8]
// 0066a57d  8b28                 mov ebp, dword ptr [eax]
// 0066a57f  0fb617               movzx edx, byte ptr [edi]
// 0066a582  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0066a586  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0066a58a  8b48fc               mov ecx, dword ptr [eax - 4]
// 0066a58d  0fb631               movzx esi, byte ptr [ecx]
// 0066a590  0fb64500             movzx eax, byte ptr [ebp]
// 0066a594  03c6                 add eax, esi
// 0066a596  03d0                 add edx, eax
// 0066a598  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0066a59c  45                   inc ebp
// 0066a59d  47                   inc edi
// 0066a59e  89542434             mov dword ptr [esp + 0x34], edx
// 0066a5a2  03c3                 add eax, ebx
// 0066a5a4  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0066a5a8  03d2                 add edx, edx
// 0066a5aa  2bd6                 sub edx, esi
// 0066a5ac  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0066a5b1  41                   inc ecx
// 0066a5b2  03c3                 add eax, ebx
// 0066a5b4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066a5b8  03d0                 add edx, eax
// 0066a5ba  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0066a5bf  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0066a5c6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0066a5ca  c1fa10               sar edx, 0x10
// 0066a5cd  8816                 mov byte ptr [esi], dl
// 0066a5cf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0066a5d3  46                   inc esi
// 0066a5d4  8974242c             mov dword ptr [esp + 0x2c], esi
// 0066a5d8  89442434             mov dword ptr [esp + 0x34], eax
// 0066a5dc  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066a5e0  85db                 test ebx, ebx
// 0066a5e2  764b                 jbe 0x66a62f
// 0066a5e4  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0066a5e8  0fb631               movzx esi, byte ptr [ecx]
// 0066a5eb  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0066a5ef  47                   inc edi
// 0066a5f0  45                   inc ebp
// 0066a5f1  2bd6                 sub edx, esi
// 0066a5f3  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0066a5f8  41                   inc ecx
// 0066a5f9  03c3                 add eax, ebx
// 0066a5fb  0fb619               movzx ebx, byte ptr [ecx]
// 0066a5fe  03c3                 add eax, ebx
// 0066a600  03d0                 add edx, eax
// 0066a602  03542434             add edx, dword ptr [esp + 0x34]
// 0066a606  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0066a60b  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0066a612  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0066a616  c1fa10               sar edx, 0x10
// 0066a619  8816                 mov byte ptr [esi], dl
// 0066a61b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0066a61f  46                   inc esi
// 0066a620  836c241801           sub dword ptr [esp + 0x18], 1
// 0066a625  8974242c             mov dword ptr [esp + 0x2c], esi
// 0066a629  89442434             mov dword ptr [esp + 0x34], eax
// 0066a62d  75b5                 jne 0x66a5e4
// 0066a62f  0fb609               movzx ecx, byte ptr [ecx]
// 0066a632  03c0                 add eax, eax
// 0066a634  2bc1                 sub eax, ecx
// 0066a636  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 0066a63b  03c2                 add eax, edx
// 0066a63d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0066a642  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066a646  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 0066a64d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066a651  c1f910               sar ecx, 0x10
// 0066a654  880e                 mov byte ptr [esi], cl
// 0066a656  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066a65a  41                   inc ecx
// 0066a65b  83c004               add eax, 4
// 0066a65e  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0066a661  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0066a665  89442420             mov dword ptr [esp + 0x20], eax
// 0066a669  0f8c04ffffff         jl 0x66a573
// 0066a66f  5f                   pop edi
// 0066a670  5e                   pop esi
// 0066a671  5d                   pop ebp
// 0066a672  5b                   pop ebx
// 0066a673  83c418               add esp, 0x18
// 0066a676  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
