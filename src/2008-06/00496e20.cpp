// roc 2008-06 00496e20  unit: RBX::Network::Players  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496e20
//
// 00496e20  83ec0c               sub esp, 0xc
// 00496e23  56                   push esi
// 00496e24  8bf1                 mov esi, ecx
// 00496e26  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00496e29  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00496e2c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00496e2f  c1f902               sar ecx, 2
// 00496e32  57                   push edi
// 00496e33  33c0                 xor eax, eax
// 00496e35  8d7c2408             lea edi, [esp + 8]
// 00496e39  89442408             mov dword ptr [esp + 8], eax
// 00496e3d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00496e41  89542410             mov dword ptr [esp + 0x10], edx
// 00496e45  897e1c               mov dword ptr [esi + 0x1c], edi
// 00496e48  85c9                 test ecx, ecx
// 00496e4a  764a                 jbe 0x496e96
// 00496e4c  53                   push ebx
// 00496e4d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00496e53  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00496e56  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00496e59  8bf8                 mov edi, eax
// 00496e5b  c1f902               sar ecx, 2
// 00496e5e  3bc1                 cmp eax, ecx
// 00496e60  7202                 jb 0x496e64
// 00496e62  ffd3                 call ebx
// 00496e64  8b5610               mov edx, dword ptr [esi + 0x10]
// 00496e67  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00496e6a  50                   push eax
// 00496e6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00496e6f  50                   push eax
// 00496e70  8bce                 mov ecx, esi
// 00496e72  e809f8ffff           call 0x496680
// 00496e77  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00496e7b  40                   inc eax
// 00496e7c  8944240c             mov dword ptr [esp + 0xc], eax
// 00496e80  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00496e84  72cd                 jb 0x496e53
// 00496e86  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00496e8a  5b                   pop ebx
// 00496e8b  5f                   pop edi
// 00496e8c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00496e8f  5e                   pop esi
// 00496e90  83c40c               add esp, 0xc
// 00496e93  c20400               ret 4
// 00496e96  5f                   pop edi
// 00496e97  89561c               mov dword ptr [esi + 0x1c], edx
// 00496e9a  5e                   pop esi
// 00496e9b  83c40c               add esp, 0xc
// 00496e9e  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/World.cpp
