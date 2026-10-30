// from server: 100% by auto
// roc 2008-06 00710e40  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710e40
//
// 00710e40  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00710e46  85c0                 test eax, eax
// 00710e48  7414                 je 0x710e5e
// 00710e4a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00710e4e  8bff                 mov edi, edi
// 00710e50  3bc1                 cmp eax, ecx
// 00710e52  740f                 je 0x710e63
// 00710e54  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 00710e5a  85c0                 test eax, eax
// 00710e5c  75f2                 jne 0x710e50
// 00710e5e  33c0                 xor eax, eax
// 00710e60  c20400               ret 4
// 00710e63  b801000000           mov eax, 1
// 00710e68  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
