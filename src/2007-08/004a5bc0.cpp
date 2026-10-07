// roc 2007-08 004a5bc0  unit: RBX::Network::Server::ClientProxy  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5bc0
//
// 004a5bc0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a5bc4  85c9                 test ecx, ecx
// 004a5bc6  7408                 je 0x4a5bd0
// 004a5bc8  8b01                 mov eax, dword ptr [ecx]
// 004a5bca  8b10                 mov edx, dword ptr [eax]
// 004a5bcc  6a01                 push 1
// 004a5bce  ffd2                 call edx
// 004a5bd0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
