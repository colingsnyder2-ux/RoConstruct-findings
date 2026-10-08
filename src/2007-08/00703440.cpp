// from server: 100% by auto
// roc 2007-08 00703440  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703440
//
// 00703440  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00703443  8b442404             mov eax, dword ptr [esp + 4]
// 00703447  8b5140               mov edx, dword ptr [ecx + 0x40]
// 0070344a  83c140               add ecx, 0x40
// 0070344d  8910                 mov dword ptr [eax], edx
// 0070344f  8b5104               mov edx, dword ptr [ecx + 4]
// 00703452  895004               mov dword ptr [eax + 4], edx
// 00703455  8b5108               mov edx, dword ptr [ecx + 8]
// 00703458  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0070345b  895008               mov dword ptr [eax + 8], edx
// 0070345e  89480c               mov dword ptr [eax + 0xc], ecx
// 00703461  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
