// roc 2012-06 005ba760  unit: RakNet::RakPeer  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba760
//
// 005ba760  668b442404           mov ax, word ptr [esp + 4]
// 005ba765  66894110             mov word ptr [ecx + 0x10], ax
// 005ba769  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ?SetMaximumIncomingConnections@RakPeer@RakNet@@UAEXG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
