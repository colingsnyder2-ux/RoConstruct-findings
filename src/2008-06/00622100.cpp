// from server: 100% by auto
// roc 2008-06 00622100  unit: lua_exception  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622100
//
// 00622100  8b4630               mov eax, dword ptr [esi + 0x30]
// 00622103  3d204e0000           cmp eax, 0x4e20
// 00622108  7e08                 jle 0x622112
// 0062210a  6a05                 push 5
// 0062210c  56                   push esi
// 0062210d  e83effffff           call 0x622050
// 00622112  03c0                 add eax, eax
// 00622114  50                   push eax
// 00622115  56                   push esi
// 00622116  e8b5f9ffff           call 0x621ad0
// 0062211b  83c408               add esp, 8
// 0062211e  817e30204e0000       cmp dword ptr [esi + 0x30], 0x4e20
// 00622125  7e0e                 jle 0x622135
// 00622127  6810488400           push 0x844810
// 0062212c  56                   push esi
// 0062212d  e89e160000           call 0x6237d0
// 00622132  83c408               add esp, 8
// 00622135  83461418             add dword ptr [esi + 0x14], 0x18
// 00622139  8b4614               mov eax, dword ptr [esi + 0x14]
// 0062213c  c3                   ret 
// library lua-5.1.4/ldo.c (function _growCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
