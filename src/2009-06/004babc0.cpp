// roc 2009-06 004babc0  unit: RBX::Network::Player  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004babc0
//
// 004babc0  51                   push ecx
// 004babc1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004babc5  56                   push esi
// 004babc6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004babca  56                   push esi
// 004babcb  c744240800000000     mov dword ptr [esp + 8], 0
// 004babd3  e808f5ffff           call 0x4ba0e0
// 004babd8  8bc6                 mov eax, esi
// 004babda  5e                   pop esi
// 004babdb  59                   pop ecx
// 004babdc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
