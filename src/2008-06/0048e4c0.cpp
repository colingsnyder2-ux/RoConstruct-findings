// roc 2008-06 0048e4c0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e4c0
//
// 0048e4c0  51                   push ecx
// 0048e4c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048e4c5  56                   push esi
// 0048e4c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048e4ca  56                   push esi
// 0048e4cb  c744240800000000     mov dword ptr [esp + 8], 0
// 0048e4d3  e8b8f5ffff           call 0x48da90
// 0048e4d8  8bc6                 mov eax, esi
// 0048e4da  5e                   pop esi
// 0048e4db  59                   pop ecx
// 0048e4dc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
