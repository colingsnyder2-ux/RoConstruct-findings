// roc 2012-06 009f4640  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4640
//
// 009f4640  56                   push esi
// 009f4641  8bf1                 mov esi, ecx
// 009f4643  e85ee5f8ff           call 0x982ba6
// 009f4648  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 009f464e  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 009f4654  8b5678               mov edx, dword ptr [esi + 0x78]
// 009f4657  50                   push eax
// 009f4658  8b4220               mov eax, dword ptr [edx + 0x20]
// 009f465b  51                   push ecx
// 009f465c  682b270000           push 0x272b
// 009f4661  50                   push eax
// 009f4662  ff15043cb200         call dword ptr [0xb23c04]
// 009f4668  5e                   pop esi
// 009f4669  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnDestroy@CXTColorPopup@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
