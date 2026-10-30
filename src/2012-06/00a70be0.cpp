// roc 2012-06 00a70be0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70be0
//
// 00a70be0  83ec10               sub esp, 0x10
// 00a70be3  56                   push esi
// 00a70be4  8bf1                 mov esi, ecx
// 00a70be6  8b4608               mov eax, dword ptr [esi + 8]
// 00a70be9  50                   push eax
// 00a70bea  ff15143bb200         call dword ptr [0xb23b14]
// 00a70bf0  85c0                 test eax, eax
// 00a70bf2  7428                 je 0xa70c1c
// 00a70bf4  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a70bf7  51                   push ecx
// 00a70bf8  8d4c2408             lea ecx, [esp + 8]
// 00a70bfc  e80f45f6ff           call 0x9d5110
// 00a70c01  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a70c05  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00a70c09  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a70c0d  2b442404             sub eax, dword ptr [esp + 4]
// 00a70c11  6a01                 push 1
// 00a70c13  51                   push ecx
// 00a70c14  50                   push eax
// 00a70c15  8bce                 mov ecx, esi
// 00a70c17  e8f4fcffff           call 0xa70910
// 00a70c1c  5e                   pop esi
// 00a70c1d  83c410               add esp, 0x10
// 00a70c20  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
