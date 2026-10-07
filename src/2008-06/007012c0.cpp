// roc 2008-06 007012c0  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007012c0
//
// 007012c0  56                   push esi
// 007012c1  8bf1                 mov esi, ecx
// 007012c3  8b06                 mov eax, dword ptr [esi]
// 007012c5  8b5048               mov edx, dword ptr [eax + 0x48]
// 007012c8  ffd2                 call edx
// 007012ca  83f802               cmp eax, 2
// 007012cd  7411                 je 0x7012e0
// 007012cf  8b06                 mov eax, dword ptr [esi]
// 007012d1  8b5048               mov edx, dword ptr [eax + 0x48]
// 007012d4  8bce                 mov ecx, esi
// 007012d6  ffd2                 call edx
// 007012d8  85c0                 test eax, eax
// 007012da  7404                 je 0x7012e0
// 007012dc  33c0                 xor eax, eax
// 007012de  5e                   pop esi
// 007012df  c3                   ret 
// 007012e0  b801000000           mov eax, 1
// 007012e5  5e                   pop esi
// 007012e6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
