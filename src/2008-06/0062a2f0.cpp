// roc 2008-06 0062a2f0  unit: RBX::VNetworkSettings::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a2f0
//
// 0062a2f0  8bc1                 mov eax, ecx
// 0062a2f2  8b00                 mov eax, dword ptr [eax]
// 0062a2f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a2f8  d94008               fld dword ptr [eax + 8]
// 0062a2fb  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0062a2fe  56                   push esi
// 0062a2ff  8b30                 mov esi, dword ptr [eax]
// 0062a301  83ec0c               sub esp, 0xc
// 0062a304  8bd4                 mov edx, esp
// 0062a306  d95c2408             fstp dword ptr [esp + 8]
// 0062a30a  8932                 mov dword ptr [edx], esi
// 0062a30c  8b4004               mov eax, dword ptr [eax + 4]
// 0062a30f  83c108               add ecx, 8
// 0062a312  89642418             mov dword ptr [esp + 0x18], esp
// 0062a316  894204               mov dword ptr [edx + 4], eax
// 0062a319  85c0                 test eax, eax
// 0062a31b  740c                 je 0x62a329
// 0062a31d  83c004               add eax, 4
// 0062a320  ba01000000           mov edx, 1
// 0062a325  f00fc110             lock xadd dword ptr [eax], edx
// 0062a329  e892feffff           call 0x62a1c0
// 0062a32e  8b442408             mov eax, dword ptr [esp + 8]
// 0062a332  5e                   pop esi
// 0062a333  c20800               ret 8
// library rbxgs/roc_unit_5c2d9ebf33ac82fd.cpp (function ??$?RUconnection_slot_pair@detail@signals@boost@@@?$caller@V?$shared_ptr@VInstance@RBX@@@boost@@MV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@M@ZV?$allocator@X@std@@@2@@?$call_bound2@X@detail@signals@boost@@QBE?AUunusable@234@ABUconnection_slot_pair@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_5c2d9ebf33ac82fd.cpp
