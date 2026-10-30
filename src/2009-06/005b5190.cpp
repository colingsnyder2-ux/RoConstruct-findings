// roc 2009-06 005b5190  unit: seg_005b0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b5190
//
// 005b5190  55                   push ebp
// 005b5191  8bec                 mov ebp, esp
// 005b5193  51                   push ecx
// 005b5194  894dfc               mov dword ptr [ebp - 4], ecx
// 005b5197  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b519a  83c008               add eax, 8
// 005b519d  50                   push eax
// 005b519e  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005b51a1  51                   push ecx
// 005b51a2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005b51a5  52                   push edx
// 005b51a6  8b4508               mov eax, dword ptr [ebp + 8]
// 005b51a9  50                   push eax
// 005b51aa  e861300000           call 0x5b8210
// 005b51af  83c410               add esp, 0x10
// 005b51b2  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005b51b5  6bc048               imul eax, eax, 0x48
// 005b51b8  034508               add eax, dword ptr [ebp + 8]
// 005b51bb  8be5                 mov esp, ebp
// 005b51bd  5d                   pop ebp
// 005b51be  c20c00               ret 0xc
// copied from an identical function in another client (function ?_Ufill@?$vector@VFace@?$ConvexClipper@N@Wml@@V?$allocator@VFace@?$ConvexClipper@N@Wml@@@std@@@std@@IAEPAVFace@?$ConvexClipper@N@Wml@@PAV345@IABV345@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp