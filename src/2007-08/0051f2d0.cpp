// from server: 100% by auto
// roc 2007-08 0051f2d0  unit: seg_00510000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f2d0
//
// 0051f2d0  8b442404             mov eax, dword ptr [esp + 4]
// 0051f2d4  8b8890010000         mov ecx, dword ptr [eax + 0x190]
// 0051f2da  c701d0f15100         mov dword ptr [ecx], 0x51f1d0
// 0051f2e0  c3                   ret 
// library jpeg-6b/jdinput.c (function _finish_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
