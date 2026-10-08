// roc 2012-06 009e1860  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1860
//
// 009e1860  8b442404             mov eax, dword ptr [esp + 4]
// 009e1864  56                   push esi
// 009e1865  50                   push eax
// 009e1866  8bf1                 mov esi, ecx
// 009e1868  e8057d0b00           call 0xa99572
// 009e186d  85c0                 test eax, eax
// 009e186f  740e                 je 0x9e187f
// 009e1871  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 009e1877  8b11                 mov edx, dword ptr [ecx]
// 009e1879  50                   push eax
// 009e187a  8b4210               mov eax, dword ptr [edx + 0x10]
// 009e187d  ffd0                 call eax
// 009e187f  b801000000           mov eax, 1
// 009e1884  5e                   pop esi
// 009e1885  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
