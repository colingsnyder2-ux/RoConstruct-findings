// roc 2009-06 005c6790  unit: seg_005c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c6790
//
// 005c6790  55                   push ebp
// 005c6791  8bec                 mov ebp, esp
// 005c6793  83ec1c               sub esp, 0x1c
// 005c6796  894de8               mov dword ptr [ebp - 0x18], ecx
// 005c6799  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c679c  e8fff8ffff           call 0x5c60a0
// 005c67a1  85c0                 test eax, eax
// 005c67a3  7509                 jne 0x5c67ae
// 005c67a5  c745e400000000       mov dword ptr [ebp - 0x1c], 0
// 005c67ac  eb18                 jmp 0x5c67c6
// 005c67ae  8d45f4               lea eax, [ebp - 0xc]
// 005c67b1  50                   push eax
// 005c67b2  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c67b5  e8b6e7ffff           call 0x5c4f70
// 005c67ba  50                   push eax
// 005c67bb  8d4d0c               lea ecx, [ebp + 0xc]
// 005c67be  e8ed0d0000           call 0x5c75b0
// 005c67c3  8945e4               mov dword ptr [ebp - 0x1c], eax
// 005c67c6  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005c67c9  894dfc               mov dword ptr [ebp - 4], ecx
// 005c67cc  8b5514               mov edx, dword ptr [ebp + 0x14]
// 005c67cf  52                   push edx
// 005c67d0  6a01                 push 1
// 005c67d2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 005c67d5  50                   push eax
// 005c67d6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005c67d9  51                   push ecx
// 005c67da  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c67dd  e8ee060000           call 0x5c6ed0
// 005c67e2  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c67e5  52                   push edx
// 005c67e6  8b4508               mov eax, dword ptr [ebp + 8]
// 005c67e9  50                   push eax
// 005c67ea  8d4dec               lea ecx, [ebp - 0x14]
// 005c67ed  51                   push ecx
// 005c67ee  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 005c67f1  e87ae7ffff           call 0x5c4f70
// 005c67f6  8bc8                 mov ecx, eax
// 005c67f8  e8730d0000           call 0x5c7570
// 005c67fd  8b4508               mov eax, dword ptr [ebp + 8]
// 005c6800  8be5                 mov esp, ebp
// 005c6802  5d                   pop ebp
// 005c6803  c21000               ret 0x10
// copied from an identical function in another client (function ?insert@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAE?AV?$_Vector_iterator@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@2@V32@ABVVertex@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp