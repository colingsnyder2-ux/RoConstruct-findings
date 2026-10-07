// roc 2012-06 006534e0  unit: seg_00650000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006534e0
//
// 006534e0  8b442408             mov eax, dword ptr [esp + 8]
// 006534e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006534e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006534ec  53                   push ebx
// 006534ed  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006534f1  56                   push esi
// 006534f2  8d3481               lea esi, [ecx + eax*4]
// 006534f5  8b442414             mov eax, dword ptr [esp + 0x14]
// 006534f9  57                   push edi
// 006534fa  8d3c90               lea edi, [eax + edx*4]
// 006534fd  85db                 test ebx, ebx
// 006534ff  7e20                 jle 0x653521
// 00653501  55                   push ebp
// 00653502  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00653506  8b06                 mov eax, dword ptr [esi]
// 00653508  8b0f                 mov ecx, dword ptr [edi]
// 0065350a  55                   push ebp
// 0065350b  50                   push eax
// 0065350c  51                   push ecx
// 0065350d  83c604               add esi, 4
// 00653510  83c704               add edi, 4
// 00653513  e844013300           call 0x98365c
// 00653518  4b                   dec ebx
// 00653519  83c40c               add esp, 0xc
// 0065351c  85db                 test ebx, ebx
// 0065351e  7fe6                 jg 0x653506
// 00653520  5d                   pop ebp
// 00653521  5f                   pop edi
// 00653522  5e                   pop esi
// 00653523  5b                   pop ebx
// 00653524  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
