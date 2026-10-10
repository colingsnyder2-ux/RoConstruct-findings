// roc 2008-06 00716b90  unit: CXTPPropertyGridToolTip  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716b90
//
// 00716b90  56                   push esi
// 00716b91  8bf1                 mov esi, ecx
// 00716b93  8b06                 mov eax, dword ptr [esi]
// 00716b95  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00716b9b  6a01                 push 1
// 00716b9d  ffd2                 call edx
// 00716b9f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00716ba3  3bc1                 cmp eax, ecx
// 00716ba5  750b                 jne 0x716bb2
// 00716ba7  8bce                 mov ecx, esi
// 00716ba9  e8d2fbffff           call 0x716780
// 00716bae  5e                   pop esi
// 00716baf  c20c00               ret 0xc
// 00716bb2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00716bb6  51                   push ecx
// 00716bb7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00716bbb  50                   push eax
// 00716bbc  51                   push ecx
// 00716bbd  8bce                 mov ecx, esi
// 00716bbf  e8cc550a00           call 0x7bc190
// 00716bc4  5e                   pop esi
// 00716bc5  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnVScroll@CXTPPropertyGridView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
