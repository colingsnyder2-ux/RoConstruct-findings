// roc 2010-06 0081e8f0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081e8f0
//
// 0081e8f0  56                   push esi
// 0081e8f1  8bf1                 mov esi, ecx
// 0081e8f3  e8649bf8ff           call 0x7a845c
// 0081e8f8  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0081e8fe  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0081e904  8b5678               mov edx, dword ptr [esi + 0x78]
// 0081e907  50                   push eax
// 0081e908  8b4220               mov eax, dword ptr [edx + 0x20]
// 0081e90b  51                   push ecx
// 0081e90c  682b270000           push 0x272b
// 0081e911  50                   push eax
// 0081e912  ff1554ba9e00         call dword ptr [0x9eba54]
// 0081e918  5e                   pop esi
// 0081e919  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
