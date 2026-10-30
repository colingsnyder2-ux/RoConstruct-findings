// roc 2009-06 007b2c50  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2c50
//
// 007b2c50  8b442404             mov eax, dword ptr [esp + 4]
// 007b2c54  85c0                 test eax, eax
// 007b2c56  7c0e                 jl 0x7b2c66
// 007b2c58  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 007b2c5b  7d09                 jge 0x7b2c66
// 007b2c5d  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 007b2c60  8b0481               mov eax, dword ptr [ecx + eax*4]
// 007b2c63  c20400               ret 4
// 007b2c66  e87960f6ff           call 0x718ce4
// copied from an identical function in another client (function ?GetDockedCommandBar@CXTPDockBar@@IBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp