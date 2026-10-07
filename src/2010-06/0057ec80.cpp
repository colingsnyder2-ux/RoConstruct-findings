// roc 2010-06 0057ec80  unit: seg_00570000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ec80
//
// 0057ec80  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057ec84  8b442404             mov eax, dword ptr [esp + 4]
// 0057ec88  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 0057ec8e  52                   push edx
// 0057ec8f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057ec93  52                   push edx
// 0057ec94  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057ec98  52                   push edx
// 0057ec99  6a00                 push 0
// 0057ec9b  6a00                 push 0
// 0057ec9d  6a00                 push 0
// 0057ec9f  50                   push eax
// 0057eca0  8b4104               mov eax, dword ptr [ecx + 4]
// 0057eca3  ffd0                 call eax
// 0057eca5  83c41c               add esp, 0x1c
// 0057eca8  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
