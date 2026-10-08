// roc 2012-06 00a59a90  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a59a90
//
// 00a59a90  56                   push esi
// 00a59a91  6a00                 push 0
// 00a59a93  8bf1                 mov esi, ecx
// 00a59a95  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a59a99  6a00                 push 0
// 00a59a9b  e8f081f9ff           call 0x9f1c90
// 00a59aa0  85c0                 test eax, eax
// 00a59aa2  742e                 je 0xa59ad2
// 00a59aa4  8b4030               mov eax, dword ptr [eax + 0x30]
// 00a59aa7  83f8ff               cmp eax, -1
// 00a59aaa  7426                 je 0xa59ad2
// 00a59aac  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a59aaf  6a00                 push 0
// 00a59ab1  50                   push eax
// 00a59ab2  e8f97df8ff           call 0x9e18b0
// 00a59ab7  8bc8                 mov ecx, eax
// 00a59ab9  e80246f4ff           call 0x99e0c0
// 00a59abe  85c0                 test eax, eax
// 00a59ac0  7410                 je 0xa59ad2
// 00a59ac2  8bc8                 mov ecx, eax
// 00a59ac4  e8971bfdff           call 0xa2b660
// 00a59ac9  8d4805               lea ecx, [eax + 5]
// 00a59acc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a59ad0  0108                 add dword ptr [eax], ecx
// 00a59ad2  5e                   pop esi
// 00a59ad3  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
