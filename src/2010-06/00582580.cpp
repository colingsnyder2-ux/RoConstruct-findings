// roc 2010-06 00582580  unit: seg_00580000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582580
//
// 00582580  836c241401           sub dword ptr [esp + 0x14], 1
// 00582585  8b442404             mov eax, dword ptr [esp + 4]
// 00582589  57                   push edi
// 0058258a  8b785c               mov edi, dword ptr [eax + 0x5c]
// 0058258d  7845                 js 0x5825d4
// 0058258f  53                   push ebx
// 00582590  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00582594  55                   push ebp
// 00582595  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00582599  03ed                 add ebp, ebp
// 0058259b  56                   push esi
// 0058259c  03ed                 add ebp, ebp
// 0058259e  8bff                 mov edi, edi
// 005825a0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005825a4  8b11                 mov edx, dword ptr [ecx]
// 005825a6  8b342a               mov esi, dword ptr [edx + ebp]
// 005825a9  8b03                 mov eax, dword ptr [ebx]
// 005825ab  83c504               add ebp, 4
// 005825ae  83c304               add ebx, 4
// 005825b1  33d2                 xor edx, edx
// 005825b3  85ff                 test edi, edi
// 005825b5  7613                 jbe 0x5825ca
// 005825b7  8a0c32               mov cl, byte ptr [edx + esi]
// 005825ba  884802               mov byte ptr [eax + 2], cl
// 005825bd  884801               mov byte ptr [eax + 1], cl
// 005825c0  8808                 mov byte ptr [eax], cl
// 005825c2  42                   inc edx
// 005825c3  83c003               add eax, 3
// 005825c6  3bd7                 cmp edx, edi
// 005825c8  72ed                 jb 0x5825b7
// 005825ca  836c242401           sub dword ptr [esp + 0x24], 1
// 005825cf  79cf                 jns 0x5825a0
// 005825d1  5e                   pop esi
// 005825d2  5d                   pop ebp
// 005825d3  5b                   pop ebx
// 005825d4  5f                   pop edi
// 005825d5  c3                   ret 
// library jpeg-6b/jdcolor.c (function _gray_rgb_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
