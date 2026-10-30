// roc 2009-06 005c8a40  unit: seg_005c0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8a40
//
// 005c8a40  55                   push ebp
// 005c8a41  8bec                 mov ebp, esp
// 005c8a43  83ec08               sub esp, 8
// 005c8a46  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c8a49  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c8a4c  8d1481               lea edx, [ecx + eax*4]
// 005c8a4f  8955fc               mov dword ptr [ebp - 4], edx
// 005c8a52  33c0                 xor eax, eax
// 005c8a54  8845fb               mov byte ptr [ebp - 5], al
// 005c8a57  0fb64dfb             movzx ecx, byte ptr [ebp - 5]
// 005c8a5b  51                   push ecx
// 005c8a5c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c8a5f  52                   push edx
// 005c8a60  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c8a63  50                   push eax
// 005c8a64  8d4d08               lea ecx, [ebp + 8]
// 005c8a67  51                   push ecx
// 005c8a68  e8831effff           call 0x5ba8f0
// 005c8a6d  83c404               add esp, 4
// 005c8a70  50                   push eax
// 005c8a71  e80a000000           call 0x5c8a80
// 005c8a76  83c410               add esp, 0x10
// 005c8a79  8be5                 mov esp, ebp
// 005c8a7b  5d                   pop ebp
// 005c8a7c  c3                   ret 
// copied from an identical function in another client (function ??$_Fill_n@PAHIH@std@@YAXPAHIABHUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp