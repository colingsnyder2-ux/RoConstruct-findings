// from server: 100% by auto
// roc 2007-08 0051e280  unit: seg_00510000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e280
//
// 0051e280  8b442408             mov eax, dword ptr [esp + 8]
// 0051e284  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051e288  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e28c  53                   push ebx
// 0051e28d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051e291  85db                 test ebx, ebx
// 0051e293  56                   push esi
// 0051e294  8d3481               lea esi, [ecx + eax*4]
// 0051e297  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051e29b  57                   push edi
// 0051e29c  8d3c90               lea edi, [eax + edx*4]
// 0051e29f  7e22                 jle 0x51e2c3
// 0051e2a1  55                   push ebp
// 0051e2a2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0051e2a6  8b06                 mov eax, dword ptr [esi]
// 0051e2a8  8b0f                 mov ecx, dword ptr [edi]
// 0051e2aa  55                   push ebp
// 0051e2ab  50                   push eax
// 0051e2ac  51                   push ecx
// 0051e2ad  83c604               add esi, 4
// 0051e2b0  83c704               add edi, 4
// 0051e2b3  e8942a1100           call 0x630d4c
// 0051e2b8  83eb01               sub ebx, 1
// 0051e2bb  83c40c               add esp, 0xc
// 0051e2be  85db                 test ebx, ebx
// 0051e2c0  7fe4                 jg 0x51e2a6
// 0051e2c2  5d                   pop ebp
// 0051e2c3  5f                   pop edi
// 0051e2c4  5e                   pop esi
// 0051e2c5  5b                   pop ebx
// 0051e2c6  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
