// roc 2010-06 008a5b80  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5b80
//
// 008a5b80  8b442404             mov eax, dword ptr [esp + 4]
// 008a5b84  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 008a5b8a  8910                 mov dword ptr [eax], edx
// 008a5b8c  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 008a5b92  895004               mov dword ptr [eax + 4], edx
// 008a5b95  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 008a5b9b  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 008a5ba1  895008               mov dword ptr [eax + 8], edx
// 008a5ba4  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5ba7  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
