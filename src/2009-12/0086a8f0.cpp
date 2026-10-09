// roc 2009-12 0086a8f0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a8f0
//
// 0086a8f0  56                   push esi
// 0086a8f1  8bf1                 mov esi, ecx
// 0086a8f3  e8249af8ff           call 0x7f431c
// 0086a8f8  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0086a8fe  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0086a904  8b5678               mov edx, dword ptr [esi + 0x78]
// 0086a907  50                   push eax
// 0086a908  8b4220               mov eax, dword ptr [edx + 0x20]
// 0086a90b  51                   push ecx
// 0086a90c  682b270000           push 0x272b
// 0086a911  50                   push eax
// 0086a912  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0086a918  5e                   pop esi
// 0086a919  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
