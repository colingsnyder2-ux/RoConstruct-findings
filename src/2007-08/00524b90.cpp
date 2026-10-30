// from server: 100% by auto
// roc 2007-08 00524b90  unit: G3D::Line  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524b90
//
// 00524b90  8b542410             mov edx, dword ptr [esp + 0x10]
// 00524b94  8b442404             mov eax, dword ptr [esp + 4]
// 00524b98  8b888c010000         mov ecx, dword ptr [eax + 0x18c]
// 00524b9e  52                   push edx
// 00524b9f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00524ba3  52                   push edx
// 00524ba4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00524ba8  52                   push edx
// 00524ba9  6a00                 push 0
// 00524bab  6a00                 push 0
// 00524bad  6a00                 push 0
// 00524baf  50                   push eax
// 00524bb0  8b4104               mov eax, dword ptr [ecx + 4]
// 00524bb3  ffd0                 call eax
// 00524bb5  83c41c               add esp, 0x1c
// 00524bb8  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_crank_post)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
