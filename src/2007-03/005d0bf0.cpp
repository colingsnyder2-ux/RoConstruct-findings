// roc 2007-03 005d0bf0  unit: seg_005d0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0bf0
//
// 005d0bf0  6aff                 push -1
// 005d0bf2  68a8d57400           push 0x74d5a8
// 005d0bf7  64a100000000         mov eax, dword ptr fs:[0]
// 005d0bfd  50                   push eax
// 005d0bfe  64892500000000       mov dword ptr fs:[0], esp
// 005d0c05  51                   push ecx
// 005d0c06  56                   push esi
// 005d0c07  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d0c0b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d0c0f  83ec08               sub esp, 8
// 005d0c12  85f6                 test esi, esi
// 005d0c14  8bc4                 mov eax, esp
// 005d0c16  8908                 mov dword ptr [eax], ecx
// 005d0c18  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d0c20  8964240c             mov dword ptr [esp + 0xc], esp
// 005d0c24  897004               mov dword ptr [eax + 4], esi
// 005d0c27  740c                 je 0x5d0c35
// 005d0c29  8d5604               lea edx, [esi + 4]
// 005d0c2c  b801000000           mov eax, 1
// 005d0c31  f00fc102             lock xadd dword ptr [edx], eax
// 005d0c35  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d0c39  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005d0c3c  52                   push edx
// 005d0c3d  e80ef5ffff           call 0x5d0150
// 005d0c42  85f6                 test esi, esi
// 005d0c44  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d0c4c  742a                 je 0x5d0c78
// 005d0c4e  8d4604               lea eax, [esi + 4]
// 005d0c51  83c9ff               or ecx, 0xffffffff
// 005d0c54  f00fc108             lock xadd dword ptr [eax], ecx
// 005d0c58  751e                 jne 0x5d0c78
// 005d0c5a  8b16                 mov edx, dword ptr [esi]
// 005d0c5c  8b4204               mov eax, dword ptr [edx + 4]
// 005d0c5f  8bce                 mov ecx, esi
// 005d0c61  ffd0                 call eax
// 005d0c63  8d4e08               lea ecx, [esi + 8]
// 005d0c66  83caff               or edx, 0xffffffff
// 005d0c69  f00fc111             lock xadd dword ptr [ecx], edx
// 005d0c6d  7509                 jne 0x5d0c78
// 005d0c6f  8b06                 mov eax, dword ptr [esi]
// 005d0c71  8b5008               mov edx, dword ptr [eax + 8]
// 005d0c74  8bce                 mov ecx, esi
// 005d0c76  ffd2                 call edx
// 005d0c78  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d0c7c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0c83  5e                   pop esi
// 005d0c84  83c410               add esp, 0x10
// 005d0c87  c3                   ret 
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVAccoutrement@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVAccoutrement@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
