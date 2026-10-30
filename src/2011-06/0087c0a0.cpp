// roc 2011-06 0087c0a0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c0a0
//
// 0087c0a0  56                   push esi
// 0087c0a1  8bf1                 mov esi, ecx
// 0087c0a3  e878eaf8ff           call 0x80ab20
// 0087c0a8  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0087c0ae  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0087c0b4  8b5678               mov edx, dword ptr [esi + 0x78]
// 0087c0b7  50                   push eax
// 0087c0b8  8b4220               mov eax, dword ptr [edx + 0x20]
// 0087c0bb  51                   push ecx
// 0087c0bc  682b270000           push 0x272b
// 0087c0c1  50                   push eax
// 0087c0c2  ff15c019a400         call dword ptr [0xa419c0]
// 0087c0c8  5e                   pop esi
// 0087c0c9  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
