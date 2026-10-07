// roc 2008-06 006fa550  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa550
//
// 006fa550  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 006fa556  85c0                 test eax, eax
// 006fa558  7505                 jne 0x6fa55f
// 006fa55a  e92169fcff           jmp 0x6c0e80
// 006fa55f  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
