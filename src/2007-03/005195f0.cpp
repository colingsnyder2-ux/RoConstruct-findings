// roc 2007-03 005195f0  unit: seg_00510000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005195f0
//
// 005195f0  8b442404             mov eax, dword ptr [esp + 4]
// 005195f4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 005195fa  c701f0945100         mov dword ptr [ecx], 0x5194f0
// 00519600  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
