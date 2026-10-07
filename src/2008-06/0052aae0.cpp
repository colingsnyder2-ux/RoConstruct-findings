// roc 2008-06 0052aae0  unit: seg_00520000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052aae0
//
// 0052aae0  8b442404             mov eax, dword ptr [esp + 4]
// 0052aae4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 0052aaea  c701e0a95200         mov dword ptr [ecx], 0x52a9e0
// 0052aaf0  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
