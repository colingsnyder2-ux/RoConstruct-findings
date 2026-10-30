// roc 2009-12 0085c6e0  unit: CXTPStatusBar  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c6e0
//
// 0085c6e0  6aff                 push -1
// 0085c6e2  6899e39500           push 0x95e399
// 0085c6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0085c6ed  50                   push eax
// 0085c6ee  56                   push esi
// 0085c6ef  57                   push edi
// 0085c6f0  a10052b600           mov eax, dword ptr [0xb65200]
// 0085c6f5  33c4                 xor eax, esp
// 0085c6f7  50                   push eax
// 0085c6f8  8d44240c             lea eax, [esp + 0xc]
// 0085c6fc  64a300000000         mov dword ptr fs:[0], eax
// 0085c702  8bf1                 mov esi, ecx
// 0085c704  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085c708  8d4c241c             lea ecx, [esp + 0x1c]
// 0085c70c  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0085c712  ff1574de9800         call dword ptr [0x98de74]
// 0085c718  57                   push edi
// 0085c719  8d4c2420             lea ecx, [esp + 0x20]
// 0085c71d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085c725  ff1560cf9800         call dword ptr [0x98cf60]
// 0085c72b  85c0                 test eax, eax
// 0085c72d  7411                 je 0x85c740
// 0085c72f  8d44241c             lea eax, [esp + 0x1c]
// 0085c733  50                   push eax
// 0085c734  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0085c73a  ff1538d59800         call dword ptr [0x98d538]
// 0085c740  8d4c241c             lea ecx, [esp + 0x1c]
// 0085c744  ff15c0de9800         call dword ptr [0x98dec0]
// 0085c74a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085c74e  64890d00000000       mov dword ptr fs:[0], ecx
// 0085c755  59                   pop ecx
// 0085c756  5f                   pop edi
// 0085c757  5e                   pop esi
// 0085c758  83c40c               add esp, 0xc
// 0085c75b  c20400               ret 4
// copied from an identical function in another client (function ?SetID@CXTPDockingPane@@IAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp