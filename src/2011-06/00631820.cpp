// roc 2011-06 00631820  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00631820
//
// 00631820  6aff                 push -1
// 00631822  68688d9d00           push 0x9d8d68
// 00631827  64a100000000         mov eax, dword ptr fs:[0]
// 0063182d  50                   push eax
// 0063182e  64892500000000       mov dword ptr fs:[0], esp
// 00631835  51                   push ecx
// 00631836  56                   push esi
// 00631837  8bc1                 mov eax, ecx
// 00631839  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0063183d  83ec08               sub esp, 8
// 00631840  8bcc                 mov ecx, esp
// 00631842  8911                 mov dword ptr [ecx], edx
// 00631844  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631848  895104               mov dword ptr [ecx + 4], edx
// 0063184b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063184f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00631857  8964240c             mov dword ptr [esp + 0xc], esp
// 0063185b  85c9                 test ecx, ecx
// 0063185d  740c                 je 0x63186b
// 0063185f  83c104               add ecx, 4
// 00631862  ba01000000           mov edx, 1
// 00631867  f00fc111             lock xadd dword ptr [ecx], edx
// 0063186b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063186f  8b11                 mov edx, dword ptr [ecx]
// 00631871  8b4804               mov ecx, dword ptr [eax + 4]
// 00631874  03ca                 add ecx, edx
// 00631876  8b10                 mov edx, dword ptr [eax]
// 00631878  ffd2                 call edx
// 0063187a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063187e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00631886  85f6                 test esi, esi
// 00631888  742a                 je 0x6318b4
// 0063188a  8d4604               lea eax, [esi + 4]
// 0063188d  83c9ff               or ecx, 0xffffffff
// 00631890  f00fc108             lock xadd dword ptr [eax], ecx
// 00631894  751e                 jne 0x6318b4
// 00631896  8b16                 mov edx, dword ptr [esi]
// 00631898  8b4204               mov eax, dword ptr [edx + 4]
// 0063189b  8bce                 mov ecx, esi
// 0063189d  ffd0                 call eax
// 0063189f  8d4e08               lea ecx, [esi + 8]
// 006318a2  83caff               or edx, 0xffffffff
// 006318a5  f00fc111             lock xadd dword ptr [ecx], edx
// 006318a9  7509                 jne 0x6318b4
// 006318ab  8b06                 mov eax, dword ptr [esi]
// 006318ad  8b5008               mov edx, dword ptr [eax + 8]
// 006318b0  8bce                 mov ecx, esi
// 006318b2  ffd2                 call edx
// 006318b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006318b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006318bf  5e                   pop esi
// 006318c0  83c410               add esp, 0x10
// 006318c3  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
