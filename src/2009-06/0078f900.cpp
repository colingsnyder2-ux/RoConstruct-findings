// roc 2009-06 0078f900  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078f900
//
// 0078f900  56                   push esi
// 0078f901  8bf1                 mov esi, ecx
// 0078f903  e8e69bf8ff           call 0x7194ee
// 0078f908  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 0078f90e  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0078f914  8b5678               mov edx, dword ptr [esi + 0x78]
// 0078f917  50                   push eax
// 0078f918  8b4220               mov eax, dword ptr [edx + 0x20]
// 0078f91b  51                   push ecx
// 0078f91c  682b270000           push 0x272b
// 0078f921  50                   push eax
// 0078f922  ff1590ee8900         call dword ptr [0x89ee90]
// 0078f928  5e                   pop esi
// 0078f929  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
