// roc 2008-06 005ff240  unit: RBX::Tool  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff240
//
// 005ff240  6aff                 push -1
// 005ff242  68c8d37b00           push 0x7bd3c8
// 005ff247  64a100000000         mov eax, dword ptr fs:[0]
// 005ff24d  50                   push eax
// 005ff24e  64892500000000       mov dword ptr fs:[0], esp
// 005ff255  51                   push ecx
// 005ff256  56                   push esi
// 005ff257  8bf1                 mov esi, ecx
// 005ff259  89742404             mov dword ptr [esp + 4], esi
// 005ff25d  e85ee3ffff           call 0x5fd5c0
// 005ff262  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ff26a  e881f5ffff           call 0x5fe7f0
// 005ff26f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ff273  89461c               mov dword ptr [esi + 0x1c], eax
// 005ff276  c706fc1b8400         mov dword ptr [esi], 0x841bfc
// 005ff27c  c74610f01b8400       mov dword ptr [esi + 0x10], 0x841bf0
// 005ff283  c74614e81b8400       mov dword ptr [esi + 0x14], 0x841be8
// 005ff28a  c74620e01b8400       mov dword ptr [esi + 0x20], 0x841be0
// 005ff291  c74624d01b8400       mov dword ptr [esi + 0x24], 0x841bd0
// 005ff298  c74644c01b8400       mov dword ptr [esi + 0x44], 0x841bc0
// 005ff29f  c74664b01b8400       mov dword ptr [esi + 0x64], 0x841bb0
// 005ff2a6  c78684000000a01b8400 mov dword ptr [esi + 0x84], 0x841ba0
// 005ff2b0  c786a4000000901b8400 mov dword ptr [esi + 0xa4], 0x841b90
// 005ff2ba  c786c4000000801b8400 mov dword ptr [esi + 0xc4], 0x841b80
// 005ff2c4  8bc6                 mov eax, esi
// 005ff2c6  5e                   pop esi
// 005ff2c7  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff2ce  83c410               add esp, 0x10
// 005ff2d1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
