// roc 2009-06 006b8920  unit: RBX::UniversalTool  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8920
//
// 006b8920  83ec0c               sub esp, 0xc
// 006b8923  56                   push esi
// 006b8924  8bf1                 mov esi, ecx
// 006b8926  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b8929  85c9                 test ecx, ecx
// 006b892b  7406                 je 0x6b8933
// 006b892d  56                   push esi
// 006b892e  e84dfeffff           call 0x6b8780
// 006b8933  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b8937  894604               mov dword ptr [esi + 4], eax
// 006b893a  85c0                 test eax, eax
// 006b893c  742d                 je 0x6b896b
// 006b893e  837e0800             cmp dword ptr [esi + 8], 0
// 006b8942  7e27                 jle 0x6b896b
// 006b8944  8b06                 mov eax, dword ptr [esi]
// 006b8946  8b10                 mov edx, dword ptr [eax]
// 006b8948  6a00                 push 0
// 006b894a  8bce                 mov ecx, esi
// 006b894c  ffd2                 call edx
// 006b894e  8b4604               mov eax, dword ptr [esi + 4]
// 006b8951  85c0                 test eax, eax
// 006b8953  7416                 je 0x6b896b
// 006b8955  8d4c2414             lea ecx, [esp + 0x14]
// 006b8959  51                   push ecx
// 006b895a  8d542408             lea edx, [esp + 8]
// 006b895e  52                   push edx
// 006b895f  8d4804               lea ecx, [eax + 4]
// 006b8962  8974241c             mov dword ptr [esp + 0x1c], esi
// 006b8966  e8c5e7e2ff           call 0x4e7130
// 006b896b  5e                   pop esi
// 006b896c  83c40c               add esp, 0xc
// 006b896f  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?setMovingManager@IMoving@RBX@@IAEXPAVIMovingManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
