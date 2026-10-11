// roc 2008-06 0048e080  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e080
//
// 0048e080  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048e084  85c0                 test eax, eax
// 0048e086  7527                 jne 0x48e0af
// 0048e088  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e08c  85c9                 test ecx, ecx
// 0048e08e  747a                 je 0x48e10a
// 0048e090  8b442404             mov eax, dword ptr [esp + 4]
// 0048e094  8b10                 mov edx, dword ptr [eax]
// 0048e096  8911                 mov dword ptr [ecx], edx
// 0048e098  8b4004               mov eax, dword ptr [eax + 4]
// 0048e09b  894104               mov dword ptr [ecx + 4], eax
// 0048e09e  85c0                 test eax, eax
// 0048e0a0  7468                 je 0x48e10a
// 0048e0a2  83c004               add eax, 4
// 0048e0a5  b901000000           mov ecx, 1
// 0048e0aa  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e0ae  c3                   ret 
// 0048e0af  56                   push esi
// 0048e0b0  83f801               cmp eax, 1
// 0048e0b3  7536                 jne 0x48e0eb
// 0048e0b5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048e0b9  8b7204               mov esi, dword ptr [edx + 4]
// 0048e0bc  85f6                 test esi, esi
// 0048e0be  7449                 je 0x48e109
// 0048e0c0  8d4604               lea eax, [esi + 4]
// 0048e0c3  83c9ff               or ecx, 0xffffffff
// 0048e0c6  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e0ca  753d                 jne 0x48e109
// 0048e0cc  8b16                 mov edx, dword ptr [esi]
// 0048e0ce  8b4204               mov eax, dword ptr [edx + 4]
// 0048e0d1  8bce                 mov ecx, esi
// 0048e0d3  ffd0                 call eax
// 0048e0d5  8d4e08               lea ecx, [esi + 8]
// 0048e0d8  83caff               or edx, 0xffffffff
// 0048e0db  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e0df  7528                 jne 0x48e109
// 0048e0e1  8b06                 mov eax, dword ptr [esi]
// 0048e0e3  8b5008               mov edx, dword ptr [eax + 8]
// 0048e0e6  8bce                 mov ecx, esi
// 0048e0e8  5e                   pop esi
// 0048e0e9  ffe2                 jmp edx
// 0048e0eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048e0ef  8b0e                 mov ecx, dword ptr [esi]
// 0048e0f1  68d05c9300           push 0x935cd0
// 0048e0f6  ff1578288000         call dword ptr [0x802878]
// 0048e0fc  0fb6c0               movzx eax, al
// 0048e0ff  f7d8                 neg eax
// 0048e101  1bc0                 sbb eax, eax
// 0048e103  23442408             and eax, dword ptr [esp + 8]
// 0048e107  8906                 mov dword ptr [esi], eax
// 0048e109  5e                   pop esi
// 0048e10a  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?manager@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$00$$A6AXM@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@CAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@U?$bool_@$00@mpl@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
