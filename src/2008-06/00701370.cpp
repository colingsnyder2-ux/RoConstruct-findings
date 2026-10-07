// roc 2008-06 00701370  unit: CXTPTabClientWnd::CWorkspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701370
//
// 00701370  56                   push esi
// 00701371  8bf1                 mov esi, ecx
// 00701373  8b06                 mov eax, dword ptr [esi]
// 00701375  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00701378  ffd2                 call edx
// 0070137a  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0070137e  7416                 je 0x701396
// 00701380  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00701386  83b8b400000000       cmp dword ptr [eax + 0xb4], 0
// 0070138d  7507                 jne 0x701396
// 0070138f  b801000000           mov eax, 1
// 00701394  5e                   pop esi
// 00701395  c3                   ret 
// 00701396  33c0                 xor eax, eax
// 00701398  5e                   pop esi
// 00701399  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsDrawStaticFrame@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
