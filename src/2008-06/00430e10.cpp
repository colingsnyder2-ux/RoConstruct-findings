// roc 2008-06 00430e10  unit: CMainFrame  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430e10
//
// 00430e10  83ec0c               sub esp, 0xc
// 00430e13  56                   push esi
// 00430e14  8bf1                 mov esi, ecx
// 00430e16  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00430e19  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00430e1c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00430e1f  c1f902               sar ecx, 2
// 00430e22  57                   push edi
// 00430e23  33c0                 xor eax, eax
// 00430e25  8d7c2408             lea edi, [esp + 8]
// 00430e29  89442408             mov dword ptr [esp + 8], eax
// 00430e2d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00430e31  89542410             mov dword ptr [esp + 0x10], edx
// 00430e35  897e1c               mov dword ptr [esi + 0x1c], edi
// 00430e38  85c9                 test ecx, ecx
// 00430e3a  764a                 jbe 0x430e86
// 00430e3c  53                   push ebx
// 00430e3d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00430e43  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00430e46  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 00430e49  8bf8                 mov edi, eax
// 00430e4b  c1f902               sar ecx, 2
// 00430e4e  3bc1                 cmp eax, ecx
// 00430e50  7202                 jb 0x430e54
// 00430e52  ffd3                 call ebx
// 00430e54  8b5610               mov edx, dword ptr [esi + 0x10]
// 00430e57  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00430e5a  50                   push eax
// 00430e5b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00430e5f  50                   push eax
// 00430e60  8bce                 mov ecx, esi
// 00430e62  e889f7ffff           call 0x4305f0
// 00430e67  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00430e6b  40                   inc eax
// 00430e6c  8944240c             mov dword ptr [esp + 0xc], eax
// 00430e70  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00430e74  72cd                 jb 0x430e43
// 00430e76  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00430e7a  5b                   pop ebx
// 00430e7b  5f                   pop edi
// 00430e7c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00430e7f  5e                   pop esi
// 00430e80  83c40c               add esp, 0xc
// 00430e83  c20400               ret 4
// 00430e86  5f                   pop edi
// 00430e87  89561c               mov dword ptr [esi + 0x1c], edx
// 00430e8a  5e                   pop esi
// 00430e8b  83c40c               add esp, 0xc
// 00430e8e  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
