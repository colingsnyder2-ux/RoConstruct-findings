// roc 2008-06 00668d30  unit: RBX::JointStage  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668d30
//
// 00668d30  51                   push ecx
// 00668d31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00668d35  e8f6cafdff           call 0x645830
// 00668d3a  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?edgeIsAwake@SleepStage@RBX@@AAE_NPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
