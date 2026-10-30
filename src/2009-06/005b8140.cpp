// roc 2009-06 005b8140  unit: seg_005b0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8140
//
// 005b8140  55                   push ebp
// 005b8141  8bec                 mov ebp, esp
// 005b8143  51                   push ecx
// 005b8144  894dfc               mov dword ptr [ebp - 4], ecx
// 005b8147  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b814a  83c008               add eax, 8
// 005b814d  50                   push eax
// 005b814e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005b8151  51                   push ecx
// 005b8152  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005b8155  52                   push edx
// 005b8156  8b4508               mov eax, dword ptr [ebp + 8]
// 005b8159  50                   push eax
// 005b815a  e801160000           call 0x5b9760
// 005b815f  83c410               add esp, 0x10
// 005b8162  8be5                 mov esp, ebp
// 005b8164  5d                   pop ebp
// 005b8165  c20c00               ret 0xc
// copied from an identical function in another client (function ??$_Umove@PAVVertex@?$ConvexClipper@M@Wml@@@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@IAEPAVVertex@?$ConvexClipper@M@Wml@@PAV234@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp