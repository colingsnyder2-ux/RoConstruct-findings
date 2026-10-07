// roc 2012-06 005a24b0  unit: RBX::Network::ClientReplicator  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a24b0
//
// 005a24b0  8b442408             mov eax, dword ptr [esp + 8]
// 005a24b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a24b8  50                   push eax
// 005a24b9  51                   push ecx
// 005a24ba  e851ffffff           call 0x5a2410
// 005a24bf  83c408               add esp, 8
// 005a24c2  c3                   ret 
// library rbx2016-raknet/BitStream.cpp (function ?NumberOfLeadingZeroes@BitStream@RakNet@@SAH_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
