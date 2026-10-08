// from server: 100% by auto
// roc 2008-06 0053ad50  unit: seg_00530000  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053ad50
//
// 0053ad50  83ec18               sub esp, 0x18
// 0053ad53  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053ad57  53                   push ebx
// 0053ad58  55                   push ebp
// 0053ad59  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053ad5d  56                   push esi
// 0053ad5e  8b751c               mov esi, dword ptr [ebp + 0x1c]
// 0053ad61  57                   push edi
// 0053ad62  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0053ad66  8b87dc000000         mov eax, dword ptr [edi + 0xdc]
// 0053ad6c  8b5f1c               mov ebx, dword ptr [edi + 0x1c]
// 0053ad6f  03f6                 add esi, esi
// 0053ad71  83c002               add eax, 2
// 0053ad74  03f6                 add esi, esi
// 0053ad76  50                   push eax
// 0053ad77  83c1fc               add ecx, -4
// 0053ad7a  03f6                 add esi, esi
// 0053ad7c  51                   push ecx
// 0053ad7d  8bc6                 mov eax, esi
// 0053ad7f  e83cf9ffff           call 0x53a6c0
// 0053ad84  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 0053ad8a  b980000000           mov ecx, 0x80
// 0053ad8f  2bc8                 sub ecx, eax
// 0053ad91  c1e109               shl ecx, 9
// 0053ad94  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053ad98  33c9                 xor ecx, ecx
// 0053ad9a  c1e006               shl eax, 6
// 0053ad9d  83c408               add esp, 8
// 0053ada0  394d0c               cmp dword ptr [ebp + 0xc], ecx
// 0053ada3  89442410             mov dword ptr [esp + 0x10], eax
// 0053ada7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053adab  0f8e0e010000         jle 0x53aebf
// 0053adb1  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053adb5  83c6fe               add esi, -2
// 0053adb8  83c004               add eax, 4
// 0053adbb  89742424             mov dword ptr [esp + 0x24], esi
// 0053adbf  89442420             mov dword ptr [esp + 0x20], eax
// 0053adc3  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053adc7  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0053adca  8b78f8               mov edi, dword ptr [eax - 8]
// 0053adcd  8b28                 mov ebp, dword ptr [eax]
// 0053adcf  0fb617               movzx edx, byte ptr [edi]
// 0053add2  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0053add6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053adda  8b48fc               mov ecx, dword ptr [eax - 4]
// 0053addd  0fb631               movzx esi, byte ptr [ecx]
// 0053ade0  0fb64500             movzx eax, byte ptr [ebp]
// 0053ade4  03c6                 add eax, esi
// 0053ade6  03d0                 add edx, eax
// 0053ade8  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0053adec  45                   inc ebp
// 0053aded  47                   inc edi
// 0053adee  89542434             mov dword ptr [esp + 0x34], edx
// 0053adf2  03c3                 add eax, ebx
// 0053adf4  0fb65901             movzx ebx, byte ptr [ecx + 1]
// 0053adf8  03d2                 add edx, edx
// 0053adfa  2bd6                 sub edx, esi
// 0053adfc  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0053ae01  41                   inc ecx
// 0053ae02  03c3                 add eax, ebx
// 0053ae04  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053ae08  03d0                 add edx, eax
// 0053ae0a  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0053ae0f  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0053ae16  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0053ae1a  c1fa10               sar edx, 0x10
// 0053ae1d  8816                 mov byte ptr [esi], dl
// 0053ae1f  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053ae23  46                   inc esi
// 0053ae24  8974242c             mov dword ptr [esp + 0x2c], esi
// 0053ae28  89442434             mov dword ptr [esp + 0x34], eax
// 0053ae2c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053ae30  85db                 test ebx, ebx
// 0053ae32  764b                 jbe 0x53ae7f
// 0053ae34  0fb65f01             movzx ebx, byte ptr [edi + 1]
// 0053ae38  0fb631               movzx esi, byte ptr [ecx]
// 0053ae3b  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0053ae3f  47                   inc edi
// 0053ae40  45                   inc ebp
// 0053ae41  2bd6                 sub edx, esi
// 0053ae43  0faf742414           imul esi, dword ptr [esp + 0x14]
// 0053ae48  41                   inc ecx
// 0053ae49  03c3                 add eax, ebx
// 0053ae4b  0fb619               movzx ebx, byte ptr [ecx]
// 0053ae4e  03c3                 add eax, ebx
// 0053ae50  03d0                 add edx, eax
// 0053ae52  03542434             add edx, dword ptr [esp + 0x34]
// 0053ae56  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0053ae5b  8d943200800000       lea edx, [edx + esi + 0x8000]
// 0053ae62  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0053ae66  c1fa10               sar edx, 0x10
// 0053ae69  8816                 mov byte ptr [esi], dl
// 0053ae6b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053ae6f  46                   inc esi
// 0053ae70  836c241801           sub dword ptr [esp + 0x18], 1
// 0053ae75  8974242c             mov dword ptr [esp + 0x2c], esi
// 0053ae79  89442434             mov dword ptr [esp + 0x34], eax
// 0053ae7d  75b5                 jne 0x53ae34
// 0053ae7f  0fb609               movzx ecx, byte ptr [ecx]
// 0053ae82  03c0                 add eax, eax
// 0053ae84  2bc1                 sub eax, ecx
// 0053ae86  0faf4c2414           imul ecx, dword ptr [esp + 0x14]
// 0053ae8b  03c2                 add eax, edx
// 0053ae8d  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0053ae92  8b542430             mov edx, dword ptr [esp + 0x30]
// 0053ae96  8d8c0800800000       lea ecx, [eax + ecx + 0x8000]
// 0053ae9d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053aea1  c1f910               sar ecx, 0x10
// 0053aea4  880e                 mov byte ptr [esi], cl
// 0053aea6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053aeaa  41                   inc ecx
// 0053aeab  83c004               add eax, 4
// 0053aeae  3b4a0c               cmp ecx, dword ptr [edx + 0xc]
// 0053aeb1  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053aeb5  89442420             mov dword ptr [esp + 0x20], eax
// 0053aeb9  0f8c04ffffff         jl 0x53adc3
// 0053aebf  5f                   pop edi
// 0053aec0  5e                   pop esi
// 0053aec1  5d                   pop ebp
// 0053aec2  5b                   pop ebx
// 0053aec3  83c418               add esp, 0x18
// 0053aec6  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_smooth_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
