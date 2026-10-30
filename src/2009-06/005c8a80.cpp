// roc 2009-06 005c8a80  unit: seg_005c0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c8a80
//
// 005c8a80  55                   push ebp
// 005c8a81  8bec                 mov ebp, esp
// 005c8a83  eb12                 jmp 0x5c8a97
// 005c8a85  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005c8a88  83e801               sub eax, 1
// 005c8a8b  89450c               mov dword ptr [ebp + 0xc], eax
// 005c8a8e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c8a91  83c104               add ecx, 4
// 005c8a94  894d08               mov dword ptr [ebp + 8], ecx
// 005c8a97  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 005c8a9b  760c                 jbe 0x5c8aa9
// 005c8a9d  8b5508               mov edx, dword ptr [ebp + 8]
// 005c8aa0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c8aa3  8b08                 mov ecx, dword ptr [eax]
// 005c8aa5  890a                 mov dword ptr [edx], ecx
// 005c8aa7  ebdc                 jmp 0x5c8a85
// 005c8aa9  5d                   pop ebp
// 005c8aaa  c3                   ret 
// copied from an identical function in another client (function ??$_Fill_n@PAHIH@std@@YAXPAHIABHU_Range_checked_iterator_tag@0@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp