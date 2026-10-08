// roc 2008-06 00676940  unit: RBX::AdornG3D  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00676940
//
// 00676940  6aff                 push -1
// 00676942  68e8a47c00           push 0x7ca4e8
// 00676947  64a100000000         mov eax, dword ptr fs:[0]
// 0067694d  50                   push eax
// 0067694e  64892500000000       mov dword ptr fs:[0], esp
// 00676955  51                   push ecx
// 00676956  8d0424               lea eax, [esp]
// 00676959  56                   push esi
// 0067695a  50                   push eax
// 0067695b  e8b0190000           call 0x678310
// 00676960  83c404               add esp, 4
// 00676963  dd442420             fld qword ptr [esp + 0x20]
// 00676967  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067696b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0067696f  8b742418             mov esi, dword ptr [esp + 0x18]
// 00676973  51                   push ecx
// 00676974  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00676978  83ec08               sub esp, 8
// 0067697b  dd1c24               fstp qword ptr [esp]
// 0067697e  52                   push edx
// 0067697f  56                   push esi
// 00676980  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00676988  e8a3011400           call 0x7b6b30
// 0067698d  8b442404             mov eax, dword ptr [esp + 4]
// 00676991  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00676999  85c0                 test eax, eax
// 0067699b  7427                 je 0x6769c4
// 0067699d  83c004               add eax, 4
// 006769a0  50                   push eax
// 006769a1  ff15ac218000         call dword ptr [0x8021ac]
// 006769a7  85c0                 test eax, eax
// 006769a9  7519                 jne 0x6769c4
// 006769ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006769af  e8dc43deff           call 0x45ad90
// 006769b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006769b8  85c9                 test ecx, ecx
// 006769ba  7408                 je 0x6769c4
// 006769bc  8b01                 mov eax, dword ptr [ecx]
// 006769be  8b10                 mov edx, dword ptr [eax]
// 006769c0  6a01                 push 1
// 006769c2  ffd2                 call edx
// 006769c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006769c8  8bc6                 mov eax, esi
// 006769ca  5e                   pop esi
// 006769cb  64890d00000000       mov dword ptr fs:[0], ecx
// 006769d2  83c410               add esp, 0x10
// 006769d5  c21400               ret 0x14
// library rbxgs-appdraw/AdornG3D.cpp (function ?get2DStringBounds@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@Adorn@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
