// roc 2008-06 007f2800  unit: seg_007f0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2800
//
// 007f2800  6840d68200           push 0x82d640
// 007f2805  6888258200           push 0x822588
// 007f280a  6838d68200           push 0x82d638
// 007f280f  b9b83b9700           mov ecx, 0x973bb8
// 007f2814  e81740d6ff           call 0x556830
// 007f2819  6850c87f00           push 0x7fc850
// 007f281e  e88cefeaff           call 0x6a17af
// 007f2823  59                   pop ecx
// 007f2824  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ??__E?event_Stepped@RunService@RBX@@2V?$SignalDesc@VRunService@RBX@@$$A6AXMM@Z@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
