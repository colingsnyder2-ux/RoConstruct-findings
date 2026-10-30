// roc 2009-06 005c8190  unit: seg_005c0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8190
//
// 005c8190  55                   push ebp
// 005c8191  8bec                 mov ebp, esp
// 005c8193  51                   push ecx
// 005c8194  894dfc               mov dword ptr [ebp - 4], ecx
// 005c8197  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c819a  83c008               add eax, 8
// 005c819d  50                   push eax
// 005c819e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c81a1  51                   push ecx
// 005c81a2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c81a5  52                   push edx
// 005c81a6  8b4508               mov eax, dword ptr [ebp + 8]
// 005c81a9  50                   push eax
// 005c81aa  e8b1020000           call 0x5c8460
// 005c81af  83c410               add esp, 0x10
// 005c81b2  8be5                 mov esp, ebp
// 005c81b4  5d                   pop ebp
// 005c81b5  c20c00               ret 0xc
// copied from an identical function in another client (function ??$_Umove@PAVVertex@?$ConvexClipper@M@Wml@@@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@IAEPAVVertex@?$ConvexClipper@M@Wml@@PAV234@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp