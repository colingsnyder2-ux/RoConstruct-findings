// roc 2009-06 005b9760  unit: seg_005b0000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b9760
//
// 005b9760  55                   push ebp
// 005b9761  8bec                 mov ebp, esp
// 005b9763  51                   push ecx
// 005b9764  33c0                 xor eax, eax
// 005b9766  8845ff               mov byte ptr [ebp - 1], al
// 005b9769  8d4d10               lea ecx, [ebp + 0x10]
// 005b976c  51                   push ecx
// 005b976d  e84effffff           call 0x5b96c0
// 005b9772  83c404               add esp, 4
// 005b9775  8845fe               mov byte ptr [ebp - 2], al
// 005b9778  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005b977c  52                   push edx
// 005b977d  0fb645fe             movzx eax, byte ptr [ebp - 2]
// 005b9781  50                   push eax
// 005b9782  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 005b9785  51                   push ecx
// 005b9786  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005b9789  52                   push edx
// 005b978a  8d450c               lea eax, [ebp + 0xc]
// 005b978d  50                   push eax
// 005b978e  e85d110000           call 0x5ba8f0
// 005b9793  83c404               add esp, 4
// 005b9796  50                   push eax
// 005b9797  8d4d08               lea ecx, [ebp + 8]
// 005b979a  51                   push ecx
// 005b979b  e850110000           call 0x5ba8f0
// 005b97a0  83c404               add esp, 4
// 005b97a3  50                   push eax
// 005b97a4  e8070f0000           call 0x5ba6b0
// 005b97a9  83c418               add esp, 0x18
// 005b97ac  8be5                 mov esp, ebp
// 005b97ae  5d                   pop ebp
// 005b97af  c3                   ret 
// copied from an identical function in another client (function ??$_Unchecked_uninitialized_move@PAVVertex@?$ConvexClipper@M@Wml@@PAV123@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@stdext@@YAPAVVertex@?$ConvexClipper@M@Wml@@PAV123@00AAV?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp