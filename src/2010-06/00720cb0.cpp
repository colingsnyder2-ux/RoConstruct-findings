// roc 2010-06 00720cb0  unit: RBX::UniversalTool  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720cb0
//
// 00720cb0  83ec0c               sub esp, 0xc
// 00720cb3  56                   push esi
// 00720cb4  8bf1                 mov esi, ecx
// 00720cb6  8b4e04               mov ecx, dword ptr [esi + 4]
// 00720cb9  85c9                 test ecx, ecx
// 00720cbb  7406                 je 0x720cc3
// 00720cbd  56                   push esi
// 00720cbe  e8bdfeffff           call 0x720b80
// 00720cc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00720cc7  894604               mov dword ptr [esi + 4], eax
// 00720cca  85c0                 test eax, eax
// 00720ccc  742d                 je 0x720cfb
// 00720cce  837e0800             cmp dword ptr [esi + 8], 0
// 00720cd2  7e27                 jle 0x720cfb
// 00720cd4  8b06                 mov eax, dword ptr [esi]
// 00720cd6  8b10                 mov edx, dword ptr [eax]
// 00720cd8  6a00                 push 0
// 00720cda  8bce                 mov ecx, esi
// 00720cdc  ffd2                 call edx
// 00720cde  8b4604               mov eax, dword ptr [esi + 4]
// 00720ce1  85c0                 test eax, eax
// 00720ce3  7416                 je 0x720cfb
// 00720ce5  8d4c2414             lea ecx, [esp + 0x14]
// 00720ce9  51                   push ecx
// 00720cea  8d542408             lea edx, [esp + 8]
// 00720cee  52                   push edx
// 00720cef  8d4804               lea ecx, [eax + 4]
// 00720cf2  8974241c             mov dword ptr [esp + 0x1c], esi
// 00720cf6  e8e555d1ff           call 0x4362e0
// 00720cfb  5e                   pop esi
// 00720cfc  83c40c               add esp, 0xc
// 00720cff  c20400               ret 4
// library openrbx-client/App\v8world\IMoving.cpp (function ?setMovingManager@IMoving@RBX@@IAEXPAVIMovingManager@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
