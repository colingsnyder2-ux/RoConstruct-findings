// roc 2009-12 008b0c50  unit: CXTPDockingPaneTabbedContainer  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0c50
//
// 008b0c50  83ec20               sub esp, 0x20
// 008b0c53  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b0c57  53                   push ebx
// 008b0c58  55                   push ebp
// 008b0c59  56                   push esi
// 008b0c5a  57                   push edi
// 008b0c5b  50                   push eax
// 008b0c5c  8bf1                 mov esi, ecx
// 008b0c5e  e8cd570700           call 0x926430
// 008b0c63  89442434             mov dword ptr [esp + 0x34], eax
// 008b0c67  85c0                 test eax, eax
// 008b0c69  7449                 je 0x8b0cb4
// 008b0c6b  56                   push esi
// 008b0c6c  8d4c2414             lea ecx, [esp + 0x14]
// 008b0c70  e85ba6f9ff           call 0x84b2d0
// 008b0c75  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b0c79  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b0c7d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b0c81  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b0c85  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008b0c89  8d4e54               lea ecx, [esi + 0x54]
// 008b0c8c  e8bffbffff           call 0x8b0850
// 008b0c91  83ec10               sub esp, 0x10
// 008b0c94  8bd4                 mov edx, esp
// 008b0c96  893a                 mov dword ptr [edx], edi
// 008b0c98  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008b0c9c  895a04               mov dword ptr [edx + 4], ebx
// 008b0c9f  896a08               mov dword ptr [edx + 8], ebp
// 008b0ca2  8bc8                 mov ecx, eax
// 008b0ca4  8b00                 mov eax, dword ptr [eax]
// 008b0ca6  8b4058               mov eax, dword ptr [eax + 0x58]
// 008b0ca9  897a0c               mov dword ptr [edx + 0xc], edi
// 008b0cac  8b542444             mov edx, dword ptr [esp + 0x44]
// 008b0cb0  56                   push esi
// 008b0cb1  52                   push edx
// 008b0cb2  ffd0                 call eax
// 008b0cb4  5f                   pop edi
// 008b0cb5  5e                   pop esi
// 008b0cb6  5d                   pop ebp
// 008b0cb7  b801000000           mov eax, 1
// 008b0cbc  5b                   pop ebx
// 008b0cbd  83c420               add esp, 0x20
// 008b0cc0  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp