// roc 2011-06 008fe730  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe730
//
// 008fe730  8b442404             mov eax, dword ptr [esp + 4]
// 008fe734  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 008fe73a  8910                 mov dword ptr [eax], edx
// 008fe73c  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 008fe742  895004               mov dword ptr [eax + 4], edx
// 008fe745  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 008fe74b  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 008fe751  895008               mov dword ptr [eax + 8], edx
// 008fe754  89480c               mov dword ptr [eax + 0xc], ecx
// 008fe757  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
