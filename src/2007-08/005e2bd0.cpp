// roc 2007-08 005e2bd0  unit: seg_005e0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2bd0
//
// 005e2bd0  83ec0c               sub esp, 0xc
// 005e2bd3  56                   push esi
// 005e2bd4  8bf1                 mov esi, ecx
// 005e2bd6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e2bd9  85c9                 test ecx, ecx
// 005e2bdb  7406                 je 0x5e2be3
// 005e2bdd  56                   push esi
// 005e2bde  e8cdfeffff           call 0x5e2ab0
// 005e2be3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005e2be7  85c0                 test eax, eax
// 005e2be9  894604               mov dword ptr [esi + 4], eax
// 005e2bec  742d                 je 0x5e2c1b
// 005e2bee  837e0800             cmp dword ptr [esi + 8], 0
// 005e2bf2  7e27                 jle 0x5e2c1b
// 005e2bf4  8b06                 mov eax, dword ptr [esi]
// 005e2bf6  8b10                 mov edx, dword ptr [eax]
// 005e2bf8  6a00                 push 0
// 005e2bfa  8bce                 mov ecx, esi
// 005e2bfc  ffd2                 call edx
// 005e2bfe  8b4604               mov eax, dword ptr [esi + 4]
// 005e2c01  85c0                 test eax, eax
// 005e2c03  7416                 je 0x5e2c1b
// 005e2c05  8d4c2414             lea ecx, [esp + 0x14]
// 005e2c09  51                   push ecx
// 005e2c0a  8d542408             lea edx, [esp + 8]
// 005e2c0e  52                   push edx
// 005e2c0f  8d4804               lea ecx, [eax + 4]
// 005e2c12  8974241c             mov dword ptr [esp + 0x1c], esi
// 005e2c16  e895fdffff           call 0x5e29b0
// 005e2c1b  5e                   pop esi
// 005e2c1c  83c40c               add esp, 0xc
// 005e2c1f  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?setMovingManager@IMoving@RBX@@IAEXPAVIMovingManager@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
