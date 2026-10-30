// roc 2009-06 005b7fe0  unit: seg_005b0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b7fe0
//
// 005b7fe0  55                   push ebp
// 005b7fe1  8bec                 mov ebp, esp
// 005b7fe3  51                   push ecx
// 005b7fe4  33c0                 xor eax, eax
// 005b7fe6  8845ff               mov byte ptr [ebp - 1], al
// 005b7fe9  8d4d10               lea ecx, [ebp + 0x10]
// 005b7fec  51                   push ecx
// 005b7fed  8d5508               lea edx, [ebp + 8]
// 005b7ff0  52                   push edx
// 005b7ff1  e83accfbff           call 0x574c30
// 005b7ff6  83c408               add esp, 8
// 005b7ff9  8845fe               mov byte ptr [ebp - 2], al
// 005b7ffc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005b8000  50                   push eax
// 005b8001  0fb64dfe             movzx ecx, byte ptr [ebp - 2]
// 005b8005  51                   push ecx
// 005b8006  8d5510               lea edx, [ebp + 0x10]
// 005b8009  52                   push edx
// 005b800a  8d4508               lea eax, [ebp + 8]
// 005b800d  50                   push eax
// 005b800e  8d4dfd               lea ecx, [ebp - 3]
// 005b8011  51                   push ecx
// 005b8012  e859b6f2ff           call 0x4e3670
// 005b8017  83c40c               add esp, 0xc
// 005b801a  0fb610               movzx edx, byte ptr [eax]
// 005b801d  52                   push edx
// 005b801e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005b8021  50                   push eax
// 005b8022  8d4d0c               lea ecx, [ebp + 0xc]
// 005b8025  51                   push ecx
// 005b8026  e865cefbff           call 0x574e90
// 005b802b  83c404               add esp, 4
// 005b802e  50                   push eax
// 005b802f  8d5508               lea edx, [ebp + 8]
// 005b8032  52                   push edx
// 005b8033  e858cefbff           call 0x574e90
// 005b8038  83c404               add esp, 4
// 005b803b  50                   push eax
// 005b803c  e8ffcbfbff           call 0x574c40
// 005b8041  83c418               add esp, 0x18
// 005b8044  8be5                 mov esp, ebp
// 005b8046  5d                   pop ebp
// 005b8047  c3                   ret 
// copied from an identical function in another client (function ??$unchecked_copy@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp