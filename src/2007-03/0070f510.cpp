// roc 2007-03 0070f510  unit: seg_00700000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070f510
//
// 0070f510  83ec10               sub esp, 0x10
// 0070f513  56                   push esi
// 0070f514  8bf1                 mov esi, ecx
// 0070f516  8b4608               mov eax, dword ptr [esi + 8]
// 0070f519  50                   push eax
// 0070f51a  ff1574ed7700         call dword ptr [0x77ed74]
// 0070f520  85c0                 test eax, eax
// 0070f522  7428                 je 0x70f54c
// 0070f524  8b4e08               mov ecx, dword ptr [esi + 8]
// 0070f527  51                   push ecx
// 0070f528  8d4c2408             lea ecx, [esp + 8]
// 0070f52c  e86fc2f5ff           call 0x66b7a0
// 0070f531  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070f535  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0070f539  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070f53d  2b442404             sub eax, dword ptr [esp + 4]
// 0070f541  6a01                 push 1
// 0070f543  51                   push ecx
// 0070f544  50                   push eax
// 0070f545  8bce                 mov ecx, esi
// 0070f547  e804fdffff           call 0x70f250
// 0070f54c  5e                   pop esi
// 0070f54d  83c410               add esp, 0x10
// 0070f550  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
