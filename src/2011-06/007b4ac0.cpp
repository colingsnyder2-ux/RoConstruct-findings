// roc 2011-06 007b4ac0  unit: RBX::TreeStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b4ac0
//
// 007b4ac0  51                   push ecx
// 007b4ac1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b4ac5  e86648d3ff           call 0x4e9330
// 007b4aca  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?edgeIsAwake@SleepStage@RBX@@AAE_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
