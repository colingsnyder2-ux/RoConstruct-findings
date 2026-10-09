// roc 2007-03 005a85f0  unit: seg_005a0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a85f0
//
// 005a85f0  56                   push esi
// 005a85f1  8bf1                 mov esi, ecx
// 005a85f3  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a85f6  85c9                 test ecx, ecx
// 005a85f8  c706bc5c7b00         mov dword ptr [esi], 0x7b5cbc
// 005a85fe  7408                 je 0x5a8608
// 005a8600  8b01                 mov eax, dword ptr [ecx]
// 005a8602  8b10                 mov edx, dword ptr [eax]
// 005a8604  6a01                 push 1
// 005a8606  ffd2                 call edx
// 005a8608  f644240801           test byte ptr [esp + 8], 1
// 005a860d  7409                 je 0x5a8618
// 005a860f  56                   push esi
// 005a8610  e8db5a0700           call 0x61e0f0
// 005a8615  83c404               add esp, 4
// 005a8618  8bc6                 mov eax, esi
// 005a861a  5e                   pop esi
// 005a861b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
