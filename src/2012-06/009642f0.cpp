// roc 2012-06 009642f0  unit: RBX::MovingStage  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009642f0
//
// 009642f0  56                   push esi
// 009642f1  8bf1                 mov esi, ecx
// 009642f3  8b4e08               mov ecx, dword ptr [esi + 8]
// 009642f6  c706706fc000         mov dword ptr [esi], 0xc06f70
// 009642fc  85c9                 test ecx, ecx
// 009642fe  7408                 je 0x964308
// 00964300  8b01                 mov eax, dword ptr [ecx]
// 00964302  8b10                 mov edx, dword ptr [eax]
// 00964304  6a01                 push 1
// 00964306  ffd2                 call edx
// 00964308  f644240801           test byte ptr [esp + 8], 1
// 0096430d  7409                 je 0x964318
// 0096430f  56                   push esi
// 00964310  e8ffdd0100           call 0x982114
// 00964315  83c404               add esp, 4
// 00964318  8bc6                 mov eax, esi
// 0096431a  5e                   pop esi
// 0096431b  c20400               ret 4
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??_GClumpStage@RBX@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
