// from server: 100% by auto
// roc 2011-06 00782700  unit: seg_00780000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782700
//
// 00782700  56                   push esi
// 00782701  8b742408             mov esi, dword ptr [esp + 8]
// 00782705  6a01                 push 1
// 00782707  56                   push esi
// 00782708  e8531afeff           call 0x764160
// 0078270d  6a01                 push 1
// 0078270f  56                   push esi
// 00782710  e83bfefdff           call 0x762550
// 00782715  50                   push eax
// 00782716  56                   push esi
// 00782717  e854fefdff           call 0x762570
// 0078271c  50                   push eax
// 0078271d  56                   push esi
// 0078271e  e87d02feff           call 0x7629a0
// 00782723  83c420               add esp, 0x20
// 00782726  b801000000           mov eax, 1
// 0078272b  5e                   pop esi
// 0078272c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
