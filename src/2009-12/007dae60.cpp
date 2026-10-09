// roc 2009-12 007dae60  unit: RBX::MechToAssemblyStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007dae60
//
// 007dae60  56                   push esi
// 007dae61  8bf1                 mov esi, ecx
// 007dae63  8b4e08               mov ecx, dword ptr [esi + 8]
// 007dae66  c706fcf99e00         mov dword ptr [esi], 0x9ef9fc
// 007dae6c  85c9                 test ecx, ecx
// 007dae6e  7408                 je 0x7dae78
// 007dae70  8b01                 mov eax, dword ptr [ecx]
// 007dae72  8b10                 mov edx, dword ptr [eax]
// 007dae74  6a01                 push 1
// 007dae76  ffd2                 call edx
// 007dae78  f644240801           test byte ptr [esp + 8], 1
// 007dae7d  7409                 je 0x7dae88
// 007dae7f  56                   push esi
// 007dae80  e8d5890100           call 0x7f385a
// 007dae85  83c404               add esp, 4
// 007dae88  8bc6                 mov eax, esi
// 007dae8a  5e                   pop esi
// 007dae8b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
