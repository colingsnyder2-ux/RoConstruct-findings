// roc 2010-06 0089fd50  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fd50
//
// 0089fd50  83ec10               sub esp, 0x10
// 0089fd53  56                   push esi
// 0089fd54  8bf1                 mov esi, ecx
// 0089fd56  8b4608               mov eax, dword ptr [esi + 8]
// 0089fd59  50                   push eax
// 0089fd5a  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0089fd60  85c0                 test eax, eax
// 0089fd62  7428                 je 0x89fd8c
// 0089fd64  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089fd67  51                   push ecx
// 0089fd68  8d4c2408             lea ecx, [esp + 8]
// 0089fd6c  e80ff5f5ff           call 0x7ff280
// 0089fd71  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089fd75  2b4c2408             sub ecx, dword ptr [esp + 8]
// 0089fd79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089fd7d  2b442404             sub eax, dword ptr [esp + 4]
// 0089fd81  6a01                 push 1
// 0089fd83  51                   push ecx
// 0089fd84  50                   push eax
// 0089fd85  8bce                 mov ecx, esi
// 0089fd87  e8f4fcffff           call 0x89fa80
// 0089fd8c  5e                   pop esi
// 0089fd8d  83c410               add esp, 0x10
// 0089fd90  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
