// roc 2008-06 005cd8c0  unit: RBX::VInstance::?$RefPropDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cd8c0
//
// 005cd8c0  6aff                 push -1
// 005cd8c2  6838547d00           push 0x7d5438
// 005cd8c7  64a100000000         mov eax, dword ptr fs:[0]
// 005cd8cd  50                   push eax
// 005cd8ce  64892500000000       mov dword ptr fs:[0], esp
// 005cd8d5  51                   push ecx
// 005cd8d6  56                   push esi
// 005cd8d7  8bf1                 mov esi, ecx
// 005cd8d9  89742404             mov dword ptr [esp + 4], esi
// 005cd8dd  e89ee8ffff           call 0x5cc180
// 005cd8e2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cd8ea  e8a1fcffff           call 0x5cd590
// 005cd8ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cd8f3  89461c               mov dword ptr [esi + 0x1c], eax
// 005cd8f6  c7068ca58300         mov dword ptr [esi], 0x83a58c
// 005cd8fc  c7461080a58300       mov dword ptr [esi + 0x10], 0x83a580
// 005cd903  c7461478a58300       mov dword ptr [esi + 0x14], 0x83a578
// 005cd90a  c7462070a58300       mov dword ptr [esi + 0x20], 0x83a570
// 005cd911  c7462460a58300       mov dword ptr [esi + 0x24], 0x83a560
// 005cd918  c7464450a58300       mov dword ptr [esi + 0x44], 0x83a550
// 005cd91f  c7466440a58300       mov dword ptr [esi + 0x64], 0x83a540
// 005cd926  c7868400000030a58300 mov dword ptr [esi + 0x84], 0x83a530
// 005cd930  c786a400000020a58300 mov dword ptr [esi + 0xa4], 0x83a520
// 005cd93a  c786c400000010a58300 mov dword ptr [esi + 0xc4], 0x83a510
// 005cd944  8bc6                 mov eax, esi
// 005cd946  5e                   pop esi
// 005cd947  64890d00000000       mov dword ptr fs:[0], ecx
// 005cd94e  83c410               add esp, 0x10
// 005cd951  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
