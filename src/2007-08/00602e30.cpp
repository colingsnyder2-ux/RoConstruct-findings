// roc 2007-08 00602e30  unit: RBX::JointStage  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602e30
//
// 00602e30  8b4908               mov ecx, dword ptr [ecx + 8]
// 00602e33  8b01                 mov eax, dword ptr [ecx]
// 00602e35  8b4018               mov eax, dword ptr [eax + 0x18]
// 00602e38  ffe0                 jmp eax
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?getMetric@IWorldStage@RBX@@UAEHW4MetricType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
