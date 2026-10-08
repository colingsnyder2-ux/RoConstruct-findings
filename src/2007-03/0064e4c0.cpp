// roc 2007-03 0064e4c0  unit: seg_00640000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064e4c0
//
// 0064e4c0  b801000000           mov eax, 1
// 0064e4c5  c20800               ret 8
// library rbxgs-raknet/LightweightDatabaseClient.cpp (function ?OnReceive@LightweightDatabaseClient@@UAE?AW4PluginReceiveResult@@PAVRakPeerInterface@@PAUPacket@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet LightweightDatabaseClient.cpp
