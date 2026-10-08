// roc 2011-06 00878e40  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878e40
//
// 00878e40  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00878e46  85c0                 test eax, eax
// 00878e48  7414                 je 0x878e5e
// 00878e4a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00878e4e  8bff                 mov edi, edi
// 00878e50  3bc1                 cmp eax, ecx
// 00878e52  740f                 je 0x878e63
// 00878e54  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 00878e5a  85c0                 test eax, eax
// 00878e5c  75f2                 jne 0x878e50
// 00878e5e  33c0                 xor eax, eax
// 00878e60  c20400               ret 4
// 00878e63  b801000000           mov eax, 1
// 00878e68  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
