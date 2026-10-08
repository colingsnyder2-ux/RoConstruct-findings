// from server: 100% by auto
// roc 2009-06 005926c0  unit: seg_00590000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005926c0
//
// 005926c0  8b442404             mov eax, dword ptr [esp + 4]
// 005926c4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 005926ca  c701c0255900         mov dword ptr [ecx], 0x5925c0
// 005926d0  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
