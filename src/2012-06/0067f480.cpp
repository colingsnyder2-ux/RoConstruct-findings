// roc 2012-06 0067f480  unit: RBX::VTaskSchedulerSettings::?$GlobalAdvancedSettingsItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067f480
//
// 0067f480  6860f46700           push 0x67f460
// 0067f485  6804a2e200           push 0xe2a204
// 0067f48a  e81121d8ff           call 0x4015a0
// 0067f48f  a1aca1e200           mov eax, dword ptr [0xe2a1ac]
// 0067f494  83c408               add esp, 8
// 0067f497  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
