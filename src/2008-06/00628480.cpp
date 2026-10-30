// from server: 100% by auto
// roc 2008-06 00628480  unit: seg_00620000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628480
//
// 00628480  56                   push esi
// 00628481  8b742408             mov esi, dword ptr [esp + 8]
// 00628485  6a05                 push 5
// 00628487  6a01                 push 1
// 00628489  56                   push esi
// 0062848a  e8b191feff           call 0x611640
// 0062848f  6a02                 push 2
// 00628491  56                   push esi
// 00628492  e88997feff           call 0x611c20
// 00628497  6a01                 push 1
// 00628499  56                   push esi
// 0062849a  e8e1a6feff           call 0x612b80
// 0062849f  83c41c               add esp, 0x1c
// 006284a2  85c0                 test eax, eax
// 006284a4  7407                 je 0x6284ad
// 006284a6  b802000000           mov eax, 2
// 006284ab  5e                   pop esi
// 006284ac  c3                   ret 
// 006284ad  56                   push esi
// 006284ae  e82d9dfeff           call 0x6121e0
// 006284b3  83c404               add esp, 4
// 006284b6  b801000000           mov eax, 1
// 006284bb  5e                   pop esi
// 006284bc  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
