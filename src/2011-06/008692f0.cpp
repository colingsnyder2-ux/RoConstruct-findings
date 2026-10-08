// roc 2011-06 008692f0  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008692f0
//
// 008692f0  8b442404             mov eax, dword ptr [esp + 4]
// 008692f4  56                   push esi
// 008692f5  50                   push eax
// 008692f6  8bf1                 mov esi, ecx
// 008692f8  e8bb321600           call 0x9cc5b8
// 008692fd  85c0                 test eax, eax
// 008692ff  740e                 je 0x86930f
// 00869301  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 00869307  8b11                 mov edx, dword ptr [ecx]
// 00869309  50                   push eax
// 0086930a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0086930d  ffd0                 call eax
// 0086930f  b801000000           mov eax, 1
// 00869314  5e                   pop esi
// 00869315  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
