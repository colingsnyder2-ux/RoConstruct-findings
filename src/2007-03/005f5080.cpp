// roc 2007-03 005f5080  unit: seg_005f0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5080
//
// 005f5080  56                   push esi
// 005f5081  8bf1                 mov esi, ecx
// 005f5083  e828ffffff           call 0x5f4fb0
// 005f5088  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f508b  8b01                 mov eax, dword ptr [ecx]
// 005f508d  5e                   pop esi
// 005f508e  8b4008               mov eax, dword ptr [eax + 8]
// 005f5091  ffe0                 jmp eax
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?stepWorld@TreeStage@RBX@@UAEXHH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
