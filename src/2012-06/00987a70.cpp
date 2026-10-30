// from server: 100% by auto
// roc 2012-06 00987a70  unit: CXTPPaintManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987a70
//
// 00987a70  8b0d0893e500         mov ecx, dword ptr [0xe59308]
// 00987a76  85c9                 test ecx, ecx
// 00987a78  7405                 je 0x987a7f
// 00987a7a  e80bacffff           call 0x98268a
// 00987a7f  c7050893e50000000000 mov dword ptr [0xe59308], 0
// 00987a89  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Done@CXTPPaintManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
