// roc 2011-06 0052d7b0  unit: RBX::Network::ProfiledRakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d7b0
//
// 0052d7b0  8b442404             mov eax, dword ptr [esp + 4]
// 0052d7b4  50                   push eax
// 0052d7b5  ff15f002a400         call dword ptr [0xa402f0]
// 0052d7bb  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?get_file_attributes@?A0x062878eb@@YAKPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
