// roc 2008-06 006fa500  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa500
//
// 006fa500  8b442404             mov eax, dword ptr [esp + 4]
// 006fa504  56                   push esi
// 006fa505  50                   push eax
// 006fa506  8bf1                 mov esi, ecx
// 006fa508  e81b1b0c00           call 0x7bc028
// 006fa50d  85c0                 test eax, eax
// 006fa50f  740e                 je 0x6fa51f
// 006fa511  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 006fa517  8b11                 mov edx, dword ptr [ecx]
// 006fa519  50                   push eax
// 006fa51a  8b4210               mov eax, dword ptr [edx + 0x10]
// 006fa51d  ffd0                 call eax
// 006fa51f  b801000000           mov eax, 1
// 006fa524  5e                   pop esi
// 006fa525  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
