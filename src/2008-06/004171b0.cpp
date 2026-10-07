// roc 2008-06 004171b0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004171b0
//
// 004171b0  6aff                 push -1
// 004171b2  6811e87c00           push 0x7ce811
// 004171b7  64a100000000         mov eax, dword ptr fs:[0]
// 004171bd  50                   push eax
// 004171be  64892500000000       mov dword ptr fs:[0], esp
// 004171c5  51                   push ecx
// 004171c6  56                   push esi
// 004171c7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004171cb  89742418             mov dword ptr [esp + 0x18], esi
// 004171cf  89742404             mov dword ptr [esp + 4], esi
// 004171d3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004171db  85f6                 test esi, esi
// 004171dd  743c                 je 0x41721b
// 004171df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004171e3  8b08                 mov ecx, dword ptr [eax]
// 004171e5  890e                 mov dword ptr [esi], ecx
// 004171e7  8b5004               mov edx, dword ptr [eax + 4]
// 004171ea  895604               mov dword ptr [esi + 4], edx
// 004171ed  8b4808               mov ecx, dword ptr [eax + 8]
// 004171f0  894e08               mov dword ptr [esi + 8], ecx
// 004171f3  8b400c               mov eax, dword ptr [eax + 0xc]
// 004171f6  85c0                 test eax, eax
// 004171f8  741c                 je 0x417216
// 004171fa  8b10                 mov edx, dword ptr [eax]
// 004171fc  8bc8                 mov ecx, eax
// 004171fe  8b4208               mov eax, dword ptr [edx + 8]
// 00417201  ffd0                 call eax
// 00417203  89460c               mov dword ptr [esi + 0xc], eax
// 00417206  5e                   pop esi
// 00417207  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041720b  64890d00000000       mov dword ptr fs:[0], ecx
// 00417212  83c410               add esp, 0x10
// 00417215  c3                   ret 
// 00417216  33c0                 xor eax, eax
// 00417218  89460c               mov dword ptr [esi + 0xc], eax
// 0041721b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041721f  5e                   pop esi
// 00417220  64890d00000000       mov dword ptr fs:[0], ecx
// 00417227  83c410               add esp, 0x10
// 0041722a  c3                   ret 
// library rbxgs/reflection\type.cpp (function ??$_Construct@UItem@SignatureDescriptor@Reflection@RBX@@U1234@@std@@YAXPAUItem@SignatureDescriptor@Reflection@RBX@@ABU1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
