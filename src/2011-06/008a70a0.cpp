// roc 2011-06 008a70a0  unit: CXTPRibbonBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a70a0
//
// 008a70a0  8b442404             mov eax, dword ptr [esp + 4]
// 008a70a4  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008a70a7  8910                 mov dword ptr [eax], edx
// 008a70a9  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 008a70ac  895004               mov dword ptr [eax + 4], edx
// 008a70af  8b5130               mov edx, dword ptr [ecx + 0x30]
// 008a70b2  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 008a70b5  895008               mov dword ptr [eax + 8], edx
// 008a70b8  89480c               mov dword ptr [eax + 0xc], ecx
// 008a70bb  c20400               ret 4
// library xtp-15.2.1/Source\Chart\Diagram\Diagram2D\XTPChartDiagram2DPane.cpp (function ?GetBounds@CXTPChartDiagram2DPaneView@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/Diagram/Diagram2D/XTPChartDiagram2DPane.cpp
