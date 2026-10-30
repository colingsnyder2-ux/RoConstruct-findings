// roc 2009-06 005c83a0  unit: seg_005c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c83a0
//
// 005c83a0  55                   push ebp
// 005c83a1  8bec                 mov ebp, esp
// 005c83a3  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005c83a6  50                   push eax
// 005c83a7  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005c83aa  51                   push ecx
// 005c83ab  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005c83ae  52                   push edx
// 005c83af  8b4508               mov eax, dword ptr [ebp + 8]
// 005c83b2  50                   push eax
// 005c83b3  e848030000           call 0x5c8700
// 005c83b8  83c410               add esp, 0x10
// 005c83bb  5d                   pop ebp
// 005c83bc  c3                   ret 
// copied from an identical function in another client (function ??$copy_s@U?$char_traits@D@std@@@_Traits_helper@std@@YAPADPADIPBDIU_Secure_char_traits_tag@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp