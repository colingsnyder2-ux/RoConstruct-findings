// roc 2009-06 005c5c10  unit: seg_005c0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5c10
//
// 005c5c10  55                   push ebp
// 005c5c11  8bec                 mov ebp, esp
// 005c5c13  83ec0c               sub esp, 0xc
// 005c5c16  837d0800             cmp dword ptr [ebp + 8], 0
// 005c5c1a  7709                 ja 0x5c5c25
// 005c5c1c  c7450800000000       mov dword ptr [ebp + 8], 0
// 005c5c23  eb25                 jmp 0x5c5c4a
// 005c5c25  83c8ff               or eax, 0xffffffff
// 005c5c28  33d2                 xor edx, edx
// 005c5c2a  f77508               div dword ptr [ebp + 8]
// 005c5c2d  83f820               cmp eax, 0x20
// 005c5c30  7318                 jae 0x5c5c4a
// 005c5c32  6a00                 push 0
// 005c5c34  8d4df4               lea ecx, [ebp - 0xc]
// 005c5c37  e804b8e3ff           call 0x401440
// 005c5c3c  6888919700           push 0x979188
// 005c5c41  8d45f4               lea eax, [ebp - 0xc]
// 005c5c44  50                   push eax
// 005c5c45  e8003e1500           call 0x719a4a
// 005c5c4a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c5c4d  c1e105               shl ecx, 5
// 005c5c50  51                   push ecx
// 005c5c51  e8e22d1500           call 0x718a38
// 005c5c56  83c404               add esp, 4
// 005c5c59  8be5                 mov esp, ebp
// 005c5c5b  5d                   pop ebp
// 005c5c5c  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@VFace@?$ConvexClipper@M@Wml@@@std@@YAPAVFace@?$ConvexClipper@M@Wml@@IPAV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp