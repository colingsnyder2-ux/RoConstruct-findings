// roc 2011-06 008d34d0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d34d0
//
// 008d34d0  56                   push esi
// 008d34d1  8bf1                 mov esi, ecx
// 008d34d3  8b06                 mov eax, dword ptr [esi]
// 008d34d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d34d8  ffd2                 call edx
// 008d34da  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d34de  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 008d34e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d34e8  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 008d34ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d34f2  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 008d34f8  8b16                 mov edx, dword ptr [esi]
// 008d34fa  8b4204               mov eax, dword ptr [edx + 4]
// 008d34fd  8bce                 mov ecx, esi
// 008d34ff  ffd0                 call eax
// 008d3501  5e                   pop esi
// 008d3502  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetItemMetrics@CXTPTabManager@@QAEXVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
