// roc 2008-06 005e9af0  unit: RBX::PhysicsService  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9af0
//
// 005e9af0  83ec0c               sub esp, 0xc
// 005e9af3  56                   push esi
// 005e9af4  8bf1                 mov esi, ecx
// 005e9af6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9af9  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9afc  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005e9aff  c1f902               sar ecx, 2
// 005e9b02  57                   push edi
// 005e9b03  33c0                 xor eax, eax
// 005e9b05  8d7c2408             lea edi, [esp + 8]
// 005e9b09  89442408             mov dword ptr [esp + 8], eax
// 005e9b0d  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e9b11  89542410             mov dword ptr [esp + 0x10], edx
// 005e9b15  897e1c               mov dword ptr [esi + 0x1c], edi
// 005e9b18  85c9                 test ecx, ecx
// 005e9b1a  764a                 jbe 0x5e9b66
// 005e9b1c  53                   push ebx
// 005e9b1d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e9b23  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9b26  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9b29  8bf8                 mov edi, eax
// 005e9b2b  c1f902               sar ecx, 2
// 005e9b2e  3bc1                 cmp eax, ecx
// 005e9b30  7202                 jb 0x5e9b34
// 005e9b32  ffd3                 call ebx
// 005e9b34  8b5610               mov edx, dword ptr [esi + 0x10]
// 005e9b37  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005e9b3a  50                   push eax
// 005e9b3b  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e9b3f  50                   push eax
// 005e9b40  8bce                 mov ecx, esi
// 005e9b42  e8b9fcffff           call 0x5e9800
// 005e9b47  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e9b4b  40                   inc eax
// 005e9b4c  8944240c             mov dword ptr [esp + 0xc], eax
// 005e9b50  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e9b54  72cd                 jb 0x5e9b23
// 005e9b56  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e9b5a  5b                   pop ebx
// 005e9b5b  5f                   pop edi
// 005e9b5c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e9b5f  5e                   pop esi
// 005e9b60  83c40c               add esp, 0xc
// 005e9b63  c20400               ret 4
// 005e9b66  5f                   pop edi
// 005e9b67  89561c               mov dword ptr [esi + 0x1c], edx
// 005e9b6a  5e                   pop esi
// 005e9b6b  83c40c               add esp, 0xc
// 005e9b6e  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/World.cpp
