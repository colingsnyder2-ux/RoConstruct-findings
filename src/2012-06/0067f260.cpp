// roc 2012-06 0067f260  unit: RBX::VTaskSchedulerSettings::?$GlobalAdvancedSettingsItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0067f260
//
// 0067f260  64a100000000         mov eax, dword ptr fs:[0]
// 0067f266  6aff                 push -1
// 0067f268  689e60ab00           push 0xab609e
// 0067f26d  50                   push eax
// 0067f26e  b801000000           mov eax, 1
// 0067f273  64892500000000       mov dword ptr fs:[0], esp
// 0067f27a  840500a2e200         test byte ptr [0xe2a200], al
// 0067f280  7525                 jne 0x67f2a7
// 0067f282  090500a2e200         or dword ptr [0xe2a200], eax
// 0067f288  b9dca1e200           mov ecx, 0xe2a1dc
// 0067f28d  c744240800000000     mov dword ptr [esp + 8], 0
// 0067f295  e846fbffff           call 0x67ede0
// 0067f29a  685057b100           push 0xb15750
// 0067f29f  e8513f3000           call 0x9831f5
// 0067f2a4  83c404               add esp, 4
// 0067f2a7  8b0c24               mov ecx, dword ptr [esp]
// 0067f2aa  b8dca1e200           mov eax, 0xe2a1dc
// 0067f2af  64890d00000000       mov dword ptr fs:[0], ecx
// 0067f2b6  83c40c               add esp, 0xc
// 0067f2b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
