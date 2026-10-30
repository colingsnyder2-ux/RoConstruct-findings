// from server: 100% by auto
// roc 2010-06 00737720  unit: seg_00730000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737720
//
// 00737720  56                   push esi
// 00737721  8b742408             mov esi, dword ptr [esp + 8]
// 00737725  6a05                 push 5
// 00737727  6a01                 push 1
// 00737729  56                   push esi
// 0073772a  e871b7feff           call 0x722ea0
// 0073772f  6a02                 push 2
// 00737731  56                   push esi
// 00737732  e82998feff           call 0x720f60
// 00737737  6a01                 push 1
// 00737739  56                   push esi
// 0073773a  e8a1a7feff           call 0x721ee0
// 0073773f  83c41c               add esp, 0x1c
// 00737742  85c0                 test eax, eax
// 00737744  7407                 je 0x73774d
// 00737746  b802000000           mov eax, 2
// 0073774b  5e                   pop esi
// 0073774c  c3                   ret 
// 0073774d  56                   push esi
// 0073774e  e89d9dfeff           call 0x7214f0
// 00737753  83c404               add esp, 4
// 00737756  b801000000           mov eax, 1
// 0073775b  5e                   pop esi
// 0073775c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_next)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
