// roc 2012-06 009e18b0  unit: CXTPPropertyGrid  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e18b0
//
// 009e18b0  8b8154010000         mov eax, dword ptr [ecx + 0x154]
// 009e18b6  85c0                 test eax, eax
// 009e18b8  7505                 jne 0x9e18bf
// 009e18ba  e981cefbff           jmp 0x99e740
// 009e18bf  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetImageManager@CXTPPropertyGrid@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
