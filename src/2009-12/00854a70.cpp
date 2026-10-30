// roc 2009-12 00854a70  unit: CXTPTabClientWnd::CWorkspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854a70
//
// 00854a70  8b8990000000         mov ecx, dword ptr [ecx + 0x90]
// 00854a76  8b01                 mov eax, dword ptr [ecx]
// 00854a78  8b8078010000         mov eax, dword ptr [eax + 0x178]
// 00854a7e  ffe0                 jmp eax
// copied from an identical function in another client (function ?OnBeforeItemClick@CWorkspace@CXTPTabClientWnd@@MAEHPAVCXTPTabManagerItem@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp