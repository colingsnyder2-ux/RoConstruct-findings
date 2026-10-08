// roc 2012-06 007cf7c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cf7c0
//
// 007cf7c0  6aff                 push -1
// 007cf7c2  68e852ad00           push 0xad52e8
// 007cf7c7  64a100000000         mov eax, dword ptr fs:[0]
// 007cf7cd  50                   push eax
// 007cf7ce  64892500000000       mov dword ptr fs:[0], esp
// 007cf7d5  51                   push ecx
// 007cf7d6  56                   push esi
// 007cf7d7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007cf7db  83ec08               sub esp, 8
// 007cf7de  8bc4                 mov eax, esp
// 007cf7e0  8908                 mov dword ptr [eax], ecx
// 007cf7e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007cf7e6  895004               mov dword ptr [eax + 4], edx
// 007cf7e9  8b442428             mov eax, dword ptr [esp + 0x28]
// 007cf7ed  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007cf7f5  8964240c             mov dword ptr [esp + 0xc], esp
// 007cf7f9  85c0                 test eax, eax
// 007cf7fb  740c                 je 0x7cf809
// 007cf7fd  83c004               add eax, 4
// 007cf800  b901000000           mov ecx, 1
// 007cf805  f00fc108             lock xadd dword ptr [eax], ecx
// 007cf809  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007cf80d  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007cf810  52                   push edx
// 007cf811  e8cafbffff           call 0x7cf3e0
// 007cf816  8b742420             mov esi, dword ptr [esp + 0x20]
// 007cf81a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007cf822  85f6                 test esi, esi
// 007cf824  742a                 je 0x7cf850
// 007cf826  8d4604               lea eax, [esi + 4]
// 007cf829  83c9ff               or ecx, 0xffffffff
// 007cf82c  f00fc108             lock xadd dword ptr [eax], ecx
// 007cf830  751e                 jne 0x7cf850
// 007cf832  8b16                 mov edx, dword ptr [esi]
// 007cf834  8b4204               mov eax, dword ptr [edx + 4]
// 007cf837  8bce                 mov ecx, esi
// 007cf839  ffd0                 call eax
// 007cf83b  8d4e08               lea ecx, [esi + 8]
// 007cf83e  83caff               or edx, 0xffffffff
// 007cf841  f00fc111             lock xadd dword ptr [ecx], edx
// 007cf845  7509                 jne 0x7cf850
// 007cf847  8b06                 mov eax, dword ptr [esi]
// 007cf849  8b5008               mov edx, dword ptr [eax + 8]
// 007cf84c  8bce                 mov ecx, esi
// 007cf84e  ffd2                 call edx
// 007cf850  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007cf854  64890d00000000       mov dword ptr fs:[0], ecx
// 007cf85b  5e                   pop esi
// 007cf85c  83c410               add esp, 0x10
// 007cf85f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?invoke@?$void_function_obj_invoker1@V?$bind_t@XV?$mf1@XVFlagStand@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVFlagStand@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@XV?$shared_ptr@VInstance@RBX@@@3@@function@detail@boost@@SAXAATfunction_buffer@234@V?$shared_ptr@VInstance@RBX@@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
