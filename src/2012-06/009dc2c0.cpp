// roc 2012-06 009dc2c0  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc2c0
//
// 009dc2c0  56                   push esi
// 009dc2c1  8bf1                 mov esi, ecx
// 009dc2c3  8b06                 mov eax, dword ptr [esi]
// 009dc2c5  8b5048               mov edx, dword ptr [eax + 0x48]
// 009dc2c8  ffd2                 call edx
// 009dc2ca  83f802               cmp eax, 2
// 009dc2cd  7411                 je 0x9dc2e0
// 009dc2cf  8b06                 mov eax, dword ptr [esi]
// 009dc2d1  8b5048               mov edx, dword ptr [eax + 0x48]
// 009dc2d4  8bce                 mov ecx, esi
// 009dc2d6  ffd2                 call edx
// 009dc2d8  85c0                 test eax, eax
// 009dc2da  7404                 je 0x9dc2e0
// 009dc2dc  33c0                 xor eax, eax
// 009dc2de  5e                   pop esi
// 009dc2df  c3                   ret 
// 009dc2e0  b801000000           mov eax, 1
// 009dc2e5  5e                   pop esi
// 009dc2e6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
