// roc 2011-06 0080c390  unit: boost::exception  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c390
//
// 0080c390  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0080c396  85c0                 test eax, eax
// 0080c398  7525                 jne 0x80c3bf
// 0080c39a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0080c3a0  85c0                 test eax, eax
// 0080c3a2  7f1b                 jg 0x80c3bf
// 0080c3a4  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 0080c3aa  85d2                 test edx, edx
// 0080c3ac  740b                 je 0x80c3b9
// 0080c3ae  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0080c3b1  85c0                 test eax, eax
// 0080c3b3  7f0a                 jg 0x80c3bf
// 0080c3b5  8b4228               mov eax, dword ptr [edx + 0x28]
// 0080c3b8  c3                   ret 
// 0080c3b9  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0080c3bf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
