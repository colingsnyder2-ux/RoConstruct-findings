// from server: 100% by auto
// roc 2010-06 00582ea0  unit: seg_00580000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582ea0
//
// 00582ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00582ea4  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 00582eaa  53                   push ebx
// 00582eab  55                   push ebp
// 00582eac  8b685c               mov ebp, dword ptr [eax + 0x5c]
// 00582eaf  33db                 xor ebx, ebx
// 00582eb1  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00582eb5  57                   push edi
// 00582eb6  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00582eb9  7e54                 jle 0x582f0f
// 00582ebb  56                   push esi
// 00582ebc  8d642400             lea esp, [esp]
// 00582ec0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00582ec4  8b0c9a               mov ecx, dword ptr [edx + ebx*4]
// 00582ec7  8bf5                 mov esi, ebp
// 00582ec9  85ed                 test ebp, ebp
// 00582ecb  763a                 jbe 0x582f07
// 00582ecd  8d4900               lea ecx, [ecx]
// 00582ed0  0fb64101             movzx eax, byte ptr [ecx + 1]
// 00582ed4  0fb65102             movzx edx, byte ptr [ecx + 2]
// 00582ed8  c1e802               shr eax, 2
// 00582edb  c1ea03               shr edx, 3
// 00582ede  c1e005               shl eax, 5
// 00582ee1  03c2                 add eax, edx
// 00582ee3  0fb611               movzx edx, byte ptr [ecx]
// 00582ee6  c1ea03               shr edx, 3
// 00582ee9  8b1497               mov edx, dword ptr [edi + edx*4]
// 00582eec  66ff0442             inc word ptr [edx + eax*2]
// 00582ef0  8d0442               lea eax, [edx + eax*2]
// 00582ef3  0fb710               movzx edx, word ptr [eax]
// 00582ef6  6685d2               test dx, dx
// 00582ef9  7704                 ja 0x582eff
// 00582efb  4a                   dec edx
// 00582efc  668910               mov word ptr [eax], dx
// 00582eff  83c103               add ecx, 3
// 00582f02  83ee01               sub esi, 1
// 00582f05  75c9                 jne 0x582ed0
// 00582f07  43                   inc ebx
// 00582f08  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 00582f0c  7cb2                 jl 0x582ec0
// 00582f0e  5e                   pop esi
// 00582f0f  5f                   pop edi
// 00582f10  5d                   pop ebp
// 00582f11  5b                   pop ebx
// 00582f12  c3                   ret 
// library jpeg-6b/jquant2.c (function _prescan_quantize)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
