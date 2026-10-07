// roc 2012-06 00a4df30  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4df30
//
// 00a4df30  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00a4df33  99                   cdq 
// 00a4df34  56                   push esi
// 00a4df35  8b7104               mov esi, dword ptr [ecx + 4]
// 00a4df38  2bc2                 sub eax, edx
// 00a4df3a  8bd0                 mov edx, eax
// 00a4df3c  8b442408             mov eax, dword ptr [esp + 8]
// 00a4df40  d1fa                 sar edx, 1
// 00a4df42  03f2                 add esi, edx
// 00a4df44  8930                 mov dword ptr [eax], esi
// 00a4df46  8b7108               mov esi, dword ptr [ecx + 8]
// 00a4df49  897004               mov dword ptr [eax + 4], esi
// 00a4df4c  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00a4df4f  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a4df52  03f2                 add esi, edx
// 00a4df54  897008               mov dword ptr [eax + 8], esi
// 00a4df57  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4df5a  5e                   pop esi
// 00a4df5b  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetExcel@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
