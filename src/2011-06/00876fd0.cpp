// roc 2011-06 00876fd0  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00876fd0
//
// 00876fd0  51                   push ecx
// 00876fd1  8b542408             mov edx, dword ptr [esp + 8]
// 00876fd5  56                   push esi
// 00876fd6  8bf1                 mov esi, ecx
// 00876fd8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00876fdc  8d442404             lea eax, [esp + 4]
// 00876fe0  50                   push eax
// 00876fe1  51                   push ecx
// 00876fe2  52                   push edx
// 00876fe3  8bce                 mov ecx, esi
// 00876fe5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00876fed  e814561500           call 0x9cc606
// 00876ff2  83f8ff               cmp eax, -1
// 00876ff5  7414                 je 0x87700b
// 00876ff7  837c240400           cmp dword ptr [esp + 4], 0
// 00876ffc  750d                 jne 0x87700b
// 00876ffe  50                   push eax
// 00876fff  8bce                 mov ecx, esi
// 00877001  e83affffff           call 0x876f40
// 00877006  5e                   pop esi
// 00877007  59                   pop ecx
// 00877008  c20800               ret 8
// 0087700b  33c0                 xor eax, eax
// 0087700d  5e                   pop esi
// 0087700e  59                   pop ecx
// 0087700f  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
