// roc 2007-03 0066de80  unit: seg_00660000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066de80
//
// 0066de80  56                   push esi
// 0066de81  8bf1                 mov esi, ecx
// 0066de83  8b06                 mov eax, dword ptr [esi]
// 0066de85  8b5048               mov edx, dword ptr [eax + 0x48]
// 0066de88  ffd2                 call edx
// 0066de8a  83f802               cmp eax, 2
// 0066de8d  7411                 je 0x66dea0
// 0066de8f  8b06                 mov eax, dword ptr [esi]
// 0066de91  8b5048               mov edx, dword ptr [eax + 0x48]
// 0066de94  8bce                 mov ecx, esi
// 0066de96  ffd2                 call edx
// 0066de98  85c0                 test eax, eax
// 0066de9a  7404                 je 0x66dea0
// 0066de9c  33c0                 xor eax, eax
// 0066de9e  5e                   pop esi
// 0066de9f  c3                   ret 
// 0066dea0  b801000000           mov eax, 1
// 0066dea5  5e                   pop esi
// 0066dea6  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsHorizontalPosition@CXTPTabManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
