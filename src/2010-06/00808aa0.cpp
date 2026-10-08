// roc 2010-06 00808aa0  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808aa0
//
// 00808aa0  56                   push esi
// 00808aa1  8bf1                 mov esi, ecx
// 00808aa3  8b06                 mov eax, dword ptr [esi]
// 00808aa5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00808aa8  ffd2                 call edx
// 00808aaa  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00808aae  7416                 je 0x808ac6
// 00808ab0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00808ab6  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 00808abd  7507                 jne 0x808ac6
// 00808abf  b801000000           mov eax, 1
// 00808ac4  5e                   pop esi
// 00808ac5  c3                   ret 
// 00808ac6  33c0                 xor eax, eax
// 00808ac8  5e                   pop esi
// 00808ac9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
