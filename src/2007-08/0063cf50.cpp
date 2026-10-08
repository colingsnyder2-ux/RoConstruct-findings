// from server: 100% by auto
// roc 2007-08 0063cf50  unit: CXTPPaintManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cf50
//
// 0063cf50  8b0dd8868c00         mov ecx, dword ptr [0x8c86d8]
// 0063cf56  85c9                 test ecx, ecx
// 0063cf58  7405                 je 0x63cf5f
// 0063cf5a  e88532ffff           call 0x6301e4
// 0063cf5f  c705d8868c0000000000 mov dword ptr [0x8c86d8], 0
// 0063cf69  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?Done@CXTPPaintManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
