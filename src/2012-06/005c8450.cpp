// roc 2012-06 005c8450  unit: RBX::AdornRbxGfx  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8450
//
// 005c8450  33c0                 xor eax, eax
// 005c8452  894120               mov dword ptr [ecx + 0x20], eax
// 005c8455  894124               mov dword ptr [ecx + 0x24], eax
// 005c8458  c20c00               ret 0xc
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?OnSendAck@CCRakNetSlidingWindow@RakNet@@QAEX_KI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
