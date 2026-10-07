// roc 2012-06 005c8440  unit: RBX::AdornRbxGfx  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c8440
//
// 005c8440  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c8444  c60000               mov byte ptr [eax], 0
// 005c8447  c21400               ret 0x14
// library rbx2016-raknet/CCRakNetSlidingWindow.cpp (function ?OnSendAckGetBAndAS@CCRakNetSlidingWindow@RakNet@@QAEX_KPA_NPAN2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CCRakNetSlidingWindow.cpp
