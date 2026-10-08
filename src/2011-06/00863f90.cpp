// roc 2011-06 00863f90  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00863f90
//
// 00863f90  56                   push esi
// 00863f91  8bf1                 mov esi, ecx
// 00863f93  8b06                 mov eax, dword ptr [esi]
// 00863f95  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00863f98  ffd2                 call edx
// 00863f9a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00863f9e  7416                 je 0x863fb6
// 00863fa0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00863fa6  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 00863fad  7507                 jne 0x863fb6
// 00863faf  b801000000           mov eax, 1
// 00863fb4  5e                   pop esi
// 00863fb5  c3                   ret 
// 00863fb6  33c0                 xor eax, eax
// 00863fb8  5e                   pop esi
// 00863fb9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
