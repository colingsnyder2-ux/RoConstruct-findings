// roc 2009-12 00867250  unit: CPropertyGridItemBrickColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00867250
//
// 00867250  6a00                 push 0
// 00867252  6a01                 push 1
// 00867254  8bce                 mov ecx, esi
// 00867256  e825360000           call 0x86a880
// 0086725b  c706b4ed9f00         mov dword ptr [esi], 0x9fedb4
// 00867261  c74654a4ed9f00       mov dword ptr [esi + 0x54], 0x9feda4
// 00867268  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00867272  8bc6                 mov eax, esi
// 00867274  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
