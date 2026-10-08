// roc 2010-06 00818630  unit: CXTPPropertyGridItem  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00818630
//
// 00818630  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00818636  85c0                 test eax, eax
// 00818638  7414                 je 0x81864e
// 0081863a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0081863e  8bff                 mov edi, edi
// 00818640  3bc1                 cmp eax, ecx
// 00818642  740f                 je 0x818653
// 00818644  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0081864a  85c0                 test eax, eax
// 0081864c  75f2                 jne 0x818640
// 0081864e  33c0                 xor eax, eax
// 00818650  c20400               ret 4
// 00818653  b801000000           mov eax, 1
// 00818658  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?HasParent@CXTPPropertyGridItem@@QAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
