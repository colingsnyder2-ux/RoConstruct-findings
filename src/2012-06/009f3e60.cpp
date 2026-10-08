// roc 2012-06 009f3e60  unit: CXTPPropertyGridItemColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f3e60
//
// 009f3e60  6a00                 push 0
// 009f3e62  6a01                 push 1
// 009f3e64  8bce                 mov ecx, esi
// 009f3e66  e845070000           call 0x9f45b0
// 009f3e6b  c7060498c100         mov dword ptr [esi], 0xc19804
// 009f3e71  c74654f497c100       mov dword ptr [esi + 0x54], 0xc197f4
// 009f3e78  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 009f3e82  8bc6                 mov eax, esi
// 009f3e84  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
