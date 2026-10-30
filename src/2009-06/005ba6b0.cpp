// roc 2009-06 005ba6b0  unit: seg_005b0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ba6b0
//
// 005ba6b0  55                   push ebp
// 005ba6b1  8bec                 mov ebp, esp
// 005ba6b3  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005ba6b6  50                   push eax
// 005ba6b7  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005ba6ba  51                   push ecx
// 005ba6bb  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005ba6be  52                   push edx
// 005ba6bf  8b4508               mov eax, dword ptr [ebp + 8]
// 005ba6c2  50                   push eax
// 005ba6c3  e8d80c0000           call 0x5bb3a0
// 005ba6c8  83c410               add esp, 0x10
// 005ba6cb  5d                   pop ebp
// 005ba6cc  c3                   ret 
// copied from an identical function in another client (function ??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp