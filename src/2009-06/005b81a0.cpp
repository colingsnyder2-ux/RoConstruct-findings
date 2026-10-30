// roc 2009-06 005b81a0  unit: seg_005b0000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b81a0
//
// 005b81a0  55                   push ebp
// 005b81a1  8bec                 mov ebp, esp
// 005b81a3  51                   push ecx
// 005b81a4  33c0                 xor eax, eax
// 005b81a6  8845ff               mov byte ptr [ebp - 1], al
// 005b81a9  8d4d10               lea ecx, [ebp + 0x10]
// 005b81ac  51                   push ecx
// 005b81ad  e80e150000           call 0x5b96c0
// 005b81b2  83c404               add esp, 4
// 005b81b5  8845fe               mov byte ptr [ebp - 2], al
// 005b81b8  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005b81bc  52                   push edx
// 005b81bd  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005b81c1  50                   push eax
// 005b81c2  8d4d10               lea ecx, [ebp + 0x10]
// 005b81c5  51                   push ecx
// 005b81c6  8d5508               lea edx, [ebp + 8]
// 005b81c9  52                   push edx
// 005b81ca  8d45fd               lea eax, [ebp - 3]
// 005b81cd  50                   push eax
// 005b81ce  e88dfb0000           call 0x5c7d60
// 005b81d3  83c40c               add esp, 0xc
// 005b81d6  0fb608               movzx ecx, byte ptr [eax]
// 005b81d9  51                   push ecx
// 005b81da  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005b81dd  52                   push edx
// 005b81de  8d450c               lea eax, [ebp + 0xc]
// 005b81e1  50                   push eax
// 005b81e2  e809270000           call 0x5ba8f0
// 005b81e7  83c404               add esp, 4
// 005b81ea  50                   push eax
// 005b81eb  8d4d08               lea ecx, [ebp + 8]
// 005b81ee  51                   push ecx
// 005b81ef  e8fc260000           call 0x5ba8f0
// 005b81f4  83c404               add esp, 4
// 005b81f7  50                   push eax
// 005b81f8  e8e3150000           call 0x5b97e0
// 005b81fd  83c418               add esp, 0x18
// 005b8200  8be5                 mov esp, ebp
// 005b8202  5d                   pop ebp
// 005b8203  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_move_backward@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp