// roc 2007-08 00770350  unit: seg_00770000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770350
//
// 00770350  684c4c7a00           push 0x7a4c4c
// 00770355  6814b77900           push 0x79b714
// 0077035a  68444c7a00           push 0x7a4c44
// 0077035f  b9b00d8c00           mov ecx, 0x8c0db0
// 00770364  e817eedbff           call 0x52f180
// 00770369  68a0937700           push 0x7793a0
// 0077036e  e8b009ecff           call 0x630d23
// 00770373  59                   pop ecx
// 00770374  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ??__E?event_Stepped@RunService@RBX@@2V?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
