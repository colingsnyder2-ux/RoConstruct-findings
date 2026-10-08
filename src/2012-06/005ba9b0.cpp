// from server: 100% by auto
// roc 2012-06 005ba9b0  unit: RakNet::RakPeer  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba9b0
//
// 005ba9b0  8a442404             mov al, byte ptr [esp + 4]
// 005ba9b4  88410c               mov byte ptr [ecx + 0xc], al
// 005ba9b7  c20400               ret 4
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?set_controlling@connection@signals@boost@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
