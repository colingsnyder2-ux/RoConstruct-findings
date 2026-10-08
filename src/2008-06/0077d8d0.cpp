// from server: 100% by auto
// roc 2008-06 0077d8d0  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d8d0
//
// 0077d8d0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0077d8d3  99                   cdq 
// 0077d8d4  56                   push esi
// 0077d8d5  8b7104               mov esi, dword ptr [ecx + 4]
// 0077d8d8  2bc2                 sub eax, edx
// 0077d8da  8bd0                 mov edx, eax
// 0077d8dc  8b442408             mov eax, dword ptr [esp + 8]
// 0077d8e0  d1fa                 sar edx, 1
// 0077d8e2  03f2                 add esi, edx
// 0077d8e4  8930                 mov dword ptr [eax], esi
// 0077d8e6  8b7108               mov esi, dword ptr [ecx + 8]
// 0077d8e9  897004               mov dword ptr [eax + 4], esi
// 0077d8ec  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0077d8ef  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0077d8f2  03f2                 add esi, edx
// 0077d8f4  897008               mov dword ptr [eax + 8], esi
// 0077d8f7  89480c               mov dword ptr [eax + 0xc], ecx
// 0077d8fa  5e                   pop esi
// 0077d8fb  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetExcel@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
