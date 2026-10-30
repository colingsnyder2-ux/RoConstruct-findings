// roc 2012-06 00a1adf0  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1adf0
//
// 00a1adf0  8b442404             mov eax, dword ptr [esp + 4]
// 00a1adf4  85c0                 test eax, eax
// 00a1adf6  7c0e                 jl 0xa1ae06
// 00a1adf8  3b4160               cmp eax, dword ptr [ecx + 0x60]
// 00a1adfb  7d09                 jge 0xa1ae06
// 00a1adfd  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 00a1ae00  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00a1ae03  c20400               ret 4
// 00a1ae06  e8b575f6ff           call 0x9823c0
// copied from an identical function in another client (function ?GetDockedCommandBar@CXTPDockBar@@IBEPAVCXTPToolBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp