// roc 2010-06 00870390  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00870390
//
// 00870390  6aff                 push -1
// 00870392  68f8999b00           push 0x9b99f8
// 00870397  64a100000000         mov eax, dword ptr fs:[0]
// 0087039d  50                   push eax
// 0087039e  83ec68               sub esp, 0x68
// 008703a1  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008703a6  33c4                 xor eax, esp
// 008703a8  89442464             mov dword ptr [esp + 0x64], eax
// 008703ac  56                   push esi
// 008703ad  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008703b2  33c4                 xor eax, esp
// 008703b4  50                   push eax
// 008703b5  8d442470             lea eax, [esp + 0x70]
// 008703b9  64a300000000         mov dword ptr fs:[0], eax
// 008703bf  8bf1                 mov esi, ecx
// 008703c1  56                   push esi
// 008703c2  8d4c241c             lea ecx, [esp + 0x1c]
// 008703c6  e8657ff3ff           call 0x7a8330
// 008703cb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008703ce  8d442408             lea eax, [esp + 8]
// 008703d2  50                   push eax
// 008703d3  51                   push ecx
// 008703d4  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008703df  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 008703e5  6a0d                 push 0xd
// 008703e7  ff1504ba9e00         call dword ptr [0x9eba04]
// 008703ed  50                   push eax
// 008703ee  8d54240c             lea edx, [esp + 0xc]
// 008703f2  52                   push edx
// 008703f3  8d4c2420             lea ecx, [esp + 0x20]
// 008703f7  e84283f3ff           call 0x7a873e
// 008703fc  8d4c2418             lea ecx, [esp + 0x18]
// 00870400  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00870408  e81d7ff3ff           call 0x7a832a
// 0087040d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00870411  64890d00000000       mov dword ptr fs:[0], ecx
// 00870418  59                   pop ecx
// 00870419  5e                   pop esi
// 0087041a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0087041e  33cc                 xor ecx, esp
// 00870420  e8af90f3ff           call 0x7a94d4
// 00870425  83c474               add esp, 0x74
// 00870428  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp