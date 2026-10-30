// roc 2009-12 00891630  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891630
//
// 00891630  8b442404             mov eax, dword ptr [esp + 4]
// 00891634  85c0                 test eax, eax
// 00891636  7c0e                 jl 0x891646
// 00891638  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 0089163b  7d09                 jge 0x891646
// 0089163d  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00891640  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00891643  c20400               ret 4
// 00891646  e8c124f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetDockedCommandBar@CXTPDockBar@@IBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockBar.cpp