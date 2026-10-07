// roc 2012-06 005c8350  unit: RakNet::RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8350
//
// 005c8350  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c8354  c21800               ret 0x18
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?GetRetransmissionBandwidth@CCRakNetSlidingWindow@RakNet@@QAEH_K0I_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
