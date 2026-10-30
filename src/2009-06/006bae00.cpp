// from server: 100% by auto
// roc 2009-06 006bae00  unit: RBX::UniversalTool  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bae00
//
// 006bae00  53                   push ebx
// 006bae01  56                   push esi
// 006bae02  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bae06  57                   push edi
// 006bae07  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006bae0b  57                   push edi
// 006bae0c  56                   push esi
// 006bae0d  e8fee2ffff           call 0x6b9110
// 006bae12  8bd8                 mov ebx, eax
// 006bae14  83c408               add esp, 8
// 006bae17  85db                 test ebx, ebx
// 006bae19  7542                 jne 0x6bae5d
// 006bae1b  57                   push edi
// 006bae1c  56                   push esi
// 006bae1d  e8bee1ffff           call 0x6b8fe0
// 006bae22  83c408               add esp, 8
// 006bae25  85c0                 test eax, eax
// 006bae27  7532                 jne 0x6bae5b
// 006bae29  55                   push ebp
// 006bae2a  6a03                 push 3
// 006bae2c  56                   push esi
// 006bae2d  e85ee1ffff           call 0x6b8f90
// 006bae32  57                   push edi
// 006bae33  56                   push esi
// 006bae34  8be8                 mov ebp, eax
// 006bae36  e835e1ffff           call 0x6b8f70
// 006bae3b  50                   push eax
// 006bae3c  56                   push esi
// 006bae3d  e84ee1ffff           call 0x6b8f90
// 006bae42  50                   push eax
// 006bae43  55                   push ebp
// 006bae44  68acaf8e00           push 0x8eafac
// 006bae49  56                   push esi
// 006bae4a  e811e6ffff           call 0x6b9460
// 006bae4f  50                   push eax
// 006bae50  57                   push edi
// 006bae51  56                   push esi
// 006bae52  e879fcffff           call 0x6baad0
// 006bae57  83c434               add esp, 0x34
// 006bae5a  5d                   pop ebp
// 006bae5b  8bc3                 mov eax, ebx
// 006bae5d  5f                   pop edi
// 006bae5e  5e                   pop esi
// 006bae5f  5b                   pop ebx
// 006bae60  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
