// roc 2009-12 0061d120  unit: seg_00610000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d120
//
// 0061d120  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061d124  8b442404             mov eax, dword ptr [esp + 4]
// 0061d128  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 0061d12e  52                   push edx
// 0061d12f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061d133  52                   push edx
// 0061d134  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061d138  52                   push edx
// 0061d139  6a00                 push 0
// 0061d13b  6a00                 push 0
// 0061d13d  6a00                 push 0
// 0061d13f  50                   push eax
// 0061d140  8b4104               mov eax, dword ptr [ecx + 4]
// 0061d143  ffd0                 call eax
// 0061d145  83c41c               add esp, 0x1c
// 0061d148  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
