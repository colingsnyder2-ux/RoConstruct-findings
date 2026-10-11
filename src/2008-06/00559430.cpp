// roc 2008-06 00559430  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559430
//
// 00559430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00559434  85c0                 test eax, eax
// 00559436  7527                 jne 0x55945f
// 00559438  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055943c  85c9                 test ecx, ecx
// 0055943e  747a                 je 0x5594ba
// 00559440  8b442404             mov eax, dword ptr [esp + 4]
// 00559444  8b10                 mov edx, dword ptr [eax]
// 00559446  8911                 mov dword ptr [ecx], edx
// 00559448  8b4004               mov eax, dword ptr [eax + 4]
// 0055944b  894104               mov dword ptr [ecx + 4], eax
// 0055944e  85c0                 test eax, eax
// 00559450  7468                 je 0x5594ba
// 00559452  83c004               add eax, 4
// 00559455  b901000000           mov ecx, 1
// 0055945a  f00fc108             lock xadd dword ptr [eax], ecx
// 0055945e  c3                   ret 
// 0055945f  56                   push esi
// 00559460  83f801               cmp eax, 1
// 00559463  7536                 jne 0x55949b
// 00559465  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00559469  8b7204               mov esi, dword ptr [edx + 4]
// 0055946c  85f6                 test esi, esi
// 0055946e  7449                 je 0x5594b9
// 00559470  8d4604               lea eax, [esi + 4]
// 00559473  83c9ff               or ecx, 0xffffffff
// 00559476  f00fc108             lock xadd dword ptr [eax], ecx
// 0055947a  753d                 jne 0x5594b9
// 0055947c  8b16                 mov edx, dword ptr [esi]
// 0055947e  8b4204               mov eax, dword ptr [edx + 4]
// 00559481  8bce                 mov ecx, esi
// 00559483  ffd0                 call eax
// 00559485  8d4e08               lea ecx, [esi + 8]
// 00559488  83caff               or edx, 0xffffffff
// 0055948b  f00fc111             lock xadd dword ptr [ecx], edx
// 0055948f  7528                 jne 0x5594b9
// 00559491  8b06                 mov eax, dword ptr [esi]
// 00559493  8b5008               mov edx, dword ptr [eax + 8]
// 00559496  8bce                 mov ecx, esi
// 00559498  5e                   pop esi
// 00559499  ffe2                 jmp edx
// 0055949b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055949f  8b0e                 mov ecx, dword ptr [esi]
// 005594a1  68d03a9400           push 0x943ad0
// 005594a6  ff1578288000         call dword ptr [0x802878]
// 005594ac  0fb6c0               movzx eax, al
// 005594af  f7d8                 neg eax
// 005594b1  1bc0                 sbb eax, eax
// 005594b3  23442408             and eax, dword ptr [esp + 8]
// 005594b7  8906                 mov dword ptr [esi], eax
// 005594b9  5e                   pop esi
// 005594ba  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ?manager@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXPBVPropertyDescriptor@Reflection@RBX@@@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@CAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@U?$bool_@$00@mpl@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
