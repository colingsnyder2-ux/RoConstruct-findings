// from server: 100% by auto
// roc 2008-06 00780e20  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780e20
//
// 00780e20  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00780e23  8b442404             mov eax, dword ptr [esp + 4]
// 00780e27  8b5140               mov edx, dword ptr [ecx + 0x40]
// 00780e2a  83c140               add ecx, 0x40
// 00780e2d  8910                 mov dword ptr [eax], edx
// 00780e2f  8b5104               mov edx, dword ptr [ecx + 4]
// 00780e32  895004               mov dword ptr [eax + 4], edx
// 00780e35  8b5108               mov edx, dword ptr [ecx + 8]
// 00780e38  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00780e3b  895008               mov dword ptr [eax + 8], edx
// 00780e3e  89480c               mov dword ptr [eax + 0xc], ecx
// 00780e41  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
