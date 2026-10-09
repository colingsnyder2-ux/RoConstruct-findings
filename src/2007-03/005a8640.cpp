// roc 2007-03 005a8640  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8640
//
// 005a8640  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a8643  8b01                 mov eax, dword ptr [ecx]
// 005a8645  8b4018               mov eax, dword ptr [eax + 0x18]
// 005a8648  ffe0                 jmp eax
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?getMetric@IWorldStage@RBX@@UAEHW4MetricType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
