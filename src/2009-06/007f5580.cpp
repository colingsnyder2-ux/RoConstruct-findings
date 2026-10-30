// roc 2009-06 007f5580  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5580
//
// 007f5580  8b410c               mov eax, dword ptr [ecx + 0xc]
// 007f5583  33d2                 xor edx, edx
// 007f5585  395014               cmp dword ptr [eax + 0x14], edx
// 007f5588  0f9cc2               setl dl
// 007f558b  895120               mov dword ptr [ecx + 0x20], edx
// 007f558e  e96dfeffff           jmp 0x7f5400
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?Reposition@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
