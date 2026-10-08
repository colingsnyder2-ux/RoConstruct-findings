// roc 2009-06 00772ee0  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772ee0
//
// 00772ee0  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 00772ee6  85c0                 test eax, eax
// 00772ee8  7505                 jne 0x772eef
// 00772eea  e9d164fcff           jmp 0x7393c0
// 00772eef  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
