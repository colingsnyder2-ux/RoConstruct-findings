// roc 2009-12 008ac860  unit: CXTPDockingPaneWindowSelect  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac860
//
// 008ac860  8b442404             mov eax, dword ptr [esp + 4]
// 008ac864  85c0                 test eax, eax
// 008ac866  7c0e                 jl 0x8ac876
// 008ac868  3b4108               cmp eax, dword ptr [ecx + 8]
// 008ac86b  7d09                 jge 0x8ac876
// 008ac86d  8b4904               mov ecx, dword ptr [ecx + 4]
// 008ac870  8d04c1               lea eax, [ecx + eax*8]
// 008ac873  c20400               ret 4
// 008ac876  e89172f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetAt@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarEventLabel@@@@AAV1@@@QBEABV?$CXTPSmartPtrInternalT@VCXTPCalendarEventLabel@@@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEventLabel.cpp