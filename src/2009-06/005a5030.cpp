// from server: 100% by auto
// roc 2009-06 005a5030  unit: seg_005a0000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5030
//
// 005a5030  83ec18               sub esp, 0x18
// 005a5033  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a5037  53                   push ebx
// 005a5038  55                   push ebp
// 005a5039  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a503d  56                   push esi
// 005a503e  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 005a5041  57                   push edi
// 005a5042  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005a5046  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 005a504c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 005a504f  03f6                 add esi, esi
// 005a5051  83c002               add eax, 2
// 005a5054  03f6                 add esi, esi
// 005a5056  50                   push eax
// 005a5057  83c1fc               add ecx, -4
// 005a505a  03f6                 add esi, esi
// 005a505c  51                   push ecx
// 005a505d  8bc6                 mov eax, esi
// 005a505f  e83cf9ffff           call 0x5a49a0
// 005a5064  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 005a506a  b980000000           mov ecx, 0x80
// 005a506f  2bc8                 sub ecx, eax
// 005a5071  c1e109               shl ecx, 9
// 005a5074  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a5078  33c9                 xor ecx, ecx
// 005a507a  c1e006               shl eax, 6
// 005a507d  83c408               add esp, 8
// 005a5080  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 005a5083  89442410             mov dword ptr [esp + 0x10], eax
// 005a5087  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a508b  0f8e0e010000         jle 0x5a519f
// 005a5091  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a5095  83c6fe               add esi, -2
// 005a5098  83c004               add eax, 4
// 005a509b  89742424             mov dword ptr [esp + 0x24], esi
// 005a509f  89442420             mov dword ptr [esp + 0x20], eax
// 005a50a3  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a50a7  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 005a50aa  8b78f8               mov edi, dword ptr [eax - 8]
// 005a50ad  8b28                 mov ebp, dword ptr [eax]
// 005a50af  0fb617               movzx edx, byte ptr [edi]
// 005a50b2  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 005a50b6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a50ba  8b48fc               mov ecx, dword ptr [eax - 4]
// 005a50bd  0fb631               movzx esi, byte ptr [ecx]
// 005a50c0  0fb64500             movzx eax, byte ptr [ebp]
// 005a50c4  03c6                 add eax, esi
// 005a50c6  03d0                 add edx, eax
// 005a50c8  0fb64501             movzx eax, byte ptr [ebp + 1]
// 005a50cc  45                   inc ebp
// 005a50cd  47                   inc edi
// 005a50ce  89542434             mov dword ptr [esp + 0x34], edx
// 005a50d2  03c3                 add eax, ebx
// 005a50d4  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 005a50d8  03d2                 add edx, edx
// 005a50da  2bd6                 sub edx, esi
// 005a50dc  0faf742414           imul esi, dword ptr [esp + 0x14]
// 005a50e1  41                   inc ecx
// 005a50e2  03c3                 add eax, ebx
// 005a50e4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a50e8  03d0                 add edx, eax
// 005a50ea  0faf542410           imul edx, dword ptr [esp + 0x10]
// 005a50ef  8d943200800000       lea edx, [edx + esi + 0x8000]
// 005a50f6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005a50fa  c1fa10               sar edx, 0x10
// 005a50fd  8816                 mov byte ptr [esi], dl
// 005a50ff  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a5103  46                   inc esi
// 005a5104  8974242c             mov dword ptr [esp + 0x2c], esi
// 005a5108  89442434             mov dword ptr [esp + 0x34], eax
// 005a510c  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a5110  85db                 test ebx, ebx
// 005a5112  764b                 jbe 0x5a515f
// 005a5114  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 005a5118  0fb631               movzx esi, byte ptr [ecx]
// 005a511b  0fb64501             movzx eax, byte ptr [ebp + 1]
// 005a511f  47                   inc edi
// 005a5120  45                   inc ebp
// 005a5121  2bd6                 sub edx, esi
// 005a5123  0faf742414           imul esi, dword ptr [esp + 0x14]
// 005a5128  41                   inc ecx
// 005a5129  03c3                 add eax, ebx
// 005a512b  0fb619               movzx ebx, byte ptr [ecx]
// 005a512e  03c3                 add eax, ebx
// 005a5130  03d0                 add edx, eax
// 005a5132  03542434             add edx, dword ptr [esp + 0x34]
// 005a5136  0faf542410           imul edx, dword ptr [esp + 0x10]
// 005a513b  8d943200800000       lea edx, [edx + esi + 0x8000]
// 005a5142  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005a5146  c1fa10               sar edx, 0x10
// 005a5149  8816                 mov byte ptr [esi], dl
// 005a514b  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a514f  46                   inc esi
// 005a5150  836c241801           sub dword ptr [esp + 0x18], 1
// 005a5155  8974242c             mov dword ptr [esp + 0x2c], esi
// 005a5159  89442434             mov dword ptr [esp + 0x34], eax
// 005a515d  75b5                 jne 0x5a5114
// 005a515f  0fb609               movzx ecx, byte ptr [ecx]
// 005a5162  03c0                 add eax, eax
// 005a5164  2bc1                 sub eax, ecx
// 005a5166  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 005a516b  03c2                 add eax, edx
// 005a516d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 005a5172  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a5176  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 005a517d  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a5181  c1f910               sar ecx, 0x10
// 005a5184  880e                 mov byte ptr [esi], cl
// 005a5186  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a518a  41                   inc ecx
// 005a518b  83c004               add eax, 4
// 005a518e  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 005a5191  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005a5195  89442420             mov dword ptr [esp + 0x20], eax
// 005a5199  0f8c04ffffff         jl 0x5a50a3
// 005a519f  5f                   pop edi
// 005a51a0  5e                   pop esi
// 005a51a1  5d                   pop ebp
// 005a51a2  5b                   pop ebx
// 005a51a3  83c418               add esp, 0x18
// 005a51a6  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
