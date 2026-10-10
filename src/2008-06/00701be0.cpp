// roc 2008-06 00701be0  unit: CXTPTabClientWnd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701be0
//
// 00701be0  8bc1                 mov eax, ecx
// 00701be2  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00701be5  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 00701bec  85c9                 test ecx, ecx
// 00701bee  740a                 je 0x701bfa
// 00701bf0  8b01                 mov eax, dword ptr [ecx]
// 00701bf2  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00701bf8  ffe2                 jmp edx
// 00701bfa  83782c00             cmp dword ptr [eax + 0x2c], 0
// 00701bfe  7511                 jne 0x701c11
// 00701c00  8b4030               mov eax, dword ptr [eax + 0x30]
// 00701c03  8b10                 mov edx, dword ptr [eax]
// 00701c05  8bc8                 mov ecx, eax
// 00701c07  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00701c0d  6a01                 push 1
// 00701c0f  ffd0                 call eax
// 00701c11  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CXTPTabClientWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
