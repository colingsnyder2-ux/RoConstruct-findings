// roc 2009-12 00788420  unit: RBX::UniversalTool  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00788420
//
// 00788420  83ec08               sub esp, 8
// 00788423  53                   push ebx
// 00788424  55                   push ebp
// 00788425  8b2d60b79800         mov ebp, dword ptr [0x98b760]
// 0078842b  56                   push esi
// 0078842c  8bf1                 mov esi, ecx
// 0078842e  8b4624               mov eax, dword ptr [esi + 0x24]
// 00788431  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00788434  8b4e04               mov ecx, dword ptr [esi + 4]
// 00788437  57                   push edi
// 00788438  8d7e04               lea edi, [esi + 4]
// 0078843b  85c0                 test eax, eax
// 0078843d  7404                 je 0x788443
// 0078843f  3bc1                 cmp eax, ecx
// 00788441  7402                 je 0x788445
// 00788443  ffd5                 call ebp
// 00788445  395e28               cmp dword ptr [esi + 0x28], ebx
// 00788448  7454                 je 0x78849e
// 0078844a  8b4624               mov eax, dword ptr [esi + 0x24]
// 0078844d  85c0                 test eax, eax
// 0078844f  7509                 jne 0x78845a
// 00788451  ffd5                 call ebp
// 00788453  8b4624               mov eax, dword ptr [esi + 0x24]
// 00788456  85c0                 test eax, eax
// 00788458  7404                 je 0x78845e
// 0078845a  8b00                 mov eax, dword ptr [eax]
// 0078845c  eb02                 jmp 0x788460
// 0078845e  33c0                 xor eax, eax
// 00788460  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00788463  3b4818               cmp ecx, dword ptr [eax + 0x18]
// 00788466  7502                 jne 0x78846a
// 00788468  ffd5                 call ebp
// 0078846a  8b5628               mov edx, dword ptr [esi + 0x28]
// 0078846d  8b420c               mov eax, dword ptr [edx + 0xc]
// 00788470  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00788474  7528                 jne 0x78849e
// 00788476  8bca                 mov ecx, edx
// 00788478  8b5624               mov edx, dword ptr [esi + 0x24]
// 0078847b  51                   push ecx
// 0078847c  52                   push edx
// 0078847d  8d442418             lea eax, [esp + 0x18]
// 00788481  50                   push eax
// 00788482  8bcf                 mov ecx, edi
// 00788484  e827bccaff           call 0x4340b0
// 00788489  8b08                 mov ecx, dword ptr [eax]
// 0078848b  894e24               mov dword ptr [esi + 0x24], ecx
// 0078848e  8b5004               mov edx, dword ptr [eax + 4]
// 00788491  5f                   pop edi
// 00788492  895628               mov dword ptr [esi + 0x28], edx
// 00788495  5e                   pop esi
// 00788496  5d                   pop ebp
// 00788497  5b                   pop ebx
// 00788498  83c408               add esp, 8
// 0078849b  c20400               ret 4
// 0078849e  8d44241c             lea eax, [esp + 0x1c]
// 007884a2  50                   push eax
// 007884a3  8bcf                 mov ecx, edi
// 007884a5  e8b6ee0200           call 0x7b7360
// 007884aa  5f                   pop edi
// 007884ab  5e                   pop esi
// 007884ac  5d                   pop ebp
// 007884ad  5b                   pop ebx
// 007884ae  83c408               add esp, 8
// 007884b1  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?remove@IMovingManager@RBX@@IAEXPAVIMoving@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/IMoving.cpp
