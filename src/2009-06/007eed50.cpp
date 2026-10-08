// roc 2009-06 007eed50  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eed50
//
// 007eed50  56                   push esi
// 007eed51  6a00                 push 0
// 007eed53  8bf1                 mov esi, ecx
// 007eed55  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007eed59  6a00                 push 0
// 007eed5b  e8d0b1f9ff           call 0x789f30
// 007eed60  85c0                 test eax, eax
// 007eed62  742e                 je 0x7eed92
// 007eed64  8b4030               mov eax, dword ptr [eax + 0x30]
// 007eed67  83f8ff               cmp eax, -1
// 007eed6a  7426                 je 0x7eed92
// 007eed6c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007eed6f  6a00                 push 0
// 007eed71  50                   push eax
// 007eed72  e86941f8ff           call 0x772ee0
// 007eed77  8bc8                 mov ecx, eax
// 007eed79  e8129df4ff           call 0x738a90
// 007eed7e  85c0                 test eax, eax
// 007eed80  7410                 je 0x7eed92
// 007eed82  8bc8                 mov ecx, eax
// 007eed84  e89794fdff           call 0x7c8220
// 007eed89  8d4805               lea ecx, [eax + 5]
// 007eed8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007eed90  0108                 add dword ptr [eax], ecx
// 007eed92  5e                   pop esi
// 007eed93  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
