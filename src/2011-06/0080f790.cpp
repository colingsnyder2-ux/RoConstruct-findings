// from server: 100% by auto
// roc 2011-06 0080f790  unit: CXTPPaintManager  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f790
//
// 0080f790  8b0d9881d100         mov ecx, dword ptr [0xd18198]
// 0080f796  85c9                 test ecx, ecx
// 0080f798  7405                 je 0x80f79f
// 0080f79a  e83baeffff           call 0x80a5da
// 0080f79f  c7059881d10000000000 mov dword ptr [0xd18198], 0
// 0080f7a9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?Done@CXTPPaintManager@@SAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
