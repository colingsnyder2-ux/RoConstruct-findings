// roc 2011-06 004ad0a0  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ad0a0
//
// 004ad0a0  51                   push ecx
// 004ad0a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ad0a5  56                   push esi
// 004ad0a6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ad0aa  56                   push esi
// 004ad0ab  c744240800000000     mov dword ptr [esp + 8], 0
// 004ad0b3  e828f4ffff           call 0x4ac4e0
// 004ad0b8  8bc6                 mov eax, esi
// 004ad0ba  5e                   pop esi
// 004ad0bb  59                   pop ecx
// 004ad0bc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
