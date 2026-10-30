// roc 2009-06 005b8260  unit: seg_005b0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8260
//
// 005b8260  55                   push ebp
// 005b8261  8bec                 mov ebp, esp
// 005b8263  83ec0c               sub esp, 0xc
// 005b8266  837d0800             cmp dword ptr [ebp + 8], 0
// 005b826a  7709                 ja 0x5b8275
// 005b826c  c7450800000000       mov dword ptr [ebp + 8], 0
// 005b8273  eb25                 jmp 0x5b829a
// 005b8275  83c8ff               or eax, 0xffffffff
// 005b8278  33d2                 xor edx, edx
// 005b827a  f77508               div dword ptr [ebp + 8]
// 005b827d  83f848               cmp eax, 0x48
// 005b8280  7318                 jae 0x5b829a
// 005b8282  6a00                 push 0
// 005b8284  8d4df4               lea ecx, [ebp - 0xc]
// 005b8287  e8b491e4ff           call 0x401440
// 005b828c  6888919700           push 0x979188
// 005b8291  8d45f4               lea eax, [ebp - 0xc]
// 005b8294  50                   push eax
// 005b8295  e8b0171600           call 0x719a4a
// 005b829a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b829d  6bc948               imul ecx, ecx, 0x48
// 005b82a0  51                   push ecx
// 005b82a1  e892071600           call 0x718a38
// 005b82a6  83c404               add esp, 4
// 005b82a9  8be5                 mov esp, ebp
// 005b82ab  5d                   pop ebp
// 005b82ac  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@VFace@?$ConvexClipper@N@Wml@@@std@@YAPAVFace@?$ConvexClipper@N@Wml@@IPAV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp