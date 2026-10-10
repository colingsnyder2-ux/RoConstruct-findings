// roc 2008-06 006ed3e0  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed3e0
//
// 006ed3e0  51                   push ecx
// 006ed3e1  55                   push ebp
// 006ed3e2  56                   push esi
// 006ed3e3  8bf1                 mov esi, ecx
// 006ed3e5  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 006ed3e8  85ed                 test ebp, ebp
// 006ed3ea  0f841b010000         je 0x6ed50b
// 006ed3f0  53                   push ebx
// 006ed3f1  57                   push edi
// 006ed3f2  6a00                 push 0
// 006ed3f4  8bcd                 mov ecx, ebp
// 006ed3f6  e8f563fbff           call 0x6a37f0
// 006ed3fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ed3ff  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006ed403  8d442410             lea eax, [esp + 0x10]
// 006ed407  50                   push eax
// 006ed408  51                   push ecx
// 006ed409  52                   push edx
// 006ed40a  8bce                 mov ecx, esi
// 006ed40c  e8e7eb0c00           call 0x7bbff8
// 006ed411  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ed416  8bf8                 mov edi, eax
// 006ed418  0f85e4000000         jne 0x6ed502
// 006ed41e  837e5800             cmp dword ptr [esi + 0x58], 0
// 006ed422  0f84da000000         je 0x6ed502
// 006ed428  8b4620               mov eax, dword ptr [esi + 0x20]
// 006ed42b  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 006ed431  6a00                 push 0
// 006ed433  57                   push edi
// 006ed434  6886010000           push 0x186
// 006ed439  50                   push eax
// 006ed43a  ffd3                 call ebx
// 006ed43c  83f8ff               cmp eax, -1
// 006ed43f  0f84bd000000         je 0x6ed502
// 006ed445  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006ed448  6a00                 push 0
// 006ed44a  57                   push edi
// 006ed44b  6899010000           push 0x199
// 006ed450  51                   push ecx
// 006ed451  ffd3                 call ebx
// 006ed453  8bf8                 mov edi, eax
// 006ed455  8b4638               mov eax, dword ptr [esi + 0x38]
// 006ed458  85c0                 test eax, eax
// 006ed45a  750a                 jne 0x6ed466
// 006ed45c  8b5620               mov edx, dword ptr [esi + 0x20]
// 006ed45f  52                   push edx
// 006ed460  ff15f82d8000         call dword ptr [0x802df8]
// 006ed466  50                   push eax
// 006ed467  e87237fbff           call 0x6a0bde
// 006ed46c  8bd8                 mov ebx, eax
// 006ed46e  85db                 test ebx, ebx
// 006ed470  7428                 je 0x6ed49a
// 006ed472  8bce                 mov ecx, esi
// 006ed474  e8af35fbff           call 0x6a0a28
// 006ed479  8b4620               mov eax, dword ptr [esi + 0x20]
// 006ed47c  50                   push eax
// 006ed47d  8bce                 mov ecx, esi
// 006ed47f  e802ee0c00           call 0x7bc286
// 006ed484  0fb7c8               movzx ecx, ax
// 006ed487  81c900000100         or ecx, 0x10000
// 006ed48d  51                   push ecx
// 006ed48e  6811010000           push 0x111
// 006ed493  8bcb                 mov ecx, ebx
// 006ed495  e8063ed2ff           call 0x4112a0
// 006ed49a  85ff                 test edi, edi
// 006ed49c  7464                 je 0x6ed502
// 006ed49e  8b17                 mov edx, dword ptr [edi]
// 006ed4a0  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006ed4a6  8bcf                 mov ecx, edi
// 006ed4a8  ffd0                 call eax
// 006ed4aa  85c0                 test eax, eax
// 006ed4ac  7441                 je 0x6ed4ef
// 006ed4ae  8b17                 mov edx, dword ptr [edi]
// 006ed4b0  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006ed4b6  8bcf                 mov ecx, edi
// 006ed4b8  ffd0                 call eax
// 006ed4ba  8bc8                 mov ecx, eax
// 006ed4bc  e8df86fcff           call 0x6b5ba0
// 006ed4c1  85c0                 test eax, eax
// 006ed4c3  752a                 jne 0x6ed4ef
// 006ed4c5  8b17                 mov edx, dword ptr [edi]
// 006ed4c7  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006ed4cd  6a01                 push 1
// 006ed4cf  8bcf                 mov ecx, edi
// 006ed4d1  ffd0                 call eax
// 006ed4d3  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 006ed4d6  8bf0                 mov esi, eax
// 006ed4d8  6a01                 push 1
// 006ed4da  56                   push esi
// 006ed4db  e890d10200           call 0x71a670
// 006ed4e0  8bce                 mov ecx, esi
// 006ed4e2  e8fd36fbff           call 0x6a0be4
// 006ed4e7  5f                   pop edi
// 006ed4e8  5b                   pop ebx
// 006ed4e9  5e                   pop esi
// 006ed4ea  5d                   pop ebp
// 006ed4eb  59                   pop ecx
// 006ed4ec  c20c00               ret 0xc
// 006ed4ef  8b4d4c               mov ecx, dword ptr [ebp + 0x4c]
// 006ed4f2  6a01                 push 1
// 006ed4f4  57                   push edi
// 006ed4f5  e876d10200           call 0x71a670
// 006ed4fa  5f                   pop edi
// 006ed4fb  5b                   pop ebx
// 006ed4fc  5e                   pop esi
// 006ed4fd  5d                   pop ebp
// 006ed4fe  59                   pop ecx
// 006ed4ff  c20c00               ret 0xc
// 006ed502  8bce                 mov ecx, esi
// 006ed504  e85f37fbff           call 0x6a0c68
// 006ed509  5f                   pop edi
// 006ed50a  5b                   pop ebx
// 006ed50b  5e                   pop esi
// 006ed50c  5d                   pop ebp
// 006ed50d  59                   pop ecx
// 006ed50e  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?OnLButtonDown@CXTPCustomizeCommandsListBox@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeCommandsPage.cpp
