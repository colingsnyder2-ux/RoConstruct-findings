// roc 2007-03 005a85e0  unit: seg_005a0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a85e0
//
// 005a85e0  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a85e3  8b01                 mov eax, dword ptr [ecx]
// 005a85e5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a85e8  ffe2                 jmp edx
// library openrbx-client/App\v8world\AssemblyStage2.cpp (function ?getKernel@IStage@RBX@@UAEPAVKernel@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/AssemblyStage2.cpp
