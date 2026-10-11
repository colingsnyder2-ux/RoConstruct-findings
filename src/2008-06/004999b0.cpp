// roc 2008-06 004999b0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004999b0
//
// 004999b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004999b4  85c0                 test eax, eax
// 004999b6  7527                 jne 0x4999df
// 004999b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004999bc  85c9                 test ecx, ecx
// 004999be  747a                 je 0x499a3a
// 004999c0  8b442404             mov eax, dword ptr [esp + 4]
// 004999c4  8b10                 mov edx, dword ptr [eax]
// 004999c6  8911                 mov dword ptr [ecx], edx
// 004999c8  8b4004               mov eax, dword ptr [eax + 4]
// 004999cb  894104               mov dword ptr [ecx + 4], eax
// 004999ce  85c0                 test eax, eax
// 004999d0  7468                 je 0x499a3a
// 004999d2  83c004               add eax, 4
// 004999d5  b901000000           mov ecx, 1
// 004999da  f00fc108             lock xadd dword ptr [eax], ecx
// 004999de  c3                   ret 
// 004999df  56                   push esi
// 004999e0  83f801               cmp eax, 1
// 004999e3  7536                 jne 0x499a1b
// 004999e5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004999e9  8b7204               mov esi, dword ptr [edx + 4]
// 004999ec  85f6                 test esi, esi
// 004999ee  7449                 je 0x499a39
// 004999f0  8d4604               lea eax, [esi + 4]
// 004999f3  83c9ff               or ecx, 0xffffffff
// 004999f6  f00fc108             lock xadd dword ptr [eax], ecx
// 004999fa  753d                 jne 0x499a39
// 004999fc  8b16                 mov edx, dword ptr [esi]
// 004999fe  8b4204               mov eax, dword ptr [edx + 4]
// 00499a01  8bce                 mov ecx, esi
// 00499a03  ffd0                 call eax
// 00499a05  8d4e08               lea ecx, [esi + 8]
// 00499a08  83caff               or edx, 0xffffffff
// 00499a0b  f00fc111             lock xadd dword ptr [ecx], edx
// 00499a0f  7528                 jne 0x499a39
// 00499a11  8b06                 mov eax, dword ptr [esi]
// 00499a13  8b5008               mov edx, dword ptr [eax + 8]
// 00499a16  8bce                 mov ecx, esi
// 00499a18  5e                   pop esi
// 00499a19  ffe2                 jmp edx
// 00499a1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00499a1f  8b0e                 mov ecx, dword ptr [esi]
// 00499a21  68b87f9300           push 0x937fb8
// 00499a26  ff1578288000         call dword ptr [0x802878]
// 00499a2c  0fb6c0               movzx eax, al
// 00499a2f  f7d8                 neg eax
// 00499a31  1bc0                 sbb eax, eax
// 00499a33  23442408             and eax, dword ptr [esp + 8]
// 00499a37  8906                 mov dword ptr [esi], eax
// 00499a39  5e                   pop esi
// 00499a3a  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?manager@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@CAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@U?$bool_@$00@mpl@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Instance.cpp
