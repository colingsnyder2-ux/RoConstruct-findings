// roc 2007-08 00608610  unit: RBX::ClumpStage  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608610
//
// 00608610  56                   push esi
// 00608611  8bf1                 mov esi, ecx
// 00608613  e848ffffff           call 0x608560
// 00608618  8b4e08               mov ecx, dword ptr [esi + 8]
// 0060861b  8b01                 mov eax, dword ptr [ecx]
// 0060861d  5e                   pop esi
// 0060861e  8b4008               mov eax, dword ptr [eax + 8]
// 00608621  ffe0                 jmp eax
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?stepWorld@TreeStage@RBX@@UAEXHH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
