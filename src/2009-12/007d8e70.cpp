// roc 2009-12 007d8e70  unit: RBX::HUMAN::GettingUp  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8e70
//
// 007d8e70  8b442404             mov eax, dword ptr [esp + 4]
// 007d8e74  894124               mov dword ptr [ecx + 0x24], eax
// 007d8e77  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?set_positional_options@cmdline@detail@program_options@boost@@QAEXABVpositional_options_description@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
