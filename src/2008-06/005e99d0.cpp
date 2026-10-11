// roc 2008-06 005e99d0  unit: RBX::PhysicsService  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e99d0
//
// 005e99d0  83ec0c               sub esp, 0xc
// 005e99d3  56                   push esi
// 005e99d4  8bf1                 mov esi, ecx
// 005e99d6  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e99d9  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e99dc  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005e99df  c1f902               sar ecx, 2
// 005e99e2  57                   push edi
// 005e99e3  33c0                 xor eax, eax
// 005e99e5  8d7c2408             lea edi, [esp + 8]
// 005e99e9  89442408             mov dword ptr [esp + 8], eax
// 005e99ed  894c240c             mov dword ptr [esp + 0xc], ecx
// 005e99f1  89542410             mov dword ptr [esp + 0x10], edx
// 005e99f5  897e1c               mov dword ptr [esi + 0x1c], edi
// 005e99f8  85c9                 test ecx, ecx
// 005e99fa  764a                 jbe 0x5e9a46
// 005e99fc  53                   push ebx
// 005e99fd  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005e9a03  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005e9a06  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005e9a09  8bf8                 mov edi, eax
// 005e9a0b  c1f902               sar ecx, 2
// 005e9a0e  3bc1                 cmp eax, ecx
// 005e9a10  7202                 jb 0x5e9a14
// 005e9a12  ffd3                 call ebx
// 005e9a14  8b5610               mov edx, dword ptr [esi + 0x10]
// 005e9a17  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005e9a1a  50                   push eax
// 005e9a1b  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e9a1f  50                   push eax
// 005e9a20  8bce                 mov ecx, esi
// 005e9a22  e859fcffff           call 0x5e9680
// 005e9a27  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e9a2b  40                   inc eax
// 005e9a2c  8944240c             mov dword ptr [esp + 0xc], eax
// 005e9a30  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005e9a34  72cd                 jb 0x5e9a03
// 005e9a36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005e9a3a  5b                   pop ebx
// 005e9a3b  5f                   pop edi
// 005e9a3c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005e9a3f  5e                   pop esi
// 005e9a40  83c40c               add esp, 0xc
// 005e9a43  c20400               ret 4
// 005e9a46  5f                   pop edi
// 005e9a47  89561c               mov dword ptr [esi + 0x1c], edx
// 005e9a4a  5e                   pop esi
// 005e9a4b  83c40c               add esp, 0xc
// 005e9a4e  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
