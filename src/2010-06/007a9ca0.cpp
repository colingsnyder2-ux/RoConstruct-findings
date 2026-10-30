// roc 2010-06 007a9ca0  unit: ActiveDocView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a9ca0
//
// 007a9ca0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007a9ca6  85c0                 test eax, eax
// 007a9ca8  7525                 jne 0x7a9ccf
// 007a9caa  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 007a9cb0  85c0                 test eax, eax
// 007a9cb2  7f1b                 jg 0x7a9ccf
// 007a9cb4  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 007a9cba  85d2                 test edx, edx
// 007a9cbc  740b                 je 0x7a9cc9
// 007a9cbe  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007a9cc1  85c0                 test eax, eax
// 007a9cc3  7f0a                 jg 0x7a9ccf
// 007a9cc5  8b4228               mov eax, dword ptr [edx + 0x28]
// 007a9cc8  c3                   ret 
// 007a9cc9  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 007a9ccf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
