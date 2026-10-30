// roc 2007-03 00687f80  unit: seg_00680000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00687f80
//
// 00687f80  51                   push ecx
// 00687f81  8b542408             mov edx, dword ptr [esp + 8]
// 00687f85  56                   push esi
// 00687f86  8bf1                 mov esi, ecx
// 00687f88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00687f8c  8d442404             lea eax, [esp + 4]
// 00687f90  50                   push eax
// 00687f91  51                   push ecx
// 00687f92  52                   push edx
// 00687f93  8bce                 mov ecx, esi
// 00687f95  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00687f9d  e8cc2a0b00           call 0x73aa6e
// 00687fa2  83f8ff               cmp eax, -1
// 00687fa5  7414                 je 0x687fbb
// 00687fa7  837c240400           cmp dword ptr [esp + 4], 0
// 00687fac  750d                 jne 0x687fbb
// 00687fae  50                   push eax
// 00687faf  8bce                 mov ecx, esi
// 00687fb1  e84affffff           call 0x687f00
// 00687fb6  5e                   pop esi
// 00687fb7  59                   pop ecx
// 00687fb8  c20800               ret 8
// 00687fbb  33c0                 xor eax, eax
// 00687fbd  5e                   pop esi
// 00687fbe  59                   pop ecx
// 00687fbf  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?ItemFromPoint@CXTPPropertyGridView@@QBEPAVCXTPPropertyGridItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
