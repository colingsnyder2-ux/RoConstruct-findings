// roc 2009-06 00772e90  unit: CXTPPropertyGrid  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00772e90
//
// 00772e90  8b442404             mov eax, dword ptr [esp + 4]
// 00772e94  56                   push esi
// 00772e95  50                   push eax
// 00772e96  8bf1                 mov esi, ecx
// 00772e98  e86f900d00           call 0x84bf0c
// 00772e9d  85c0                 test eax, eax
// 00772e9f  740e                 je 0x772eaf
// 00772ea1  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 00772ea7  8b11                 mov edx, dword ptr [ecx]
// 00772ea9  50                   push eax
// 00772eaa  8b4210               mov eax, dword ptr [edx + 0x10]
// 00772ead  ffd0                 call eax
// 00772eaf  b801000000           mov eax, 1
// 00772eb4  5e                   pop esi
// 00772eb5  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnPrintClient@CXTPPropertyGrid@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
