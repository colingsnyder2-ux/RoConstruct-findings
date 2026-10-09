// roc 2009-12 00788550  unit: RBX::UniversalTool  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00788550
//
// 00788550  83ec0c               sub esp, 0xc
// 00788553  56                   push esi
// 00788554  8bf1                 mov esi, ecx
// 00788556  8b4e04               mov ecx, dword ptr [esi + 4]
// 00788559  85c9                 test ecx, ecx
// 0078855b  7406                 je 0x788563
// 0078855d  56                   push esi
// 0078855e  e8bdfeffff           call 0x788420
// 00788563  8b442414             mov eax, dword ptr [esp + 0x14]
// 00788567  894604               mov dword ptr [esi + 4], eax
// 0078856a  85c0                 test eax, eax
// 0078856c  742d                 je 0x78859b
// 0078856e  837e0800             cmp dword ptr [esi + 8], 0
// 00788572  7e27                 jle 0x78859b
// 00788574  8b06                 mov eax, dword ptr [esi]
// 00788576  8b10                 mov edx, dword ptr [eax]
// 00788578  6a00                 push 0
// 0078857a  8bce                 mov ecx, esi
// 0078857c  ffd2                 call edx
// 0078857e  8b4604               mov eax, dword ptr [esi + 4]
// 00788581  85c0                 test eax, eax
// 00788583  7416                 je 0x78859b
// 00788585  8d4c2414             lea ecx, [esp + 0x14]
// 00788589  51                   push ecx
// 0078858a  8d542408             lea edx, [esp + 8]
// 0078858e  52                   push edx
// 0078858f  8d4804               lea ecx, [eax + 4]
// 00788592  8974241c             mov dword ptr [esp + 0x1c], esi
// 00788596  e8b5180300           call 0x7b9e50
// 0078859b  5e                   pop esi
// 0078859c  83c40c               add esp, 0xc
// 0078859f  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?setMovingManager@IMoving@RBX@@IAEXPAVIMovingManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
