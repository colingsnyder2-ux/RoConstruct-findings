// roc 2009-06 007f3830  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3830
//
// 007f3830  56                   push esi
// 007f3831  8bf1                 mov esi, ecx
// 007f3833  8b06                 mov eax, dword ptr [esi]
// 007f3835  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f3838  ffd2                 call edx
// 007f383a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f383e  8988d8000000         mov dword ptr [eax + 0xd8], ecx
// 007f3844  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f3848  8990d0000000         mov dword ptr [eax + 0xd0], edx
// 007f384e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f3852  8988d4000000         mov dword ptr [eax + 0xd4], ecx
// 007f3858  8b16                 mov edx, dword ptr [esi]
// 007f385a  8b4204               mov eax, dword ptr [edx + 4]
// 007f385d  8bce                 mov ecx, esi
// 007f385f  ffd0                 call eax
// 007f3861  5e                   pop esi
// 007f3862  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?SetItemMetrics@CXTPTabManager@@QAEXVCSize@@00@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
