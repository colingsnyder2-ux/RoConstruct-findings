// roc 2009-06 005c5c70  unit: seg_005c0000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5c70
//
// 005c5c70  55                   push ebp
// 005c5c71  8bec                 mov ebp, esp
// 005c5c73  83ec0c               sub esp, 0xc
// 005c5c76  837d0800             cmp dword ptr [ebp + 8], 0
// 005c5c7a  7709                 ja 0x5c5c85
// 005c5c7c  c7450800000000       mov dword ptr [ebp + 8], 0
// 005c5c83  eb25                 jmp 0x5c5caa
// 005c5c85  83c8ff               or eax, 0xffffffff
// 005c5c88  33d2                 xor edx, edx
// 005c5c8a  f77508               div dword ptr [ebp + 8]
// 005c5c8d  83f80c               cmp eax, 0xc
// 005c5c90  7318                 jae 0x5c5caa
// 005c5c92  6a00                 push 0
// 005c5c94  8d4df4               lea ecx, [ebp - 0xc]
// 005c5c97  e8a4b7e3ff           call 0x401440
// 005c5c9c  6888919700           push 0x979188
// 005c5ca1  8d45f4               lea eax, [ebp - 0xc]
// 005c5ca4  50                   push eax
// 005c5ca5  e8a03d1500           call 0x719a4a
// 005c5caa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c5cad  6bc90c               imul ecx, ecx, 0xc
// 005c5cb0  51                   push ecx
// 005c5cb1  e8822d1500           call 0x718a38
// 005c5cb6  83c404               add esp, 4
// 005c5cb9  8be5                 mov esp, ebp
// 005c5cbb  5d                   pop ebp
// 005c5cbc  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@V?$Vector3@M@Wml@@@std@@YAPAV?$Vector3@M@Wml@@IPAV12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp