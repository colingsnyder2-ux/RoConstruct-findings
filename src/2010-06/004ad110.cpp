// roc 2010-06 004ad110  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ad110
//
// 004ad110  51                   push ecx
// 004ad111  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ad115  56                   push esi
// 004ad116  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ad11a  56                   push esi
// 004ad11b  c744240800000000     mov dword ptr [esp + 8], 0
// 004ad123  e808efffff           call 0x4ac030
// 004ad128  8bc6                 mov eax, esi
// 004ad12a  5e                   pop esi
// 004ad12b  59                   pop ecx
// 004ad12c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
