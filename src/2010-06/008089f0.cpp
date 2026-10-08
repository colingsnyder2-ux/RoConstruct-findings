// roc 2010-06 008089f0  unit: CXTPTabManagerAtom  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008089f0
//
// 008089f0  56                   push esi
// 008089f1  8bf1                 mov esi, ecx
// 008089f3  8b06                 mov eax, dword ptr [esi]
// 008089f5  8b5048               mov edx, dword ptr [eax + 0x48]
// 008089f8  ffd2                 call edx
// 008089fa  83f802               cmp eax, 2
// 008089fd  7411                 je 0x808a10
// 008089ff  8b06                 mov eax, dword ptr [esi]
// 00808a01  8b5048               mov edx, dword ptr [eax + 0x48]
// 00808a04  8bce                 mov ecx, esi
// 00808a06  ffd2                 call edx
// 00808a08  85c0                 test eax, eax
// 00808a0a  7404                 je 0x808a10
// 00808a0c  33c0                 xor eax, eax
// 00808a0e  5e                   pop esi
// 00808a0f  c3                   ret 
// 00808a10  b801000000           mov eax, 1
// 00808a15  5e                   pop esi
// 00808a16  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
