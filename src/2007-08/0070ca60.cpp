// from server: 100% by auto
// roc 2007-08 0070ca60  unit: CXTColorBase  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ca60
//
// 0070ca60  56                   push esi
// 0070ca61  8bf1                 mov esi, ecx
// 0070ca63  ff153cec7700         call dword ptr [0x77ec3c]
// 0070ca69  8bce                 mov ecx, esi
// 0070ca6b  e8ce37f2ff           call 0x63023e
// 0070ca70  5e                   pop esi
// 0070ca71  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?OnLButtonUp@CXTColorBase@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
