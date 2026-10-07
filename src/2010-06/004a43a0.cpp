// roc 2010-06 004a43a0  unit: RBX::Network::Player  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a43a0
//
// 004a43a0  6aff                 push -1
// 004a43a2  6811a69a00           push 0x9aa611
// 004a43a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a43ad  50                   push eax
// 004a43ae  64892500000000       mov dword ptr fs:[0], esp
// 004a43b5  51                   push ecx
// 004a43b6  56                   push esi
// 004a43b7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a43bb  89742418             mov dword ptr [esp + 0x18], esi
// 004a43bf  89742404             mov dword ptr [esp + 4], esi
// 004a43c3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a43cb  85f6                 test esi, esi
// 004a43cd  743c                 je 0x4a440b
// 004a43cf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a43d3  8b08                 mov ecx, dword ptr [eax]
// 004a43d5  890e                 mov dword ptr [esi], ecx
// 004a43d7  8b5004               mov edx, dword ptr [eax + 4]
// 004a43da  895604               mov dword ptr [esi + 4], edx
// 004a43dd  8b4808               mov ecx, dword ptr [eax + 8]
// 004a43e0  894e08               mov dword ptr [esi + 8], ecx
// 004a43e3  8b400c               mov eax, dword ptr [eax + 0xc]
// 004a43e6  85c0                 test eax, eax
// 004a43e8  741c                 je 0x4a4406
// 004a43ea  8b10                 mov edx, dword ptr [eax]
// 004a43ec  8bc8                 mov ecx, eax
// 004a43ee  8b4208               mov eax, dword ptr [edx + 8]
// 004a43f1  ffd0                 call eax
// 004a43f3  89460c               mov dword ptr [esi + 0xc], eax
// 004a43f6  5e                   pop esi
// 004a43f7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a43fb  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4402  83c410               add esp, 0x10
// 004a4405  c3                   ret 
// 004a4406  33c0                 xor eax, eax
// 004a4408  89460c               mov dword ptr [esi + 0xc], eax
// 004a440b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a440f  5e                   pop esi
// 004a4410  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4417  83c410               add esp, 0x10
// 004a441a  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$_Construct@UItem@SignatureDescriptor@Reflection@RBX@@U1234@@std@@YAXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
