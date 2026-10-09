// roc 2009-12 00868a90  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868a90
//
// 00868a90  51                   push ecx
// 00868a91  8b542408             mov edx, dword ptr [esp + 8]
// 00868a95  56                   push esi
// 00868a96  8bf1                 mov esi, ecx
// 00868a98  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868a9c  8d442404             lea eax, [esp + 4]
// 00868aa0  50                   push eax
// 00868aa1  51                   push ecx
// 00868aa2  52                   push edx
// 00868aa3  8bce                 mov ecx, esi
// 00868aa5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00868aad  e8aed90b00           call 0x926460
// 00868ab2  83f8ff               cmp eax, -1
// 00868ab5  7414                 je 0x868acb
// 00868ab7  837c240400           cmp dword ptr [esp + 4], 0
// 00868abc  750d                 jne 0x868acb
// 00868abe  50                   push eax
// 00868abf  8bce                 mov ecx, esi
// 00868ac1  e83affffff           call 0x868a00
// 00868ac6  5e                   pop esi
// 00868ac7  59                   pop ecx
// 00868ac8  c20800               ret 8
// 00868acb  33c0                 xor eax, eax
// 00868acd  5e                   pop esi
// 00868ace  59                   pop ecx
// 00868acf  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
