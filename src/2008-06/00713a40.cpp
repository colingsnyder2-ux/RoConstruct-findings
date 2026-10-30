// from server: 100% by auto
// roc 2008-06 00713a40  unit: CXTPPropertyGridItemColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00713a40
//
// 00713a40  6a00                 push 0
// 00713a42  6a01                 push 1
// 00713a44  8bce                 mov ecx, esi
// 00713a46  e885360000           call 0x7170d0
// 00713a4b  c706d4d88500         mov dword ptr [esi], 0x85d8d4
// 00713a51  c74654c4d88500       mov dword ptr [esi + 0x54], 0x85d8c4
// 00713a58  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 00713a62  8bc6                 mov eax, esi
// 00713a64  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
