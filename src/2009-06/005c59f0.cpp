// roc 2009-06 005c59f0  unit: seg_005c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c59f0
//
// 005c59f0  55                   push ebp
// 005c59f1  8bec                 mov ebp, esp
// 005c59f3  51                   push ecx
// 005c59f4  33c0                 xor eax, eax
// 005c59f6  8845ff               mov byte ptr [ebp - 1], al
// 005c59f9  8d4d10               lea ecx, [ebp + 0x10]
// 005c59fc  51                   push ecx
// 005c59fd  8d5508               lea edx, [ebp + 8]
// 005c5a00  52                   push edx
// 005c5a01  e8ba3cffff           call 0x5b96c0
// 005c5a06  83c408               add esp, 8
// 005c5a09  8845fe               mov byte ptr [ebp - 2], al
// 005c5a0c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005c5a10  50                   push eax
// 005c5a11  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005c5a15  51                   push ecx
// 005c5a16  8d5510               lea edx, [ebp + 0x10]
// 005c5a19  52                   push edx
// 005c5a1a  8d4508               lea eax, [ebp + 8]
// 005c5a1d  50                   push eax
// 005c5a1e  8d4dfd               lea ecx, [ebp - 3]
// 005c5a21  51                   push ecx
// 005c5a22  e839230000           call 0x5c7d60
// 005c5a27  83c40c               add esp, 0xc
// 005c5a2a  0fb610               movzx edx, byte ptr [eax]
// 005c5a2d  52                   push edx
// 005c5a2e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c5a31  50                   push eax
// 005c5a32  8d4d0c               lea ecx, [ebp + 0xc]
// 005c5a35  51                   push ecx
// 005c5a36  e8b54effff           call 0x5ba8f0
// 005c5a3b  83c404               add esp, 4
// 005c5a3e  50                   push eax
// 005c5a3f  8d5508               lea edx, [ebp + 8]
// 005c5a42  52                   push edx
// 005c5a43  e8a84effff           call 0x5ba8f0
// 005c5a48  83c404               add esp, 4
// 005c5a4b  50                   push eax
// 005c5a4c  e81f230000           call 0x5c7d70
// 005c5a51  83c418               add esp, 0x18
// 005c5a54  8be5                 mov esp, ebp
// 005c5a56  5d                   pop ebp
// 005c5a57  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp