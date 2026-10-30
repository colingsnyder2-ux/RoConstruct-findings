// roc 2009-12 008abaa0  unit: CXTPDockingPaneAutoHidePanel  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abaa0
//
// 008abaa0  53                   push ebx
// 008abaa1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008abaa5  56                   push esi
// 008abaa6  57                   push edi
// 008abaa7  8bf1                 mov esi, ecx
// 008abaa9  6a00                 push 0
// 008abaab  8d7e38               lea edi, [esi + 0x38]
// 008abaae  53                   push ebx
// 008abaaf  8bcf                 mov ecx, edi
// 008abab1  e8ba470100           call 0x8c0270
// 008abab6  50                   push eax
// 008abab7  8bcf                 mov ecx, edi
// 008abab9  e8b27a0300           call 0x8e3570
// 008ababe  8b46cc               mov eax, dword ptr [esi - 0x34]
// 008abac1  85c0                 test eax, eax
// 008abac3  740b                 je 0x8abad0
// 008abac5  6a00                 push 0
// 008abac7  6a00                 push 0
// 008abac9  50                   push eax
// 008abaca  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008abad0  8d46ac               lea eax, [esi - 0x54]
// 008abad3  f7d8                 neg eax
// 008abad5  1bc0                 sbb eax, eax
// 008abad7  23c6                 and eax, esi
// 008abad9  6a01                 push 1
// 008abadb  50                   push eax
// 008abadc  8bce                 mov ecx, esi
// 008abade  e85d4d0000           call 0x8b0840
// 008abae3  8bc8                 mov ecx, eax
// 008abae5  e8e6d7f8ff           call 0x8392d0
// 008abaea  837e4400             cmp dword ptr [esi + 0x44], 0
// 008abaee  7511                 jne 0x8abb01
// 008abaf0  837ecc00             cmp dword ptr [esi - 0x34], 0
// 008abaf4  740b                 je 0x8abb01
// 008abaf6  8b46ac               mov eax, dword ptr [esi - 0x54]
// 008abaf9  8b5068               mov edx, dword ptr [eax + 0x68]
// 008abafc  8d4eac               lea ecx, [esi - 0x54]
// 008abaff  ffd2                 call edx
// 008abb01  5f                   pop edi
// 008abb02  5e                   pop esi
// 008abb03  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 008abb0a  5b                   pop ebx
// 008abb0b  c20400               ret 4
// copied from an identical function in another client (function ?RemovePane@CXTPDockingPaneAutoHidePanel@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp