// roc 2007-03 0051f860  unit: seg_00510000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f860
//
// 0051f860  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051f864  8b442404             mov eax, dword ptr [esp + 4]
// 0051f868  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 0051f86e  52                   push edx
// 0051f86f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051f873  52                   push edx
// 0051f874  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051f878  52                   push edx
// 0051f879  6a00                 push 0
// 0051f87b  6a00                 push 0
// 0051f87d  6a00                 push 0
// 0051f87f  50                   push eax
// 0051f880  8b4104               mov eax, dword ptr [ecx + 4]
// 0051f883  ffd0                 call eax
// 0051f885  83c41c               add esp, 0x1c
// 0051f888  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
