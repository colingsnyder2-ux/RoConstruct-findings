// from server: 100% by auto
// roc 2009-06 005a5410  unit: seg_005a0000  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5410
//
// 005a5410  83ec14               sub esp, 0x14
// 005a5413  836c242801           sub dword ptr [esp + 0x28], 1
// 005a5418  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a541c  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 005a5422  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005a5425  8b4008               mov eax, dword ptr [eax + 8]
// 005a5428  890c24               mov dword ptr [esp], ecx
// 005a542b  0f88eb000000         js 0x5a551c
// 005a5431  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a5435  53                   push ebx
// 005a5436  55                   push ebp
// 005a5437  56                   push esi
// 005a5438  03d2                 add edx, edx
// 005a543a  57                   push edi
// 005a543b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a543f  03d2                 add edx, edx
// 005a5441  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a5445  8b31                 mov esi, dword ptr [ecx]
// 005a5447  8b6f08               mov ebp, dword ptr [edi + 8]
// 005a544a  8b2c2a               mov ebp, dword ptr [edx + ebp]
// 005a544d  83c104               add ecx, 4
// 005a5450  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005a5454  8b0f                 mov ecx, dword ptr [edi]
// 005a5456  8b1c0a               mov ebx, dword ptr [edx + ecx]
// 005a5459  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a545c  8b0c0a               mov ecx, dword ptr [edx + ecx]
// 005a545f  896c2428             mov dword ptr [esp + 0x28], ebp
// 005a5463  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a5467  83c204               add edx, 4
// 005a546a  89542420             mov dword ptr [esp + 0x20], edx
// 005a546e  85ed                 test ebp, ebp
// 005a5470  0f8697000000         jbe 0x5a550d
// 005a5476  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a547a  2bd9                 sub ebx, ecx
// 005a547c  2bd1                 sub edx, ecx
// 005a547e  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a5482  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a5486  896c2428             mov dword ptr [esp + 0x28], ebp
// 005a548a  8d9b00000000         lea ebx, [ebx]
// 005a5490  0fb65602             movzx edx, byte ptr [esi + 2]
// 005a5494  0fb66e01             movzx ebp, byte ptr [esi + 1]
// 005a5498  0fb63e               movzx edi, byte ptr [esi]
// 005a549b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a549f  89542418             mov dword ptr [esp + 0x18], edx
// 005a54a3  8b949000080000       mov edx, dword ptr [eax + edx*4 + 0x800]
// 005a54aa  0394a800040000       add edx, dword ptr [eax + ebp*4 + 0x400]
// 005a54b1  83c603               add esi, 3
// 005a54b4  0314b8               add edx, dword ptr [eax + edi*4]
// 005a54b7  41                   inc ecx
// 005a54b8  c1fa10               sar edx, 0x10
// 005a54bb  88540bff             mov byte ptr [ebx + ecx - 1], dl
// 005a54bf  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a54c3  8b9c9000140000       mov ebx, dword ptr [eax + edx*4 + 0x1400]
// 005a54ca  039ca800100000       add ebx, dword ptr [eax + ebp*4 + 0x1000]
// 005a54d1  039cb8000c0000       add ebx, dword ptr [eax + edi*4 + 0xc00]
// 005a54d8  c1fb10               sar ebx, 0x10
// 005a54db  8859ff               mov byte ptr [ecx - 1], bl
// 005a54de  8b9490001c0000       mov edx, dword ptr [eax + edx*4 + 0x1c00]
// 005a54e5  0394a800180000       add edx, dword ptr [eax + ebp*4 + 0x1800]
// 005a54ec  0394b800140000       add edx, dword ptr [eax + edi*4 + 0x1400]
// 005a54f3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005a54f7  c1fa10               sar edx, 0x10
// 005a54fa  836c242801           sub dword ptr [esp + 0x28], 1
// 005a54ff  88540fff             mov byte ptr [edi + ecx - 1], dl
// 005a5503  758b                 jne 0x5a5490
// 005a5505  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a5509  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a550d  836c243801           sub dword ptr [esp + 0x38], 1
// 005a5512  0f8929ffffff         jns 0x5a5441
// 005a5518  5f                   pop edi
// 005a5519  5e                   pop esi
// 005a551a  5d                   pop ebp
// 005a551b  5b                   pop ebx
// 005a551c  83c414               add esp, 0x14
// 005a551f  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
