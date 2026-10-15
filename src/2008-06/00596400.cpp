// roc 2008-06 00596400  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596400
//
// 00596400  8b442404             mov eax, dword ptr [esp + 4]
// 00596404  56                   push esi
// 00596405  57                   push edi
// 00596406  8b38                 mov edi, dword ptr [eax]
// 00596408  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0059640b  8d7708               lea esi, [edi + 8]
// 0059640e  51                   push ecx
// 0059640f  83ec1c               sub esp, 0x1c
// 00596412  8d5620               lea edx, [esi + 0x20]
// 00596415  8bcc                 mov ecx, esp
// 00596417  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059641b  52                   push edx
// 0059641c  ff155c248000         call dword ptr [0x80245c]
// 00596422  8b07                 mov eax, dword ptr [edi]
// 00596424  56                   push esi
// 00596425  ffd0                 call eax
// 00596427  83c424               add esp, 0x24
// 0059642a  5f                   pop edi
// 0059642b  5e                   pop esi
// 0059642c  c3                   ret 
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@V?$value@H@23@@_bi@2@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
