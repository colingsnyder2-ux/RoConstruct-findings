// roc 2009-06 005b82b0  unit: seg_005b0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b82b0
//
// 005b82b0  55                   push ebp
// 005b82b1  8bec                 mov ebp, esp
// 005b82b3  83ec0c               sub esp, 0xc
// 005b82b6  837d0800             cmp dword ptr [ebp + 8], 0
// 005b82ba  7709                 ja 0x5b82c5
// 005b82bc  c7450800000000       mov dword ptr [ebp + 8], 0
// 005b82c3  eb25                 jmp 0x5b82ea
// 005b82c5  83c8ff               or eax, 0xffffffff
// 005b82c8  33d2                 xor edx, edx
// 005b82ca  f77508               div dword ptr [ebp + 8]
// 005b82cd  83f830               cmp eax, 0x30
// 005b82d0  7318                 jae 0x5b82ea
// 005b82d2  6a00                 push 0
// 005b82d4  8d4df4               lea ecx, [ebp - 0xc]
// 005b82d7  e86491e4ff           call 0x401440
// 005b82dc  6888919700           push 0x979188
// 005b82e1  8d45f4               lea eax, [ebp - 0xc]
// 005b82e4  50                   push eax
// 005b82e5  e860171600           call 0x719a4a
// 005b82ea  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b82ed  6bc930               imul ecx, ecx, 0x30
// 005b82f0  51                   push ecx
// 005b82f1  e842071600           call 0x718a38
// 005b82f6  83c404               add esp, 4
// 005b82f9  8be5                 mov esp, ebp
// 005b82fb  5d                   pop ebp
// 005b82fc  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@VFace@?$ConvexClipper@N@Wml@@@std@@YAPAVFace@?$ConvexClipper@N@Wml@@IPAV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp