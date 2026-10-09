// roc 2009-12 008f19f0  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f19f0
//
// 008f19f0  8b442404             mov eax, dword ptr [esp + 4]
// 008f19f4  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 008f19fa  8910                 mov dword ptr [eax], edx
// 008f19fc  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 008f1a02  895004               mov dword ptr [eax + 4], edx
// 008f1a05  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 008f1a0b  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 008f1a11  895008               mov dword ptr [eax + 8], edx
// 008f1a14  89480c               mov dword ptr [eax + 0xc], ecx
// 008f1a17  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
