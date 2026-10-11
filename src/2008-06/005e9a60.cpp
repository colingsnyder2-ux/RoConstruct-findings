// roc 2008-06 005e9a60  unit: RBX::PhysicsService  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9a60
//
// 005e9a60  83ec0c               sub esp, 0xc
// 005e9a63  56                   push esi
// 005e9a64  8bf1                 mov esi, ecx
// 005e9a66  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9a69  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9a6c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005e9a6f  c1f902               sar ecx, 2
// 005e9a72  57                   push edi
// 005e9a73  33c0                 xor eax, eax
// 005e9a75  8d7c2408             lea edi, [esp + 8]
// 005e9a79  89442408             mov dword ptr [esp + 8], eax
// 005e9a7d  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e9a81  89542410             mov dword ptr [esp + 0x10], edx
// 005e9a85  897e1c               mov dword ptr [esi + 0x1c], edi
// 005e9a88  85c9                 test ecx, ecx
// 005e9a8a  764a                 jbe 0x5e9ad6
// 005e9a8c  53                   push ebx
// 005e9a8d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e9a93  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9a96  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9a99  8bf8                 mov edi, eax
// 005e9a9b  c1f902               sar ecx, 2
// 005e9a9e  3bc1                 cmp eax, ecx
// 005e9aa0  7202                 jb 0x5e9aa4
// 005e9aa2  ffd3                 call ebx
// 005e9aa4  8b5610               mov edx, dword ptr [esi + 0x10]
// 005e9aa7  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005e9aaa  50                   push eax
// 005e9aab  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e9aaf  50                   push eax
// 005e9ab0  8bce                 mov ecx, esi
// 005e9ab2  e889fcffff           call 0x5e9740
// 005e9ab7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e9abb  40                   inc eax
// 005e9abc  8944240c             mov dword ptr [esp + 0xc], eax
// 005e9ac0  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e9ac4  72cd                 jb 0x5e9a93
// 005e9ac6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e9aca  5b                   pop ebx
// 005e9acb  5f                   pop edi
// 005e9acc  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e9acf  5e                   pop esi
// 005e9ad0  83c40c               add esp, 0xc
// 005e9ad3  c20400               ret 4
// 005e9ad6  5f                   pop edi
// 005e9ad7  89561c               mov dword ptr [esi + 0x1c], edx
// 005e9ada  5e                   pop esi
// 005e9adb  83c40c               add esp, 0xc
// 005e9ade  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
