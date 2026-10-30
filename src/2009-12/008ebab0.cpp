// roc 2009-12 008ebab0  unit: CXTPScrollBase  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebab0
//
// 008ebab0  83ec10               sub esp, 0x10
// 008ebab3  56                   push esi
// 008ebab4  8bf1                 mov esi, ecx
// 008ebab6  8b4608               mov eax, dword ptr [esi + 8]
// 008ebab9  50                   push eax
// 008ebaba  ff1584cc9800         call dword ptr [0x98cc84]
// 008ebac0  85c0                 test eax, eax
// 008ebac2  7428                 je 0x8ebaec
// 008ebac4  8b4e08               mov ecx, dword ptr [esi + 8]
// 008ebac7  51                   push ecx
// 008ebac8  8d4c2408             lea ecx, [esp + 8]
// 008ebacc  e86ff7f5ff           call 0x84b240
// 008ebad1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ebad5  2b4c2408             sub ecx, dword ptr [esp + 8]
// 008ebad9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008ebadd  2b442404             sub eax, dword ptr [esp + 4]
// 008ebae1  6a01                 push 1
// 008ebae3  51                   push ecx
// 008ebae4  50                   push eax
// 008ebae5  8bce                 mov ecx, esi
// 008ebae7  e8f4fcffff           call 0x8eb7e0
// 008ebaec  5e                   pop esi
// 008ebaed  83c410               add esp, 0x10
// 008ebaf0  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
