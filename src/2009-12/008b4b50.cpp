// roc 2009-12 008b4b50  unit: CXTPDockingPaneSplitterContainer  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4b50
//
// 008b4b50  51                   push ecx
// 008b4b51  56                   push esi
// 008b4b52  8bf1                 mov esi, ecx
// 008b4b54  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 008b4b5b  0f85d5000000         jne 0x8b4c36
// 008b4b61  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008b4b64  83b88000000000       cmp dword ptr [eax + 0x80], 0
// 008b4b6b  0f85c5000000         jne 0x8b4c36
// 008b4b71  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008b4b78  57                   push edi
// 008b4b79  7424                 je 0x8b4b9f
// 008b4b7b  8d7e74               lea edi, [esi + 0x74]
// 008b4b7e  8bff                 mov edi, edi
// 008b4b80  8bcf                 mov ecx, edi
// 008b4b82  e8c937ffff           call 0x8a8350
// 008b4b87  85c0                 test eax, eax
// 008b4b89  740b                 je 0x8b4b96
// 008b4b8b  8b10                 mov edx, dword ptr [eax]
// 008b4b8d  8bc8                 mov ecx, eax
// 008b4b8f  8b4204               mov eax, dword ptr [edx + 4]
// 008b4b92  6a01                 push 1
// 008b4b94  ffd0                 call eax
// 008b4b96  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 008b4b9d  75e1                 jne 0x8b4b80
// 008b4b9f  837e6401             cmp dword ptr [esi + 0x64], 1
// 008b4ba3  0f8e8c000000         jle 0x8b4c35
// 008b4ba9  8d7e20               lea edi, [esi + 0x20]
// 008b4bac  8bcf                 mov ecx, edi
// 008b4bae  e8dd5bfaff           call 0x85a790
// 008b4bb3  89442408             mov dword ptr [esp + 8], eax
// 008b4bb7  85c0                 test eax, eax
// 008b4bb9  747a                 je 0x8b4c35
// 008b4bbb  53                   push ebx
// 008b4bbc  8d642400             lea esp, [esp]
// 008b4bc0  8d4c240c             lea ecx, [esp + 0xc]
// 008b4bc4  51                   push ecx
// 008b4bc5  8bcf                 mov ecx, edi
// 008b4bc7  e844e30300           call 0x8f2f10
// 008b4bcc  8bd8                 mov ebx, eax
// 008b4bce  8b13                 mov edx, dword ptr [ebx]
// 008b4bd0  8b4214               mov eax, dword ptr [edx + 0x14]
// 008b4bd3  8bcb                 mov ecx, ebx
// 008b4bd5  ffd0                 call eax
// 008b4bd7  85c0                 test eax, eax
// 008b4bd9  740c                 je 0x8b4be7
// 008b4bdb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008b4be0  75de                 jne 0x8b4bc0
// 008b4be2  5b                   pop ebx
// 008b4be3  5f                   pop edi
// 008b4be4  5e                   pop esi
// 008b4be5  59                   pop ecx
// 008b4be6  c3                   ret 
// 008b4be7  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008b4bec  7446                 je 0x8b4c34
// 008b4bee  55                   push ebp
// 008b4bef  90                   nop 
// 008b4bf0  8d4c2410             lea ecx, [esp + 0x10]
// 008b4bf4  51                   push ecx
// 008b4bf5  8d4e20               lea ecx, [esi + 0x20]
// 008b4bf8  e813e30300           call 0x8f2f10
// 008b4bfd  8bf8                 mov edi, eax
// 008b4bff  8b17                 mov edx, dword ptr [edi]
// 008b4c01  8b4214               mov eax, dword ptr [edx + 0x14]
// 008b4c04  8bcf                 mov ecx, edi
// 008b4c06  ffd0                 call eax
// 008b4c08  85c0                 test eax, eax
// 008b4c0a  7520                 jne 0x8b4c2c
// 008b4c0c  8b16                 mov edx, dword ptr [esi]
// 008b4c0e  8b4258               mov eax, dword ptr [edx + 0x58]
// 008b4c11  8bce                 mov ecx, esi
// 008b4c13  ffd0                 call eax
// 008b4c15  57                   push edi
// 008b4c16  8be8                 mov ebp, eax
// 008b4c18  53                   push ebx
// 008b4c19  56                   push esi
// 008b4c1a  8bcd                 mov ecx, ebp
// 008b4c1c  e80ff1ffff           call 0x8b3d30
// 008b4c21  55                   push ebp
// 008b4c22  8d4e74               lea ecx, [esi + 0x74]
// 008b4c25  e856ef0000           call 0x8c3b80
// 008b4c2a  8bdf                 mov ebx, edi
// 008b4c2c  837c241000           cmp dword ptr [esp + 0x10], 0
// 008b4c31  75bd                 jne 0x8b4bf0
// 008b4c33  5d                   pop ebp
// 008b4c34  5b                   pop ebx
// 008b4c35  5f                   pop edi
// 008b4c36  5e                   pop esi
// 008b4c37  59                   pop ecx
// 008b4c38  c3                   ret 
// copied from an identical function in another client (function ?_UpdateSplitters@CXTPDockingPaneSplitterContainer@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp