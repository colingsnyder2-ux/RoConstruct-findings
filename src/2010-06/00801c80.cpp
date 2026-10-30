// roc 2010-06 00801c80  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00801c80
//
// 00801c80  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 00801c86  85c0                 test eax, eax
// 00801c88  7505                 jne 0x801c8f
// 00801c8a  e9c128fcff           jmp 0x7c4550
// 00801c8f  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
