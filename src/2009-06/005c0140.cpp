// roc 2009-06 005c0140  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c0140
//
// 005c0140  55                   push ebp
// 005c0141  8bec                 mov ebp, esp
// 005c0143  83ec1c               sub esp, 0x1c
// 005c0146  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c0149  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c014c  e84f5f0000           call 0x5c60a0
// 005c0151  85c0                 test eax, eax
// 005c0153  7509                 jne 0x5c015e
// 005c0155  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 005c015c  eb18                 jmp 0x5c0176
// 005c015e  8d45f4               lea eax, [ebp - 0xc]
// 005c0161  50                   push eax
// 005c0162  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c0165  e8064e0000           call 0x5c4f70
// 005c016a  50                   push eax
// 005c016b  8d4d0c               lea ecx, [ebp + 0xc]
// 005c016e  e83d740000           call 0x5c75b0
// 005c0173  8945e4               mov dword ptr [ebp - 0x1c], eax
// 005c0176  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c0179  894dfc               mov dword ptr [ebp - 4], ecx
// 005c017c  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c017f  52                   push edx
// 005c0180  6a01                 push 1
// 005c0182  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c0185  50                   push eax
// 005c0186  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c0189  51                   push ecx
// 005c018a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c018d  e8de140000           call 0x5c1670
// 005c0192  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c0195  52                   push edx
// 005c0196  8b4508               mov eax, dword ptr [ebp + 8]
// 005c0199  50                   push eax
// 005c019a  8d4dec               lea ecx, [ebp - 0x14]
// 005c019d  51                   push ecx
// 005c019e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c01a1  e8ca4d0000           call 0x5c4f70
// 005c01a6  8bc8                 mov ecx, eax
// 005c01a8  e8c3730000           call 0x5c7570
// 005c01ad  8b4508               mov eax, dword ptr [ebp + 8]
// 005c01b0  8be5                 mov esp, ebp
// 005c01b2  5d                   pop ebp
// 005c01b3  c21000               ret 0x10
// copied from an identical function in another client (function ?insert@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V32@ABVVertex@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp