// roc 2008-06 00614c20  unit: RBX::RevoluteLink  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614c20
//
// 00614c20  83ec08               sub esp, 8
// 00614c23  53                   push ebx
// 00614c24  55                   push ebp
// 00614c25  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00614c2b  56                   push esi
// 00614c2c  8bf1                 mov esi, ecx
// 00614c2e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00614c31  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00614c34  8b4e04               mov ecx, dword ptr [esi + 4]
// 00614c37  57                   push edi
// 00614c38  8d7e04               lea edi, [esi + 4]
// 00614c3b  85c0                 test eax, eax
// 00614c3d  7404                 je 0x614c43
// 00614c3f  3bc1                 cmp eax, ecx
// 00614c41  7402                 je 0x614c45
// 00614c43  ffd5                 call ebp
// 00614c45  395e28               cmp dword ptr [esi + 0x28], ebx
// 00614c48  7454                 je 0x614c9e
// 00614c4a  8b4624               mov eax, dword ptr [esi + 0x24]
// 00614c4d  85c0                 test eax, eax
// 00614c4f  7509                 jne 0x614c5a
// 00614c51  ffd5                 call ebp
// 00614c53  8b4624               mov eax, dword ptr [esi + 0x24]
// 00614c56  85c0                 test eax, eax
// 00614c58  7404                 je 0x614c5e
// 00614c5a  8b00                 mov eax, dword ptr [eax]
// 00614c5c  eb02                 jmp 0x614c60
// 00614c5e  33c0                 xor eax, eax
// 00614c60  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00614c63  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00614c66  7502                 jne 0x614c6a
// 00614c68  ffd5                 call ebp
// 00614c6a  8b5628               mov edx, dword ptr [esi + 0x28]
// 00614c6d  8b420c               mov eax, dword ptr [edx + 0xc]
// 00614c70  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00614c74  7528                 jne 0x614c9e
// 00614c76  8bca                 mov ecx, edx
// 00614c78  8b5624               mov edx, dword ptr [esi + 0x24]
// 00614c7b  51                   push ecx
// 00614c7c  52                   push edx
// 00614c7d  8d442418             lea eax, [esp + 0x18]
// 00614c81  50                   push eax
// 00614c82  8bcf                 mov ecx, edi
// 00614c84  e8975d0300           call 0x64aa20
// 00614c89  8b08                 mov ecx, dword ptr [eax]
// 00614c8b  894e24               mov dword ptr [esi + 0x24], ecx
// 00614c8e  8b5004               mov edx, dword ptr [eax + 4]
// 00614c91  5f                   pop edi
// 00614c92  895628               mov dword ptr [esi + 0x28], edx
// 00614c95  5e                   pop esi
// 00614c96  5d                   pop ebp
// 00614c97  5b                   pop ebx
// 00614c98  83c408               add esp, 8
// 00614c9b  c20400               ret 4
// 00614c9e  8d44241c             lea eax, [esp + 0x1c]
// 00614ca2  50                   push eax
// 00614ca3  8bcf                 mov ecx, edi
// 00614ca5  e8b652fdff           call 0x5e9f60
// 00614caa  5f                   pop edi
// 00614cab  5e                   pop esi
// 00614cac  5d                   pop ebp
// 00614cad  5b                   pop ebx
// 00614cae  83c408               add esp, 8
// 00614cb1  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?remove@IMovingManager@RBX@@IAEXPAVIMoving@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
