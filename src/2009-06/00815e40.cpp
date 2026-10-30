// roc 2009-06 00815e40  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815e40
//
// 00815e40  8b442404             mov eax, dword ptr [esp + 4]
// 00815e44  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 00815e4a  8910                 mov dword ptr [eax], edx
// 00815e4c  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 00815e52  895004               mov dword ptr [eax + 4], edx
// 00815e55  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 00815e5b  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 00815e61  895008               mov dword ptr [eax + 8], edx
// 00815e64  89480c               mov dword ptr [eax + 0xc], ecx
// 00815e67  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
