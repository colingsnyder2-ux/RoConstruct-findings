// roc 2009-12 007de7f0  unit: RBX::ContactStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007de7f0
//
// 007de7f0  56                   push esi
// 007de7f1  8bf1                 mov esi, ecx
// 007de7f3  8b4e08               mov ecx, dword ptr [esi + 8]
// 007de7f6  c70614fc9e00         mov dword ptr [esi], 0x9efc14
// 007de7fc  85c9                 test ecx, ecx
// 007de7fe  7408                 je 0x7de808
// 007de800  8b01                 mov eax, dword ptr [ecx]
// 007de802  8b10                 mov edx, dword ptr [eax]
// 007de804  6a01                 push 1
// 007de806  ffd2                 call edx
// 007de808  f644240801           test byte ptr [esp + 8], 1
// 007de80d  7409                 je 0x7de818
// 007de80f  56                   push esi
// 007de810  e845500100           call 0x7f385a
// 007de815  83c404               add esp, 4
// 007de818  8bc6                 mov eax, esi
// 007de81a  5e                   pop esi
// 007de81b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
