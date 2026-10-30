// roc 2011-06 00863ee0  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00863ee0
//
// 00863ee0  56                   push esi
// 00863ee1  8bf1                 mov esi, ecx
// 00863ee3  8b06                 mov eax, dword ptr [esi]
// 00863ee5  8b5048               mov edx, dword ptr [eax + 0x48]
// 00863ee8  ffd2                 call edx
// 00863eea  83f802               cmp eax, 2
// 00863eed  7411                 je 0x863f00
// 00863eef  8b06                 mov eax, dword ptr [esi]
// 00863ef1  8b5048               mov edx, dword ptr [eax + 0x48]
// 00863ef4  8bce                 mov ecx, esi
// 00863ef6  ffd2                 call edx
// 00863ef8  85c0                 test eax, eax
// 00863efa  7404                 je 0x863f00
// 00863efc  33c0                 xor eax, eax
// 00863efe  5e                   pop esi
// 00863eff  c3                   ret 
// 00863f00  b801000000           mov eax, 1
// 00863f05  5e                   pop esi
// 00863f06  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
