// roc 2007-08 0049fc00  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fc00
//
// 0049fc00  8b442404             mov eax, dword ptr [esp + 4]
// 0049fc04  014108               add dword ptr [ecx + 8], eax
// 0049fc07  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?IgnoreBits@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
