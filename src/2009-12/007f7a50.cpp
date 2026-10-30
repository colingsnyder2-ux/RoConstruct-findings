// roc 2009-12 007f7a50  unit: IIHH::?$CMap  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7a50
//
// 007f7a50  6aff                 push -1
// 007f7a52  68e7879500           push 0x9587e7
// 007f7a57  64a100000000         mov eax, dword ptr fs:[0]
// 007f7a5d  50                   push eax
// 007f7a5e  51                   push ecx
// 007f7a5f  56                   push esi
// 007f7a60  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7a65  33c4                 xor eax, esp
// 007f7a67  50                   push eax
// 007f7a68  8d44240c             lea eax, [esp + 0xc]
// 007f7a6c  64a300000000         mov dword ptr fs:[0], eax
// 007f7a72  8bf1                 mov esi, ecx
// 007f7a74  89742408             mov dword ptr [esp + 8], esi
// 007f7a78  c70614189f00         mov dword ptr [esi], 0x9f1814
// 007f7a7e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f7a81  c744241408000000     mov dword ptr [esp + 0x14], 8
// 007f7a89  85c9                 test ecx, ecx
// 007f7a8b  740c                 je 0x7f7a99
// 007f7a8d  e84ac3ffff           call 0x7f3ddc
// 007f7a92  c7462000000000       mov dword ptr [esi + 0x20], 0
// 007f7a99  8d4e5c               lea ecx, [esi + 0x5c]
// 007f7a9c  c644241407           mov byte ptr [esp + 0x14], 7
// 007f7aa1  e8fafdffff           call 0x7f78a0
// 007f7aa6  8d4e58               lea ecx, [esi + 0x58]
// 007f7aa9  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7aaf  8d4e54               lea ecx, [esi + 0x54]
// 007f7ab2  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7ab8  8d4e50               lea ecx, [esi + 0x50]
// 007f7abb  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7ac1  8d4e4c               lea ecx, [esi + 0x4c]
// 007f7ac4  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7aca  8d4e48               lea ecx, [esi + 0x48]
// 007f7acd  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7ad3  8d4e44               lea ecx, [esi + 0x44]
// 007f7ad6  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7adc  8d4e40               lea ecx, [esi + 0x40]
// 007f7adf  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7ae5  8bce                 mov ecx, esi
// 007f7ae7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007f7aef  e8eec8ffff           call 0x7f43e2
// 007f7af4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f7af8  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7aff  59                   pop ecx
// 007f7b00  5e                   pop esi
// 007f7b01  83c410               add esp, 0x10
// 007f7b04  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlAction@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp