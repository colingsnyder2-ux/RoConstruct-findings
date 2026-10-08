// from server: 100% by auto
// roc 2012-06 00853db0  unit: RBX::LuaStatsItem  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00853db0
//
// 00853db0  53                   push ebx
// 00853db1  56                   push esi
// 00853db2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00853db6  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 00853db9  57                   push edi
// 00853dba  8bfe                 mov edi, esi
// 00853dbc  e86fffffff           call 0x853d30
// 00853dc1  6a02                 push 2
// 00853dc3  6a00                 push 0
// 00853dc5  56                   push esi
// 00853dc6  e8551b0e00           call 0x935920
// 00853dcb  6a02                 push 2
// 00853dcd  894648               mov dword ptr [esi + 0x48], eax
// 00853dd0  c7465005000000       mov dword ptr [esi + 0x50], 5
// 00853dd7  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00853dda  6a00                 push 0
// 00853ddc  56                   push esi
// 00853ddd  83c760               add edi, 0x60
// 00853de0  e83b1b0e00           call 0x935920
// 00853de5  6a20                 push 0x20
// 00853de7  56                   push esi
// 00853de8  8907                 mov dword ptr [edi], eax
// 00853dea  c7470805000000       mov dword ptr [edi + 8], 5
// 00853df1  e8da230e00           call 0x9361d0
// 00853df6  56                   push esi
// 00853df7  e894f60d00           call 0x933490
// 00853dfc  56                   push esi
// 00853dfd  e8be320e00           call 0x9370c0
// 00853e02  6a11                 push 0x11
// 00853e04  68cc37bd00           push 0xbd37cc
// 00853e09  56                   push esi
// 00853e0a  e821250e00           call 0x936330
// 00853e0f  80480520             or byte ptr [eax + 5], 0x20
// 00853e13  83c005               add eax, 5
// 00853e16  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00853e19  83c434               add esp, 0x34
// 00853e1c  03c0                 add eax, eax
// 00853e1e  5f                   pop edi
// 00853e1f  03c0                 add eax, eax
// 00853e21  5e                   pop esi
// 00853e22  894340               mov dword ptr [ebx + 0x40], eax
// 00853e25  5b                   pop ebx
// 00853e26  c3                   ret 
// library lua-5.1.4/lstate.c (function _f_luaopen)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
