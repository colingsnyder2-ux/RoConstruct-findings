// from server: 100% by auto
// roc 2009-06 00589e40  unit: seg_00580000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589e40
//
// 00589e40  8b442408             mov eax, dword ptr [esp + 8]
// 00589e44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00589e48  8b542410             mov edx, dword ptr [esp + 0x10]
// 00589e4c  53                   push ebx
// 00589e4d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00589e51  56                   push esi
// 00589e52  8d3481               lea esi, [ecx + eax*4]
// 00589e55  8b442414             mov eax, dword ptr [esp + 0x14]
// 00589e59  57                   push edi
// 00589e5a  8d3c90               lea edi, [eax + edx*4]
// 00589e5d  85db                 test ebx, ebx
// 00589e5f  7e20                 jle 0x589e81
// 00589e61  55                   push ebp
// 00589e62  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00589e66  8b06                 mov eax, dword ptr [esi]
// 00589e68  8b0f                 mov ecx, dword ptr [edi]
// 00589e6a  55                   push ebp
// 00589e6b  50                   push eax
// 00589e6c  51                   push ecx
// 00589e6d  83c604               add esi, 4
// 00589e70  83c704               add edi, 4
// 00589e73  e83e001900           call 0x719eb6
// 00589e78  4b                   dec ebx
// 00589e79  83c40c               add esp, 0xc
// 00589e7c  85db                 test ebx, ebx
// 00589e7e  7fe6                 jg 0x589e66
// 00589e80  5d                   pop ebp
// 00589e81  5f                   pop edi
// 00589e82  5e                   pop esi
// 00589e83  5b                   pop ebx
// 00589e84  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
