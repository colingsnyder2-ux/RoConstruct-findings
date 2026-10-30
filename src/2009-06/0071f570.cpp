// roc 2009-06 0071f570  unit: CXTPControlComboBoxAutoCompleteWnd  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071f570
//
// 0071f570  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0071f576  85c0                 test eax, eax
// 0071f578  7525                 jne 0x71f59f
// 0071f57a  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 0071f580  85c0                 test eax, eax
// 0071f582  7f1b                 jg 0x71f59f
// 0071f584  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 0071f58a  85d2                 test edx, edx
// 0071f58c  740b                 je 0x71f599
// 0071f58e  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0071f591  85c0                 test eax, eax
// 0071f593  7f0a                 jg 0x71f59f
// 0071f595  8b4228               mov eax, dword ptr [edx + 0x28]
// 0071f598  c3                   ret 
// 0071f599  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0071f59f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetIconId@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
