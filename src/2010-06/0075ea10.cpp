// roc 2010-06 0075ea10  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075ea10
//
// 0075ea10  56                   push esi
// 0075ea11  8bf1                 mov esi, ecx
// 0075ea13  8b4e08               mov ecx, dword ptr [esi + 8]
// 0075ea16  c7068c21a500         mov dword ptr [esi], 0xa5218c
// 0075ea1c  85c9                 test ecx, ecx
// 0075ea1e  7408                 je 0x75ea28
// 0075ea20  8b01                 mov eax, dword ptr [ecx]
// 0075ea22  8b10                 mov edx, dword ptr [eax]
// 0075ea24  6a01                 push 1
// 0075ea26  ffd2                 call edx
// 0075ea28  f644240801           test byte ptr [esp + 8], 1
// 0075ea2d  7409                 je 0x75ea38
// 0075ea2f  56                   push esi
// 0075ea30  e8658f0400           call 0x7a799a
// 0075ea35  83c404               add esp, 4
// 0075ea38  8bc6                 mov eax, esi
// 0075ea3a  5e                   pop esi
// 0075ea3b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
