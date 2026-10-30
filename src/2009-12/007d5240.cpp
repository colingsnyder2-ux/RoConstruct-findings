// roc 2009-12 007d5240  unit: seg_007d0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d5240
//
// 007d5240  56                   push esi
// 007d5241  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007d5245  81fe01010000         cmp esi, 0x101
// 007d524b  7d3d                 jge 0x7d528a
// 007d524d  56                   push esi
// 007d524e  ff1558b99800         call dword ptr [0x98b958]
// 007d5254  83c404               add esp, 4
// 007d5257  56                   push esi
// 007d5258  85c0                 test eax, eax
// 007d525a  7417                 je 0x7d5273
// 007d525c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d5260  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007d5263  68d8f39e00           push 0x9ef3d8
// 007d5268  51                   push ecx
// 007d5269  e81253fcff           call 0x79a580
// 007d526e  83c40c               add esp, 0xc
// 007d5271  5e                   pop esi
// 007d5272  c3                   ret 
// 007d5273  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007d5277  8b4234               mov eax, dword ptr [edx + 0x34]
// 007d527a  68d4f39e00           push 0x9ef3d4
// 007d527f  50                   push eax
// 007d5280  e8fb52fcff           call 0x79a580
// 007d5285  83c40c               add esp, 0xc
// 007d5288  5e                   pop esi
// 007d5289  c3                   ret 
// 007d528a  8b04b534ef9e00       mov eax, dword ptr [esi*4 + 0x9eef34]
// 007d5291  5e                   pop esi
// 007d5292  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll llex.c