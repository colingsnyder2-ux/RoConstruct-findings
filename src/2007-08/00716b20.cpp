// roc 2007-08 00716b20  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716b20
//
// 00716b20  83ec10               sub esp, 0x10
// 00716b23  56                   push esi
// 00716b24  8bf1                 mov esi, ecx
// 00716b26  8b4608               mov eax, dword ptr [esi + 8]
// 00716b29  50                   push eax
// 00716b2a  ff15bced7700         call dword ptr [0x77edbc]
// 00716b30  85c0                 test eax, eax
// 00716b32  7428                 je 0x716b5c
// 00716b34  8b4e08               mov ecx, dword ptr [esi + 8]
// 00716b37  51                   push ecx
// 00716b38  8d4c2408             lea ecx, [esp + 8]
// 00716b3c  e82f94f6ff           call 0x67ff70
// 00716b41  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00716b45  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00716b49  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00716b4d  2b442404             sub eax, dword ptr [esp + 4]
// 00716b51  6a01                 push 1
// 00716b53  51                   push ecx
// 00716b54  50                   push eax
// 00716b55  8bce                 mov ecx, esi
// 00716b57  e804fdffff           call 0x716860
// 00716b5c  5e                   pop esi
// 00716b5d  83c410               add esp, 0x10
// 00716b60  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007FrameHook.cpp
