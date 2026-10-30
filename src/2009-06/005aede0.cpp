// roc 2009-06 005aede0  unit: RBX::Mesh  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005aede0
//
// 005aede0  55                   push ebp
// 005aede1  8bec                 mov ebp, esp
// 005aede3  83ec0c               sub esp, 0xc
// 005aede6  837d0800             cmp dword ptr [ebp + 8], 0
// 005aedea  7709                 ja 0x5aedf5
// 005aedec  c7450800000000       mov dword ptr [ebp + 8], 0
// 005aedf3  eb25                 jmp 0x5aee1a
// 005aedf5  83c8ff               or eax, 0xffffffff
// 005aedf8  33d2                 xor edx, edx
// 005aedfa  f77508               div dword ptr [ebp + 8]
// 005aedfd  83f818               cmp eax, 0x18
// 005aee00  7318                 jae 0x5aee1a
// 005aee02  6a00                 push 0
// 005aee04  8d4df4               lea ecx, [ebp - 0xc]
// 005aee07  e83426e5ff           call 0x401440
// 005aee0c  6888919700           push 0x979188
// 005aee11  8d45f4               lea eax, [ebp - 0xc]
// 005aee14  50                   push eax
// 005aee15  e830ac1600           call 0x719a4a
// 005aee1a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005aee1d  6bc918               imul ecx, ecx, 0x18
// 005aee20  51                   push ecx
// 005aee21  e8129c1600           call 0x718a38
// 005aee26  83c404               add esp, 4
// 005aee29  8be5                 mov esp, ebp
// 005aee2b  5d                   pop ebp
// 005aee2c  c3                   ret 
// copied from an identical function in another client (function ??$_Allocate@VVertex@?$ConvexClipper@M@Wml@@@std@@YAPAVVertex@?$ConvexClipper@M@Wml@@IPAV123@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp