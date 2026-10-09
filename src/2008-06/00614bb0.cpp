// roc 2008-06 00614bb0  unit: RBX::RevoluteLink  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614bb0
//
// 00614bb0  68d8be9700           push 0x97bed8
// 00614bb5  68404b6100           push 0x614b40
// 00614bba  e87127f4ff           call 0x557330
// 00614bbf  a1c4be9700           mov eax, dword ptr [0x97bec4]
// 00614bc4  83c408               add esp, 8
// 00614bc7  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
