// roc 2009-12 008f1e00  unit: CXTPRibbonControlSystemButton  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1e00
//
// 008f1e00  6aff                 push -1
// 008f1e02  68186a9600           push 0x966a18
// 008f1e07  64a100000000         mov eax, dword ptr fs:[0]
// 008f1e0d  50                   push eax
// 008f1e0e  51                   push ecx
// 008f1e0f  56                   push esi
// 008f1e10  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1e15  33c4                 xor eax, esp
// 008f1e17  50                   push eax
// 008f1e18  8d44240c             lea eax, [esp + 0xc]
// 008f1e1c  64a300000000         mov dword ptr fs:[0], eax
// 008f1e22  8bf1                 mov esi, ecx
// 008f1e24  89742408             mov dword ptr [esp + 8], esi
// 008f1e28  e8a32ff5ff           call 0x844dd0
// 008f1e2d  6a1d                 push 0x1d
// 008f1e2f  6a06                 push 6
// 008f1e31  6a12                 push 0x12
// 008f1e33  6a06                 push 6
// 008f1e35  8d8600020000         lea eax, [esi + 0x200]
// 008f1e3b  50                   push eax
// 008f1e3c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008f1e44  c706dcf5a000         mov dword ptr [esi], 0xa0f5dc
// 008f1e4a  c74654ccf5a000       mov dword ptr [esi + 0x54], 0xa0f5cc
// 008f1e51  c7465c6cf5a000       mov dword ptr [esi + 0x5c], 0xa0f56c
// 008f1e58  ff1538ca9800         call dword ptr [0x98ca38]
// 008f1e5e  6a00                 push 0
// 008f1e60  8bce                 mov ecx, esi
// 008f1e62  e81925f1ff           call 0x804380
// 008f1e67  8bc6                 mov eax, esi
// 008f1e69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1e6d  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1e74  59                   pop ecx
// 008f1e75  5e                   pop esi
// 008f1e76  83c410               add esp, 0x10
// 008f1e79  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonSystemPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp