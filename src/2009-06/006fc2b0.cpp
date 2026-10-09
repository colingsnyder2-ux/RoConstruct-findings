// roc 2009-06 006fc2b0  unit: RBX::ContactStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fc2b0
//
// 006fc2b0  56                   push esi
// 006fc2b1  8bf1                 mov esi, ecx
// 006fc2b3  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fc2b6  c70614eb8e00         mov dword ptr [esi], 0x8eeb14
// 006fc2bc  85c9                 test ecx, ecx
// 006fc2be  7408                 je 0x6fc2c8
// 006fc2c0  8b01                 mov eax, dword ptr [ecx]
// 006fc2c2  8b10                 mov edx, dword ptr [eax]
// 006fc2c4  6a01                 push 1
// 006fc2c6  ffd2                 call edx
// 006fc2c8  f644240801           test byte ptr [esp + 8], 1
// 006fc2cd  7409                 je 0x6fc2d8
// 006fc2cf  56                   push esi
// 006fc2d0  e85dc70100           call 0x718a32
// 006fc2d5  83c404               add esp, 4
// 006fc2d8  8bc6                 mov eax, esi
// 006fc2da  5e                   pop esi
// 006fc2db  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
