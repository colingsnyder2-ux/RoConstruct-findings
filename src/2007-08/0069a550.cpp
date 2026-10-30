// from server: 100% by auto
// roc 2007-08 0069a550  unit: CPropertyGridItemBrickColor  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a550
//
// 0069a550  56                   push esi
// 0069a551  6a00                 push 0
// 0069a553  6a01                 push 1
// 0069a555  8bf1                 mov esi, ecx
// 0069a557  e8e4320000           call 0x69d840
// 0069a55c  c706541a7d00         mov dword ptr [esi], 0x7d1a54
// 0069a562  c74654441a7d00       mov dword ptr [esi + 0x54], 0x7d1a44
// 0069a569  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 0069a573  8bc6                 mov eax, esi
// 0069a575  5e                   pop esi
// 0069a576  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ??0CPropertyGridItemColorColorPopup@?8??OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
