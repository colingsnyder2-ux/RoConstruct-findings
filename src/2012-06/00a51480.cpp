// roc 2012-06 00a51480  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51480
//
// 00a51480  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a51483  8b442404             mov eax, dword ptr [esp + 4]
// 00a51487  8b5140               mov edx, dword ptr [ecx + 0x40]
// 00a5148a  83c140               add ecx, 0x40
// 00a5148d  8910                 mov dword ptr [eax], edx
// 00a5148f  8b5104               mov edx, dword ptr [ecx + 4]
// 00a51492  895004               mov dword ptr [eax + 4], edx
// 00a51495  8b5108               mov edx, dword ptr [ecx + 8]
// 00a51498  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00a5149b  895008               mov dword ptr [eax + 8], edx
// 00a5149e  89480c               mov dword ptr [eax + 0xc], ecx
// 00a514a1  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CXTPTabPaintManagerAppearanceSet@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
