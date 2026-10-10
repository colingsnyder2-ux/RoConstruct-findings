// roc 2008-06 00706a00  unit: CXTColorDialog  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00706a00
//
// 00706a00  53                   push ebx
// 00706a01  56                   push esi
// 00706a02  8bf1                 mov esi, ecx
// 00706a04  e8e5590b00           call 0x7bc3ee
// 00706a09  8bd8                 mov ebx, eax
// 00706a0b  8b06                 mov eax, dword ptr [esi]
// 00706a0d  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00706a13  8bce                 mov ecx, esi
// 00706a15  ffd2                 call edx
// 00706a17  6a00                 push 0
// 00706a19  8bce                 mov ecx, esi
// 00706a1b  e8e6590b00           call 0x7bc406
// 00706a20  8d86b0000000         lea eax, [esi + 0xb0]
// 00706a26  85c0                 test eax, eax
// 00706a28  7449                 je 0x706a73
// 00706a2a  83782000             cmp dword ptr [eax + 0x20], 0
// 00706a2e  7443                 je 0x706a73
// 00706a30  8b4620               mov eax, dword ptr [esi + 0x20]
// 00706a33  57                   push edi
// 00706a34  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 00706a3a  6a00                 push 0
// 00706a3c  6a00                 push 0
// 00706a3e  6a31                 push 0x31
// 00706a40  50                   push eax
// 00706a41  ffd7                 call edi
// 00706a43  50                   push eax
// 00706a44  e881a6f9ff           call 0x6a10ca
// 00706a49  85c0                 test eax, eax
// 00706a4b  7514                 jne 0x706a61
// 00706a4d  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00706a53  6a01                 push 1
// 00706a55  50                   push eax
// 00706a56  6a30                 push 0x30
// 00706a58  51                   push ecx
// 00706a59  ffd7                 call edi
// 00706a5b  5f                   pop edi
// 00706a5c  5e                   pop esi
// 00706a5d  8bc3                 mov eax, ebx
// 00706a5f  5b                   pop ebx
// 00706a60  c3                   ret 
// 00706a61  8b4004               mov eax, dword ptr [eax + 4]
// 00706a64  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00706a6a  6a01                 push 1
// 00706a6c  50                   push eax
// 00706a6d  6a30                 push 0x30
// 00706a6f  51                   push ecx
// 00706a70  ffd7                 call edi
// 00706a72  5f                   pop edi
// 00706a73  5e                   pop esi
// 00706a74  8bc3                 mov eax, ebx
// 00706a76  5b                   pop ebx
// 00706a77  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorDialog.cpp (function ?OnInitDialog@CXTColorDialog@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorDialog.cpp
