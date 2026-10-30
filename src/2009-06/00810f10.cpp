// roc 2009-06 00810f10  unit: CXTPScrollBase  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810f10
//
// 00810f10  83ec10               sub esp, 0x10
// 00810f13  56                   push esi
// 00810f14  8bf1                 mov esi, ecx
// 00810f16  8b4608               mov eax, dword ptr [esi + 8]
// 00810f19  50                   push eax
// 00810f1a  ff15e0ed8900         call dword ptr [0x89ede0]
// 00810f20  85c0                 test eax, eax
// 00810f22  7428                 je 0x810f4c
// 00810f24  8b4e08               mov ecx, dword ptr [esi + 8]
// 00810f27  51                   push ecx
// 00810f28  8d4c2408             lea ecx, [esp + 8]
// 00810f2c  e80ff5f5ff           call 0x770440
// 00810f31  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00810f35  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00810f39  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00810f3d  2b442404             sub eax, dword ptr [esp + 4]
// 00810f41  6a01                 push 1
// 00810f43  51                   push ecx
// 00810f44  50                   push eax
// 00810f45  8bce                 mov ecx, esi
// 00810f47  e8f4fcffff           call 0x810c40
// 00810f4c  5e                   pop esi
// 00810f4d  83c410               add esp, 0x10
// 00810f50  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
