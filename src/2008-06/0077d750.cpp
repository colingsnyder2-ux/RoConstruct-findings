// roc 2008-06 0077d750  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d750
//
// 0077d750  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0077d753  035104               add edx, dword ptr [ecx + 4]
// 0077d756  8b442404             mov eax, dword ptr [esp + 4]
// 0077d75a  8910                 mov dword ptr [eax], edx
// 0077d75c  8b5108               mov edx, dword ptr [ecx + 8]
// 0077d75f  895004               mov dword ptr [eax + 4], edx
// 0077d762  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0077d765  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0077d768  895008               mov dword ptr [eax + 8], edx
// 0077d76b  89480c               mov dword ptr [eax + 0xc], ecx
// 0077d76e  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
