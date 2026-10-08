// from server: 100% by auto
// roc 2008-06 006280d0  unit: seg_00620000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006280d0
//
// 006280d0  56                   push esi
// 006280d1  8b742408             mov esi, dword ptr [esp + 8]
// 006280d5  57                   push edi
// 006280d6  6a02                 push 2
// 006280d8  56                   push esi
// 006280d9  e8229dfeff           call 0x611e00
// 006280de  6a05                 push 5
// 006280e0  6a01                 push 1
// 006280e2  56                   push esi
// 006280e3  8bf8                 mov edi, eax
// 006280e5  e85695feff           call 0x611640
// 006280ea  83c414               add esp, 0x14
// 006280ed  85ff                 test edi, edi
// 006280ef  7415                 je 0x628106
// 006280f1  83ff05               cmp edi, 5
// 006280f4  7410                 je 0x628106
// 006280f6  684c558400           push 0x84554c
// 006280fb  6a02                 push 2
// 006280fd  56                   push esi
// 006280fe  e8cd93feff           call 0x6114d0
// 00628103  83c40c               add esp, 0xc
// 00628106  681c558400           push 0x84551c
// 0062810b  6a01                 push 1
// 0062810d  56                   push esi
// 0062810e  e80d8cfeff           call 0x610d20
// 00628113  83c40c               add esp, 0xc
// 00628116  85c0                 test eax, eax
// 00628118  740e                 je 0x628128
// 0062811a  6828558400           push 0x845528
// 0062811f  56                   push esi
// 00628120  e83b8bfeff           call 0x610c60
// 00628125  83c408               add esp, 8
// 00628128  6a02                 push 2
// 0062812a  56                   push esi
// 0062812b  e8f09afeff           call 0x611c20
// 00628130  6a01                 push 1
// 00628132  56                   push esi
// 00628133  e8b8a6feff           call 0x6127f0
// 00628138  83c410               add esp, 0x10
// 0062813b  5f                   pop edi
// 0062813c  b801000000           mov eax, 1
// 00628141  5e                   pop esi
// 00628142  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_setmetatable)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
