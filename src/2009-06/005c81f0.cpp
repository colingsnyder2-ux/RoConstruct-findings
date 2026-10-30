// roc 2009-06 005c81f0  unit: seg_005c0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c81f0
//
// 005c81f0  55                   push ebp
// 005c81f1  8bec                 mov ebp, esp
// 005c81f3  51                   push ecx
// 005c81f4  33c0                 xor eax, eax
// 005c81f6  8845ff               mov byte ptr [ebp - 1], al
// 005c81f9  8d4d10               lea ecx, [ebp + 0x10]
// 005c81fc  51                   push ecx
// 005c81fd  e8be14ffff           call 0x5b96c0
// 005c8202  83c404               add esp, 4
// 005c8205  8845fe               mov byte ptr [ebp - 2], al
// 005c8208  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005c820c  52                   push edx
// 005c820d  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005c8211  50                   push eax
// 005c8212  8d4d10               lea ecx, [ebp + 0x10]
// 005c8215  51                   push ecx
// 005c8216  8d5508               lea edx, [ebp + 8]
// 005c8219  52                   push edx
// 005c821a  8d45fd               lea eax, [ebp - 3]
// 005c821d  50                   push eax
// 005c821e  e83dfbffff           call 0x5c7d60
// 005c8223  83c40c               add esp, 0xc
// 005c8226  0fb608               movzx ecx, byte ptr [eax]
// 005c8229  51                   push ecx
// 005c822a  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005c822d  52                   push edx
// 005c822e  8d450c               lea eax, [ebp + 0xc]
// 005c8231  50                   push eax
// 005c8232  e8b926ffff           call 0x5ba8f0
// 005c8237  83c404               add esp, 4
// 005c823a  50                   push eax
// 005c823b  8d4d08               lea ecx, [ebp + 8]
// 005c823e  51                   push ecx
// 005c823f  e8ac26ffff           call 0x5ba8f0
// 005c8244  83c404               add esp, 4
// 005c8247  50                   push eax
// 005c8248  e893020000           call 0x5c84e0
// 005c824d  83c418               add esp, 0x18
// 005c8250  8be5                 mov esp, ebp
// 005c8252  5d                   pop ebp
// 005c8253  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_move_backward@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp