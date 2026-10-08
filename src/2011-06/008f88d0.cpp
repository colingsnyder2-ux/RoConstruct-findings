// roc 2011-06 008f88d0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f88d0
//
// 008f88d0  83ec10               sub esp, 0x10
// 008f88d3  56                   push esi
// 008f88d4  8bf1                 mov esi, ecx
// 008f88d6  8b4608               mov eax, dword ptr [esi + 8]
// 008f88d9  50                   push eax
// 008f88da  ff15ec1ba400         call dword ptr [0xa41bec]
// 008f88e0  85c0                 test eax, eax
// 008f88e2  7428                 je 0x8f890c
// 008f88e4  8b4e08               mov ecx, dword ptr [esi + 8]
// 008f88e7  51                   push ecx
// 008f88e8  8d4c2408             lea ecx, [esp + 8]
// 008f88ec  e80f44f6ff           call 0x85cd00
// 008f88f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f88f5  2b4c2408             sub ecx, dword ptr [esp + 8]
// 008f88f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f88fd  2b442404             sub eax, dword ptr [esp + 4]
// 008f8901  6a01                 push 1
// 008f8903  51                   push ecx
// 008f8904  50                   push eax
// 008f8905  8bce                 mov ecx, esi
// 008f8907  e8f4fcffff           call 0x8f8600
// 008f890c  5e                   pop esi
// 008f890d  83c410               add esp, 0x10
// 008f8910  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
