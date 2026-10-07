// roc 2011-06 004a5480  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5480
//
// 004a5480  6aff                 push -1
// 004a5482  6881669e00           push 0x9e6681
// 004a5487  64a100000000         mov eax, dword ptr fs:[0]
// 004a548d  50                   push eax
// 004a548e  64892500000000       mov dword ptr fs:[0], esp
// 004a5495  51                   push ecx
// 004a5496  56                   push esi
// 004a5497  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a549b  89742418             mov dword ptr [esp + 0x18], esi
// 004a549f  89742404             mov dword ptr [esp + 4], esi
// 004a54a3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a54ab  85f6                 test esi, esi
// 004a54ad  743c                 je 0x4a54eb
// 004a54af  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a54b3  8b08                 mov ecx, dword ptr [eax]
// 004a54b5  890e                 mov dword ptr [esi], ecx
// 004a54b7  8b5004               mov edx, dword ptr [eax + 4]
// 004a54ba  895604               mov dword ptr [esi + 4], edx
// 004a54bd  8b4808               mov ecx, dword ptr [eax + 8]
// 004a54c0  894e08               mov dword ptr [esi + 8], ecx
// 004a54c3  8b400c               mov eax, dword ptr [eax + 0xc]
// 004a54c6  85c0                 test eax, eax
// 004a54c8  741c                 je 0x4a54e6
// 004a54ca  8b10                 mov edx, dword ptr [eax]
// 004a54cc  8bc8                 mov ecx, eax
// 004a54ce  8b4208               mov eax, dword ptr [edx + 8]
// 004a54d1  ffd0                 call eax
// 004a54d3  89460c               mov dword ptr [esi + 0xc], eax
// 004a54d6  5e                   pop esi
// 004a54d7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a54db  64890d00000000       mov dword ptr fs:[0], ecx
// 004a54e2  83c410               add esp, 0x10
// 004a54e5  c3                   ret 
// 004a54e6  33c0                 xor eax, eax
// 004a54e8  89460c               mov dword ptr [esi + 0xc], eax
// 004a54eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a54ef  5e                   pop esi
// 004a54f0  64890d00000000       mov dword ptr fs:[0], ecx
// 004a54f7  83c410               add esp, 0x10
// 004a54fa  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$_Construct@UItem@SignatureDescriptor@Reflection@RBX@@U1234@@std@@YAXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
