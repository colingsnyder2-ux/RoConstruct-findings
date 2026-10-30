// roc 2009-12 0086a350  unit: CXTPPropertyGridToolTip  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a350
//
// 0086a350  56                   push esi
// 0086a351  8bf1                 mov esi, ecx
// 0086a353  8b06                 mov eax, dword ptr [esi]
// 0086a355  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0086a35b  6a01                 push 1
// 0086a35d  ffd2                 call edx
// 0086a35f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086a363  3bc1                 cmp eax, ecx
// 0086a365  750b                 jne 0x86a372
// 0086a367  8bce                 mov ecx, esi
// 0086a369  e8d2fbffff           call 0x869f40
// 0086a36e  5e                   pop esi
// 0086a36f  c20c00               ret 0xc
// 0086a372  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086a376  51                   push ecx
// 0086a377  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086a37b  50                   push eax
// 0086a37c  51                   push ecx
// 0086a37d  8bce                 mov ecx, esi
// 0086a37f  e886c20b00           call 0x92660a
// 0086a384  5e                   pop esi
// 0086a385  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnVScroll@CXTPPropertyGridView@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp