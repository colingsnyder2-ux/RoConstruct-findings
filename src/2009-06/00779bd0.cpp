// roc 2009-06 00779bd0  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779bd0
//
// 00779bd0  56                   push esi
// 00779bd1  8bf1                 mov esi, ecx
// 00779bd3  8b06                 mov eax, dword ptr [esi]
// 00779bd5  8b5048               mov edx, dword ptr [eax + 0x48]
// 00779bd8  ffd2                 call edx
// 00779bda  83f802               cmp eax, 2
// 00779bdd  7411                 je 0x779bf0
// 00779bdf  8b06                 mov eax, dword ptr [esi]
// 00779be1  8b5048               mov edx, dword ptr [eax + 0x48]
// 00779be4  8bce                 mov ecx, esi
// 00779be6  ffd2                 call edx
// 00779be8  85c0                 test eax, eax
// 00779bea  7404                 je 0x779bf0
// 00779bec  33c0                 xor eax, eax
// 00779bee  5e                   pop esi
// 00779bef  c3                   ret 
// 00779bf0  b801000000           mov eax, 1
// 00779bf5  5e                   pop esi
// 00779bf6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
