// roc 2008-06 007152e0  unit: CXTPPropertyGridView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007152e0
//
// 007152e0  51                   push ecx
// 007152e1  8b542408             mov edx, dword ptr [esp + 8]
// 007152e5  56                   push esi
// 007152e6  8bf1                 mov esi, ecx
// 007152e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007152ec  8d442404             lea eax, [esp + 4]
// 007152f0  50                   push eax
// 007152f1  51                   push ecx
// 007152f2  52                   push edx
// 007152f3  8bce                 mov ecx, esi
// 007152f5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007152fd  e8f66c0a00           call 0x7bbff8
// 00715302  83f8ff               cmp eax, -1
// 00715305  7414                 je 0x71531b
// 00715307  837c240400           cmp dword ptr [esp + 4], 0
// 0071530c  750d                 jne 0x71531b
// 0071530e  50                   push eax
// 0071530f  8bce                 mov ecx, esi
// 00715311  e83affffff           call 0x715250
// 00715316  5e                   pop esi
// 00715317  59                   pop ecx
// 00715318  c20800               ret 8
// 0071531b  33c0                 xor eax, eax
// 0071531d  5e                   pop esi
// 0071531e  59                   pop ecx
// 0071531f  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
