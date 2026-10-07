// roc 2012-06 005c8420  unit: RBX::AdornRbxGfx  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8420
//
// 005c8420  8b442408             mov eax, dword ptr [esp + 8]
// 005c8424  8b542404             mov edx, dword ptr [esp + 4]
// 005c8428  50                   push eax
// 005c8429  52                   push edx
// 005c842a  e891ffffff           call 0x5c83c0
// 005c842f  c20c00               ret 0xc
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?OnNAK@CCRakNetSlidingWindow@RakNet@@QAEX_KUuint24_t@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
