// roc 2010-06 00588f20  unit: seg_00580000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588f20
//
// 00588f20  83ec14               sub esp, 0x14
// 00588f23  836c242801           sub dword ptr [esp + 0x28], 1
// 00588f28  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00588f2c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 00588f32  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00588f35  8b4008               mov eax, dword ptr [eax + 8]
// 00588f38  890c24               mov dword ptr [esp], ecx
// 00588f3b  0f88eb000000         js 0x58902c
// 00588f41  8b542424             mov edx, dword ptr [esp + 0x24]
// 00588f45  53                   push ebx
// 00588f46  55                   push ebp
// 00588f47  56                   push esi
// 00588f48  03d2                 add edx, edx
// 00588f4a  57                   push edi
// 00588f4b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00588f4f  03d2                 add edx, edx
// 00588f51  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00588f55  8b31                 mov esi, dword ptr [ecx]
// 00588f57  8b6f08               mov ebp, dword ptr [edi + 8]
// 00588f5a  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 00588f5d  83c104               add ecx, 4
// 00588f60  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00588f64  8b0f                 mov ecx, dword ptr [edi]
// 00588f66  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 00588f69  8b4f04               mov ecx, dword ptr [edi + 4]
// 00588f6c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 00588f6f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00588f73  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00588f77  83c204               add edx, 4
// 00588f7a  89542420             mov dword ptr [esp + 0x20], edx
// 00588f7e  85ed                 test ebp, ebp
// 00588f80  0f8697000000         jbe 0x58901d
// 00588f86  8b542428             mov edx, dword ptr [esp + 0x28]
// 00588f8a  2bd9                 sub ebx, ecx
// 00588f8c  2bd1                 sub edx, ecx
// 00588f8e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00588f92  8954241c             mov dword ptr [esp + 0x1c], edx
// 00588f96  896c2428             mov dword ptr [esp + 0x28], ebp
// 00588f9a  8d9b00000000         lea ebx, [ebx]
// 00588fa0  0fb65602             movzx edx, byte ptr [esi + 2]
// 00588fa4  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 00588fa8  0fb63e               movzx edi, byte ptr [esi]
// 00588fab  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00588faf  89542418             mov dword ptr [esp + 0x18], edx
// 00588fb3  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 00588fba  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 00588fc1  83c603               add esi, 3
// 00588fc4  0314b8               add edx, dword ptr [eax + edi*4]
// 00588fc7  41                   inc ecx
// 00588fc8  c1fa10               sar edx, 0x10
// 00588fcb  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 00588fcf  8b542418             mov edx, dword ptr [esp + 0x18]
// 00588fd3  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 00588fda  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 00588fe1  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 00588fe8  c1fb10               sar ebx, 0x10
// 00588feb  8859ff               mov byte ptr [ecx - 1], bl
// 00588fee  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 00588ff5  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 00588ffc  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 00589003  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00589007  c1fa10               sar edx, 0x10
// 0058900a  836c242801           sub dword ptr [esp + 0x28], 1
// 0058900f  88540fff             mov byte ptr [edi + ecx - 1], dl
// 00589013  758b                 jne 0x588fa0
// 00589015  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00589019  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058901d  836c243801           sub dword ptr [esp + 0x38], 1
// 00589022  0f8929ffffff         jns 0x588f51
// 00589028  5f                   pop edi
// 00589029  5e                   pop esi
// 0058902a  5d                   pop ebp
// 0058902b  5b                   pop ebx
// 0058902c  83c414               add esp, 0x14
// 0058902f  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
