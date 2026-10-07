// roc 2008-06 00777260  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00777260
//
// 00777260  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00777263  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00777266  83c04c               add eax, 0x4c
// 00777269  83f9ff               cmp ecx, -1
// 0077726c  7515                 jne 0x777283
// 0077726e  8b4004               mov eax, dword ptr [eax + 4]
// 00777271  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00777275  50                   push eax
// 00777276  8d44240c             lea eax, [esp + 0xc]
// 0077727a  50                   push eax
// 0077727b  e8dea0f2ff           call 0x6a135e
// 00777280  c21400               ret 0x14
// 00777283  8bc1                 mov eax, ecx
// 00777285  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00777289  50                   push eax
// 0077728a  8d44240c             lea eax, [esp + 0xc]
// 0077728e  50                   push eax
// 0077728f  e8caa0f2ff           call 0x6a135e
// 00777294  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
