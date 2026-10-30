// roc 2011-06 00869340  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869340
//
// 00869340  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 00869346  85c0                 test eax, eax
// 00869348  7505                 jne 0x86934f
// 0086934a  e9c1cdfbff           jmp 0x826110
// 0086934f  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
