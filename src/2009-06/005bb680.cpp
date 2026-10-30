// roc 2009-06 005bb680  unit: seg_005b0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bb680
//
// 005bb680  55                   push ebp
// 005bb681  8bec                 mov ebp, esp
// 005bb683  51                   push ecx
// 005bb684  33c0                 xor eax, eax
// 005bb686  8845ff               mov byte ptr [ebp - 1], al
// 005bb689  8d4d10               lea ecx, [ebp + 0x10]
// 005bb68c  51                   push ecx
// 005bb68d  8d5508               lea edx, [ebp + 8]
// 005bb690  52                   push edx
// 005bb691  e82ae0ffff           call 0x5b96c0
// 005bb696  83c408               add esp, 8
// 005bb699  8845fe               mov byte ptr [ebp - 2], al
// 005bb69c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005bb6a0  50                   push eax
// 005bb6a1  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005bb6a5  51                   push ecx
// 005bb6a6  8d5510               lea edx, [ebp + 0x10]
// 005bb6a9  52                   push edx
// 005bb6aa  8d4508               lea eax, [ebp + 8]
// 005bb6ad  50                   push eax
// 005bb6ae  8d4dfd               lea ecx, [ebp - 3]
// 005bb6b1  51                   push ecx
// 005bb6b2  e8a9c60000           call 0x5c7d60
// 005bb6b7  83c40c               add esp, 0xc
// 005bb6ba  0fb610               movzx edx, byte ptr [eax]
// 005bb6bd  52                   push edx
// 005bb6be  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005bb6c1  50                   push eax
// 005bb6c2  8d4d0c               lea ecx, [ebp + 0xc]
// 005bb6c5  51                   push ecx
// 005bb6c6  e825f2ffff           call 0x5ba8f0
// 005bb6cb  83c404               add esp, 4
// 005bb6ce  50                   push eax
// 005bb6cf  8d5508               lea edx, [ebp + 8]
// 005bb6d2  52                   push edx
// 005bb6d3  e818f2ffff           call 0x5ba8f0
// 005bb6d8  83c404               add esp, 4
// 005bb6db  50                   push eax
// 005bb6dc  e8efefffff           call 0x5ba6d0
// 005bb6e1  83c418               add esp, 0x18
// 005bb6e4  8be5                 mov esp, ebp
// 005bb6e6  5d                   pop ebp
// 005bb6e7  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp