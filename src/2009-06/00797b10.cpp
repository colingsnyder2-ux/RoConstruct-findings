// roc 2009-06 00797b10  unit: CXTPRibbonTheme  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00797b10
//
// 00797b10  83ec30               sub esp, 0x30
// 00797b13  53                   push ebx
// 00797b14  55                   push ebp
// 00797b15  56                   push esi
// 00797b16  57                   push edi
// 00797b17  8bf9                 mov edi, ecx
// 00797b19  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00797b1d  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00797b20  8d442420             lea eax, [esp + 0x20]
// 00797b24  50                   push eax
// 00797b25  52                   push edx
// 00797b26  ff1514ee8900         call dword ptr [0x89ee14]
// 00797b2c  68d0099000           push 0x9009d0
// 00797b31  8bcf                 mov ecx, edi
// 00797b33  e888c20000           call 0x7a3dc0
// 00797b38  8bf0                 mov esi, eax
// 00797b3a  85f6                 test esi, esi
// 00797b3c  7512                 jne 0x797b50
// 00797b3e  68c0099000           push 0x9009c0
// 00797b43  8bcf                 mov ecx, edi
// 00797b45  e876c20000           call 0x7a3dc0
// 00797b4a  8bf0                 mov esi, eax
// 00797b4c  85f6                 test esi, esi
// 00797b4e  745b                 je 0x797bab
// 00797b50  6a01                 push 1
// 00797b52  bd04000000           mov ebp, 4
// 00797b57  6a00                 push 0
// 00797b59  8d442438             lea eax, [esp + 0x38]
// 00797b5d  50                   push eax
// 00797b5e  8bce                 mov ecx, esi
// 00797b60  8bfd                 mov edi, ebp
// 00797b62  8bdd                 mov ebx, ebp
// 00797b64  896c2428             mov dword ptr [esp + 0x28], ebp
// 00797b68  e853e20600           call 0x805dc0
// 00797b6d  83ec10               sub esp, 0x10
// 00797b70  8bcc                 mov ecx, esp
// 00797b72  8939                 mov dword ptr [ecx], edi
// 00797b74  895904               mov dword ptr [ecx + 4], ebx
// 00797b77  896908               mov dword ptr [ecx + 8], ebp
// 00797b7a  83ec10               sub esp, 0x10
// 00797b7d  8bd5                 mov edx, ebp
// 00797b7f  89510c               mov dword ptr [ecx + 0xc], edx
// 00797b82  8b10                 mov edx, dword ptr [eax]
// 00797b84  8bcc                 mov ecx, esp
// 00797b86  8911                 mov dword ptr [ecx], edx
// 00797b88  8b5004               mov edx, dword ptr [eax + 4]
// 00797b8b  895104               mov dword ptr [ecx + 4], edx
// 00797b8e  8b5008               mov edx, dword ptr [eax + 8]
// 00797b91  8b400c               mov eax, dword ptr [eax + 0xc]
// 00797b94  895108               mov dword ptr [ecx + 8], edx
// 00797b97  8b542464             mov edx, dword ptr [esp + 0x64]
// 00797b9b  89410c               mov dword ptr [ecx + 0xc], eax
// 00797b9e  8d4c2440             lea ecx, [esp + 0x40]
// 00797ba2  51                   push ecx
// 00797ba3  52                   push edx
// 00797ba4  8bce                 mov ecx, esi
// 00797ba6  e8e5da0600           call 0x805690
// 00797bab  5f                   pop edi
// 00797bac  5e                   pop esi
// 00797bad  5d                   pop ebp
// 00797bae  5b                   pop ebx
// 00797baf  83c430               add esp, 0x30
// 00797bb2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillMorePopupToolBarEntry@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
