// from server: 100% by auto
// roc 2011-06 008d5c00  unit: CXTPTabPaintManager::CAppearanceSetExcel  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5c00
//
// 008d5c00  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008d5c03  99                   cdq 
// 008d5c04  56                   push esi
// 008d5c05  8b7104               mov esi, dword ptr [ecx + 4]
// 008d5c08  2bc2                 sub eax, edx
// 008d5c0a  8bd0                 mov edx, eax
// 008d5c0c  8b442408             mov eax, dword ptr [esp + 8]
// 008d5c10  d1fa                 sar edx, 1
// 008d5c12  03f2                 add esi, edx
// 008d5c14  8930                 mov dword ptr [eax], esi
// 008d5c16  8b7108               mov esi, dword ptr [ecx + 8]
// 008d5c19  897004               mov dword ptr [eax + 4], esi
// 008d5c1c  8b710c               mov esi, dword ptr [ecx + 0xc]
// 008d5c1f  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008d5c22  03f2                 add esi, edx
// 008d5c24  897008               mov dword ptr [eax + 8], esi
// 008d5c27  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5c2a  5e                   pop esi
// 008d5c2b  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetExcel@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
