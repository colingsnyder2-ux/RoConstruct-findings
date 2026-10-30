// roc 2012-06 009f13b0  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f13b0
//
// 009f13b0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 009f13b6  85c0                 test eax, eax
// 009f13b8  7414                 je 0x9f13ce
// 009f13ba  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009f13be  8bff                 mov edi, edi
// 009f13c0  3bc1                 cmp eax, ecx
// 009f13c2  740f                 je 0x9f13d3
// 009f13c4  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 009f13ca  85c0                 test eax, eax
// 009f13cc  75f2                 jne 0x9f13c0
// 009f13ce  33c0                 xor eax, eax
// 009f13d0  c20400               ret 4
// 009f13d3  b801000000           mov eax, 1
// 009f13d8  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
