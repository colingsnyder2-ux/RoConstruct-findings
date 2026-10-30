// roc 2009-12 008575c0  unit: CXTPTabClientWnd  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008575c0
//
// 008575c0  83b9b400000000       cmp dword ptr [ecx + 0xb4], 0
// 008575c7  7412                 je 0x8575db
// 008575c9  8b442404             mov eax, dword ptr [esp + 4]
// 008575cd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008575d0  50                   push eax
// 008575d1  51                   push ecx
// 008575d2  ff1554cc9800         call dword ptr [0x98cc54]
// 008575d8  c20400               ret 4
// 008575db  e870f0ffff           call 0x856650
// 008575e0  85c0                 test eax, eax
// 008575e2  7422                 je 0x857606
// 008575e4  6a00                 push 0
// 008575e6  e855ffffff           call 0x857540
// 008575eb  8b10                 mov edx, dword ptr [eax]
// 008575ed  8bc8                 mov ecx, eax
// 008575ef  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008575f5  ffd0                 call eax
// 008575f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008575fb  8b5020               mov edx, dword ptr [eax + 0x20]
// 008575fe  51                   push ecx
// 008575ff  52                   push edx
// 00857600  ff1554cc9800         call dword ptr [0x98cc54]
// 00857606  c20400               ret 4
// copied from an identical function in another client (function ?WorkspaceToScreen@CXTPTabClientWnd@@QBEXPAUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp