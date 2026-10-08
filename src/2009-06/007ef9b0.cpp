// roc 2009-06 007ef9b0  unit: CXTPPropertyGridPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ef9b0
//
// 007ef9b0  8b4174               mov eax, dword ptr [ecx + 0x74]
// 007ef9b3  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007ef9b6  83c04c               add eax, 0x4c
// 007ef9b9  83f9ff               cmp ecx, -1
// 007ef9bc  7515                 jne 0x7ef9d3
// 007ef9be  8b4004               mov eax, dword ptr [eax + 4]
// 007ef9c1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ef9c5  50                   push eax
// 007ef9c6  8d44240c             lea eax, [esp + 0xc]
// 007ef9ca  50                   push eax
// 007ef9cb  e8009ef2ff           call 0x7197d0
// 007ef9d0  c21400               ret 0x14
// 007ef9d3  8bc1                 mov eax, ecx
// 007ef9d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ef9d9  50                   push eax
// 007ef9da  8d44240c             lea eax, [esp + 0xc]
// 007ef9de  50                   push eax
// 007ef9df  e8ec9df2ff           call 0x7197d0
// 007ef9e4  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawCategoryCaptionBackground@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
