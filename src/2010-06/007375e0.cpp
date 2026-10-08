// from server: 100% by auto
// roc 2010-06 007375e0  unit: seg_00730000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007375e0
//
// 007375e0  56                   push esi
// 007375e1  8b742408             mov esi, dword ptr [esp + 8]
// 007375e5  6a05                 push 5
// 007375e7  6a01                 push 1
// 007375e9  56                   push esi
// 007375ea  e8b1b8feff           call 0x722ea0
// 007375ef  6a02                 push 2
// 007375f1  56                   push esi
// 007375f2  e8f9b8feff           call 0x722ef0
// 007375f7  6a03                 push 3
// 007375f9  56                   push esi
// 007375fa  e8f1b8feff           call 0x722ef0
// 007375ff  6a03                 push 3
// 00737601  56                   push esi
// 00737602  e85999feff           call 0x720f60
// 00737607  6a01                 push 1
// 00737609  56                   push esi
// 0073760a  e831a4feff           call 0x721a40
// 0073760f  83c42c               add esp, 0x2c
// 00737612  b801000000           mov eax, 1
// 00737617  5e                   pop esi
// 00737618  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawset)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
