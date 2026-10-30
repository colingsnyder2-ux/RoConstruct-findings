// roc 2007-03 006d4bb0  unit: seg_006d0000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d4bb0
//
// 006d4bb0  6aff                 push -1
// 006d4bb2  6898977600           push 0x769798
// 006d4bb7  64a100000000         mov eax, dword ptr fs:[0]
// 006d4bbd  50                   push eax
// 006d4bbe  83ec68               sub esp, 0x68
// 006d4bc1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006d4bc6  33c4                 xor eax, esp
// 006d4bc8  89442464             mov dword ptr [esp + 0x64], eax
// 006d4bcc  56                   push esi
// 006d4bcd  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006d4bd2  33c4                 xor eax, esp
// 006d4bd4  50                   push eax
// 006d4bd5  8d442470             lea eax, [esp + 0x70]
// 006d4bd9  64a300000000         mov dword ptr fs:[0], eax
// 006d4bdf  8bf1                 mov esi, ecx
// 006d4be1  56                   push esi
// 006d4be2  8d4c241c             lea ecx, [esp + 0x1c]
// 006d4be6  e8399df4ff           call 0x61e924
// 006d4beb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d4bee  8d442408             lea eax, [esp + 8]
// 006d4bf2  50                   push eax
// 006d4bf3  51                   push ecx
// 006d4bf4  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 006d4bff  ff153ced7700         call dword ptr [0x77ed3c]
// 006d4c05  6a0d                 push 0xd
// 006d4c07  ff1538ef7700         call dword ptr [0x77ef38]
// 006d4c0d  50                   push eax
// 006d4c0e  8d54240c             lea edx, [esp + 0xc]
// 006d4c12  52                   push edx
// 006d4c13  8d4c2420             lea ecx, [esp + 0x20]
// 006d4c17  e8fea0f4ff           call 0x61ed1a
// 006d4c1c  8d4c2418             lea ecx, [esp + 0x18]
// 006d4c20  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 006d4c28  e8f19cf4ff           call 0x61e91e
// 006d4c2d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 006d4c31  64890d00000000       mov dword ptr fs:[0], ecx
// 006d4c38  59                   pop ecx
// 006d4c39  5e                   pop esi
// 006d4c3a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006d4c3e  33cc                 xor ecx, esp
// 006d4c40  e861a2f4ff           call 0x61eea6
// 006d4c45  83c474               add esp, 0x74
// 006d4c48  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp