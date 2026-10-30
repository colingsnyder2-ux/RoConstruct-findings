// roc 2010-06 0081b1e0  unit: CXTPPropertyGridItemColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081b1e0
//
// 0081b1e0  6a00                 push 0
// 0081b1e2  6a01                 push 1
// 0081b1e4  8bce                 mov ecx, esi
// 0081b1e6  e895360000           call 0x81e880
// 0081b1eb  c7068c30a600         mov dword ptr [esi], 0xa6308c
// 0081b1f1  c746547c30a600       mov dword ptr [esi + 0x54], 0xa6307c
// 0081b1f8  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 0081b202  8bc6                 mov eax, esi
// 0081b204  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
