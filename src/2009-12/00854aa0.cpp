// roc 2009-12 00854aa0  unit: CXTPTabClientWnd::CWorkspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854aa0
//
// 00854aa0  8b8990000000         mov ecx, dword ptr [ecx + 0x90]
// 00854aa6  8b01                 mov eax, dword ptr [ecx]
// 00854aa8  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 00854aae  ffe0                 jmp eax
// copied from an identical function in another client (function ?GetItemIcon@CWorkspace@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp