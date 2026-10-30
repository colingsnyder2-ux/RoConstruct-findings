// roc 2009-12 008b4c40  unit: CXTPDockingPaneSplitterContainer  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4c40
//
// 008b4c40  8b442404             mov eax, dword ptr [esp + 4]
// 008b4c44  53                   push ebx
// 008b4c45  55                   push ebp
// 008b4c46  56                   push esi
// 008b4c47  57                   push edi
// 008b4c48  8bf1                 mov esi, ecx
// 008b4c4a  6a00                 push 0
// 008b4c4c  8d7e58               lea edi, [esi + 0x58]
// 008b4c4f  50                   push eax
// 008b4c50  8bcf                 mov ecx, edi
// 008b4c52  e819b60000           call 0x8c0270
// 008b4c57  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008b4c5b  8bd8                 mov ebx, eax
// 008b4c5d  55                   push ebp
// 008b4c5e  53                   push ebx
// 008b4c5f  8bcf                 mov ecx, edi
// 008b4c61  e86afeffff           call 0x8b4ad0
// 008b4c66  53                   push ebx
// 008b4c67  8bcf                 mov ecx, edi
// 008b4c69  e802e90200           call 0x8e3570
// 008b4c6e  85f6                 test esi, esi
// 008b4c70  7405                 je 0x8b4c77
// 008b4c72  8d4620               lea eax, [esi + 0x20]
// 008b4c75  eb02                 jmp 0x8b4c79
// 008b4c77  33c0                 xor eax, eax
// 008b4c79  8bce                 mov ecx, esi
// 008b4c7b  894510               mov dword ptr [ebp + 0x10], eax
// 008b4c7e  e8cdfeffff           call 0x8b4b50
// 008b4c83  837e3000             cmp dword ptr [esi + 0x30], 0
// 008b4c87  740e                 je 0x8b4c97
// 008b4c89  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008b4c8c  8b11                 mov edx, dword ptr [ecx]
// 008b4c8e  8d4620               lea eax, [esi + 0x20]
// 008b4c91  50                   push eax
// 008b4c92  8b4234               mov eax, dword ptr [edx + 0x34]
// 008b4c95  ffd0                 call eax
// 008b4c97  5f                   pop edi
// 008b4c98  5e                   pop esi
// 008b4c99  5d                   pop ebp
// 008b4c9a  5b                   pop ebx
// 008b4c9b  c20800               ret 8
// copied from an identical function in another client (function ?_Replace@CXTPDockingPaneSplitterContainer@@AAEXPAVCXTPDockingPaneBase@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp