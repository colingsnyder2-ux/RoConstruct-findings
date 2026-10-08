// from server: 100% by auto
// roc 2011-06 0087b600  unit: CPropertyGridItemBrickColor  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087b600
//
// 0087b600  56                   push esi
// 0087b601  8b742408             mov esi, dword ptr [esp + 8]
// 0087b605  56                   push esi
// 0087b606  e8a5f2ffff           call 0x87a8b0
// 0087b60b  830619               add dword ptr [esi], 0x19
// 0087b60e  8bc6                 mov eax, esi
// 0087b610  5e                   pop esi
// 0087b611  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItemColor.cpp (function ?GetValueRect@CXTPPropertyGridItemColor@@MAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItemColor.cpp
