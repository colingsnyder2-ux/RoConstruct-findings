// roc 2009-06 005b8090  unit: seg_005b0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8090
//
// 005b8090  55                   push ebp
// 005b8091  8bec                 mov ebp, esp
// 005b8093  51                   push ecx
// 005b8094  33c0                 xor eax, eax
// 005b8096  8845ff               mov byte ptr [ebp - 1], al
// 005b8099  8d4d10               lea ecx, [ebp + 0x10]
// 005b809c  51                   push ecx
// 005b809d  8d5508               lea edx, [ebp + 8]
// 005b80a0  52                   push edx
// 005b80a1  e81a160000           call 0x5b96c0
// 005b80a6  83c408               add esp, 8
// 005b80a9  8845fe               mov byte ptr [ebp - 2], al
// 005b80ac  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005b80b0  50                   push eax
// 005b80b1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005b80b5  51                   push ecx
// 005b80b6  8d5510               lea edx, [ebp + 0x10]
// 005b80b9  52                   push edx
// 005b80ba  8d4508               lea eax, [ebp + 8]
// 005b80bd  50                   push eax
// 005b80be  8d4dfd               lea ecx, [ebp - 3]
// 005b80c1  51                   push ecx
// 005b80c2  e899fc0000           call 0x5c7d60
// 005b80c7  83c40c               add esp, 0xc
// 005b80ca  0fb610               movzx edx, byte ptr [eax]
// 005b80cd  52                   push edx
// 005b80ce  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b80d1  50                   push eax
// 005b80d2  8d4d0c               lea ecx, [ebp + 0xc]
// 005b80d5  51                   push ecx
// 005b80d6  e815280000           call 0x5ba8f0
// 005b80db  83c404               add esp, 4
// 005b80de  50                   push eax
// 005b80df  8d5508               lea edx, [ebp + 8]
// 005b80e2  52                   push edx
// 005b80e3  e808280000           call 0x5ba8f0
// 005b80e8  83c404               add esp, 4
// 005b80eb  50                   push eax
// 005b80ec  e8df150000           call 0x5b96d0
// 005b80f1  83c418               add esp, 0x18
// 005b80f4  8be5                 mov esp, ebp
// 005b80f6  5d                   pop ebp
// 005b80f7  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp