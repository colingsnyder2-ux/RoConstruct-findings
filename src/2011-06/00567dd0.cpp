// roc 2011-06 00567dd0  unit: seg_00560000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567dd0
//
// 00567dd0  8b442408             mov eax, dword ptr [esp + 8]
// 00567dd4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567dd8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00567ddc  53                   push ebx
// 00567ddd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00567de1  56                   push esi
// 00567de2  8d3481               lea esi, [ecx + eax*4]
// 00567de5  8b442414             mov eax, dword ptr [esp + 0x14]
// 00567de9  57                   push edi
// 00567dea  8d3c90               lea edi, [eax + edx*4]
// 00567ded  85db                 test ebx, ebx
// 00567def  7e20                 jle 0x567e11
// 00567df1  55                   push ebp
// 00567df2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00567df6  8b06                 mov eax, dword ptr [esi]
// 00567df8  8b0f                 mov ecx, dword ptr [edi]
// 00567dfa  55                   push ebp
// 00567dfb  50                   push eax
// 00567dfc  51                   push ecx
// 00567dfd  83c604               add esi, 4
// 00567e00  83c704               add edi, 4
// 00567e03  e8d4372a00           call 0x80b5dc
// 00567e08  4b                   dec ebx
// 00567e09  83c40c               add esp, 0xc
// 00567e0c  85db                 test ebx, ebx
// 00567e0e  7fe6                 jg 0x567df6
// 00567e10  5d                   pop ebp
// 00567e11  5f                   pop edi
// 00567e12  5e                   pop esi
// 00567e13  5b                   pop ebx
// 00567e14  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
