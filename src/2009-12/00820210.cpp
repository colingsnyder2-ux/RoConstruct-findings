// roc 2009-12 00820210  unit: CXTPReportControl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820210
//
// 00820210  56                   push esi
// 00820211  8bf1                 mov esi, ecx
// 00820213  8b4620               mov eax, dword ptr [esi + 0x20]
// 00820216  57                   push edi
// 00820217  8b3dbccb9800         mov edi, dword ptr [0x98cbbc]
// 0082021d  50                   push eax
// 0082021e  ffd7                 call edi
// 00820220  50                   push eax
// 00820221  e80439fdff           call 0x7f3b2a
// 00820226  50                   push eax
// 00820227  e82440fdff           call 0x7f4250
// 0082022c  50                   push eax
// 0082022d  e80c3afdff           call 0x7f3c3e
// 00820232  83c408               add esp, 8
// 00820235  85c0                 test eax, eax
// 00820237  741a                 je 0x820253
// 00820239  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082023c  51                   push ecx
// 0082023d  ffd7                 call edi
// 0082023f  50                   push eax
// 00820240  e8e538fdff           call 0x7f3b2a
// 00820245  8b10                 mov edx, dword ptr [eax]
// 00820247  5f                   pop edi
// 00820248  5e                   pop esi
// 00820249  8bc8                 mov ecx, eax
// 0082024b  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00820251  ffe2                 jmp edx
// 00820253  5f                   pop edi
// 00820254  33c0                 xor eax, eax
// 00820256  5e                   pop esi
// 00820257  c20400               ret 4
// copied from an identical function in another client (function ?GetScrollBarCtrl@CXTPReportControl@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp