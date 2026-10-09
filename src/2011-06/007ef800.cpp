// roc 2011-06 007ef800  unit: RBX::MovingStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ef800
//
// 007ef800  56                   push esi
// 007ef801  8bf1                 mov esi, ecx
// 007ef803  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ef806  c706d0f0ab00         mov dword ptr [esi], 0xabf0d0
// 007ef80c  85c9                 test ecx, ecx
// 007ef80e  7408                 je 0x7ef818
// 007ef810  8b01                 mov eax, dword ptr [ecx]
// 007ef812  8b10                 mov edx, dword ptr [eax]
// 007ef814  6a01                 push 1
// 007ef816  ffd2                 call edx
// 007ef818  f644240801           test byte ptr [esp + 8], 1
// 007ef81d  7409                 je 0x7ef828
// 007ef81f  56                   push esi
// 007ef820  e833a80100           call 0x80a058
// 007ef825  83c404               add esp, 4
// 007ef828  8bc6                 mov eax, esi
// 007ef82a  5e                   pop esi
// 007ef82b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
