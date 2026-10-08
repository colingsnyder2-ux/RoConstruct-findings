// roc 2010-06 0087daa0  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087daa0
//
// 0087daa0  56                   push esi
// 0087daa1  6a00                 push 0
// 0087daa3  8bf1                 mov esi, ecx
// 0087daa5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087daa9  6a00                 push 0
// 0087daab  e850b4f9ff           call 0x818f00
// 0087dab0  85c0                 test eax, eax
// 0087dab2  742e                 je 0x87dae2
// 0087dab4  8b4030               mov eax, dword ptr [eax + 0x30]
// 0087dab7  83f8ff               cmp eax, -1
// 0087daba  7426                 je 0x87dae2
// 0087dabc  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0087dabf  6a00                 push 0
// 0087dac1  50                   push eax
// 0087dac2  e8b941f8ff           call 0x801c80
// 0087dac7  8bc8                 mov ecx, eax
// 0087dac9  e85261f4ff           call 0x7c3c20
// 0087dace  85c0                 test eax, eax
// 0087dad0  7410                 je 0x87dae2
// 0087dad2  8bc8                 mov ecx, eax
// 0087dad4  e8c706f5ff           call 0x7ce1a0
// 0087dad9  8d4805               lea ecx, [eax + 5]
// 0087dadc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087dae0  0108                 add dword ptr [eax], ecx
// 0087dae2  5e                   pop esi
// 0087dae3  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?AdjustItemCaptionRect@CXTPPropertyGridPaintManager@@UAEXPAVCXTPPropertyGridItem@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
