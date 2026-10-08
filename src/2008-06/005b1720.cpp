// roc 2008-06 005b1720  unit: RBX::VHat::?$FactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1720
//
// 005b1720  6aff                 push -1
// 005b1722  6818047c00           push 0x7c0418
// 005b1727  64a100000000         mov eax, dword ptr fs:[0]
// 005b172d  50                   push eax
// 005b172e  64892500000000       mov dword ptr fs:[0], esp
// 005b1735  51                   push ecx
// 005b1736  56                   push esi
// 005b1737  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b173b  83ec08               sub esp, 8
// 005b173e  8bc4                 mov eax, esp
// 005b1740  8908                 mov dword ptr [eax], ecx
// 005b1742  8b542428             mov edx, dword ptr [esp + 0x28]
// 005b1746  895004               mov dword ptr [eax + 4], edx
// 005b1749  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b174d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b1755  8964240c             mov dword ptr [esp + 0xc], esp
// 005b1759  85c0                 test eax, eax
// 005b175b  740c                 je 0x5b1769
// 005b175d  83c004               add eax, 4
// 005b1760  b901000000           mov ecx, 1
// 005b1765  f00fc108             lock xadd dword ptr [eax], ecx
// 005b1769  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005b176d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005b1770  52                   push edx
// 005b1771  e85af5ffff           call 0x5b0cd0
// 005b1776  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b177a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005b1782  85f6                 test esi, esi
// 005b1784  742a                 je 0x5b17b0
// 005b1786  8d4604               lea eax, [esi + 4]
// 005b1789  83c9ff               or ecx, 0xffffffff
// 005b178c  f00fc108             lock xadd dword ptr [eax], ecx
// 005b1790  751e                 jne 0x5b17b0
// 005b1792  8b16                 mov edx, dword ptr [esi]
// 005b1794  8b4204               mov eax, dword ptr [edx + 4]
// 005b1797  8bce                 mov ecx, esi
// 005b1799  ffd0                 call eax
// 005b179b  8d4e08               lea ecx, [esi + 8]
// 005b179e  83caff               or edx, 0xffffffff
// 005b17a1  f00fc111             lock xadd dword ptr [ecx], edx
// 005b17a5  7509                 jne 0x5b17b0
// 005b17a7  8b06                 mov eax, dword ptr [esi]
// 005b17a9  8b5008               mov edx, dword ptr [eax + 8]
// 005b17ac  8bce                 mov ecx, esi
// 005b17ae  ffd2                 call edx
// 005b17b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b17b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005b17bb  5e                   pop esi
// 005b17bc  83c410               add esp, 0x10
// 005b17bf  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
