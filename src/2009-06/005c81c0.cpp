// roc 2009-06 005c81c0  unit: seg_005c0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c81c0
//
// 005c81c0  55                   push ebp
// 005c81c1  8bec                 mov ebp, esp
// 005c81c3  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c81c6  50                   push eax
// 005c81c7  8d4d0c               lea ecx, [ebp + 0xc]
// 005c81ca  51                   push ecx
// 005c81cb  e82027ffff           call 0x5ba8f0
// 005c81d0  83c404               add esp, 4
// 005c81d3  50                   push eax
// 005c81d4  8d5508               lea edx, [ebp + 8]
// 005c81d7  52                   push edx
// 005c81d8  e81327ffff           call 0x5ba8f0
// 005c81dd  83c404               add esp, 4
// 005c81e0  50                   push eax
// 005c81e1  e8ca020000           call 0x5c84b0
// 005c81e6  83c40c               add esp, 0xc
// 005c81e9  5d                   pop ebp
// 005c81ea  c3                   ret 
// copied from an identical function in another client (function ??$fill@PAVVertex@?$ConvexClipper@M@Wml@@V123@@std@@YAXPAVVertex@?$ConvexClipper@M@Wml@@0ABV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp