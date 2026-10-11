// roc 2008-06 005a1530  unit: RBX::PartTool  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1530
//
// 005a1530  83ec0c               sub esp, 0xc
// 005a1533  56                   push esi
// 005a1534  8bf1                 mov esi, ecx
// 005a1536  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a1539  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005a153c  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005a153f  c1f902               sar ecx, 2
// 005a1542  57                   push edi
// 005a1543  33c0                 xor eax, eax
// 005a1545  8d7c2408             lea edi, [esp + 8]
// 005a1549  89442408             mov dword ptr [esp + 8], eax
// 005a154d  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a1551  89542410             mov dword ptr [esp + 0x10], edx
// 005a1555  897e1c               mov dword ptr [esi + 0x1c], edi
// 005a1558  85c9                 test ecx, ecx
// 005a155a  764a                 jbe 0x5a15a6
// 005a155c  53                   push ebx
// 005a155d  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005a1563  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a1566  2b4e10               sub ecx, dword ptr [esi + 0x10]
// 005a1569  8bf8                 mov edi, eax
// 005a156b  c1f902               sar ecx, 2
// 005a156e  3bc1                 cmp eax, ecx
// 005a1570  7202                 jb 0x5a1574
// 005a1572  ffd3                 call ebx
// 005a1574  8b5610               mov edx, dword ptr [esi + 0x10]
// 005a1577  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005a157a  50                   push eax
// 005a157b  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a157f  50                   push eax
// 005a1580  8bce                 mov ecx, esi
// 005a1582  e839f9ffff           call 0x5a0ec0
// 005a1587  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a158b  40                   inc eax
// 005a158c  8944240c             mov dword ptr [esp + 0xc], eax
// 005a1590  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005a1594  72cd                 jb 0x5a1563
// 005a1596  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a159a  5b                   pop ebx
// 005a159b  5f                   pop edi
// 005a159c  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005a159f  5e                   pop esi
// 005a15a0  83c40c               add esp, 0xc
// 005a15a3  c20400               ret 4
// 005a15a6  5f                   pop edi
// 005a15a7  89561c               mov dword ptr [esi + 0x1c], edx
// 005a15aa  5e                   pop esi
// 005a15ab  83c40c               add esp, 0xc
// 005a15ae  c20400               ret 4
// library openrbx-client/App\v8world\World.cpp (function ?raise@?$Notifier@VWorld@RBX@@UAutoJoin@2@@RBX@@IBEXUAutoJoin@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/World.cpp
