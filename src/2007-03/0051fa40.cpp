// roc 2007-03 0051fa40  unit: seg_00510000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051fa40
//
// 0051fa40  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051fa44  c7818000000000000000 mov dword ptr [ecx + 0x80], 0
// 0051fa4e  e99dffffff           jmp 0x51f9f0
// library jpeg-6b/jdcoefct.c (function _start_input_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
