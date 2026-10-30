// roc 2012-06 00a76ac0  unit: CXTPRibbonSystemPopupBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76ac0
//
// 00a76ac0  8b442404             mov eax, dword ptr [esp + 4]
// 00a76ac4  8b9100020000         mov edx, dword ptr [ecx + 0x200]
// 00a76aca  8910                 mov dword ptr [eax], edx
// 00a76acc  8b9104020000         mov edx, dword ptr [ecx + 0x204]
// 00a76ad2  895004               mov dword ptr [eax + 4], edx
// 00a76ad5  8b9108020000         mov edx, dword ptr [ecx + 0x208]
// 00a76adb  8b890c020000         mov ecx, dword ptr [ecx + 0x20c]
// 00a76ae1  895008               mov dword ptr [eax + 8], edx
// 00a76ae4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a76ae7  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?GetBorders@CXTPRibbonSystemPopupBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
