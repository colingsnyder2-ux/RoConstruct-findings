// roc 2008-06 00794640  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794640
//
// 00794640  83ec10               sub esp, 0x10
// 00794643  56                   push esi
// 00794644  8bf1                 mov esi, ecx
// 00794646  8b4608               mov eax, dword ptr [esi + 8]
// 00794649  50                   push eax
// 0079464a  ff15502d8000         call dword ptr [0x802d50]
// 00794650  85c0                 test eax, eax
// 00794652  7428                 je 0x79467c
// 00794654  8b4e08               mov ecx, dword ptr [esi + 8]
// 00794657  51                   push ecx
// 00794658  8d4c2408             lea ecx, [esp + 8]
// 0079465c  e83f34f6ff           call 0x6f7aa0
// 00794661  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00794665  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00794669  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079466d  2b442404             sub eax, dword ptr [esp + 4]
// 00794671  6a01                 push 1
// 00794673  51                   push ecx
// 00794674  50                   push eax
// 00794675  8bce                 mov ecx, esi
// 00794677  e8f4fcffff           call 0x794370
// 0079467c  5e                   pop esi
// 0079467d  83c410               add esp, 0x10
// 00794680  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?UpdateFrameRegion@CXTPOffice2007FrameHook@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
