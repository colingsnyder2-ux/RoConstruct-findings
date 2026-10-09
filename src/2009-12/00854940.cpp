// roc 2009-12 00854940  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854940
//
// 00854940  56                   push esi
// 00854941  8bf1                 mov esi, ecx
// 00854943  8b06                 mov eax, dword ptr [esi]
// 00854945  8b5048               mov edx, dword ptr [eax + 0x48]
// 00854948  ffd2                 call edx
// 0085494a  83f802               cmp eax, 2
// 0085494d  7411                 je 0x854960
// 0085494f  8b06                 mov eax, dword ptr [esi]
// 00854951  8b5048               mov edx, dword ptr [eax + 0x48]
// 00854954  8bce                 mov ecx, esi
// 00854956  ffd2                 call edx
// 00854958  85c0                 test eax, eax
// 0085495a  7404                 je 0x854960
// 0085495c  33c0                 xor eax, eax
// 0085495e  5e                   pop esi
// 0085495f  c3                   ret 
// 00854960  b801000000           mov eax, 1
// 00854965  5e                   pop esi
// 00854966  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
