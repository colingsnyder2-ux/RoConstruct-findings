// roc 2011-06 00574f30  unit: seg_00570000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574f30
//
// 00574f30  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574f34  8b442404             mov eax, dword ptr [esp + 4]
// 00574f38  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 00574f3e  52                   push edx
// 00574f3f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574f43  52                   push edx
// 00574f44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574f48  52                   push edx
// 00574f49  6a00                 push 0
// 00574f4b  6a00                 push 0
// 00574f4d  6a00                 push 0
// 00574f4f  50                   push eax
// 00574f50  8b4104               mov eax, dword ptr [ecx + 4]
// 00574f53  ffd0                 call eax
// 00574f55  83c41c               add esp, 0x1c
// 00574f58  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
