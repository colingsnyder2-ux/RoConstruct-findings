// roc 2012-06 005bb770  unit: RakNet::RakPeer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bb770
//
// 005bb770  8bc1                 mov eax, ecx
// 005bb772  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005bb776  8b11                 mov edx, dword ptr [ecx]
// 005bb778  8910                 mov dword ptr [eax], edx
// 005bb77a  8b5104               mov edx, dword ptr [ecx + 4]
// 005bb77d  895004               mov dword ptr [eax + 4], edx
// 005bb780  85d2                 test edx, edx
// 005bb782  7402                 je 0x5bb786
// 005bb784  ff02                 inc dword ptr [edx]
// 005bb786  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ??0?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
