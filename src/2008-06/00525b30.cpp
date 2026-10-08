// from server: 100% by auto
// roc 2008-06 00525b30  unit: seg_00520000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525b30
//
// 00525b30  8b442408             mov eax, dword ptr [esp + 8]
// 00525b34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00525b38  8b542410             mov edx, dword ptr [esp + 0x10]
// 00525b3c  53                   push ebx
// 00525b3d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00525b41  56                   push esi
// 00525b42  8d3481               lea esi, [ecx + eax*4]
// 00525b45  8b442414             mov eax, dword ptr [esp + 0x14]
// 00525b49  57                   push edi
// 00525b4a  8d3c90               lea edi, [eax + edx*4]
// 00525b4d  85db                 test ebx, ebx
// 00525b4f  7e20                 jle 0x525b71
// 00525b51  55                   push ebp
// 00525b52  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00525b56  8b06                 mov eax, dword ptr [esi]
// 00525b58  8b0f                 mov ecx, dword ptr [edi]
// 00525b5a  55                   push ebp
// 00525b5b  50                   push eax
// 00525b5c  51                   push ecx
// 00525b5d  83c604               add esi, 4
// 00525b60  83c704               add edi, 4
// 00525b63  e878bc1700           call 0x6a17e0
// 00525b68  4b                   dec ebx
// 00525b69  83c40c               add esp, 0xc
// 00525b6c  85db                 test ebx, ebx
// 00525b6e  7fe6                 jg 0x525b56
// 00525b70  5d                   pop ebp
// 00525b71  5f                   pop edi
// 00525b72  5e                   pop esi
// 00525b73  5b                   pop ebx
// 00525b74  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
