// roc 2010-06 0081caa0  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081caa0
//
// 0081caa0  51                   push ecx
// 0081caa1  8b542408             mov edx, dword ptr [esp + 8]
// 0081caa5  56                   push esi
// 0081caa6  8bf1                 mov esi, ecx
// 0081caa8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081caac  8d442404             lea eax, [esp + 4]
// 0081cab0  50                   push eax
// 0081cab1  51                   push ecx
// 0081cab2  52                   push edx
// 0081cab3  8bce                 mov ecx, esi
// 0081cab5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0081cabd  e80a031600           call 0x97cdcc
// 0081cac2  83f8ff               cmp eax, -1
// 0081cac5  7414                 je 0x81cadb
// 0081cac7  837c240400           cmp dword ptr [esp + 4], 0
// 0081cacc  750d                 jne 0x81cadb
// 0081cace  50                   push eax
// 0081cacf  8bce                 mov ecx, esi
// 0081cad1  e83affffff           call 0x81ca10
// 0081cad6  5e                   pop esi
// 0081cad7  59                   pop ecx
// 0081cad8  c20800               ret 8
// 0081cadb  33c0                 xor eax, eax
// 0081cadd  5e                   pop esi
// 0081cade  59                   pop ecx
// 0081cadf  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
