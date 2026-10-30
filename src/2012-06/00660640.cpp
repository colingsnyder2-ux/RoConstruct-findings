// from server: 100% by auto
// roc 2012-06 00660640  unit: seg_00660000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660640
//
// 00660640  8b542410             mov edx, dword ptr [esp + 0x10]
// 00660644  8b442404             mov eax, dword ptr [esp + 4]
// 00660648  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 0066064e  52                   push edx
// 0066064f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00660653  52                   push edx
// 00660654  8b542410             mov edx, dword ptr [esp + 0x10]
// 00660658  52                   push edx
// 00660659  6a00                 push 0
// 0066065b  6a00                 push 0
// 0066065d  6a00                 push 0
// 0066065f  50                   push eax
// 00660660  8b4104               mov eax, dword ptr [ecx + 4]
// 00660663  ffd0                 call eax
// 00660665  83c41c               add esp, 0x1c
// 00660668  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
