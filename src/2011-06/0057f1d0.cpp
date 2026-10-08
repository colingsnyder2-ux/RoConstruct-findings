// from server: 100% by auto
// roc 2011-06 0057f1d0  unit: seg_00570000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f1d0
//
// 0057f1d0  83ec14               sub esp, 0x14
// 0057f1d3  836c242801           sub dword ptr [esp + 0x28], 1
// 0057f1d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f1dc  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0057f1e2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0057f1e5  8b4008               mov eax, dword ptr [eax + 8]
// 0057f1e8  890c24               mov dword ptr [esp], ecx
// 0057f1eb  0f88eb000000         js 0x57f2dc
// 0057f1f1  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057f1f5  53                   push ebx
// 0057f1f6  55                   push ebp
// 0057f1f7  56                   push esi
// 0057f1f8  03d2                 add edx, edx
// 0057f1fa  57                   push edi
// 0057f1fb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057f1ff  03d2                 add edx, edx
// 0057f201  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057f205  8b31                 mov esi, dword ptr [ecx]
// 0057f207  8b6f08               mov ebp, dword ptr [edi + 8]
// 0057f20a  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 0057f20d  83c104               add ecx, 4
// 0057f210  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0057f214  8b0f                 mov ecx, dword ptr [edi]
// 0057f216  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 0057f219  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057f21c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 0057f21f  896c2428             mov dword ptr [esp + 0x28], ebp
// 0057f223  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057f227  83c204               add edx, 4
// 0057f22a  89542420             mov dword ptr [esp + 0x20], edx
// 0057f22e  85ed                 test ebp, ebp
// 0057f230  0f8697000000         jbe 0x57f2cd
// 0057f236  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057f23a  2bd9                 sub ebx, ecx
// 0057f23c  2bd1                 sub edx, ecx
// 0057f23e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057f242  8954241c             mov dword ptr [esp + 0x1c], edx
// 0057f246  896c2428             mov dword ptr [esp + 0x28], ebp
// 0057f24a  8d9b00000000         lea ebx, [ebx]
// 0057f250  0fb65602             movzx edx, byte ptr [esi + 2]
// 0057f254  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 0057f258  0fb63e               movzx edi, byte ptr [esi]
// 0057f25b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057f25f  89542418             mov dword ptr [esp + 0x18], edx
// 0057f263  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 0057f26a  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 0057f271  83c603               add esi, 3
// 0057f274  0314b8               add edx, dword ptr [eax + edi*4]
// 0057f277  41                   inc ecx
// 0057f278  c1fa10               sar edx, 0x10
// 0057f27b  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 0057f27f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057f283  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 0057f28a  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 0057f291  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 0057f298  c1fb10               sar ebx, 0x10
// 0057f29b  8859ff               mov byte ptr [ecx - 1], bl
// 0057f29e  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 0057f2a5  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 0057f2ac  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 0057f2b3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057f2b7  c1fa10               sar edx, 0x10
// 0057f2ba  836c242801           sub dword ptr [esp + 0x28], 1
// 0057f2bf  88540fff             mov byte ptr [edi + ecx - 1], dl
// 0057f2c3  758b                 jne 0x57f250
// 0057f2c5  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0057f2c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057f2cd  836c243801           sub dword ptr [esp + 0x38], 1
// 0057f2d2  0f8929ffffff         jns 0x57f201
// 0057f2d8  5f                   pop edi
// 0057f2d9  5e                   pop esi
// 0057f2da  5d                   pop ebp
// 0057f2db  5b                   pop ebx
// 0057f2dc  83c414               add esp, 0x14
// 0057f2df  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
