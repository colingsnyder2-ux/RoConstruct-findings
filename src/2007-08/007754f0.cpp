// roc 2007-08 007754f0  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007754f0
//
// 007754f0  e8bb87e7ff           call 0x5edcb0
// 007754f5  68e0fd7b00           push 0x7bfde0
// 007754fa  50                   push eax
// 007754fb  b914758c00           mov ecx, 0x8c7514
// 00775500  e80bafdfff           call 0x570410
// 00775505  68b0c37700           push 0x77c3b0
// 0077550a  c70514758c0054fb7b00 mov dword ptr [0x8c7514], 0x7bfb54
// 00775514  e80ab8ebff           call 0x630d23
// 00775519  59                   pop ecx
// 0077551a  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?event_ReachedTarget@Rocket@RBX@@2V?$SignalDesc@VRocket@RBX@@$$A6AXXZ@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
