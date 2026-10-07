// roc 2008-06 0053b130  unit: seg_00530000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b130
//
// 0053b130  83ec14               sub esp, 0x14
// 0053b133  836c242801           sub dword ptr [esp + 0x28], 1
// 0053b138  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0053b13c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0053b142  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0053b145  8b4008               mov eax, dword ptr [eax + 8]
// 0053b148  890c24               mov dword ptr [esp], ecx
// 0053b14b  0f88eb000000         js 0x53b23c
// 0053b151  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053b155  53                   push ebx
// 0053b156  55                   push ebp
// 0053b157  56                   push esi
// 0053b158  03d2                 add edx, edx
// 0053b15a  57                   push edi
// 0053b15b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053b15f  03d2                 add edx, edx
// 0053b161  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053b165  8b31                 mov esi, dword ptr [ecx]
// 0053b167  8b6f08               mov ebp, dword ptr [edi + 8]
// 0053b16a  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 0053b16d  83c104               add ecx, 4
// 0053b170  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0053b174  8b0f                 mov ecx, dword ptr [edi]
// 0053b176  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 0053b179  8b4f04               mov ecx, dword ptr [edi + 4]
// 0053b17c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 0053b17f  896c2428             mov dword ptr [esp + 0x28], ebp
// 0053b183  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053b187  83c204               add edx, 4
// 0053b18a  89542420             mov dword ptr [esp + 0x20], edx
// 0053b18e  85ed                 test ebp, ebp
// 0053b190  0f8697000000         jbe 0x53b22d
// 0053b196  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053b19a  2bd9                 sub ebx, ecx
// 0053b19c  2bd1                 sub edx, ecx
// 0053b19e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053b1a2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0053b1a6  896c2428             mov dword ptr [esp + 0x28], ebp
// 0053b1aa  8d9b00000000         lea ebx, [ebx]
// 0053b1b0  0fb65602             movzx edx, byte ptr [esi + 2]
// 0053b1b4  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 0053b1b8  0fb63e               movzx edi, byte ptr [esi]
// 0053b1bb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053b1bf  89542418             mov dword ptr [esp + 0x18], edx
// 0053b1c3  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 0053b1ca  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 0053b1d1  83c603               add esi, 3
// 0053b1d4  0314b8               add edx, dword ptr [eax + edi*4]
// 0053b1d7  41                   inc ecx
// 0053b1d8  c1fa10               sar edx, 0x10
// 0053b1db  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 0053b1df  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053b1e3  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 0053b1ea  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 0053b1f1  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 0053b1f8  c1fb10               sar ebx, 0x10
// 0053b1fb  8859ff               mov byte ptr [ecx - 1], bl
// 0053b1fe  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 0053b205  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 0053b20c  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 0053b213  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053b217  c1fa10               sar edx, 0x10
// 0053b21a  836c242801           sub dword ptr [esp + 0x28], 1
// 0053b21f  88540fff             mov byte ptr [edi + ecx - 1], dl
// 0053b223  758b                 jne 0x53b1b0
// 0053b225  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053b229  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053b22d  836c243801           sub dword ptr [esp + 0x38], 1
// 0053b232  0f8929ffffff         jns 0x53b161
// 0053b238  5f                   pop edi
// 0053b239  5e                   pop esi
// 0053b23a  5d                   pop ebp
// 0053b23b  5b                   pop ebx
// 0053b23c  83c414               add esp, 0x14
// 0053b23f  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
