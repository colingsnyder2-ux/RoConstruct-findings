// roc 2012-06 00984620  unit: boost::exception  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984620
//
// 00984620  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00984626  85c0                 test eax, eax
// 00984628  7525                 jne 0x98464f
// 0098462a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00984630  85c0                 test eax, eax
// 00984632  7f1b                 jg 0x98464f
// 00984634  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 0098463a  85d2                 test edx, edx
// 0098463c  740b                 je 0x984649
// 0098463e  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00984641  85c0                 test eax, eax
// 00984643  7f0a                 jg 0x98464f
// 00984645  8b4228               mov eax, dword ptr [edx + 0x28]
// 00984648  c3                   ret 
// 00984649  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0098464f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
