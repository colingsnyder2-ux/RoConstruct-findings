// from server: 100% by auto
// roc 2011-06 008eb370  unit: CXTColorLum  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eb370
//
// 008eb370  56                   push esi
// 008eb371  8bf1                 mov esi, ecx
// 008eb373  e8b6f2f1ff           call 0x80a62e
// 008eb378  6a00                 push 0
// 008eb37a  c7053c92d10000000000 mov dword ptr [0xd1923c], 0
// 008eb384  8b4620               mov eax, dword ptr [esi + 0x20]
// 008eb387  6a00                 push 0
// 008eb389  50                   push eax
// 008eb38a  ff15ec19a400         call dword ptr [0xa419ec]
// 008eb390  5e                   pop esi
// 008eb391  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnKillFocus@CXTPColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
