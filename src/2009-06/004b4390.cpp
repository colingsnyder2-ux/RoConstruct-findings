// roc 2009-06 004b4390  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b4390
//
// 004b4390  6aff                 push -1
// 004b4392  6851ed8400           push 0x84ed51
// 004b4397  64a100000000         mov eax, dword ptr fs:[0]
// 004b439d  50                   push eax
// 004b439e  64892500000000       mov dword ptr fs:[0], esp
// 004b43a5  51                   push ecx
// 004b43a6  56                   push esi
// 004b43a7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b43ab  89742418             mov dword ptr [esp + 0x18], esi
// 004b43af  89742404             mov dword ptr [esp + 4], esi
// 004b43b3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b43bb  85f6                 test esi, esi
// 004b43bd  743c                 je 0x4b43fb
// 004b43bf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b43c3  8b08                 mov ecx, dword ptr [eax]
// 004b43c5  890e                 mov dword ptr [esi], ecx
// 004b43c7  8b5004               mov edx, dword ptr [eax + 4]
// 004b43ca  895604               mov dword ptr [esi + 4], edx
// 004b43cd  8b4808               mov ecx, dword ptr [eax + 8]
// 004b43d0  894e08               mov dword ptr [esi + 8], ecx
// 004b43d3  8b400c               mov eax, dword ptr [eax + 0xc]
// 004b43d6  85c0                 test eax, eax
// 004b43d8  741c                 je 0x4b43f6
// 004b43da  8b10                 mov edx, dword ptr [eax]
// 004b43dc  8bc8                 mov ecx, eax
// 004b43de  8b4208               mov eax, dword ptr [edx + 8]
// 004b43e1  ffd0                 call eax
// 004b43e3  89460c               mov dword ptr [esi + 0xc], eax
// 004b43e6  5e                   pop esi
// 004b43e7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b43eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004b43f2  83c410               add esp, 0x10
// 004b43f5  c3                   ret 
// 004b43f6  33c0                 xor eax, eax
// 004b43f8  89460c               mov dword ptr [esi + 0xc], eax
// 004b43fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b43ff  5e                   pop esi
// 004b4400  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4407  83c410               add esp, 0x10
// 004b440a  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$_Construct@UItem@SignatureDescriptor@Reflection@RBX@@U1234@@std@@YAXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
