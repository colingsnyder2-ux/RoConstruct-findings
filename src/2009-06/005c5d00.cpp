// roc 2009-06 005c5d00  unit: seg_005c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c5d00
//
// 005c5d00  55                   push ebp
// 005c5d01  8bec                 mov ebp, esp
// 005c5d03  51                   push ecx
// 005c5d04  33c0                 xor eax, eax
// 005c5d06  8845ff               mov byte ptr [ebp - 1], al
// 005c5d09  8d4d10               lea ecx, [ebp + 0x10]
// 005c5d0c  51                   push ecx
// 005c5d0d  8d5508               lea edx, [ebp + 8]
// 005c5d10  52                   push edx
// 005c5d11  e8aa39ffff           call 0x5b96c0
// 005c5d16  83c408               add esp, 8
// 005c5d19  8845fe               mov byte ptr [ebp - 2], al
// 005c5d1c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c5d20  50                   push eax
// 005c5d21  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c5d25  51                   push ecx
// 005c5d26  8d5510               lea edx, [ebp + 0x10]
// 005c5d29  52                   push edx
// 005c5d2a  8d4508               lea eax, [ebp + 8]
// 005c5d2d  50                   push eax
// 005c5d2e  8d4dfd               lea ecx, [ebp - 3]
// 005c5d31  51                   push ecx
// 005c5d32  e829200000           call 0x5c7d60
// 005c5d37  83c40c               add esp, 0xc
// 005c5d3a  0fb610               movzx edx, byte ptr [eax]
// 005c5d3d  52                   push edx
// 005c5d3e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c5d41  50                   push eax
// 005c5d42  8d4d0c               lea ecx, [ebp + 0xc]
// 005c5d45  51                   push ecx
// 005c5d46  e8a54bffff           call 0x5ba8f0
// 005c5d4b  83c404               add esp, 4
// 005c5d4e  50                   push eax
// 005c5d4f  8d5508               lea edx, [ebp + 8]
// 005c5d52  52                   push edx
// 005c5d53  e8984bffff           call 0x5ba8f0
// 005c5d58  83c404               add esp, 4
// 005c5d5b  50                   push eax
// 005c5d5c  e87f3cffff           call 0x5b99e0
// 005c5d61  83c418               add esp, 0x18
// 005c5d64  8be5                 mov esp, ebp
// 005c5d66  5d                   pop ebp
// 005c5d67  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp