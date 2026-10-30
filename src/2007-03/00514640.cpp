// roc 2007-03 00514640  unit: seg_00510000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514640
//
// 00514640  8b442408             mov eax, dword ptr [esp + 8]
// 00514644  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514648  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051464c  53                   push ebx
// 0051464d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00514651  85db                 test ebx, ebx
// 00514653  56                   push esi
// 00514654  8d3481               lea esi, [ecx + eax*4]
// 00514657  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051465b  57                   push edi
// 0051465c  8d3c90               lea edi, [eax + edx*4]
// 0051465f  7e22                 jle 0x514683
// 00514661  55                   push ebp
// 00514662  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00514666  8b06                 mov eax, dword ptr [esi]
// 00514668  8b0f                 mov ecx, dword ptr [edi]
// 0051466a  55                   push ebp
// 0051466b  50                   push eax
// 0051466c  51                   push ecx
// 0051466d  83c604               add esi, 4
// 00514670  83c704               add edi, 4
// 00514673  e86aab1000           call 0x61f1e2
// 00514678  83eb01               sub ebx, 1
// 0051467b  83c40c               add esp, 0xc
// 0051467e  85db                 test ebx, ebx
// 00514680  7fe4                 jg 0x514666
// 00514682  5d                   pop ebp
// 00514683  5f                   pop edi
// 00514684  5e                   pop esi
// 00514685  5b                   pop ebx
// 00514686  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
