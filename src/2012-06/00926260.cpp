// roc 2012-06 00926260  unit: RBX::GroundStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00926260
//
// 00926260  56                   push esi
// 00926261  8bf1                 mov esi, ecx
// 00926263  8b4e08               mov ecx, dword ptr [esi + 8]
// 00926266  c70670aebf00         mov dword ptr [esi], 0xbfae70
// 0092626c  85c9                 test ecx, ecx
// 0092626e  7408                 je 0x926278
// 00926270  8b01                 mov eax, dword ptr [ecx]
// 00926272  8b10                 mov edx, dword ptr [eax]
// 00926274  6a01                 push 1
// 00926276  ffd2                 call edx
// 00926278  f644240801           test byte ptr [esp + 8], 1
// 0092627d  7409                 je 0x926288
// 0092627f  56                   push esi
// 00926280  e88fbe0500           call 0x982114
// 00926285  83c404               add esp, 4
// 00926288  8bc6                 mov eax, esi
// 0092628a  5e                   pop esi
// 0092628b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
