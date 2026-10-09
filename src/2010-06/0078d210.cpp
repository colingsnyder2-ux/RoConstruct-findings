// roc 2010-06 0078d210  unit: RBX::MechToAssemblyStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078d210
//
// 0078d210  56                   push esi
// 0078d211  8bf1                 mov esi, ecx
// 0078d213  8b4e08               mov ecx, dword ptr [esi + 8]
// 0078d216  c706cc3ca500         mov dword ptr [esi], 0xa53ccc
// 0078d21c  85c9                 test ecx, ecx
// 0078d21e  7408                 je 0x78d228
// 0078d220  8b01                 mov eax, dword ptr [ecx]
// 0078d222  8b10                 mov edx, dword ptr [eax]
// 0078d224  6a01                 push 1
// 0078d226  ffd2                 call edx
// 0078d228  f644240801           test byte ptr [esp + 8], 1
// 0078d22d  7409                 je 0x78d238
// 0078d22f  56                   push esi
// 0078d230  e865a70100           call 0x7a799a
// 0078d235  83c404               add esp, 4
// 0078d238  8bc6                 mov eax, esi
// 0078d23a  5e                   pop esi
// 0078d23b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
