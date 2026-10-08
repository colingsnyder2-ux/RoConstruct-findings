// from server: 100% by auto
// roc 2012-06 00a6a740  unit: CXTCaptionButton  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a740
//
// 00a6a740  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00a6a746  85c9                 test ecx, ecx
// 00a6a748  7405                 je 0xa6a74f
// 00a6a74a  e91106f3ff           jmp 0x99ad60
// 00a6a74f  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?CleanUpGDI@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
