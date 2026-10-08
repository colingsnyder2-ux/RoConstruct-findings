// roc 2009-06 00789650  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00789650
//
// 00789650  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00789656  85c0                 test eax, eax
// 00789658  7414                 je 0x78966e
// 0078965a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078965e  8bff                 mov edi, edi
// 00789660  3bc1                 cmp eax, ecx
// 00789662  740f                 je 0x789673
// 00789664  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0078966a  85c0                 test eax, eax
// 0078966c  75f2                 jne 0x789660
// 0078966e  33c0                 xor eax, eax
// 00789670  c20400               ret 4
// 00789673  b801000000           mov eax, 1
// 00789678  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
