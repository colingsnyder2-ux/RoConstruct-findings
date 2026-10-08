// roc 2011-06 008e16e0  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e16e0
//
// 008e16e0  56                   push esi
// 008e16e1  6a00                 push 0
// 008e16e3  8bf1                 mov esi, ecx
// 008e16e5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e16e9  6a01                 push 1
// 008e16eb  e83080f9ff           call 0x879720
// 008e16f0  85c0                 test eax, eax
// 008e16f2  742e                 je 0x8e1722
// 008e16f4  8b4030               mov eax, dword ptr [eax + 0x30]
// 008e16f7  83f8ff               cmp eax, -1
// 008e16fa  7426                 je 0x8e1722
// 008e16fc  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008e16ff  6a00                 push 0
// 008e1701  50                   push eax
// 008e1702  e8397cf8ff           call 0x869340
// 008e1707  8bc8                 mov ecx, eax
// 008e1709  e88243f4ff           call 0x825a90
// 008e170e  85c0                 test eax, eax
// 008e1710  7410                 je 0x8e1722
// 008e1712  8bc8                 mov ecx, eax
// 008e1714  e8777cf8ff           call 0x869390
// 008e1719  8d4805               lea ecx, [eax + 5]
// 008e171c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008e1720  0108                 add dword ptr [eax], ecx
// 008e1722  5e                   pop esi
// 008e1723  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
