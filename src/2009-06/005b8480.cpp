// roc 2009-06 005b8480  unit: seg_005b0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b8480
//
// 005b8480  55                   push ebp
// 005b8481  8bec                 mov ebp, esp
// 005b8483  51                   push ecx
// 005b8484  33c0                 xor eax, eax
// 005b8486  8845ff               mov byte ptr [ebp - 1], al
// 005b8489  8d4d10               lea ecx, [ebp + 0x10]
// 005b848c  51                   push ecx
// 005b848d  e82e120000           call 0x5b96c0
// 005b8492  83c404               add esp, 4
// 005b8495  8845fe               mov byte ptr [ebp - 2], al
// 005b8498  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005b849c  52                   push edx
// 005b849d  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005b84a1  50                   push eax
// 005b84a2  8d4d10               lea ecx, [ebp + 0x10]
// 005b84a5  51                   push ecx
// 005b84a6  8d5508               lea edx, [ebp + 8]
// 005b84a9  52                   push edx
// 005b84aa  8d45fd               lea eax, [ebp - 3]
// 005b84ad  50                   push eax
// 005b84ae  e8adf80000           call 0x5c7d60
// 005b84b3  83c40c               add esp, 0xc
// 005b84b6  0fb608               movzx ecx, byte ptr [eax]
// 005b84b9  51                   push ecx
// 005b84ba  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005b84bd  52                   push edx
// 005b84be  8d450c               lea eax, [ebp + 0xc]
// 005b84c1  50                   push eax
// 005b84c2  e829240000           call 0x5ba8f0
// 005b84c7  83c404               add esp, 4
// 005b84ca  50                   push eax
// 005b84cb  8d4d08               lea ecx, [ebp + 8]
// 005b84ce  51                   push ecx
// 005b84cf  e81c240000           call 0x5ba8f0
// 005b84d4  83c404               add esp, 4
// 005b84d7  50                   push eax
// 005b84d8  e863150000           call 0x5b9a40
// 005b84dd  83c418               add esp, 0x18
// 005b84e0  8be5                 mov esp, ebp
// 005b84e2  5d                   pop ebp
// 005b84e3  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_move_backward@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp