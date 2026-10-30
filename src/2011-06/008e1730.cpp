// roc 2011-06 008e1730  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e1730
//
// 008e1730  56                   push esi
// 008e1731  6a00                 push 0
// 008e1733  8bf1                 mov esi, ecx
// 008e1735  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e1739  6a00                 push 0
// 008e173b  e8e07ff9ff           call 0x879720
// 008e1740  85c0                 test eax, eax
// 008e1742  742e                 je 0x8e1772
// 008e1744  8b4030               mov eax, dword ptr [eax + 0x30]
// 008e1747  83f8ff               cmp eax, -1
// 008e174a  7426                 je 0x8e1772
// 008e174c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e174f  6a00                 push 0
// 008e1751  50                   push eax
// 008e1752  e8e97bf8ff           call 0x869340
// 008e1757  8bc8                 mov ecx, eax
// 008e1759  e83243f4ff           call 0x825a90
// 008e175e  85c0                 test eax, eax
// 008e1760  7410                 je 0x8e1772
// 008e1762  8bc8                 mov ecx, eax
// 008e1764  e8277cf8ff           call 0x869390
// 008e1769  8d4805               lea ecx, [eax + 5]
// 008e176c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e1770  0108                 add dword ptr [eax], ecx
// 008e1772  5e                   pop esi
// 008e1773  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
