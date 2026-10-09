// roc 2011-06 007eef40  unit: RBX::EdgeStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eef40
//
// 007eef40  56                   push esi
// 007eef41  8bf1                 mov esi, ecx
// 007eef43  8b4e08               mov ecx, dword ptr [esi + 8]
// 007eef46  c7069cf0ab00         mov dword ptr [esi], 0xabf09c
// 007eef4c  85c9                 test ecx, ecx
// 007eef4e  7408                 je 0x7eef58
// 007eef50  8b01                 mov eax, dword ptr [ecx]
// 007eef52  8b10                 mov edx, dword ptr [eax]
// 007eef54  6a01                 push 1
// 007eef56  ffd2                 call edx
// 007eef58  f644240801           test byte ptr [esp + 8], 1
// 007eef5d  7409                 je 0x7eef68
// 007eef5f  56                   push esi
// 007eef60  e8f3b00100           call 0x80a058
// 007eef65  83c404               add esp, 4
// 007eef68  8bc6                 mov eax, esi
// 007eef6a  5e                   pop esi
// 007eef6b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
