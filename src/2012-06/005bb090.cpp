// roc 2012-06 005bb090  unit: RakNet::RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb090
//
// 005bb090  8a442404             mov al, byte ptr [esp + 4]
// 005bb094  88816c040000         mov byte ptr [ecx + 0x46c], al
// 005bb09a  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ?AllowConnectionResponseIPMigration@RakPeer@RakNet@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
