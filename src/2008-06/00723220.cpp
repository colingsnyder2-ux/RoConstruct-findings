// roc 2008-06 00723220  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00723220
//
// 00723220  8b442404             mov eax, dword ptr [esp + 4]
// 00723224  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00723227  8910                 mov dword ptr [eax], edx
// 00723229  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 0072322c  895004               mov dword ptr [eax + 4], edx
// 0072322f  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00723232  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00723235  895008               mov dword ptr [eax + 8], edx
// 00723238  89480c               mov dword ptr [eax + 0xc], ecx
// 0072323b  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTPPopupControl.cpp (function ?GetRect@CXTPPopupItem@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTPPopupControl.cpp
