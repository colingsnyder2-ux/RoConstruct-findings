// roc 2012-06 005ba9a0  unit: RakNet::RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba9a0
//
// 005ba9a0  8a442404             mov al, byte ptr [esp + 4]
// 005ba9a4  888170050000         mov byte ptr [ecx + 0x570], al
// 005ba9aa  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ?SetLimitIPConnectionFrequency@RakPeer@RakNet@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
