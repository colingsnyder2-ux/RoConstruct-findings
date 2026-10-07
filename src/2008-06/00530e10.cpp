// roc 2008-06 00530e10  unit: seg_00530000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530e10
//
// 00530e10  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530e14  8b442404             mov eax, dword ptr [esp + 4]
// 00530e18  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 00530e1e  52                   push edx
// 00530e1f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530e23  52                   push edx
// 00530e24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00530e28  52                   push edx
// 00530e29  6a00                 push 0
// 00530e2b  6a00                 push 0
// 00530e2d  6a00                 push 0
// 00530e2f  50                   push eax
// 00530e30  8b4104               mov eax, dword ptr [ecx + 4]
// 00530e33  ffd0                 call eax
// 00530e35  83c41c               add esp, 0x1c
// 00530e38  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
