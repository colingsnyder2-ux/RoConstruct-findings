// from server: 100% by auto
// roc 2012-06 009f3ba0  unit: CPropertyGridItemBrickColor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f3ba0
//
// 009f3ba0  56                   push esi
// 009f3ba1  8b742408             mov esi, dword ptr [esp + 8]
// 009f3ba5  56                   push esi
// 009f3ba6  e8a5f2ffff           call 0x9f2e50
// 009f3bab  830619               add dword ptr [esi], 0x19
// 009f3bae  8bc6                 mov eax, esi
// 009f3bb0  5e                   pop esi
// 009f3bb1  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ?GetValueRect@CXTPPropertyGridItemColor@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
