// roc 2009-12 008a9c90  unit: CXTPDockingPaneAutoHidePanel  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a9c90
//
// 008a9c90  51                   push ecx
// 008a9c91  56                   push esi
// 008a9c92  57                   push edi
// 008a9c93  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008a9c97  8bf1                 mov esi, ecx
// 008a9c99  85ff                 test edi, edi
// 008a9c9b  0f848a000000         je 0x8a9d2b
// 008a9ca1  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 008a9ca7  8d4e54               lea ecx, [esi + 0x54]
// 008a9caa  8986ac000000         mov dword ptr [esi + 0xac], eax
// 008a9cb0  e88b6b0000           call 0x8b0840
// 008a9cb5  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008a9cbb  83c754               add edi, 0x54
// 008a9cbe  894e68               mov dword ptr [esi + 0x68], ecx
// 008a9cc1  8bcf                 mov ecx, edi
// 008a9cc3  897c2408             mov dword ptr [esp + 8], edi
// 008a9cc7  e8c40afbff           call 0x85a790
// 008a9ccc  89442410             mov dword ptr [esp + 0x10], eax
// 008a9cd0  85c0                 test eax, eax
// 008a9cd2  7457                 je 0x8a9d2b
// 008a9cd4  53                   push ebx
// 008a9cd5  55                   push ebp
// 008a9cd6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008a9cda  8d9b00000000         lea ebx, [ebx]
// 008a9ce0  8d542418             lea edx, [esp + 0x18]
// 008a9ce4  52                   push edx
// 008a9ce5  8bcf                 mov ecx, edi
// 008a9ce7  e824920400           call 0x8f2f10
// 008a9cec  8bd8                 mov ebx, eax
// 008a9cee  8b03                 mov eax, dword ptr [ebx]
// 008a9cf0  8b5014               mov edx, dword ptr [eax + 0x14]
// 008a9cf3  8bcb                 mov ecx, ebx
// 008a9cf5  ffd2                 call edx
// 008a9cf7  85c0                 test eax, eax
// 008a9cf9  7404                 je 0x8a9cff
// 008a9cfb  85ed                 test ebp, ebp
// 008a9cfd  7423                 je 0x8a9d22
// 008a9cff  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008a9d02  8b03                 mov eax, dword ptr [ebx]
// 008a9d04  8b3e                 mov edi, dword ptr [esi]
// 008a9d06  8b5044               mov edx, dword ptr [eax + 0x44]
// 008a9d09  6a00                 push 0
// 008a9d0b  55                   push ebp
// 008a9d0c  51                   push ecx
// 008a9d0d  8bcb                 mov ecx, ebx
// 008a9d0f  81c748010000         add edi, 0x148
// 008a9d15  ffd2                 call edx
// 008a9d17  50                   push eax
// 008a9d18  8b07                 mov eax, dword ptr [edi]
// 008a9d1a  8bce                 mov ecx, esi
// 008a9d1c  ffd0                 call eax
// 008a9d1e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008a9d22  837c241800           cmp dword ptr [esp + 0x18], 0
// 008a9d27  75b7                 jne 0x8a9ce0
// 008a9d29  5d                   pop ebp
// 008a9d2a  5b                   pop ebx
// 008a9d2b  5f                   pop edi
// 008a9d2c  5e                   pop esi
// 008a9d2d  59                   pop ecx
// 008a9d2e  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPDockingPaneAutoHidePanel@@AAEXPAV1@PAV?$CMap@PAVCXTPDockingPaneBase@@PAV1@PAV1@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp