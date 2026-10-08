// roc 2009-12 006146d0  unit: seg_00610000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006146d0
//
// 006146d0  8b442404             mov eax, dword ptr [esp + 4]
// 006146d4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 006146da  c701d0456100         mov dword ptr [ecx], 0x6145d0
// 006146e0  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
