// roc 2009-12 007da070  unit: RBX::EdgeStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da070
//
// 007da070  56                   push esi
// 007da071  8bf1                 mov esi, ecx
// 007da073  8b4e08               mov ecx, dword ptr [esi + 8]
// 007da076  c7065cf99e00         mov dword ptr [esi], 0x9ef95c
// 007da07c  85c9                 test ecx, ecx
// 007da07e  7408                 je 0x7da088
// 007da080  8b01                 mov eax, dword ptr [ecx]
// 007da082  8b10                 mov edx, dword ptr [eax]
// 007da084  6a01                 push 1
// 007da086  ffd2                 call edx
// 007da088  f644240801           test byte ptr [esp + 8], 1
// 007da08d  7409                 je 0x7da098
// 007da08f  56                   push esi
// 007da090  e8c5970100           call 0x7f385a
// 007da095  83c404               add esp, 4
// 007da098  8bc6                 mov eax, esi
// 007da09a  5e                   pop esi
// 007da09b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
