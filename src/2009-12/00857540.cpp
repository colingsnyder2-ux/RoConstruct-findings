// roc 2009-12 00857540  unit: CXTPTabClientWnd  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857540
//
// 00857540  8b442404             mov eax, dword ptr [esp + 4]
// 00857544  85c0                 test eax, eax
// 00857546  7c0e                 jl 0x857556
// 00857548  3b4170               cmp eax, dword ptr [ecx + 0x70]
// 0085754b  7d09                 jge 0x857556
// 0085754d  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00857550  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00857553  c20400               ret 4
// 00857556  e8b1c5f9ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetWorkspace@CXTPTabClientWnd@@QBEPAVCWorkspace@1@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp