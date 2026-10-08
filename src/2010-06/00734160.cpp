// from server: 100% by auto
// roc 2010-06 00734160  unit: seg_00730000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734160
//
// 00734160  8b442404             mov eax, dword ptr [esp + 4]
// 00734164  50                   push eax
// 00734165  e826690400           call 0x77aa90
// 0073416a  59                   pop ecx
// 0073416b  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
