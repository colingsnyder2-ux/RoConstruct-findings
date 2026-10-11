// roc 2008-06 00555fd0  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555fd0
//
// 00555fd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00555fd4  85c0                 test eax, eax
// 00555fd6  7527                 jne 0x555fff
// 00555fd8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555fdc  85c9                 test ecx, ecx
// 00555fde  747a                 je 0x55605a
// 00555fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00555fe4  8b10                 mov edx, dword ptr [eax]
// 00555fe6  8911                 mov dword ptr [ecx], edx
// 00555fe8  8b4004               mov eax, dword ptr [eax + 4]
// 00555feb  894104               mov dword ptr [ecx + 4], eax
// 00555fee  85c0                 test eax, eax
// 00555ff0  7468                 je 0x55605a
// 00555ff2  83c004               add eax, 4
// 00555ff5  b901000000           mov ecx, 1
// 00555ffa  f00fc108             lock xadd dword ptr [eax], ecx
// 00555ffe  c3                   ret 
// 00555fff  56                   push esi
// 00556000  83f801               cmp eax, 1
// 00556003  7536                 jne 0x55603b
// 00556005  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00556009  8b7204               mov esi, dword ptr [edx + 4]
// 0055600c  85f6                 test esi, esi
// 0055600e  7449                 je 0x556059
// 00556010  8d4604               lea eax, [esi + 4]
// 00556013  83c9ff               or ecx, 0xffffffff
// 00556016  f00fc108             lock xadd dword ptr [eax], ecx
// 0055601a  753d                 jne 0x556059
// 0055601c  8b16                 mov edx, dword ptr [esi]
// 0055601e  8b4204               mov eax, dword ptr [edx + 4]
// 00556021  8bce                 mov ecx, esi
// 00556023  ffd0                 call eax
// 00556025  8d4e08               lea ecx, [esi + 8]
// 00556028  83caff               or edx, 0xffffffff
// 0055602b  f00fc111             lock xadd dword ptr [ecx], edx
// 0055602f  7528                 jne 0x556059
// 00556031  8b06                 mov eax, dword ptr [esi]
// 00556033  8b5008               mov edx, dword ptr [eax + 8]
// 00556036  8bce                 mov ecx, esi
// 00556038  5e                   pop esi
// 00556039  ffe2                 jmp edx
// 0055603b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055603f  8b0e                 mov ecx, dword ptr [esi]
// 00556041  68e8339400           push 0x9433e8
// 00556046  ff1578288000         call dword ptr [0x802878]
// 0055604c  0fb6c0               movzx eax, al
// 0055604f  f7d8                 neg eax
// 00556051  1bc0                 sbb eax, eax
// 00556053  23442408             and eax, dword ptr [esp + 8]
// 00556057  8906                 mov dword ptr [esi], eax
// 00556059  5e                   pop esi
// 0055605a  c3                   ret 
// library openrbx-client/App\util\RunStateOwner.cpp (function ?manager@?$functor_manager@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@V?$allocator@X@std@@@function@detail@boost@@CAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@U?$bool_@$00@mpl@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
