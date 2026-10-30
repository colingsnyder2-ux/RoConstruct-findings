// roc 2009-06 0078c240  unit: CPropertyGridItemBrickColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078c240
//
// 0078c240  6a00                 push 0
// 0078c242  6a01                 push 1
// 0078c244  8bce                 mov ecx, esi
// 0078c246  e825360000           call 0x78f870
// 0078c24b  c70624e98f00         mov dword ptr [esi], 0x8fe924
// 0078c251  c7465414e98f00       mov dword ptr [esi + 0x54], 0x8fe914
// 0078c258  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 0078c262  8bc6                 mov eax, esi
// 0078c264  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
