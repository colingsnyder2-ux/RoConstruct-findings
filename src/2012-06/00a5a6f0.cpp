// roc 2012-06 00a5a6f0  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5a6f0
//
// 00a5a6f0  8b4174               mov eax, dword ptr [ecx + 0x74]
// 00a5a6f3  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a5a6f6  83c04c               add eax, 0x4c
// 00a5a6f9  83f9ff               cmp ecx, -1
// 00a5a6fc  7515                 jne 0xa5a713
// 00a5a6fe  8b4004               mov eax, dword ptr [eax + 4]
// 00a5a701  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a5a705  50                   push eax
// 00a5a706  8d44240c             lea eax, [esp + 0xc]
// 00a5a70a  50                   push eax
// 00a5a70b  e89c87f2ff           call 0x982eac
// 00a5a710  c21400               ret 0x14
// 00a5a713  8bc1                 mov eax, ecx
// 00a5a715  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a5a719  50                   push eax
// 00a5a71a  8d44240c             lea eax, [esp + 0xc]
// 00a5a71e  50                   push eax
// 00a5a71f  e88887f2ff           call 0x982eac
// 00a5a724  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
