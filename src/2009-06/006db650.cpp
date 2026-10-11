// roc 2009-06 006db650  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006db650
//
// 006db650  51                   push ecx
// 006db651  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006db655  e816a6ffff           call 0x6d5c70
// 006db65a  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?edgeIsAwake@SleepStage@RBX@@AAE_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
