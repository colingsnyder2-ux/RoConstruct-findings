// from server: 100% by auto
// roc 2008-06 0077d860  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d860
//
// 0077d860  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0077d863  99                   cdq 
// 0077d864  2bc2                 sub eax, edx
// 0077d866  8bd0                 mov edx, eax
// 0077d868  8b442404             mov eax, dword ptr [esp + 4]
// 0077d86c  d1fa                 sar edx, 1
// 0077d86e  035104               add edx, dword ptr [ecx + 4]
// 0077d871  8910                 mov dword ptr [eax], edx
// 0077d873  8b5108               mov edx, dword ptr [ecx + 8]
// 0077d876  895004               mov dword ptr [eax + 4], edx
// 0077d879  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0077d87c  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0077d87f  895008               mov dword ptr [eax + 8], edx
// 0077d882  89480c               mov dword ptr [eax + 0xc], ecx
// 0077d885  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
