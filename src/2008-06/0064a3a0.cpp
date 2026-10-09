// roc 2008-06 0064a3a0  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a3a0
//
// 0064a3a0  56                   push esi
// 0064a3a1  8bf1                 mov esi, ecx
// 0064a3a3  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a3a6  c7065cb08400         mov dword ptr [esi], 0x84b05c
// 0064a3ac  85c9                 test ecx, ecx
// 0064a3ae  7408                 je 0x64a3b8
// 0064a3b0  8b01                 mov eax, dword ptr [ecx]
// 0064a3b2  8b10                 mov edx, dword ptr [eax]
// 0064a3b4  6a01                 push 1
// 0064a3b6  ffd2                 call edx
// 0064a3b8  f644240801           test byte ptr [esp + 8], 1
// 0064a3bd  7409                 je 0x64a3c8
// 0064a3bf  56                   push esi
// 0064a3c0  e8b5620500           call 0x6a067a
// 0064a3c5  83c404               add esp, 4
// 0064a3c8  8bc6                 mov eax, esi
// 0064a3ca  5e                   pop esi
// 0064a3cb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
