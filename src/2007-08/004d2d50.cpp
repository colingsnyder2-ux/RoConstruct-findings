// roc 2007-08 004d2d50  unit: G3D::VVector3::?$Table  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2d50
//
// 004d2d50  6aff                 push -1
// 004d2d52  68880a7500           push 0x750a88
// 004d2d57  64a100000000         mov eax, dword ptr fs:[0]
// 004d2d5d  50                   push eax
// 004d2d5e  64892500000000       mov dword ptr fs:[0], esp
// 004d2d65  51                   push ecx
// 004d2d66  56                   push esi
// 004d2d67  8b742420             mov esi, dword ptr [esp + 0x20]
// 004d2d6b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d2d6f  83ec08               sub esp, 8
// 004d2d72  85f6                 test esi, esi
// 004d2d74  8bc4                 mov eax, esp
// 004d2d76  8908                 mov dword ptr [eax], ecx
// 004d2d78  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004d2d80  8964240c             mov dword ptr [esp + 0xc], esp
// 004d2d84  897004               mov dword ptr [eax + 4], esi
// 004d2d87  740c                 je 0x4d2d95
// 004d2d89  8d5604               lea edx, [esi + 4]
// 004d2d8c  b801000000           mov eax, 1
// 004d2d91  f00fc102             lock xadd dword ptr [edx], eax
// 004d2d95  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d2d99  8b5104               mov edx, dword ptr [ecx + 4]
// 004d2d9c  52                   push edx
// 004d2d9d  e8aedbffff           call 0x4d0950
// 004d2da2  85f6                 test esi, esi
// 004d2da4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004d2dac  742a                 je 0x4d2dd8
// 004d2dae  8d4604               lea eax, [esi + 4]
// 004d2db1  83c9ff               or ecx, 0xffffffff
// 004d2db4  f00fc108             lock xadd dword ptr [eax], ecx
// 004d2db8  751e                 jne 0x4d2dd8
// 004d2dba  8b16                 mov edx, dword ptr [esi]
// 004d2dbc  8b4204               mov eax, dword ptr [edx + 4]
// 004d2dbf  8bce                 mov ecx, esi
// 004d2dc1  ffd0                 call eax
// 004d2dc3  8d4e08               lea ecx, [esi + 8]
// 004d2dc6  83caff               or edx, 0xffffffff
// 004d2dc9  f00fc111             lock xadd dword ptr [ecx], edx
// 004d2dcd  7509                 jne 0x4d2dd8
// 004d2dcf  8b06                 mov eax, dword ptr [esi]
// 004d2dd1  8b5008               mov edx, dword ptr [eax + 8]
// 004d2dd4  8bce                 mov ecx, esi
// 004d2dd6  ffd2                 call edx
// 004d2dd8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d2ddc  64890d00000000       mov dword ptr fs:[0], ecx
// 004d2de3  5e                   pop esi
// 004d2de4  83c410               add esp, 0x10
// 004d2de7  c3                   ret 
// library rbxgs-view/Part.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVPartChunk@View@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVPartChunk@View@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
