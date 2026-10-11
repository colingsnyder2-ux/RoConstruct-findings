// roc 2010-06 00720b80  unit: RBX::UniversalTool  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720b80
//
// 00720b80  83ec08               sub esp, 8
// 00720b83  53                   push ebx
// 00720b84  55                   push ebp
// 00720b85  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 00720b8b  56                   push esi
// 00720b8c  8bf1                 mov esi, ecx
// 00720b8e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00720b91  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00720b94  8b4e04               mov ecx, dword ptr [esi + 4]
// 00720b97  57                   push edi
// 00720b98  8d7e04               lea edi, [esi + 4]
// 00720b9b  85c0                 test eax, eax
// 00720b9d  7404                 je 0x720ba3
// 00720b9f  3bc1                 cmp eax, ecx
// 00720ba1  7402                 je 0x720ba5
// 00720ba3  ffd5                 call ebp
// 00720ba5  395e28               cmp dword ptr [esi + 0x28], ebx
// 00720ba8  7454                 je 0x720bfe
// 00720baa  8b4624               mov eax, dword ptr [esi + 0x24]
// 00720bad  85c0                 test eax, eax
// 00720baf  7509                 jne 0x720bba
// 00720bb1  ffd5                 call ebp
// 00720bb3  8b4624               mov eax, dword ptr [esi + 0x24]
// 00720bb6  85c0                 test eax, eax
// 00720bb8  7404                 je 0x720bbe
// 00720bba  8b00                 mov eax, dword ptr [eax]
// 00720bbc  eb02                 jmp 0x720bc0
// 00720bbe  33c0                 xor eax, eax
// 00720bc0  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00720bc3  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00720bc6  7502                 jne 0x720bca
// 00720bc8  ffd5                 call ebp
// 00720bca  8b5628               mov edx, dword ptr [esi + 0x28]
// 00720bcd  8b420c               mov eax, dword ptr [edx + 0xc]
// 00720bd0  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00720bd4  7528                 jne 0x720bfe
// 00720bd6  8bca                 mov ecx, edx
// 00720bd8  8b5624               mov edx, dword ptr [esi + 0x24]
// 00720bdb  51                   push ecx
// 00720bdc  52                   push edx
// 00720bdd  8d442418             lea eax, [esp + 0x18]
// 00720be1  50                   push eax
// 00720be2  8bcf                 mov ecx, edi
// 00720be4  e8674ad1ff           call 0x435650
// 00720be9  8b08                 mov ecx, dword ptr [eax]
// 00720beb  894e24               mov dword ptr [esi + 0x24], ecx
// 00720bee  8b5004               mov edx, dword ptr [eax + 4]
// 00720bf1  5f                   pop edi
// 00720bf2  895628               mov dword ptr [esi + 0x28], edx
// 00720bf5  5e                   pop esi
// 00720bf6  5d                   pop ebp
// 00720bf7  5b                   pop ebx
// 00720bf8  83c408               add esp, 8
// 00720bfb  c20400               ret 4
// 00720bfe  8d44241c             lea eax, [esp + 0x1c]
// 00720c02  50                   push eax
// 00720c03  8bcf                 mov ecx, edi
// 00720c05  e8562eeeff           call 0x603a60
// 00720c0a  5f                   pop edi
// 00720c0b  5e                   pop esi
// 00720c0c  5d                   pop ebp
// 00720c0d  5b                   pop ebx
// 00720c0e  83c408               add esp, 8
// 00720c11  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?remove@IMovingManager@RBX@@IAEXPAVIMoving@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
