// roc 2011-06 00764190  unit: seg_00760000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00764190
//
// 00764190  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00764194  53                   push ebx
// 00764195  56                   push esi
// 00764196  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076419a  57                   push edi
// 0076419b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0076419f  50                   push eax
// 007641a0  57                   push edi
// 007641a1  56                   push esi
// 007641a2  e8b9e5ffff           call 0x762760
// 007641a7  8bd8                 mov ebx, eax
// 007641a9  83c40c               add esp, 0xc
// 007641ac  85db                 test ebx, ebx
// 007641ae  7534                 jne 0x7641e4
// 007641b0  55                   push ebp
// 007641b1  6a04                 push 4
// 007641b3  56                   push esi
// 007641b4  e8b7e3ffff           call 0x762570
// 007641b9  57                   push edi
// 007641ba  56                   push esi
// 007641bb  8be8                 mov ebp, eax
// 007641bd  e88ee3ffff           call 0x762550
// 007641c2  50                   push eax
// 007641c3  56                   push esi
// 007641c4  e8a7e3ffff           call 0x762570
// 007641c9  50                   push eax
// 007641ca  55                   push ebp
// 007641cb  68b065ab00           push 0xab65b0
// 007641d0  56                   push esi
// 007641d1  e86ae8ffff           call 0x762a40
// 007641d6  50                   push eax
// 007641d7  57                   push edi
// 007641d8  56                   push esi
// 007641d9  e8c2fdffff           call 0x763fa0
// 007641de  83c434               add esp, 0x34
// 007641e1  8bc3                 mov eax, ebx
// 007641e3  5d                   pop ebp
// 007641e4  5f                   pop edi
// 007641e5  5e                   pop esi
// 007641e6  5b                   pop ebx
// 007641e7  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
