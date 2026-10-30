// roc 2009-06 005c5b20  unit: seg_005c0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5b20
//
// 005c5b20  55                   push ebp
// 005c5b21  8bec                 mov ebp, esp
// 005c5b23  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c5b26  50                   push eax
// 005c5b27  8d4d0c               lea ecx, [ebp + 0xc]
// 005c5b2a  51                   push ecx
// 005c5b2b  e8c04dffff           call 0x5ba8f0
// 005c5b30  83c404               add esp, 4
// 005c5b33  50                   push eax
// 005c5b34  8d5508               lea edx, [ebp + 8]
// 005c5b37  52                   push edx
// 005c5b38  e8b34dffff           call 0x5ba8f0
// 005c5b3d  83c404               add esp, 4
// 005c5b40  50                   push eax
// 005c5b41  e8ca230000           call 0x5c7f10
// 005c5b46  83c40c               add esp, 0xc
// 005c5b49  5d                   pop ebp
// 005c5b4a  c3                   ret 
// copied from an identical function in another client (function ??$fill@PAVVertex@?$ConvexClipper@M@Wml@@V123@@std@@YAXPAVVertex@?$ConvexClipper@M@Wml@@0ABV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp