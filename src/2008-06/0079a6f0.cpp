// roc 2008-06 0079a6f0  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a6f0
//
// 0079a6f0  8b442404             mov eax, dword ptr [esp + 4]
// 0079a6f4  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 0079a6fa  8910                 mov dword ptr [eax], edx
// 0079a6fc  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 0079a702  895004               mov dword ptr [eax + 4], edx
// 0079a705  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 0079a70b  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 0079a711  895008               mov dword ptr [eax + 8], edx
// 0079a714  89480c               mov dword ptr [eax + 0xc], ecx
// 0079a717  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
