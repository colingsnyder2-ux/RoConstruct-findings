// from server: 100% by auto
// roc 2012-06 007e69b0  unit: RBX::VScreenGui::?$FactoryProduct  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e69b0
//
// 007e69b0  8b442404             mov eax, dword ptr [esp + 4]
// 007e69b4  8b91a8010000         mov edx, dword ptr [ecx + 0x1a8]
// 007e69ba  8910                 mov dword ptr [eax], edx
// 007e69bc  8b91ac010000         mov edx, dword ptr [ecx + 0x1ac]
// 007e69c2  895004               mov dword ptr [eax + 4], edx
// 007e69c5  8b91b0010000         mov edx, dword ptr [ecx + 0x1b0]
// 007e69cb  8b89b4010000         mov ecx, dword ptr [ecx + 0x1b4]
// 007e69d1  895008               mov dword ptr [eax + 8], edx
// 007e69d4  89480c               mov dword ptr [eax + 0xc], ecx
// 007e69d7  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonPaintManager.cpp (function ?GetTabControlRect@CXTPRibbonBar@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonPaintManager.cpp
