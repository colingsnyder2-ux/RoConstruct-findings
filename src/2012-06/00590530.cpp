// roc 2012-06 00590530  unit: RBX::Network::ServerReplicator  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00590530
//
// 00590530  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00590534  e8f7feffff           call 0x590430
// 00590539  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$basic_option@D@program_options@boost@@@std@@QAEXPAV?$basic_option@D@program_options@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
