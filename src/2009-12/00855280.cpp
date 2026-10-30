// roc 2009-12 00855280  unit: CXTPTabClientWnd  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855280
//
// 00855280  8bc1                 mov eax, ecx
// 00855282  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00855285  c7400c00000000       mov dword ptr [eax + 0xc], 0
// 0085528c  85c9                 test ecx, ecx
// 0085528e  740a                 je 0x85529a
// 00855290  8b01                 mov eax, dword ptr [ecx]
// 00855292  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00855298  ffe2                 jmp edx
// 0085529a  83782c00             cmp dword ptr [eax + 0x2c], 0
// 0085529e  7511                 jne 0x8552b1
// 008552a0  8b4030               mov eax, dword ptr [eax + 0x30]
// 008552a3  8b10                 mov edx, dword ptr [eax]
// 008552a5  8bc8                 mov ecx, eax
// 008552a7  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008552ad  6a01                 push 1
// 008552af  ffd0                 call eax
// 008552b1  c3                   ret 
// copied from an identical function in another client (function ?Reposition@CXTPTabClientWnd@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp