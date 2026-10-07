// roc 2012-06 00653d30  unit: seg_00650000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653d30
//
// 00653d30  8b442404             mov eax, dword ptr [esp + 4]
// 00653d34  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 00653d3a  c701303c6500         mov dword ptr [ecx], 0x653c30
// 00653d40  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
