// roc 2009-06 005bdf50  unit: RBX::AggregateChunk  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bdf50
//
// 005bdf50  55                   push ebp
// 005bdf51  8bec                 mov ebp, esp
// 005bdf53  83ec0c               sub esp, 0xc
// 005bdf56  837d0800             cmp dword ptr [ebp + 8], 0
// 005bdf5a  7709                 ja 0x5bdf65
// 005bdf5c  c7450800000000       mov dword ptr [ebp + 8], 0
// 005bdf63  eb25                 jmp 0x5bdf8a
// 005bdf65  83c8ff               or eax, 0xffffffff
// 005bdf68  33d2                 xor edx, edx
// 005bdf6a  f77508               div dword ptr [ebp + 8]
// 005bdf6d  83f804               cmp eax, 4
// 005bdf70  7318                 jae 0x5bdf8a
// 005bdf72  6a00                 push 0
// 005bdf74  8d4df4               lea ecx, [ebp - 0xc]
// 005bdf77  e8c434e4ff           call 0x401440
// 005bdf7c  6888919700           push 0x979188
// 005bdf81  8d45f4               lea eax, [ebp - 0xc]
// 005bdf84  50                   push eax
// 005bdf85  e8c0ba1500           call 0x719a4a
// 005bdf8a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bdf8d  c1e102               shl ecx, 2
// 005bdf90  51                   push ecx
// 005bdf91  e8a2aa1500           call 0x718a38
// 005bdf96  83c404               add esp, 4
// 005bdf99  8be5                 mov esp, ebp
// 005bdf9b  5d                   pop ebp
// 005bdf9c  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@H@std@@YAPAHIPAH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp