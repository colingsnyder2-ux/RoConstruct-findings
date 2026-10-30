// from server: 100% by auto
// roc 2010-06 0056d370  unit: seg_00560000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d370
//
// 0056d370  8b442408             mov eax, dword ptr [esp + 8]
// 0056d374  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056d378  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056d37c  53                   push ebx
// 0056d37d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0056d381  56                   push esi
// 0056d382  8d3481               lea esi, [ecx + eax*4]
// 0056d385  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056d389  57                   push edi
// 0056d38a  8d3c90               lea edi, [eax + edx*4]
// 0056d38d  85db                 test ebx, ebx
// 0056d38f  7e20                 jle 0x56d3b1
// 0056d391  55                   push ebp
// 0056d392  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056d396  8b06                 mov eax, dword ptr [esi]
// 0056d398  8b0f                 mov ecx, dword ptr [edi]
// 0056d39a  55                   push ebp
// 0056d39b  50                   push eax
// 0056d39c  51                   push ecx
// 0056d39d  83c604               add esi, 4
// 0056d3a0  83c704               add edi, 4
// 0056d3a3  e87eba2300           call 0x7a8e26
// 0056d3a8  4b                   dec ebx
// 0056d3a9  83c40c               add esp, 0xc
// 0056d3ac  85db                 test ebx, ebx
// 0056d3ae  7fe6                 jg 0x56d396
// 0056d3b0  5d                   pop ebp
// 0056d3b1  5f                   pop edi
// 0056d3b2  5e                   pop esi
// 0056d3b3  5b                   pop ebx
// 0056d3b4  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
