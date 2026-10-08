// from server: 100% by auto
// roc 2012-06 00524fd0  unit: RBX::Camera::W4CameraMode::?$EnumDesc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00524fd0
//
// 00524fd0  51                   push ecx
// 00524fd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00524fd5  56                   push esi
// 00524fd6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00524fda  56                   push esi
// 00524fdb  c744240800000000     mov dword ptr [esp + 8], 0
// 00524fe3  e8b8e9ffff           call 0x5239a0
// 00524fe8  8bc6                 mov eax, esi
// 00524fea  5e                   pop esi
// 00524feb  59                   pop ecx
// 00524fec  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??6program_options@boost@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@AAV23@ABVoptions_description@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
