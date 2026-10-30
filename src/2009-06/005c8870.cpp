// roc 2009-06 005c8870  unit: seg_005c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8870
//
// 005c8870  55                   push ebp
// 005c8871  8bec                 mov ebp, esp
// 005c8873  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c8876  50                   push eax
// 005c8877  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c887a  51                   push ecx
// 005c887b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c887e  52                   push edx
// 005c887f  8b4508               mov eax, dword ptr [ebp + 8]
// 005c8882  50                   push eax
// 005c8883  e8d8f9ffff           call 0x5c8260
// 005c8888  83c410               add esp, 0x10
// 005c888b  5d                   pop ebp
// 005c888c  c3                   ret 
// copied from an identical function in another client (function ??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp