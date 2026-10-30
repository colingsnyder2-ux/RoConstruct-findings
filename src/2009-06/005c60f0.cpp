// roc 2009-06 005c60f0  unit: seg_005c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c60f0
//
// 005c60f0  55                   push ebp
// 005c60f1  8bec                 mov ebp, esp
// 005c60f3  83ec1c               sub esp, 0x1c
// 005c60f6  56                   push esi
// 005c60f7  894de4               mov dword ptr [ebp - 0x1c], ecx
// 005c60fa  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c60fd  e89effffff           call 0x5c60a0
// 005c6102  8bf0                 mov esi, eax
// 005c6104  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6107  e8f49fffff           call 0x5c0100
// 005c610c  3bf0                 cmp esi, eax
// 005c610e  731d                 jae 0x5c612d
// 005c6110  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6113  50                   push eax
// 005c6114  6a01                 push 1
// 005c6116  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6119  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c611c  52                   push edx
// 005c611d  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6120  e85b070000           call 0x5c6880
// 005c6125  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6128  894110               mov dword ptr [ecx + 0x10], eax
// 005c612b  eb2f                 jmp 0x5c615c
// 005c612d  8d55f0               lea edx, [ebp - 0x10]
// 005c6130  52                   push edx
// 005c6131  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6134  e867eeffff           call 0x5c4fa0
// 005c6139  8b08                 mov ecx, dword ptr [eax]
// 005c613b  8b5004               mov edx, dword ptr [eax + 4]
// 005c613e  894df8               mov dword ptr [ebp - 8], ecx
// 005c6141  8955fc               mov dword ptr [ebp - 4], edx
// 005c6144  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6147  50                   push eax
// 005c6148  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c614b  51                   push ecx
// 005c614c  8b55f8               mov edx, dword ptr [ebp - 8]
// 005c614f  52                   push edx
// 005c6150  8d45e8               lea eax, [ebp - 0x18]
// 005c6153  50                   push eax
// 005c6154  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c6157  e834060000           call 0x5c6790
// 005c615c  5e                   pop esi
// 005c615d  8be5                 mov esp, ebp
// 005c615f  5d                   pop ebp
// 005c6160  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAEXABVVertex@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp