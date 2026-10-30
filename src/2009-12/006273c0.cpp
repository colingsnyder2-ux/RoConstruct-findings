// roc 2009-12 006273c0  unit: seg_00620000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006273c0
//
// 006273c0  83ec14               sub esp, 0x14
// 006273c3  836c242801           sub dword ptr [esp + 0x28], 1
// 006273c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006273cc  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 006273d2  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006273d5  8b4008               mov eax, dword ptr [eax + 8]
// 006273d8  890c24               mov dword ptr [esp], ecx
// 006273db  0f88eb000000         js 0x6274cc
// 006273e1  8b542424             mov edx, dword ptr [esp + 0x24]
// 006273e5  53                   push ebx
// 006273e6  55                   push ebp
// 006273e7  56                   push esi
// 006273e8  03d2                 add edx, edx
// 006273ea  57                   push edi
// 006273eb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006273ef  03d2                 add edx, edx
// 006273f1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006273f5  8b31                 mov esi, dword ptr [ecx]
// 006273f7  8b6f08               mov ebp, dword ptr [edi + 8]
// 006273fa  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 006273fd  83c104               add ecx, 4
// 00627400  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00627404  8b0f                 mov ecx, dword ptr [edi]
// 00627406  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 00627409  8b4f04               mov ecx, dword ptr [edi + 4]
// 0062740c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 0062740f  896c2428             mov dword ptr [esp + 0x28], ebp
// 00627413  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00627417  83c204               add edx, 4
// 0062741a  89542420             mov dword ptr [esp + 0x20], edx
// 0062741e  85ed                 test ebp, ebp
// 00627420  0f8697000000         jbe 0x6274bd
// 00627426  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062742a  2bd9                 sub ebx, ecx
// 0062742c  2bd1                 sub edx, ecx
// 0062742e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00627432  8954241c             mov dword ptr [esp + 0x1c], edx
// 00627436  896c2428             mov dword ptr [esp + 0x28], ebp
// 0062743a  8d9b00000000         lea ebx, [ebx]
// 00627440  0fb65602             movzx edx, byte ptr [esi + 2]
// 00627444  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 00627448  0fb63e               movzx edi, byte ptr [esi]
// 0062744b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0062744f  89542418             mov dword ptr [esp + 0x18], edx
// 00627453  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 0062745a  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 00627461  83c603               add esi, 3
// 00627464  0314b8               add edx, dword ptr [eax + edi*4]
// 00627467  41                   inc ecx
// 00627468  c1fa10               sar edx, 0x10
// 0062746b  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 0062746f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00627473  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 0062747a  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 00627481  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 00627488  c1fb10               sar ebx, 0x10
// 0062748b  8859ff               mov byte ptr [ecx - 1], bl
// 0062748e  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 00627495  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 0062749c  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 006274a3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006274a7  c1fa10               sar edx, 0x10
// 006274aa  836c242801           sub dword ptr [esp + 0x28], 1
// 006274af  88540fff             mov byte ptr [edi + ecx - 1], dl
// 006274b3  758b                 jne 0x627440
// 006274b5  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 006274b9  8b542420             mov edx, dword ptr [esp + 0x20]
// 006274bd  836c243801           sub dword ptr [esp + 0x38], 1
// 006274c2  0f8929ffffff         jns 0x6273f1
// 006274c8  5f                   pop edi
// 006274c9  5e                   pop esi
// 006274ca  5d                   pop ebp
// 006274cb  5b                   pop ebx
// 006274cc  83c414               add esp, 0x14
// 006274cf  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
