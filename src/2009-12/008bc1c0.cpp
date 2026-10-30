// roc 2009-12 008bc1c0  unit: CXTPDockingPaneContextAlphaWnd  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc1c0
//
// 008bc1c0  6aff                 push -1
// 008bc1c2  68c8399600           push 0x9639c8
// 008bc1c7  64a100000000         mov eax, dword ptr fs:[0]
// 008bc1cd  50                   push eax
// 008bc1ce  83ec68               sub esp, 0x68
// 008bc1d1  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc1d6  33c4                 xor eax, esp
// 008bc1d8  89442464             mov dword ptr [esp + 0x64], eax
// 008bc1dc  56                   push esi
// 008bc1dd  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc1e2  33c4                 xor eax, esp
// 008bc1e4  50                   push eax
// 008bc1e5  8d442470             lea eax, [esp + 0x70]
// 008bc1e9  64a300000000         mov dword ptr fs:[0], eax
// 008bc1ef  8bf1                 mov esi, ecx
// 008bc1f1  56                   push esi
// 008bc1f2  8d4c241c             lea ecx, [esp + 0x1c]
// 008bc1f6  e8f57ff3ff           call 0x7f41f0
// 008bc1fb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bc1fe  8d442408             lea eax, [esp + 8]
// 008bc202  50                   push eax
// 008bc203  51                   push ecx
// 008bc204  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 008bc20f  ff1550cc9800         call dword ptr [0x98cc50]
// 008bc215  6a0d                 push 0xd
// 008bc217  ff15d8ca9800         call dword ptr [0x98cad8]
// 008bc21d  50                   push eax
// 008bc21e  8d54240c             lea edx, [esp + 0xc]
// 008bc222  52                   push edx
// 008bc223  8d4c2420             lea ecx, [esp + 0x20]
// 008bc227  e8d283f3ff           call 0x7f45fe
// 008bc22c  8d4c2418             lea ecx, [esp + 0x18]
// 008bc230  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008bc238  e8ad7ff3ff           call 0x7f41ea
// 008bc23d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008bc241  64890d00000000       mov dword ptr fs:[0], ecx
// 008bc248  59                   pop ecx
// 008bc249  5e                   pop esi
// 008bc24a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008bc24e  33cc                 xor ecx, esp
// 008bc250  e84591f3ff           call 0x7f539a
// 008bc255  83c474               add esp, 0x74
// 008bc258  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPDockingPaneContextAlphaWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp