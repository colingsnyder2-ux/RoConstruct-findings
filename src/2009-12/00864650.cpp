// roc 2009-12 00864650  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864650
//
// 00864650  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00864656  85c0                 test eax, eax
// 00864658  7414                 je 0x86466e
// 0086465a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086465e  8bff                 mov edi, edi
// 00864660  3bc1                 cmp eax, ecx
// 00864662  740f                 je 0x864673
// 00864664  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0086466a  85c0                 test eax, eax
// 0086466c  75f2                 jne 0x864660
// 0086466e  33c0                 xor eax, eax
// 00864670  c20400               ret 4
// 00864673  b801000000           mov eax, 1
// 00864678  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
