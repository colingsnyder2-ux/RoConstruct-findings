// roc 2008-06 0072e400  unit: CXTPControlComboBoxGalleryPopupBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e400
//
// 0072e400  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072e404  53                   push ebx
// 0072e405  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0072e409  56                   push esi
// 0072e40a  57                   push edi
// 0072e40b  8bf1                 mov esi, ecx
// 0072e40d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0072e411  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0072e417  50                   push eax
// 0072e418  51                   push ecx
// 0072e419  53                   push ebx
// 0072e41a  8bce                 mov ecx, esi
// 0072e41c  e87f22fcff           call 0x6f06a0
// 0072e421  85c0                 test eax, eax
// 0072e423  7506                 jne 0x72e42b
// 0072e425  5f                   pop edi
// 0072e426  5e                   pop esi
// 0072e427  5b                   pop ebx
// 0072e428  c20c00               ret 0xc
// 0072e42b  85db                 test ebx, ebx
// 0072e42d  7512                 jne 0x72e441
// 0072e42f  6a08                 push 8
// 0072e431  8bcf                 mov ecx, edi
// 0072e433  e808f3f7ff           call 0x6ad740
// 0072e438  5f                   pop edi
// 0072e439  5e                   pop esi
// 0072e43a  8d4301               lea eax, [ebx + 1]
// 0072e43d  5b                   pop ebx
// 0072e43e  c20c00               ret 0xc
// 0072e441  8b16                 mov edx, dword ptr [esi]
// 0072e443  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0072e449  6a01                 push 1
// 0072e44b  6a00                 push 0
// 0072e44d  8bce                 mov ecx, esi
// 0072e44f  ffd0                 call eax
// 0072e451  8bcf                 mov ecx, edi
// 0072e453  e828b3f7ff           call 0x6a9780
// 0072e458  6a07                 push 7
// 0072e45a  8bcf                 mov ecx, edi
// 0072e45c  e8dff2f7ff           call 0x6ad740
// 0072e461  5f                   pop edi
// 0072e462  5e                   pop esi
// 0072e463  b801000000           mov eax, 1
// 0072e468  5b                   pop ebx
// 0072e469  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?SetTrackingMode@CXTPControlComboBoxGalleryPopupBar@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
