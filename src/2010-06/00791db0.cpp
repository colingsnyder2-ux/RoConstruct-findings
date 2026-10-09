// roc 2010-06 00791db0  unit: RBX::ContactStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00791db0
//
// 00791db0  56                   push esi
// 00791db1  8bf1                 mov esi, ecx
// 00791db3  8b4e08               mov ecx, dword ptr [esi + 8]
// 00791db6  c706f43ea500         mov dword ptr [esi], 0xa53ef4
// 00791dbc  85c9                 test ecx, ecx
// 00791dbe  7408                 je 0x791dc8
// 00791dc0  8b01                 mov eax, dword ptr [ecx]
// 00791dc2  8b10                 mov edx, dword ptr [eax]
// 00791dc4  6a01                 push 1
// 00791dc6  ffd2                 call edx
// 00791dc8  f644240801           test byte ptr [esp + 8], 1
// 00791dcd  7409                 je 0x791dd8
// 00791dcf  56                   push esi
// 00791dd0  e8c55b0100           call 0x7a799a
// 00791dd5  83c404               add esp, 4
// 00791dd8  8bc6                 mov eax, esi
// 00791dda  5e                   pop esi
// 00791ddb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
