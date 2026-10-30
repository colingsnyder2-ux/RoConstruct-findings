// roc 2009-06 0078da80  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078da80
//
// 0078da80  51                   push ecx
// 0078da81  8b542408             mov edx, dword ptr [esp + 8]
// 0078da85  56                   push esi
// 0078da86  8bf1                 mov esi, ecx
// 0078da88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078da8c  8d442404             lea eax, [esp + 4]
// 0078da90  50                   push eax
// 0078da91  51                   push ecx
// 0078da92  52                   push edx
// 0078da93  8bce                 mov ecx, esi
// 0078da95  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078da9d  e81ce40b00           call 0x84bebe
// 0078daa2  83f8ff               cmp eax, -1
// 0078daa5  7414                 je 0x78dabb
// 0078daa7  837c240400           cmp dword ptr [esp + 4], 0
// 0078daac  750d                 jne 0x78dabb
// 0078daae  50                   push eax
// 0078daaf  8bce                 mov ecx, esi
// 0078dab1  e83affffff           call 0x78d9f0
// 0078dab6  5e                   pop esi
// 0078dab7  59                   pop ecx
// 0078dab8  c20800               ret 8
// 0078dabb  33c0                 xor eax, eax
// 0078dabd  5e                   pop esi
// 0078dabe  59                   pop ecx
// 0078dabf  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
