// roc 2012-06 00833920  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833920
//
// 00833920  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00833924  53                   push ebx
// 00833925  56                   push esi
// 00833926  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0083392a  57                   push edi
// 0083392b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0083392f  50                   push eax
// 00833930  57                   push edi
// 00833931  56                   push esi
// 00833932  e8b9e5ffff           call 0x831ef0
// 00833937  8bd8                 mov ebx, eax
// 00833939  83c40c               add esp, 0xc
// 0083393c  85db                 test ebx, ebx
// 0083393e  7534                 jne 0x833974
// 00833940  55                   push ebp
// 00833941  6a04                 push 4
// 00833943  56                   push esi
// 00833944  e8b7e3ffff           call 0x831d00
// 00833949  57                   push edi
// 0083394a  56                   push esi
// 0083394b  8be8                 mov ebp, eax
// 0083394d  e88ee3ffff           call 0x831ce0
// 00833952  50                   push eax
// 00833953  56                   push esi
// 00833954  e8a7e3ffff           call 0x831d00
// 00833959  50                   push eax
// 0083395a  55                   push ebp
// 0083395b  68d40abd00           push 0xbd0ad4
// 00833960  56                   push esi
// 00833961  e86ae8ffff           call 0x8321d0
// 00833966  50                   push eax
// 00833967  57                   push edi
// 00833968  56                   push esi
// 00833969  e8c2fdffff           call 0x833730
// 0083396e  83c434               add esp, 0x34
// 00833971  8bc3                 mov eax, ebx
// 00833973  5d                   pop ebp
// 00833974  5f                   pop edi
// 00833975  5e                   pop esi
// 00833976  5b                   pop ebx
// 00833977  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
