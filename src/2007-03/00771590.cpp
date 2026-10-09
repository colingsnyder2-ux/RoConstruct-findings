// roc 2007-03 00771590  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771590
//
// 00771590  6808507a00           push 0x7a5008
// 00771595  6800507a00           push 0x7a5000
// 0077159a  68f84f7a00           push 0x7a4ff8
// 0077159f  b980b38b00           mov ecx, 0x8bb380
// 007715a4  e87716dcff           call 0x532c20
// 007715a9  6800947700           push 0x779400
// 007715ae  e800dceaff           call 0x61f1b3
// 007715b3  59                   pop ecx
// 007715b4  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ??__E?event_Stepped@RunService@RBX@@2V?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
