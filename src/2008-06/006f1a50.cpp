// roc 2008-06 006f1a50  unit: CXTPControls  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1a50
//
// 006f1a50  53                   push ebx
// 006f1a51  56                   push esi
// 006f1a52  8bf1                 mov esi, ecx
// 006f1a54  837e3000             cmp dword ptr [esi + 0x30], 0
// 006f1a58  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1a5b  57                   push edi
// 006f1a5c  7416                 je 0x6f1a74
// 006f1a5e  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 006f1a64  8b01                 mov eax, dword ptr [ecx]
// 006f1a66  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006f1a6c  83ca02               or edx, 2
// 006f1a6f  52                   push edx
// 006f1a70  ffd0                 call eax
// 006f1a72  eb14                 jmp 0x6f1a88
// 006f1a74  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006f1a7a  8b11                 mov edx, dword ptr [ecx]
// 006f1a7c  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006f1a82  83e0fd               and eax, 0xfffffffd
// 006f1a85  50                   push eax
// 006f1a86  ffd2                 call edx
// 006f1a88  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006f1a8b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006f1a8e  8b5614               mov edx, dword ptr [esi + 0x14]
// 006f1a91  8b7e18               mov edi, dword ptr [esi + 0x18]
// 006f1a94  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 006f1a97  05b0000000           add eax, 0xb0
// 006f1a9c  8908                 mov dword ptr [eax], ecx
// 006f1a9e  895004               mov dword ptr [eax + 4], edx
// 006f1aa1  897808               mov dword ptr [eax + 8], edi
// 006f1aa4  89580c               mov dword ptr [eax + 0xc], ebx
// 006f1aa7  837e3000             cmp dword ptr [esi + 0x30], 0
// 006f1aab  7525                 jne 0x6f1ad2
// 006f1aad  8b3e                 mov edi, dword ptr [esi]
// 006f1aaf  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1ab2  8b11                 mov edx, dword ptr [ecx]
// 006f1ab4  83ec10               sub esp, 0x10
// 006f1ab7  8bc4                 mov eax, esp
// 006f1ab9  8938                 mov dword ptr [eax], edi
// 006f1abb  8b7e04               mov edi, dword ptr [esi + 4]
// 006f1abe  897804               mov dword ptr [eax + 4], edi
// 006f1ac1  8b7e08               mov edi, dword ptr [esi + 8]
// 006f1ac4  897808               mov dword ptr [eax + 8], edi
// 006f1ac7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006f1aca  89780c               mov dword ptr [eax + 0xc], edi
// 006f1acd  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006f1ad0  ffd0                 call eax
// 006f1ad2  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1ad5  8b562c               mov edx, dword ptr [esi + 0x2c]
// 006f1ad8  5f                   pop edi
// 006f1ad9  5e                   pop esi
// 006f1ada  899194000000         mov dword ptr [ecx + 0x94], edx
// 006f1ae0  5b                   pop ebx
// 006f1ae1  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?Detach@XTPBUTTONINFO@CXTPControls@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
