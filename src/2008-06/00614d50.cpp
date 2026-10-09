// roc 2008-06 00614d50  unit: RBX::RevoluteLink  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614d50
//
// 00614d50  83ec0c               sub esp, 0xc
// 00614d53  56                   push esi
// 00614d54  8bf1                 mov esi, ecx
// 00614d56  8b4e04               mov ecx, dword ptr [esi + 4]
// 00614d59  85c9                 test ecx, ecx
// 00614d5b  7406                 je 0x614d63
// 00614d5d  56                   push esi
// 00614d5e  e8bdfeffff           call 0x614c20
// 00614d63  8b442414             mov eax, dword ptr [esp + 0x14]
// 00614d67  894604               mov dword ptr [esi + 4], eax
// 00614d6a  85c0                 test eax, eax
// 00614d6c  742d                 je 0x614d9b
// 00614d6e  837e0800             cmp dword ptr [esi + 8], 0
// 00614d72  7e27                 jle 0x614d9b
// 00614d74  8b06                 mov eax, dword ptr [esi]
// 00614d76  8b10                 mov edx, dword ptr [eax]
// 00614d78  6a00                 push 0
// 00614d7a  8bce                 mov ecx, esi
// 00614d7c  ffd2                 call edx
// 00614d7e  8b4604               mov eax, dword ptr [esi + 4]
// 00614d81  85c0                 test eax, eax
// 00614d83  7416                 je 0x614d9b
// 00614d85  8d4c2414             lea ecx, [esp + 0x14]
// 00614d89  51                   push ecx
// 00614d8a  8d542408             lea edx, [esp + 8]
// 00614d8e  52                   push edx
// 00614d8f  8d4804               lea ecx, [eax + 4]
// 00614d92  8974241c             mov dword ptr [esp + 0x1c], esi
// 00614d96  e8a53efdff           call 0x5e8c40
// 00614d9b  5e                   pop esi
// 00614d9c  83c40c               add esp, 0xc
// 00614d9f  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?setMovingManager@IMoving@RBX@@IAEXPAVIMovingManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
