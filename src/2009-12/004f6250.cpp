// roc 2009-12 004f6250  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6250
//
// 004f6250  6aff                 push -1
// 004f6252  6891939200           push 0x929391
// 004f6257  64a100000000         mov eax, dword ptr fs:[0]
// 004f625d  50                   push eax
// 004f625e  64892500000000       mov dword ptr fs:[0], esp
// 004f6265  51                   push ecx
// 004f6266  56                   push esi
// 004f6267  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f626b  89742418             mov dword ptr [esp + 0x18], esi
// 004f626f  89742404             mov dword ptr [esp + 4], esi
// 004f6273  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f627b  85f6                 test esi, esi
// 004f627d  743c                 je 0x4f62bb
// 004f627f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f6283  8b08                 mov ecx, dword ptr [eax]
// 004f6285  890e                 mov dword ptr [esi], ecx
// 004f6287  8b5004               mov edx, dword ptr [eax + 4]
// 004f628a  895604               mov dword ptr [esi + 4], edx
// 004f628d  8b4808               mov ecx, dword ptr [eax + 8]
// 004f6290  894e08               mov dword ptr [esi + 8], ecx
// 004f6293  8b400c               mov eax, dword ptr [eax + 0xc]
// 004f6296  85c0                 test eax, eax
// 004f6298  741c                 je 0x4f62b6
// 004f629a  8b10                 mov edx, dword ptr [eax]
// 004f629c  8bc8                 mov ecx, eax
// 004f629e  8b4208               mov eax, dword ptr [edx + 8]
// 004f62a1  ffd0                 call eax
// 004f62a3  89460c               mov dword ptr [esi + 0xc], eax
// 004f62a6  5e                   pop esi
// 004f62a7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f62ab  64890d00000000       mov dword ptr fs:[0], ecx
// 004f62b2  83c410               add esp, 0x10
// 004f62b5  c3                   ret 
// 004f62b6  33c0                 xor eax, eax
// 004f62b8  89460c               mov dword ptr [esi + 0xc], eax
// 004f62bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f62bf  5e                   pop esi
// 004f62c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004f62c7  83c410               add esp, 0x10
// 004f62ca  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$_Construct@UItem@SignatureDescriptor@Reflection@RBX@@U1234@@std@@YAXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
