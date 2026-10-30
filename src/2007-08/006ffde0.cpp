// from server: 100% by auto
// roc 2007-08 006ffde0  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffde0
//
// 006ffde0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006ffde3  99                   cdq 
// 006ffde4  56                   push esi
// 006ffde5  8b7104               mov esi, dword ptr [ecx + 4]
// 006ffde8  2bc2                 sub eax, edx
// 006ffdea  8bd0                 mov edx, eax
// 006ffdec  8b442408             mov eax, dword ptr [esp + 8]
// 006ffdf0  d1fa                 sar edx, 1
// 006ffdf2  03f2                 add esi, edx
// 006ffdf4  8930                 mov dword ptr [eax], esi
// 006ffdf6  8b7108               mov esi, dword ptr [ecx + 8]
// 006ffdf9  897004               mov dword ptr [eax + 4], esi
// 006ffdfc  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006ffdff  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ffe02  03f2                 add esi, edx
// 006ffe04  897008               mov dword ptr [eax + 8], esi
// 006ffe07  89480c               mov dword ptr [eax + 0xc], ecx
// 006ffe0a  5e                   pop esi
// 006ffe0b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetExcel@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
