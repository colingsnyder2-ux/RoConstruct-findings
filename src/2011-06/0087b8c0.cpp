// roc 2011-06 0087b8c0  unit: CXTPPropertyGridItemColor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087b8c0
//
// 0087b8c0  6a00                 push 0
// 0087b8c2  6a01                 push 1
// 0087b8c4  8bce                 mov ecx, esi
// 0087b8c6  e845070000           call 0x87c010
// 0087b8cb  c70644e1ac00         mov dword ptr [esi], 0xace144
// 0087b8d1  c7465434e1ac00       mov dword ptr [esi + 0x54], 0xace134
// 0087b8d8  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 0087b8e2  8bc6                 mov eax, esi
// 0087b8e4  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
