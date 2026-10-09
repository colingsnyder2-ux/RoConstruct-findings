// roc 2011-06 007b45e0  unit: RBX::GroundStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b45e0
//
// 007b45e0  56                   push esi
// 007b45e1  8bf1                 mov esi, ecx
// 007b45e3  8b4e08               mov ecx, dword ptr [esi + 8]
// 007b45e6  c70698d2ab00         mov dword ptr [esi], 0xabd298
// 007b45ec  85c9                 test ecx, ecx
// 007b45ee  7408                 je 0x7b45f8
// 007b45f0  8b01                 mov eax, dword ptr [ecx]
// 007b45f2  8b10                 mov edx, dword ptr [eax]
// 007b45f4  6a01                 push 1
// 007b45f6  ffd2                 call edx
// 007b45f8  f644240801           test byte ptr [esp + 8], 1
// 007b45fd  7409                 je 0x7b4608
// 007b45ff  56                   push esi
// 007b4600  e8535a0500           call 0x80a058
// 007b4605  83c404               add esp, 4
// 007b4608  8bc6                 mov eax, esi
// 007b460a  5e                   pop esi
// 007b460b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
