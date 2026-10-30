// roc 2009-06 006f11f0  unit: seg_006f0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f11f0
//
// 006f11f0  56                   push esi
// 006f11f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f11f5  81fe01010000         cmp esi, 0x101
// 006f11fb  7d3d                 jge 0x6f123a
// 006f11fd  56                   push esi
// 006f11fe  ff15c0e78900         call dword ptr [0x89e7c0]
// 006f1204  83c404               add esp, 4
// 006f1207  56                   push esi
// 006f1208  85c0                 test eax, eax
// 006f120a  7417                 je 0x6f1223
// 006f120c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f1210  8b4834               mov ecx, dword ptr [eax + 0x34]
// 006f1213  68e0e18e00           push 0x8ee1e0
// 006f1218  51                   push ecx
// 006f1219  e8827efdff           call 0x6c90a0
// 006f121e  83c40c               add esp, 0xc
// 006f1221  5e                   pop esi
// 006f1222  c3                   ret 
// 006f1223  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006f1227  8b4234               mov eax, dword ptr [edx + 0x34]
// 006f122a  68dce18e00           push 0x8ee1dc
// 006f122f  50                   push eax
// 006f1230  e86b7efdff           call 0x6c90a0
// 006f1235  83c40c               add esp, 0xc
// 006f1238  5e                   pop esi
// 006f1239  c3                   ret 
// 006f123a  8b04b53cdd8e00       mov eax, dword ptr [esi*4 + 0x8edd3c]
// 006f1241  5e                   pop esi
// 006f1242  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll llex.c