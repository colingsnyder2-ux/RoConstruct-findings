// roc 2009-06 007eed00  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eed00
//
// 007eed00  56                   push esi
// 007eed01  6a00                 push 0
// 007eed03  8bf1                 mov esi, ecx
// 007eed05  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007eed09  6a01                 push 1
// 007eed0b  e820b2f9ff           call 0x789f30
// 007eed10  85c0                 test eax, eax
// 007eed12  742e                 je 0x7eed42
// 007eed14  8b4030               mov eax, dword ptr [eax + 0x30]
// 007eed17  83f8ff               cmp eax, -1
// 007eed1a  7426                 je 0x7eed42
// 007eed1c  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007eed1f  6a00                 push 0
// 007eed21  50                   push eax
// 007eed22  e8b941f8ff           call 0x772ee0
// 007eed27  8bc8                 mov ecx, eax
// 007eed29  e8629df4ff           call 0x738a90
// 007eed2e  85c0                 test eax, eax
// 007eed30  7410                 je 0x7eed42
// 007eed32  8bc8                 mov ecx, eax
// 007eed34  e8e794fdff           call 0x7c8220
// 007eed39  8d4805               lea ecx, [eax + 5]
// 007eed3c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007eed40  0108                 add dword ptr [eax], ecx
// 007eed42  5e                   pop esi
// 007eed43  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemValueRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
