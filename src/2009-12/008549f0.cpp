// roc 2009-12 008549f0  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008549f0
//
// 008549f0  56                   push esi
// 008549f1  8bf1                 mov esi, ecx
// 008549f3  8b06                 mov eax, dword ptr [esi]
// 008549f5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008549f8  ffd2                 call edx
// 008549fa  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008549fe  7416                 je 0x854a16
// 00854a00  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00854a06  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 00854a0d  7507                 jne 0x854a16
// 00854a0f  b801000000           mov eax, 1
// 00854a14  5e                   pop esi
// 00854a15  c3                   ret 
// 00854a16  33c0                 xor eax, eax
// 00854a18  5e                   pop esi
// 00854a19  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
