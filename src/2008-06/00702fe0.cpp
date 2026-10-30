// from server: 100% by auto
// roc 2008-06 00702fe0  unit: CXTPTabClientWnd  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702fe0
//
// 00702fe0  83ec1c               sub esp, 0x1c
// 00702fe3  53                   push ebx
// 00702fe4  56                   push esi
// 00702fe5  57                   push edi
// 00702fe6  8b3db02d8000         mov edi, dword ptr [0x802db0]
// 00702fec  6a00                 push 0
// 00702fee  6a0f                 push 0xf
// 00702ff0  6a0f                 push 0xf
// 00702ff2  6a00                 push 0
// 00702ff4  8d44241c             lea eax, [esp + 0x1c]
// 00702ff8  50                   push eax
// 00702ff9  8bf1                 mov esi, ecx
// 00702ffb  ffd7                 call edi
// 00702ffd  85c0                 test eax, eax
// 00702fff  7439                 je 0x70303a
// 00703001  8b1dc82c8000         mov ebx, dword ptr [0x802cc8]
// 00703007  6a0f                 push 0xf
// 00703009  6a0f                 push 0xf
// 0070300b  6a00                 push 0
// 0070300d  8d4c2418             lea ecx, [esp + 0x18]
// 00703011  51                   push ecx
// 00703012  ff15782c8000         call dword ptr [0x802c78]
// 00703018  85c0                 test eax, eax
// 0070301a  0f8493000000         je 0x7030b3
// 00703020  8d54240c             lea edx, [esp + 0xc]
// 00703024  52                   push edx
// 00703025  ffd3                 call ebx
// 00703027  6a00                 push 0
// 00703029  6a0f                 push 0xf
// 0070302b  6a0f                 push 0xf
// 0070302d  6a00                 push 0
// 0070302f  8d44241c             lea eax, [esp + 0x1c]
// 00703033  50                   push eax
// 00703034  ffd7                 call edi
// 00703036  85c0                 test eax, eax
// 00703038  75cd                 jne 0x703007
// 0070303a  8b3d7c2c8000         mov edi, dword ptr [0x802c7c]
// 00703040  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00703046  51                   push ecx
// 00703047  ffd7                 call edi
// 00703049  8d96dc000000         lea edx, [esi + 0xdc]
// 0070304f  52                   push edx
// 00703050  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 0070305a  c7860801000000000000 mov dword ptr [esi + 0x108], 0
// 00703064  ffd7                 call edi
// 00703066  c786f000000000000000 mov dword ptr [esi + 0xf0], 0
// 00703070  ff154c2b8000         call dword ptr [0x802b4c]
// 00703076  50                   push eax
// 00703077  e862dbf9ff           call 0x6a0bde
// 0070307c  8bf8                 mov edi, eax
// 0070307e  8b4720               mov eax, dword ptr [edi + 0x20]
// 00703081  50                   push eax
// 00703082  ff15482b8000         call dword ptr [0x802b48]
// 00703088  85c0                 test eax, eax
// 0070308a  740d                 je 0x703099
// 0070308c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0070308f  6803040000           push 0x403
// 00703094  6a00                 push 0
// 00703096  51                   push ecx
// 00703097  eb08                 jmp 0x7030a1
// 00703099  8b5720               mov edx, dword ptr [edi + 0x20]
// 0070309c  6a03                 push 3
// 0070309e  6a00                 push 0
// 007030a0  52                   push edx
// 007030a1  ff15442b8000         call dword ptr [0x802b44]
// 007030a7  50                   push eax
// 007030a8  e87b8f0b00           call 0x7bc028
// 007030ad  898610010000         mov dword ptr [esi + 0x110], eax
// 007030b3  5f                   pop edi
// 007030b4  5e                   pop esi
// 007030b5  5b                   pop ebx
// 007030b6  83c41c               add esp, 0x1c
// 007030b9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?InitLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
