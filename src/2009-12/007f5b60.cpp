// roc 2009-12 007f5b60  unit: ActiveDocView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5b60
//
// 007f5b60  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007f5b66  85c0                 test eax, eax
// 007f5b68  7525                 jne 0x7f5b8f
// 007f5b6a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 007f5b70  85c0                 test eax, eax
// 007f5b72  7f1b                 jg 0x7f5b8f
// 007f5b74  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 007f5b7a  85d2                 test edx, edx
// 007f5b7c  740b                 je 0x7f5b89
// 007f5b7e  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007f5b81  85c0                 test eax, eax
// 007f5b83  7f0a                 jg 0x7f5b8f
// 007f5b85  8b4228               mov eax, dword ptr [edx + 0x28]
// 007f5b88  c3                   ret 
// 007f5b89  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 007f5b8f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
