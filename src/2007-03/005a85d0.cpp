// roc 2007-03 005a85d0  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a85d0
//
// 005a85d0  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a85d3  8b01                 mov eax, dword ptr [ecx]
// 005a85d5  8b4008               mov eax, dword ptr [eax + 8]
// 005a85d8  ffe0                 jmp eax
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?stepWorld@IStage@RBX@@UAEXHH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
