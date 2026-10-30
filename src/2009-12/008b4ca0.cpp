// roc 2009-12 008b4ca0  unit: CXTPDockingPaneSplitterContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4ca0
//
// 008b4ca0  8b442408             mov eax, dword ptr [esp + 8]
// 008b4ca4  53                   push ebx
// 008b4ca5  56                   push esi
// 008b4ca6  57                   push edi
// 008b4ca7  8bf1                 mov esi, ecx
// 008b4ca9  85c0                 test eax, eax
// 008b4cab  740d                 je 0x8b4cba
// 008b4cad  6a00                 push 0
// 008b4caf  50                   push eax
// 008b4cb0  8d4e58               lea ecx, [esi + 0x58]
// 008b4cb3  e8b8b50000           call 0x8c0270
// 008b4cb8  eb02                 jmp 0x8b4cbc
// 008b4cba  33c0                 xor eax, eax
// 008b4cbc  837c241800           cmp dword ptr [esp + 0x18], 0
// 008b4cc1  7417                 je 0x8b4cda
// 008b4cc3  85c0                 test eax, eax
// 008b4cc5  7503                 jne 0x8b4cca
// 008b4cc7  8b4660               mov eax, dword ptr [esi + 0x60]
// 008b4cca  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008b4cce  53                   push ebx
// 008b4ccf  50                   push eax
// 008b4cd0  8d4e58               lea ecx, [esi + 0x58]
// 008b4cd3  e8f8fdffff           call 0x8b4ad0
// 008b4cd8  eb1a                 jmp 0x8b4cf4
// 008b4cda  85c0                 test eax, eax
// 008b4cdc  7508                 jne 0x8b4ce6
// 008b4cde  8d4e20               lea ecx, [esi + 0x20]
// 008b4ce1  e8aa5afaff           call 0x85a790
// 008b4ce6  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008b4cea  53                   push ebx
// 008b4ceb  50                   push eax
// 008b4cec  8d4e58               lea ecx, [esi + 0x58]
// 008b4cef  e88cfdffff           call 0x8b4a80
// 008b4cf4  85f6                 test esi, esi
// 008b4cf6  7405                 je 0x8b4cfd
// 008b4cf8  8d4620               lea eax, [esi + 0x20]
// 008b4cfb  eb02                 jmp 0x8b4cff
// 008b4cfd  33c0                 xor eax, eax
// 008b4cff  8d7e20               lea edi, [esi + 0x20]
// 008b4d02  894310               mov dword ptr [ebx + 0x10], eax
// 008b4d05  8b07                 mov eax, dword ptr [edi]
// 008b4d07  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b4d0a  55                   push ebp
// 008b4d0b  8b2b                 mov ebp, dword ptr [ebx]
// 008b4d0d  8bcf                 mov ecx, edi
// 008b4d0f  ffd2                 call edx
// 008b4d11  50                   push eax
// 008b4d12  8b452c               mov eax, dword ptr [ebp + 0x2c]
// 008b4d15  8bcb                 mov ecx, ebx
// 008b4d17  ffd0                 call eax
// 008b4d19  6a01                 push 1
// 008b4d1b  57                   push edi
// 008b4d1c  8bcf                 mov ecx, edi
// 008b4d1e  e81dbbffff           call 0x8b0840
// 008b4d23  8bc8                 mov ecx, eax
// 008b4d25  e8a645f8ff           call 0x8392d0
// 008b4d2a  8bce                 mov ecx, esi
// 008b4d2c  e81ffeffff           call 0x8b4b50
// 008b4d31  837e3000             cmp dword ptr [esi + 0x30], 0
// 008b4d35  5d                   pop ebp
// 008b4d36  740b                 je 0x8b4d43
// 008b4d38  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008b4d3b  8b11                 mov edx, dword ptr [ecx]
// 008b4d3d  8b4234               mov eax, dword ptr [edx + 0x34]
// 008b4d40  57                   push edi
// 008b4d41  ffd0                 call eax
// 008b4d43  8b13                 mov edx, dword ptr [ebx]
// 008b4d45  8b423c               mov eax, dword ptr [edx + 0x3c]
// 008b4d48  57                   push edi
// 008b4d49  8bcb                 mov ecx, ebx
// 008b4d4b  ffd0                 call eax
// 008b4d4d  5f                   pop edi
// 008b4d4e  5e                   pop esi
// 008b4d4f  5b                   pop ebx
// 008b4d50  c20c00               ret 0xc
// copied from an identical function in another client (function ?_InsertPane@CXTPDockingPaneSplitterContainer@@AAEXPAVCXTPDockingPaneBase@@0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp