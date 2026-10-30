// from server: 100% by auto
// roc 2009-06 006bad80  unit: RBX::UniversalTool  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bad80
//
// 006bad80  83ec08               sub esp, 8
// 006bad83  56                   push esi
// 006bad84  8b742410             mov esi, dword ptr [esp + 0x10]
// 006bad88  57                   push edi
// 006bad89  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006bad8d  57                   push edi
// 006bad8e  56                   push esi
// 006bad8f  e83ce3ffff           call 0x6b90d0
// 006bad94  dd542410             fst qword ptr [esp + 0x10]
// 006bad98  d9ee                 fldz 
// 006bad9a  83c408               add esp, 8
// 006bad9d  dde9                 fucomp st(1)
// 006bad9f  dfe0                 fnstsw ax
// 006bada1  f6c444               test ah, 0x44
// 006bada4  7a46                 jp 0x6badec
// 006bada6  57                   push edi
// 006bada7  ddd8                 fstp st(0)
// 006bada9  56                   push esi
// 006badaa  e831e2ffff           call 0x6b8fe0
// 006badaf  83c408               add esp, 8
// 006badb2  85c0                 test eax, eax
// 006badb4  7532                 jne 0x6bade8
// 006badb6  53                   push ebx
// 006badb7  6a03                 push 3
// 006badb9  56                   push esi
// 006badba  e8d1e1ffff           call 0x6b8f90
// 006badbf  57                   push edi
// 006badc0  56                   push esi
// 006badc1  8bd8                 mov ebx, eax
// 006badc3  e8a8e1ffff           call 0x6b8f70
// 006badc8  50                   push eax
// 006badc9  56                   push esi
// 006badca  e8c1e1ffff           call 0x6b8f90
// 006badcf  50                   push eax
// 006badd0  53                   push ebx
// 006badd1  68acaf8e00           push 0x8eafac
// 006badd6  56                   push esi
// 006badd7  e884e6ffff           call 0x6b9460
// 006baddc  50                   push eax
// 006baddd  57                   push edi
// 006badde  56                   push esi
// 006baddf  e8ecfcffff           call 0x6baad0
// 006bade4  83c434               add esp, 0x34
// 006bade7  5b                   pop ebx
// 006bade8  dd442408             fld qword ptr [esp + 8]
// 006badec  5f                   pop edi
// 006baded  5e                   pop esi
// 006badee  83c408               add esp, 8
// 006badf1  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checknumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
