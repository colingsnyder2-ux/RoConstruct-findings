// roc 2010-06 00734660  unit: seg_00730000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00734660
//
// 00734660  56                   push esi
// 00734661  8b742408             mov esi, dword ptr [esp + 8]
// 00734665  6a05                 push 5
// 00734667  6a01                 push 1
// 00734669  56                   push esi
// 0073466a  e831e8feff           call 0x722ea0
// 0073466f  6a01                 push 1
// 00734671  56                   push esi
// 00734672  e849cdfeff           call 0x7213c0
// 00734677  50                   push eax
// 00734678  56                   push esi
// 00734679  e8b2cefeff           call 0x721530
// 0073467e  83c41c               add esp, 0x1c
// 00734681  b801000000           mov eax, 1
// 00734686  5e                   pop esi
// 00734687  c3                   ret 
// library lua-5.1.4/ltablib.c (function _getn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
