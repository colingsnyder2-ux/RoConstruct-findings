// roc 2008-06 0040ac30  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ac30
//
// 0040ac30  56                   push esi
// 0040ac31  8b3590288000         mov esi, dword ptr [0x802890]
// 0040ac37  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040ac3b  85c0                 test eax, eax
// 0040ac3d  7406                 je 0x40ac45
// 0040ac3f  3b442428             cmp eax, dword ptr [esp + 0x28]
// 0040ac43  7402                 je 0x40ac47
// 0040ac45  ffd6                 call esi
// 0040ac47  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040ac4b  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0040ac4f  7534                 jne 0x40ac85
// 0040ac51  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040ac55  85c0                 test eax, eax
// 0040ac57  7406                 je 0x40ac5f
// 0040ac59  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0040ac5d  7402                 je 0x40ac61
// 0040ac5f  ffd6                 call esi
// 0040ac61  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040ac65  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0040ac69  7462                 je 0x40accd
// 0040ac6b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ac6f  85c0                 test eax, eax
// 0040ac71  7406                 je 0x40ac79
// 0040ac73  3b442438             cmp eax, dword ptr [esp + 0x38]
// 0040ac77  7402                 je 0x40ac7b
// 0040ac79  ffd6                 call esi
// 0040ac7b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0040ac7f  3b54243c             cmp edx, dword ptr [esp + 0x3c]
// 0040ac83  7448                 je 0x40accd
// 0040ac85  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ac89  85c0                 test eax, eax
// 0040ac8b  750a                 jne 0x40ac97
// 0040ac8d  ffd6                 call esi
// 0040ac8f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0040ac93  85c0                 test eax, eax
// 0040ac95  7404                 je 0x40ac9b
// 0040ac97  8b00                 mov eax, dword ptr [eax]
// 0040ac99  eb02                 jmp 0x40ac9d
// 0040ac9b  33c0                 xor eax, eax
// 0040ac9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0040aca1  3b4814               cmp ecx, dword ptr [eax + 0x14]
// 0040aca4  7502                 jne 0x40aca8
// 0040aca6  ffd6                 call esi
// 0040aca8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0040acac  8b420c               mov eax, dword ptr [edx + 0xc]
// 0040acaf  85c0                 test eax, eax
// 0040acb1  740c                 je 0x40acbf
// 0040acb3  83780800             cmp dword ptr [eax + 8], 0
// 0040acb7  7406                 je 0x40acbf
// 0040acb9  80780c00             cmp byte ptr [eax + 0xc], 0
// 0040acbd  740e                 je 0x40accd
// 0040acbf  8d4c240c             lea ecx, [esp + 0xc]
// 0040acc3  e8d8fdffff           call 0x40aaa0
// 0040acc8  e96affffff           jmp 0x40ac37
// 0040accd  8b442408             mov eax, dword ptr [esp + 8]
// 0040acd1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040acd5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040acd9  8908                 mov dword ptr [eax], ecx
// 0040acdb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0040acdf  895004               mov dword ptr [eax + 4], edx
// 0040ace2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0040ace6  894808               mov dword ptr [eax + 8], ecx
// 0040ace9  8a4c2424             mov cl, byte ptr [esp + 0x24]
// 0040aced  89500c               mov dword ptr [eax + 0xc], edx
// 0040acf0  c7401000000000       mov dword ptr [eax + 0x10], 0
// 0040acf7  c7401400000000       mov dword ptr [eax + 0x14], 0
// 0040acfe  884818               mov byte ptr [eax + 0x18], cl
// 0040ad01  5e                   pop esi
// 0040ad02  84c9                 test cl, cl
// 0040ad04  740e                 je 0x40ad14
// 0040ad06  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040ad0a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0040ad0e  894810               mov dword ptr [eax + 0x10], ecx
// 0040ad11  895014               mov dword ptr [eax + 0x14], edx
// 0040ad14  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??$_Find_if@Vnamed_slot_map_iterator@detail@signals@boost@@Uis_callable@234@@std@@YA?AVnamed_slot_map_iterator@detail@signals@boost@@V1234@0Uis_callable@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
