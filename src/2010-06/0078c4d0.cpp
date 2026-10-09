// roc 2010-06 0078c4d0  unit: RBX::EdgeStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078c4d0
//
// 0078c4d0  56                   push esi
// 0078c4d1  8bf1                 mov esi, ecx
// 0078c4d3  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078c4d6  c7062c3ca500         mov dword ptr [esi], 0xa53c2c
// 0078c4dc  85c9                 test ecx, ecx
// 0078c4de  7408                 je 0x78c4e8
// 0078c4e0  8b01                 mov eax, dword ptr [ecx]
// 0078c4e2  8b10                 mov edx, dword ptr [eax]
// 0078c4e4  6a01                 push 1
// 0078c4e6  ffd2                 call edx
// 0078c4e8  f644240801           test byte ptr [esp + 8], 1
// 0078c4ed  7409                 je 0x78c4f8
// 0078c4ef  56                   push esi
// 0078c4f0  e8a5b40100           call 0x7a799a
// 0078c4f5  83c404               add esp, 4
// 0078c4f8  8bc6                 mov eax, esi
// 0078c4fa  5e                   pop esi
// 0078c4fb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
