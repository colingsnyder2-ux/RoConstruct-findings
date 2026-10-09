// roc 2009-06 006f5f40  unit: RBX::EdgeStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f5f40
//
// 006f5f40  56                   push esi
// 006f5f41  8bf1                 mov esi, ecx
// 006f5f43  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f5f46  c706e4e88e00         mov dword ptr [esi], 0x8ee8e4
// 006f5f4c  85c9                 test ecx, ecx
// 006f5f4e  7408                 je 0x6f5f58
// 006f5f50  8b01                 mov eax, dword ptr [ecx]
// 006f5f52  8b10                 mov edx, dword ptr [eax]
// 006f5f54  6a01                 push 1
// 006f5f56  ffd2                 call edx
// 006f5f58  f644240801           test byte ptr [esp + 8], 1
// 006f5f5d  7409                 je 0x6f5f68
// 006f5f5f  56                   push esi
// 006f5f60  e8cd2a0200           call 0x718a32
// 006f5f65  83c404               add esp, 4
// 006f5f68  8bc6                 mov eax, esi
// 006f5f6a  5e                   pop esi
// 006f5f6b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
