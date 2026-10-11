// roc 2010-06 00761670  unit: RBX::GroundStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00761670
//
// 00761670  51                   push ecx
// 00761671  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00761675  e846f4feff           call 0x750ac0
// 0076167a  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?edgeIsAwake@SleepStage@RBX@@AAE_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
