// roc 2010-06 0087e700  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087e700
//
// 0087e700  8b4174               mov eax, dword ptr [ecx + 0x74]
// 0087e703  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0087e706  83c04c               add eax, 0x4c
// 0087e709  83f9ff               cmp ecx, -1
// 0087e70c  7515                 jne 0x87e723
// 0087e70e  8b4004               mov eax, dword ptr [eax + 4]
// 0087e711  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087e715  50                   push eax
// 0087e716  8d44240c             lea eax, [esp + 0xc]
// 0087e71a  50                   push eax
// 0087e71b  e81ea0f2ff           call 0x7a873e
// 0087e720  c21400               ret 0x14
// 0087e723  8bc1                 mov eax, ecx
// 0087e725  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087e729  50                   push eax
// 0087e72a  8d44240c             lea eax, [esp + 0xc]
// 0087e72e  50                   push eax
// 0087e72f  e80aa0f2ff           call 0x7a873e
// 0087e734  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
