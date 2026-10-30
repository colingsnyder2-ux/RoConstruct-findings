// roc 2009-12 0084dc30  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dc30
//
// 0084dc30  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 0084dc36  85c0                 test eax, eax
// 0084dc38  7505                 jne 0x84dc3f
// 0084dc3a  e97128fcff           jmp 0x8104b0
// 0084dc3f  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
