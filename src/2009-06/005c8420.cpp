// roc 2009-06 005c8420  unit: seg_005c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8420
//
// 005c8420  55                   push ebp
// 005c8421  8bec                 mov ebp, esp
// 005c8423  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c8426  50                   push eax
// 005c8427  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c842a  51                   push ecx
// 005c842b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c842e  52                   push edx
// 005c842f  8b4508               mov eax, dword ptr [ebp + 8]
// 005c8432  50                   push eax
// 005c8433  e858030000           call 0x5c8790
// 005c8438  83c410               add esp, 0x10
// 005c843b  5d                   pop ebp
// 005c843c  c3                   ret 
// copied from an identical function in another client (function ??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp