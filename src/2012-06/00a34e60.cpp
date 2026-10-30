// roc 2012-06 00a34e60  unit: CXTPDockingPaneAutoHideWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34e60
//
// 00a34e60  56                   push esi
// 00a34e61  57                   push edi
// 00a34e62  8bf9                 mov edi, ecx
// 00a34e64  8b4708               mov eax, dword ptr [edi + 8]
// 00a34e67  33f6                 xor esi, esi
// 00a34e69  85c0                 test eax, eax
// 00a34e6b  7e26                 jle 0xa34e93
// 00a34e6d  8d4900               lea ecx, [ecx]
// 00a34e70  85f6                 test esi, esi
// 00a34e72  7c2d                 jl 0xa34ea1
// 00a34e74  3bf0                 cmp esi, eax
// 00a34e76  7d29                 jge 0xa34ea1
// 00a34e78  8b4704               mov eax, dword ptr [edi + 4]
// 00a34e7b  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a34e7e  85c9                 test ecx, ecx
// 00a34e80  7409                 je 0xa34e8b
// 00a34e82  8b11                 mov edx, dword ptr [ecx]
// 00a34e84  8b4208               mov eax, dword ptr [edx + 8]
// 00a34e87  6a01                 push 1
// 00a34e89  ffd0                 call eax
// 00a34e8b  8b4708               mov eax, dword ptr [edi + 8]
// 00a34e8e  46                   inc esi
// 00a34e8f  3bf0                 cmp esi, eax
// 00a34e91  7cdd                 jl 0xa34e70
// 00a34e93  6aff                 push -1
// 00a34e95  6a00                 push 0
// 00a34e97  8bcf                 mov ecx, edi
// 00a34e99  e8c233f6ff           call 0x998260
// 00a34e9e  5f                   pop edi
// 00a34e9f  5e                   pop esi
// 00a34ea0  c3                   ret 
// 00a34ea1  e81ad5f4ff           call 0x9823c0
// copied from an identical function in another client (function ?FreeAll@CAutoHidePanelTabManagersArray@CXTPDockingPaneAutoHidePanel@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp