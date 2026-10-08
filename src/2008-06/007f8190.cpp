// roc 2008-06 007f8190  unit: seg_007f0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f8190
//
// 007f8190  e8cb8ee3ff           call 0x631060
// 007f8195  6854828400           push 0x848254
// 007f819a  50                   push eax
// 007f819b  b91cc89700           mov ecx, 0x97c81c
// 007f81a0  e80b39d7ff           call 0x56bab0
// 007f81a5  68200a8000           push 0x800a20
// 007f81aa  c7051cc89700b07f8400 mov dword ptr [0x97c81c], 0x847fb0
// 007f81b4  e8f695eaff           call 0x6a17af
// 007f81b9  59                   pop ecx
// 007f81ba  c3                   ret 
// library rbxgs/v8datamodel\Gyro.cpp (function ??__E?event_ReachedTarget@Rocket@RBX@@2V?$SignalDesc@VRocket@RBX@@$$A6AXXZ@Reflection@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
