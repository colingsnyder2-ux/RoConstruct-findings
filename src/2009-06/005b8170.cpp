// roc 2009-06 005b8170  unit: seg_005b0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8170
//
// 005b8170  55                   push ebp
// 005b8171  8bec                 mov ebp, esp
// 005b8173  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b8176  50                   push eax
// 005b8177  8d4d0c               lea ecx, [ebp + 0xc]
// 005b817a  51                   push ecx
// 005b817b  e870270000           call 0x5ba8f0
// 005b8180  83c404               add esp, 4
// 005b8183  50                   push eax
// 005b8184  8d5508               lea edx, [ebp + 8]
// 005b8187  52                   push edx
// 005b8188  e863270000           call 0x5ba8f0
// 005b818d  83c404               add esp, 4
// 005b8190  50                   push eax
// 005b8191  e81a160000           call 0x5b97b0
// 005b8196  83c40c               add esp, 0xc
// 005b8199  5d                   pop ebp
// 005b819a  c3                   ret 
// copied from an identical function in another client (function ??$fill@PAVVertex@?$ConvexClipper@M@Wml@@V123@@std@@YAXPAVVertex@?$ConvexClipper@M@Wml@@0ABV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp