// roc 2009-12 008b4d60  unit: CXTPDockingPaneSplitterContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4d60
//
// 008b4d60  53                   push ebx
// 008b4d61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008b4d65  56                   push esi
// 008b4d66  57                   push edi
// 008b4d67  8bf1                 mov esi, ecx
// 008b4d69  6a00                 push 0
// 008b4d6b  8d7e38               lea edi, [esi + 0x38]
// 008b4d6e  53                   push ebx
// 008b4d6f  8bcf                 mov ecx, edi
// 008b4d71  e8fab40000           call 0x8c0270
// 008b4d76  50                   push eax
// 008b4d77  8bcf                 mov ecx, edi
// 008b4d79  e8f2e70200           call 0x8e3570
// 008b4d7e  8d4ee0               lea ecx, [esi - 0x20]
// 008b4d81  e8cafdffff           call 0x8b4b50
// 008b4d86  8d7ee0               lea edi, [esi - 0x20]
// 008b4d89  8bc7                 mov eax, edi
// 008b4d8b  f7d8                 neg eax
// 008b4d8d  1bc0                 sbb eax, eax
// 008b4d8f  23c6                 and eax, esi
// 008b4d91  6a01                 push 1
// 008b4d93  50                   push eax
// 008b4d94  8bce                 mov ecx, esi
// 008b4d96  e8a5baffff           call 0x8b0840
// 008b4d9b  8bc8                 mov ecx, eax
// 008b4d9d  e82e45f8ff           call 0x8392d0
// 008b4da2  837e1000             cmp dword ptr [esi + 0x10], 0
// 008b4da6  7413                 je 0x8b4dbb
// 008b4da8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b4dab  8b11                 mov edx, dword ptr [ecx]
// 008b4dad  8bc7                 mov eax, edi
// 008b4daf  f7d8                 neg eax
// 008b4db1  1bc0                 sbb eax, eax
// 008b4db3  23c6                 and eax, esi
// 008b4db5  50                   push eax
// 008b4db6  8b4234               mov eax, dword ptr [edx + 0x34]
// 008b4db9  ffd0                 call eax
// 008b4dbb  837e4400             cmp dword ptr [esi + 0x44], 0
// 008b4dbf  7511                 jne 0x8b4dd2
// 008b4dc1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b4dc4  8b11                 mov edx, dword ptr [ecx]
// 008b4dc6  8b4248               mov eax, dword ptr [edx + 0x48]
// 008b4dc9  f7df                 neg edi
// 008b4dcb  1bff                 sbb edi, edi
// 008b4dcd  23fe                 and edi, esi
// 008b4dcf  57                   push edi
// 008b4dd0  ffd0                 call eax
// 008b4dd2  5f                   pop edi
// 008b4dd3  5e                   pop esi
// 008b4dd4  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 008b4ddb  5b                   pop ebx
// 008b4ddc  c20400               ret 4
// copied from an identical function in another client (function ?RemovePane@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp