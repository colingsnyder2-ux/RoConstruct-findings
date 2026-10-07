// roc 2012-06 009f4570  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4570
//
// 009f4570  56                   push esi
// 009f4571  6a00                 push 0
// 009f4573  8bf1                 mov esi, ecx
// 009f4575  e81631feff           call 0x9d7690
// 009f457a  83c404               add esp, 4
// 009f457d  83be6401000000       cmp dword ptr [esi + 0x164], 0
// 009f4584  740b                 je 0x9f4591
// 009f4586  8b06                 mov eax, dword ptr [esi]
// 009f4588  8b5004               mov edx, dword ptr [eax + 4]
// 009f458b  6a01                 push 1
// 009f458d  8bce                 mov ecx, esi
// 009f458f  ffd2                 call edx
// 009f4591  5e                   pop esi
// 009f4592  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTColorPopup.cpp (function ?PostNcDestroy@CXTColorPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPopup.cpp
