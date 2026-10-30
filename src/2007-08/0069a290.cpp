// from server: 100% by auto
// roc 2007-08 0069a290  unit: CPropertyGridItemBrickColor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a290
//
// 0069a290  56                   push esi
// 0069a291  8b742408             mov esi, dword ptr [esp + 8]
// 0069a295  56                   push esi
// 0069a296  e8e5f2ffff           call 0x699580
// 0069a29b  830619               add dword ptr [esi], 0x19
// 0069a29e  8bc6                 mov eax, esi
// 0069a2a0  5e                   pop esi
// 0069a2a1  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ?GetValueRect@CXTPPropertyGridItemColor@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
