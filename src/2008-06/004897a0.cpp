// roc 2008-06 004897a0  unit: G3D::GWindow  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004897a0
//
// 004897a0  6aff                 push -1
// 004897a2  6868e37c00           push 0x7ce368
// 004897a7  64a100000000         mov eax, dword ptr fs:[0]
// 004897ad  50                   push eax
// 004897ae  64892500000000       mov dword ptr fs:[0], esp
// 004897b5  51                   push ecx
// 004897b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004897ba  56                   push esi
// 004897bb  8bf1                 mov esi, ecx
// 004897bd  6aff                 push -1
// 004897bf  50                   push eax
// 004897c0  8974240c             mov dword ptr [esp + 0xc], esi
// 004897c4  c70630b78000         mov dword ptr [esi], 0x80b730
// 004897ca  e8c1a70c00           call 0x553f90
// 004897cf  894604               mov dword ptr [esi + 4], eax
// 004897d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 004897d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004897da  6aff                 push -1
// 004897dc  52                   push edx
// 004897dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004897e5  c70644148200         mov dword ptr [esi], 0x821444
// 004897eb  894e08               mov dword ptr [esi + 8], ecx
// 004897ee  e89da70c00           call 0x553f90
// 004897f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004897f7  89460c               mov dword ptr [esi + 0xc], eax
// 004897fa  83c410               add esp, 0x10
// 004897fd  8bc6                 mov eax, esi
// 004897ff  5e                   pop esi
// 00489800  64890d00000000       mov dword ptr fs:[0], ecx
// 00489807  83c410               add esp, 0x10
// 0048980a  c20c00               ret 0xc
// library openrbx-client/App\reflection\reflection_property.cpp (function ??0Type@Reflection@RBX@@IAE@PBDABVtype_info@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_property.cpp
