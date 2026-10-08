// from server: 100% by auto
// roc 2008-06 00717090  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717090
//
// 00717090  56                   push esi
// 00717091  6a00                 push 0
// 00717093  8bf1                 mov esi, ecx
// 00717095  e83630feff           call 0x6fa0d0
// 0071709a  83c404               add esp, 4
// 0071709d  83be6401000000       cmp dword ptr [esi + 0x164], 0
// 007170a4  740b                 je 0x7170b1
// 007170a6  8b06                 mov eax, dword ptr [esi]
// 007170a8  8b5004               mov edx, dword ptr [eax + 4]
// 007170ab  6a01                 push 1
// 007170ad  8bce                 mov ecx, esi
// 007170af  ffd2                 call edx
// 007170b1  5e                   pop esi
// 007170b2  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?PostNcDestroy@CXTColorPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
