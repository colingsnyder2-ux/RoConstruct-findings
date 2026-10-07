// roc 2009-06 0059b0f0  unit: seg_00590000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b0f0
//
// 0059b0f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b0f4  8b442404             mov eax, dword ptr [esp + 4]
// 0059b0f8  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 0059b0fe  52                   push edx
// 0059b0ff  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b103  52                   push edx
// 0059b104  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b108  52                   push edx
// 0059b109  6a00                 push 0
// 0059b10b  6a00                 push 0
// 0059b10d  6a00                 push 0
// 0059b10f  50                   push eax
// 0059b110  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b113  ffd0                 call eax
// 0059b115  83c41c               add esp, 0x1c
// 0059b118  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
