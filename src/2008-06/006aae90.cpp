// roc 2008-06 006aae90  unit: CXTPControlComboBoxAutoCompleteWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aae90
//
// 006aae90  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 006aae96  85c0                 test eax, eax
// 006aae98  7525                 jne 0x6aaebf
// 006aae9a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 006aaea0  85c0                 test eax, eax
// 006aaea2  7f1b                 jg 0x6aaebf
// 006aaea4  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 006aaeaa  85d2                 test edx, edx
// 006aaeac  740b                 je 0x6aaeb9
// 006aaeae  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006aaeb1  85c0                 test eax, eax
// 006aaeb3  7f0a                 jg 0x6aaebf
// 006aaeb5  8b4228               mov eax, dword ptr [edx + 0x28]
// 006aaeb8  c3                   ret 
// 006aaeb9  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 006aaebf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
