// roc 2008-06 007568b0  unit: CXTPDockingPaneAutoHidePanel  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007568b0
//
// 007568b0  51                   push ecx
// 007568b1  56                   push esi
// 007568b2  57                   push edi
// 007568b3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007568b7  8bf1                 mov esi, ecx
// 007568b9  85ff                 test edi, edi
// 007568bb  0f848a000000         je 0x75694b
// 007568c1  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 007568c7  8d4e54               lea ecx, [esi + 0x54]
// 007568ca  8986ac000000         mov dword ptr [esi + 0xac], eax
// 007568d0  e8cb6b0000           call 0x75d4a0
// 007568d5  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 007568db  83c754               add edi, 0x54
// 007568de  894e68               mov dword ptr [esi + 0x68], ecx
// 007568e1  8bcf                 mov ecx, edi
// 007568e3  897c2408             mov dword ptr [esp + 8], edi
// 007568e7  e8849e0400           call 0x7a0770
// 007568ec  89442410             mov dword ptr [esp + 0x10], eax
// 007568f0  85c0                 test eax, eax
// 007568f2  7457                 je 0x75694b
// 007568f4  53                   push ebx
// 007568f5  55                   push ebp
// 007568f6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007568fa  8d9b00000000         lea ebx, [ebx]
// 00756900  8d542418             lea edx, [esp + 0x18]
// 00756904  52                   push edx
// 00756905  8bcf                 mov ecx, edi
// 00756907  e8749e0400           call 0x7a0780
// 0075690c  8bd8                 mov ebx, eax
// 0075690e  8b03                 mov eax, dword ptr [ebx]
// 00756910  8b5014               mov edx, dword ptr [eax + 0x14]
// 00756913  8bcb                 mov ecx, ebx
// 00756915  ffd2                 call edx
// 00756917  85c0                 test eax, eax
// 00756919  7404                 je 0x75691f
// 0075691b  85ed                 test ebp, ebp
// 0075691d  7423                 je 0x756942
// 0075691f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00756922  8b03                 mov eax, dword ptr [ebx]
// 00756924  8b3e                 mov edi, dword ptr [esi]
// 00756926  8b5044               mov edx, dword ptr [eax + 0x44]
// 00756929  6a00                 push 0
// 0075692b  55                   push ebp
// 0075692c  51                   push ecx
// 0075692d  8bcb                 mov ecx, ebx
// 0075692f  81c748010000         add edi, 0x148
// 00756935  ffd2                 call edx
// 00756937  50                   push eax
// 00756938  8b07                 mov eax, dword ptr [edi]
// 0075693a  8bce                 mov ecx, esi
// 0075693c  ffd0                 call eax
// 0075693e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00756942  837c241800           cmp dword ptr [esp + 0x18], 0
// 00756947  75b7                 jne 0x756900
// 00756949  5d                   pop ebp
// 0075694a  5b                   pop ebx
// 0075694b  5f                   pop edi
// 0075694c  5e                   pop esi
// 0075694d  59                   pop ecx
// 0075694e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?Copy@CXTPDockingPaneAutoHidePanel@@AAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
