// roc 2009-06 005bb4b0  unit: seg_005b0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb4b0
//
// 005bb4b0  55                   push ebp
// 005bb4b1  8bec                 mov ebp, esp
// 005bb4b3  8b4508               mov eax, dword ptr [ebp + 8]
// 005bb4b6  50                   push eax
// 005bb4b7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bb4ba  e86156ffff           call 0x5b0b20
// 005bb4bf  0fb6c8               movzx ecx, al
// 005bb4c2  85c9                 test ecx, ecx
// 005bb4c4  7410                 je 0x5bb4d6
// 005bb4c6  8b5508               mov edx, dword ptr [ebp + 8]
// 005bb4c9  52                   push edx
// 005bb4ca  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005bb4cd  50                   push eax
// 005bb4ce  e86dfaffff           call 0x5baf40
// 005bb4d3  83c408               add esp, 8
// 005bb4d6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bb4d9  51                   push ecx
// 005bb4da  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005bb4dd  e83e56ffff           call 0x5b0b20
// 005bb4e2  0fb6d0               movzx edx, al
// 005bb4e5  85d2                 test edx, edx
// 005bb4e7  7410                 je 0x5bb4f9
// 005bb4e9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005bb4ec  50                   push eax
// 005bb4ed  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005bb4f0  51                   push ecx
// 005bb4f1  e84afaffff           call 0x5baf40
// 005bb4f6  83c408               add esp, 8
// 005bb4f9  8b5508               mov edx, dword ptr [ebp + 8]
// 005bb4fc  52                   push edx
// 005bb4fd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bb500  e81b56ffff           call 0x5b0b20
// 005bb505  0fb6c0               movzx eax, al
// 005bb508  85c0                 test eax, eax
// 005bb50a  7410                 je 0x5bb51c
// 005bb50c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bb50f  51                   push ecx
// 005bb510  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005bb513  52                   push edx
// 005bb514  e827faffff           call 0x5baf40
// 005bb519  83c408               add esp, 8
// 005bb51c  5d                   pop ebp
// 005bb51d  c3                   ret 
// copied from an identical function in another client (function ??$_Med3@PAVEdgePlus@?$ConvexClipper@M@Wml@@@std@@YAXPAVEdgePlus@?$ConvexClipper@M@Wml@@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp