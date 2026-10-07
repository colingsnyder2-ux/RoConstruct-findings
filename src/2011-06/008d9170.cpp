// roc 2011-06 008d9170  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d9170
//
// 008d9170  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008d9173  8b442404             mov eax, dword ptr [esp + 4]
// 008d9177  8b5140               mov edx, dword ptr [ecx + 0x40]
// 008d917a  83c140               add ecx, 0x40
// 008d917d  8910                 mov dword ptr [eax], edx
// 008d917f  8b5104               mov edx, dword ptr [ecx + 4]
// 008d9182  895004               mov dword ptr [eax + 4], edx
// 008d9185  8b5108               mov edx, dword ptr [ecx + 8]
// 008d9188  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 008d918b  895008               mov dword ptr [eax + 8], edx
// 008d918e  89480c               mov dword ptr [eax + 0xc], ecx
// 008d9191  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CXTPTabPaintManagerAppearanceSet@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
