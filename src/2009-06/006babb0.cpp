// from server: 100% by auto
// roc 2009-06 006babb0  unit: RBX::UniversalTool  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006babb0
//
// 006babb0  53                   push ebx
// 006babb1  55                   push ebp
// 006babb2  56                   push esi
// 006babb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006babb7  57                   push edi
// 006babb8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006babbc  57                   push edi
// 006babbd  56                   push esi
// 006babbe  e89de6ffff           call 0x6b9260
// 006babc3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 006babc7  8bd8                 mov ebx, eax
// 006babc9  83c408               add esp, 8
// 006babcc  85db                 test ebx, ebx
// 006babce  743d                 je 0x6bac0d
// 006babd0  57                   push edi
// 006babd1  56                   push esi
// 006babd2  e839ebffff           call 0x6b9710
// 006babd7  83c408               add esp, 8
// 006babda  85c0                 test eax, eax
// 006babdc  742f                 je 0x6bac0d
// 006babde  55                   push ebp
// 006babdf  68f0d8ffff           push 0xffffd8f0
// 006babe4  56                   push esi
// 006babe5  e8e6e9ffff           call 0x6b95d0
// 006babea  6afe                 push -2
// 006babec  6aff                 push -1
// 006babee  56                   push esi
// 006babef  e85ce4ffff           call 0x6b9050
// 006babf4  83c418               add esp, 0x18
// 006babf7  85c0                 test eax, eax
// 006babf9  7412                 je 0x6bac0d
// 006babfb  6afd                 push -3
// 006babfd  56                   push esi
// 006babfe  e88de1ffff           call 0x6b8d90
// 006bac03  83c408               add esp, 8
// 006bac06  5f                   pop edi
// 006bac07  5e                   pop esi
// 006bac08  5d                   pop ebp
// 006bac09  8bc3                 mov eax, ebx
// 006bac0b  5b                   pop ebx
// 006bac0c  c3                   ret 
// 006bac0d  57                   push edi
// 006bac0e  56                   push esi
// 006bac0f  e85ce3ffff           call 0x6b8f70
// 006bac14  50                   push eax
// 006bac15  56                   push esi
// 006bac16  e875e3ffff           call 0x6b8f90
// 006bac1b  50                   push eax
// 006bac1c  55                   push ebp
// 006bac1d  68acaf8e00           push 0x8eafac
// 006bac22  56                   push esi
// 006bac23  e838e8ffff           call 0x6b9460
// 006bac28  50                   push eax
// 006bac29  57                   push edi
// 006bac2a  56                   push esi
// 006bac2b  e8a0feffff           call 0x6baad0
// 006bac30  83c42c               add esp, 0x2c
// 006bac33  5f                   pop edi
// 006bac34  5e                   pop esi
// 006bac35  5d                   pop ebp
// 006bac36  33c0                 xor eax, eax
// 006bac38  5b                   pop ebx
// 006bac39  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
