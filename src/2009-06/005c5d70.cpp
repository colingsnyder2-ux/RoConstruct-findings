// roc 2009-06 005c5d70  unit: seg_005c0000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5d70
//
// 005c5d70  55                   push ebp
// 005c5d71  8bec                 mov ebp, esp
// 005c5d73  51                   push ecx
// 005c5d74  894dfc               mov dword ptr [ebp - 4], ecx
// 005c5d77  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c5d7a  83c008               add eax, 8
// 005c5d7d  50                   push eax
// 005c5d7e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c5d81  51                   push ecx
// 005c5d82  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c5d85  52                   push edx
// 005c5d86  8b4508               mov eax, dword ptr [ebp + 8]
// 005c5d89  50                   push eax
// 005c5d8a  e831220000           call 0x5c7fc0
// 005c5d8f  83c410               add esp, 0x10
// 005c5d92  8be5                 mov esp, ebp
// 005c5d94  5d                   pop ebp
// 005c5d95  c20c00               ret 0xc
// copied from an identical function in another client (function ??$_Umove@PAVVertex@?$ConvexClipper@M@Wml@@@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@IAEPAVVertex@?$ConvexClipper@M@Wml@@PAV234@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp