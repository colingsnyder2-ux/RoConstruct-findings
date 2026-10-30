// roc 2009-06 005b8450  unit: seg_005b0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8450
//
// 005b8450  55                   push ebp
// 005b8451  8bec                 mov ebp, esp
// 005b8453  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b8456  50                   push eax
// 005b8457  8d4d0c               lea ecx, [ebp + 0xc]
// 005b845a  51                   push ecx
// 005b845b  e890240000           call 0x5ba8f0
// 005b8460  83c404               add esp, 4
// 005b8463  50                   push eax
// 005b8464  8d5508               lea edx, [ebp + 8]
// 005b8467  52                   push edx
// 005b8468  e883240000           call 0x5ba8f0
// 005b846d  83c404               add esp, 4
// 005b8470  50                   push eax
// 005b8471  e89afb0000           call 0x5c8010
// 005b8476  83c40c               add esp, 0xc
// 005b8479  5d                   pop ebp
// 005b847a  c3                   ret 
// copied from an identical function in another client (function ??$fill@PAVVertex@?$ConvexClipper@M@Wml@@V123@@std@@YAXPAVVertex@?$ConvexClipper@M@Wml@@0ABV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp