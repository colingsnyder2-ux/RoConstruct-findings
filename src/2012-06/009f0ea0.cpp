// roc 2012-06 009f0ea0  unit: CXTPPropertyGridToolTip  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f0ea0
//
// 009f0ea0  56                   push esi
// 009f0ea1  8bf1                 mov esi, ecx
// 009f0ea3  8b06                 mov eax, dword ptr [esi]
// 009f0ea5  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 009f0eab  6a01                 push 1
// 009f0ead  ffd2                 call edx
// 009f0eaf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f0eb3  3bc1                 cmp eax, ecx
// 009f0eb5  750b                 jne 0x9f0ec2
// 009f0eb7  8bce                 mov ecx, esi
// 009f0eb9  e872fbffff           call 0x9f0a30
// 009f0ebe  5e                   pop esi
// 009f0ebf  c20c00               ret 0xc
// 009f0ec2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f0ec6  51                   push ecx
// 009f0ec7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009f0ecb  50                   push eax
// 009f0ecc  51                   push ecx
// 009f0ecd  8bce                 mov ecx, esi
// 009f0ecf  e848880a00           call 0xa9971c
// 009f0ed4  5e                   pop esi
// 009f0ed5  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnVScroll@CXTPPropertyGridView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
