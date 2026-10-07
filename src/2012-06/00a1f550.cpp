// roc 2012-06 00a1f550  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1f550
//
// 00a1f550  8b442404             mov eax, dword ptr [esp + 4]
// 00a1f554  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a1f557  8910                 mov dword ptr [eax], edx
// 00a1f559  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00a1f55c  895004               mov dword ptr [eax + 4], edx
// 00a1f55f  8b5130               mov edx, dword ptr [ecx + 0x30]
// 00a1f562  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00a1f565  895008               mov dword ptr [eax + 8], edx
// 00a1f568  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1f56b  c20400               ret 4
// library xtp-15.2.1/Source\Chart\Diagram\Diagram2D\XTPChartDiagram2DPane.cpp (function ?GetBounds@CXTPChartDiagram2DPaneView@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Diagram2D/XTPChartDiagram2DPane.cpp
