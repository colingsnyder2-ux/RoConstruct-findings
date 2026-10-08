// from server: 100% by auto
// roc 2012-06 007c2200  unit: RBX::MegaClusterInstance  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c2200
//
// 007c2200  c744240401000000     mov dword ptr [esp + 4], 1
// 007c2208  e9435ff9ff           jmp 0x758150
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorDialog.cpp (function ?Create@CXTPEyeDropper@@UAEHPBD0KABUtagRECT@@PAVCWnd@@IPAUCCreateContext@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorDialog.cpp
