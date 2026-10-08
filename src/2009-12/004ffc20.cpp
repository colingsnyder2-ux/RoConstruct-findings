// roc 2009-12 004ffc20  unit: RBX::Network::Player::W4BuildPermission::?$EnumDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ffc20
//
// 004ffc20  51                   push ecx
// 004ffc21  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ffc25  56                   push esi
// 004ffc26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ffc2a  56                   push esi
// 004ffc2b  c744240800000000     mov dword ptr [esp + 8], 0
// 004ffc33  e8b8f0ffff           call 0x4fecf0
// 004ffc38  8bc6                 mov eax, esi
// 004ffc3a  5e                   pop esi
// 004ffc3b  59                   pop ecx
// 004ffc3c  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
