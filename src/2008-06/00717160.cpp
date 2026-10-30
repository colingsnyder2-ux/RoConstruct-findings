// from server: 100% by auto
// roc 2008-06 00717160  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717160
//
// 00717160  56                   push esi
// 00717161  8bf1                 mov esi, ecx
// 00717163  e8149ff8ff           call 0x6a107c
// 00717168  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0071716e  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 00717174  8b5678               mov edx, dword ptr [esi + 0x78]
// 00717177  50                   push eax
// 00717178  8b4220               mov eax, dword ptr [edx + 0x20]
// 0071717b  51                   push ecx
// 0071717c  682b270000           push 0x272b
// 00717181  50                   push eax
// 00717182  ff15142e8000         call dword ptr [0x802e14]
// 00717188  5e                   pop esi
// 00717189  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
