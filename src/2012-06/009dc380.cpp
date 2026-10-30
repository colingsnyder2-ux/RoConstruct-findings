// roc 2012-06 009dc380  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc380
//
// 009dc380  56                   push esi
// 009dc381  8bf1                 mov esi, ecx
// 009dc383  8b06                 mov eax, dword ptr [esi]
// 009dc385  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009dc388  ffd2                 call edx
// 009dc38a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 009dc38e  7416                 je 0x9dc3a6
// 009dc390  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 009dc396  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 009dc39d  7507                 jne 0x9dc3a6
// 009dc39f  b801000000           mov eax, 1
// 009dc3a4  5e                   pop esi
// 009dc3a5  c3                   ret 
// 009dc3a6  33c0                 xor eax, eax
// 009dc3a8  5e                   pop esi
// 009dc3a9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
