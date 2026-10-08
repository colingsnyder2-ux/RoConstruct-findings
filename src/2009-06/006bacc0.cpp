// from server: 100% by auto
// roc 2009-06 006bacc0  unit: RBX::UniversalTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bacc0
//
// 006bacc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006bacc4  53                   push ebx
// 006bacc5  56                   push esi
// 006bacc6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bacca  57                   push edi
// 006baccb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006baccf  50                   push eax
// 006bacd0  57                   push edi
// 006bacd1  56                   push esi
// 006bacd2  e8a9e4ffff           call 0x6b9180
// 006bacd7  8bd8                 mov ebx, eax
// 006bacd9  83c40c               add esp, 0xc
// 006bacdc  85db                 test ebx, ebx
// 006bacde  7534                 jne 0x6bad14
// 006bace0  55                   push ebp
// 006bace1  6a04                 push 4
// 006bace3  56                   push esi
// 006bace4  e8a7e2ffff           call 0x6b8f90
// 006bace9  57                   push edi
// 006bacea  56                   push esi
// 006baceb  8be8                 mov ebp, eax
// 006baced  e87ee2ffff           call 0x6b8f70
// 006bacf2  50                   push eax
// 006bacf3  56                   push esi
// 006bacf4  e897e2ffff           call 0x6b8f90
// 006bacf9  50                   push eax
// 006bacfa  55                   push ebp
// 006bacfb  68acaf8e00           push 0x8eafac
// 006bad00  56                   push esi
// 006bad01  e85ae7ffff           call 0x6b9460
// 006bad06  50                   push eax
// 006bad07  57                   push edi
// 006bad08  56                   push esi
// 006bad09  e8c2fdffff           call 0x6baad0
// 006bad0e  83c434               add esp, 0x34
// 006bad11  8bc3                 mov eax, ebx
// 006bad13  5d                   pop ebp
// 006bad14  5f                   pop edi
// 006bad15  5e                   pop esi
// 006bad16  5b                   pop ebx
// 006bad17  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
