// roc 2007-08 006b39e0  unit: CXTPControlComboBoxGalleryPopupBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b39e0
//
// 006b39e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b39e4  53                   push ebx
// 006b39e5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006b39e9  56                   push esi
// 006b39ea  57                   push edi
// 006b39eb  8bf1                 mov esi, ecx
// 006b39ed  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006b39f1  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 006b39f7  50                   push eax
// 006b39f8  51                   push ecx
// 006b39f9  53                   push ebx
// 006b39fa  8bce                 mov ecx, esi
// 006b39fc  e8cf58fcff           call 0x6792d0
// 006b3a01  85c0                 test eax, eax
// 006b3a03  7506                 jne 0x6b3a0b
// 006b3a05  5f                   pop edi
// 006b3a06  5e                   pop esi
// 006b3a07  5b                   pop ebx
// 006b3a08  c20c00               ret 0xc
// 006b3a0b  85db                 test ebx, ebx
// 006b3a0d  7512                 jne 0x6b3a21
// 006b3a0f  6a08                 push 8
// 006b3a11  8bcf                 mov ecx, edi
// 006b3a13  e8888af8ff           call 0x63c4a0
// 006b3a18  5f                   pop edi
// 006b3a19  5e                   pop esi
// 006b3a1a  8d4301               lea eax, [ebx + 1]
// 006b3a1d  5b                   pop ebx
// 006b3a1e  c20c00               ret 0xc
// 006b3a21  8b16                 mov edx, dword ptr [esi]
// 006b3a23  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006b3a29  6a01                 push 1
// 006b3a2b  6a00                 push 0
// 006b3a2d  8bce                 mov ecx, esi
// 006b3a2f  ffd0                 call eax
// 006b3a31  8bcf                 mov ecx, edi
// 006b3a33  e8b84df8ff           call 0x6387f0
// 006b3a38  6a07                 push 7
// 006b3a3a  8bcf                 mov ecx, edi
// 006b3a3c  e85f8af8ff           call 0x63c4a0
// 006b3a41  5f                   pop edi
// 006b3a42  5e                   pop esi
// 006b3a43  b801000000           mov eax, 1
// 006b3a48  5b                   pop ebx
// 006b3a49  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetTrackingMode@CXTPControlComboBoxGalleryPopupBar@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
