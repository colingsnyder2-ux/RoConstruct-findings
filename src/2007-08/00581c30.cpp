// roc 2007-08 00581c30  unit: RBX::VHat::?$FactoryProduct  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581c30
//
// 00581c30  6aff                 push -1
// 00581c32  68880a7500           push 0x750a88
// 00581c37  64a100000000         mov eax, dword ptr fs:[0]
// 00581c3d  50                   push eax
// 00581c3e  64892500000000       mov dword ptr fs:[0], esp
// 00581c45  51                   push ecx
// 00581c46  56                   push esi
// 00581c47  8b742420             mov esi, dword ptr [esp + 0x20]
// 00581c4b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00581c4f  83ec08               sub esp, 8
// 00581c52  85f6                 test esi, esi
// 00581c54  8bc4                 mov eax, esp
// 00581c56  8908                 mov dword ptr [eax], ecx
// 00581c58  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00581c60  8964240c             mov dword ptr [esp + 0xc], esp
// 00581c64  897004               mov dword ptr [eax + 4], esi
// 00581c67  740c                 je 0x581c75
// 00581c69  8d5604               lea edx, [esi + 4]
// 00581c6c  b801000000           mov eax, 1
// 00581c71  f00fc102             lock xadd dword ptr [edx], eax
// 00581c75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00581c79  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00581c7c  52                   push edx
// 00581c7d  e88ef5ffff           call 0x581210
// 00581c82  85f6                 test esi, esi
// 00581c84  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00581c8c  742a                 je 0x581cb8
// 00581c8e  8d4604               lea eax, [esi + 4]
// 00581c91  83c9ff               or ecx, 0xffffffff
// 00581c94  f00fc108             lock xadd dword ptr [eax], ecx
// 00581c98  751e                 jne 0x581cb8
// 00581c9a  8b16                 mov edx, dword ptr [esi]
// 00581c9c  8b4204               mov eax, dword ptr [edx + 4]
// 00581c9f  8bce                 mov ecx, esi
// 00581ca1  ffd0                 call eax
// 00581ca3  8d4e08               lea ecx, [esi + 8]
// 00581ca6  83caff               or edx, 0xffffffff
// 00581ca9  f00fc111             lock xadd dword ptr [ecx], edx
// 00581cad  7509                 jne 0x581cb8
// 00581caf  8b06                 mov eax, dword ptr [esi]
// 00581cb1  8b5008               mov edx, dword ptr [eax + 8]
// 00581cb4  8bce                 mov ecx, esi
// 00581cb6  ffd2                 call edx
// 00581cb8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581cbc  64890d00000000       mov dword ptr fs:[0], ecx
// 00581cc3  5e                   pop esi
// 00581cc4  83c410               add esp, 0x10
// 00581cc7  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVAccoutrement@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVAccoutrement@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
