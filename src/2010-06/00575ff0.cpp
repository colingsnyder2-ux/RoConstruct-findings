// from server: 100% by auto
// roc 2010-06 00575ff0  unit: seg_00570000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575ff0
//
// 00575ff0  8b442404             mov eax, dword ptr [esp + 4]
// 00575ff4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 00575ffa  c701f05e5700         mov dword ptr [ecx], 0x575ef0
// 00576000  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
