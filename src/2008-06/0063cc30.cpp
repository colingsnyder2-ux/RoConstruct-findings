// roc 2008-06 0063cc30  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063cc30
//
// 0063cc30  6aff                 push -1
// 0063cc32  6818047c00           push 0x7c0418
// 0063cc37  64a100000000         mov eax, dword ptr fs:[0]
// 0063cc3d  50                   push eax
// 0063cc3e  64892500000000       mov dword ptr fs:[0], esp
// 0063cc45  51                   push ecx
// 0063cc46  56                   push esi
// 0063cc47  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063cc4b  83ec08               sub esp, 8
// 0063cc4e  8bc4                 mov eax, esp
// 0063cc50  8908                 mov dword ptr [eax], ecx
// 0063cc52  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063cc56  895004               mov dword ptr [eax + 4], edx
// 0063cc59  8b442428             mov eax, dword ptr [esp + 0x28]
// 0063cc5d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063cc65  8964240c             mov dword ptr [esp + 0xc], esp
// 0063cc69  85c0                 test eax, eax
// 0063cc6b  740c                 je 0x63cc79
// 0063cc6d  83c004               add eax, 4
// 0063cc70  b901000000           mov ecx, 1
// 0063cc75  f00fc108             lock xadd dword ptr [eax], ecx
// 0063cc79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063cc7d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0063cc80  52                   push edx
// 0063cc81  e8fa54f9ff           call 0x5d2180
// 0063cc86  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063cc8a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0063cc92  85f6                 test esi, esi
// 0063cc94  742a                 je 0x63ccc0
// 0063cc96  8d4604               lea eax, [esi + 4]
// 0063cc99  83c9ff               or ecx, 0xffffffff
// 0063cc9c  f00fc108             lock xadd dword ptr [eax], ecx
// 0063cca0  751e                 jne 0x63ccc0
// 0063cca2  8b16                 mov edx, dword ptr [esi]
// 0063cca4  8b4204               mov eax, dword ptr [edx + 4]
// 0063cca7  8bce                 mov ecx, esi
// 0063cca9  ffd0                 call eax
// 0063ccab  8d4e08               lea ecx, [esi + 8]
// 0063ccae  83caff               or edx, 0xffffffff
// 0063ccb1  f00fc111             lock xadd dword ptr [ecx], edx
// 0063ccb5  7509                 jne 0x63ccc0
// 0063ccb7  8b06                 mov eax, dword ptr [esi]
// 0063ccb9  8b5008               mov edx, dword ptr [eax + 8]
// 0063ccbc  8bce                 mov ecx, esi
// 0063ccbe  ffd2                 call edx
// 0063ccc0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063ccc4  64890d00000000       mov dword ptr fs:[0], ecx
// 0063cccb  5e                   pop esi
// 0063cccc  83c410               add esp, 0x10
// 0063cccf  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
