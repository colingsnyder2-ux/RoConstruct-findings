// roc 2012-06 0066a8e0  unit: seg_00660000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a8e0
//
// 0066a8e0  83ec14               sub esp, 0x14
// 0066a8e3  836c242801           sub dword ptr [esp + 0x28], 1
// 0066a8e8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066a8ec  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0066a8f2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 0066a8f5  8b4008               mov eax, dword ptr [eax + 8]
// 0066a8f8  890c24               mov dword ptr [esp], ecx
// 0066a8fb  0f88eb000000         js 0x66a9ec
// 0066a901  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066a905  53                   push ebx
// 0066a906  55                   push ebp
// 0066a907  56                   push esi
// 0066a908  03d2                 add edx, edx
// 0066a90a  57                   push edi
// 0066a90b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0066a90f  03d2                 add edx, edx
// 0066a911  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066a915  8b31                 mov esi, dword ptr [ecx]
// 0066a917  8b6f08               mov ebp, dword ptr [edi + 8]
// 0066a91a  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 0066a91d  83c104               add ecx, 4
// 0066a920  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0066a924  8b0f                 mov ecx, dword ptr [edi]
// 0066a926  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 0066a929  8b4f04               mov ecx, dword ptr [edi + 4]
// 0066a92c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 0066a92f  896c2428             mov dword ptr [esp + 0x28], ebp
// 0066a933  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066a937  83c204               add edx, 4
// 0066a93a  89542420             mov dword ptr [esp + 0x20], edx
// 0066a93e  85ed                 test ebp, ebp
// 0066a940  0f8697000000         jbe 0x66a9dd
// 0066a946  8b542428             mov edx, dword ptr [esp + 0x28]
// 0066a94a  2bd9                 sub ebx, ecx
// 0066a94c  2bd1                 sub edx, ecx
// 0066a94e  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066a952  8954241c             mov dword ptr [esp + 0x1c], edx
// 0066a956  896c2428             mov dword ptr [esp + 0x28], ebp
// 0066a95a  8d9b00000000         lea ebx, [ebx]
// 0066a960  0fb65602             movzx edx, byte ptr [esi + 2]
// 0066a964  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 0066a968  0fb63e               movzx edi, byte ptr [esi]
// 0066a96b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066a96f  89542418             mov dword ptr [esp + 0x18], edx
// 0066a973  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 0066a97a  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 0066a981  83c603               add esi, 3
// 0066a984  0314b8               add edx, dword ptr [eax + edi*4]
// 0066a987  41                   inc ecx
// 0066a988  c1fa10               sar edx, 0x10
// 0066a98b  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 0066a98f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0066a993  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 0066a99a  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 0066a9a1  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 0066a9a8  c1fb10               sar ebx, 0x10
// 0066a9ab  8859ff               mov byte ptr [ecx - 1], bl
// 0066a9ae  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 0066a9b5  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 0066a9bc  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 0066a9c3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066a9c7  c1fa10               sar edx, 0x10
// 0066a9ca  836c242801           sub dword ptr [esp + 0x28], 1
// 0066a9cf  88540fff             mov byte ptr [edi + ecx - 1], dl
// 0066a9d3  758b                 jne 0x66a960
// 0066a9d5  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0066a9d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0066a9dd  836c243801           sub dword ptr [esp + 0x38], 1
// 0066a9e2  0f8929ffffff         jns 0x66a911
// 0066a9e8  5f                   pop edi
// 0066a9e9  5e                   pop esi
// 0066a9ea  5d                   pop ebp
// 0066a9eb  5b                   pop ebx
// 0066a9ec  83c414               add esp, 0x14
// 0066a9ef  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
