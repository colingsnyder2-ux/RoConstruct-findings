// roc 2010-06 0087da50  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087da50
//
// 0087da50  56                   push esi
// 0087da51  6a00                 push 0
// 0087da53  8bf1                 mov esi, ecx
// 0087da55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087da59  6a01                 push 1
// 0087da5b  e8a0b4f9ff           call 0x818f00
// 0087da60  85c0                 test eax, eax
// 0087da62  742e                 je 0x87da92
// 0087da64  8b4030               mov eax, dword ptr [eax + 0x30]
// 0087da67  83f8ff               cmp eax, -1
// 0087da6a  7426                 je 0x87da92
// 0087da6c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0087da6f  6a00                 push 0
// 0087da71  50                   push eax
// 0087da72  e80942f8ff           call 0x801c80
// 0087da77  8bc8                 mov ecx, eax
// 0087da79  e8a261f4ff           call 0x7c3c20
// 0087da7e  85c0                 test eax, eax
// 0087da80  7410                 je 0x87da92
// 0087da82  8bc8                 mov ecx, eax
// 0087da84  e81707f5ff           call 0x7ce1a0
// 0087da89  8d4805               lea ecx, [eax + 5]
// 0087da8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087da90  0108                 add dword ptr [eax], ecx
// 0087da92  5e                   pop esi
// 0087da93  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
