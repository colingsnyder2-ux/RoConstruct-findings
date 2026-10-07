// roc 2011-06 0050f3e0  unit: RBX::Network::VMarker::?$EventDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050f3e0
//
// 0050f3e0  8bc1                 mov eax, ecx
// 0050f3e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050f3e6  8b11                 mov edx, dword ptr [ecx]
// 0050f3e8  8910                 mov dword ptr [eax], edx
// 0050f3ea  8b5104               mov edx, dword ptr [ecx + 4]
// 0050f3ed  895004               mov dword ptr [eax + 4], edx
// 0050f3f0  85d2                 test edx, edx
// 0050f3f2  7402                 je 0x50f3f6
// 0050f3f4  ff02                 inc dword ptr [edx]
// 0050f3f6  c20400               ret 4
// library rbx2016-raknet/RakPeer.cpp (function ??0?$RakNetSmartPtr@URakNetSocket@RakNet@@@RakNet@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
