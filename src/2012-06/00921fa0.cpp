// roc 2012-06 00921fa0  unit: RBX::CleanStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00921fa0
//
// 00921fa0  56                   push esi
// 00921fa1  8bf1                 mov esi, ecx
// 00921fa3  8b4e08               mov ecx, dword ptr [esi + 8]
// 00921fa6  c7060878bf00         mov dword ptr [esi], 0xbf7808
// 00921fac  85c9                 test ecx, ecx
// 00921fae  7408                 je 0x921fb8
// 00921fb0  8b01                 mov eax, dword ptr [ecx]
// 00921fb2  8b10                 mov edx, dword ptr [eax]
// 00921fb4  6a01                 push 1
// 00921fb6  ffd2                 call edx
// 00921fb8  f644240801           test byte ptr [esp + 8], 1
// 00921fbd  7409                 je 0x921fc8
// 00921fbf  56                   push esi
// 00921fc0  e84f010600           call 0x982114
// 00921fc5  83c404               add esp, 4
// 00921fc8  8bc6                 mov eax, esi
// 00921fca  5e                   pop esi
// 00921fcb  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
