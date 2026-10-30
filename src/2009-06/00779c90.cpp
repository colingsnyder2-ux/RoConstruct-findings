// roc 2009-06 00779c90  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779c90
//
// 00779c90  56                   push esi
// 00779c91  8bf1                 mov esi, ecx
// 00779c93  8b06                 mov eax, dword ptr [esi]
// 00779c95  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00779c98  ffd2                 call edx
// 00779c9a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00779c9e  7416                 je 0x779cb6
// 00779ca0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00779ca6  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 00779cad  7507                 jne 0x779cb6
// 00779caf  b801000000           mov eax, 1
// 00779cb4  5e                   pop esi
// 00779cb5  c3                   ret 
// 00779cb6  33c0                 xor eax, eax
// 00779cb8  5e                   pop esi
// 00779cb9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
