// roc 2010-06 006614d0  unit: G3D::VRay::?$TypedPropertyDescriptor  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006614d0
//
// 006614d0  56                   push esi
// 006614d1  8bf1                 mov esi, ecx
// 006614d3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006614d6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006614d9  03c8                 add ecx, eax
// 006614db  f6c101               test cl, 1
// 006614de  7513                 jne 0x6614f3
// 006614e0  83c002               add eax, 2
// 006614e3  d1e8                 shr eax, 1
// 006614e5  394614               cmp dword ptr [esi + 0x14], eax
// 006614e8  7709                 ja 0x6614f3
// 006614ea  6a01                 push 1
// 006614ec  8bce                 mov ecx, esi
// 006614ee  e86df5ffff           call 0x660a60
// 006614f3  8b4614               mov eax, dword ptr [esi + 0x14]
// 006614f6  55                   push ebp
// 006614f7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 006614fa  036e1c               add ebp, dword ptr [esi + 0x1c]
// 006614fd  57                   push edi
// 006614fe  8bfd                 mov edi, ebp
// 00661500  d1ef                 shr edi, 1
// 00661502  3bc7                 cmp eax, edi
// 00661504  7702                 ja 0x661508
// 00661506  2bf8                 sub edi, eax
// 00661508  8b5610               mov edx, dword ptr [esi + 0x10]
// 0066150b  833cba00             cmp dword ptr [edx + edi*4], 0
// 0066150f  7510                 jne 0x661521
// 00661511  6a10                 push 0x10
// 00661513  e888641400           call 0x7a79a0
// 00661518  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0066151b  83c404               add esp, 4
// 0066151e  8904b9               mov dword ptr [ecx + edi*4], eax
// 00661521  8b5610               mov edx, dword ptr [esi + 0x10]
// 00661524  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00661527  83e501               and ebp, 1
// 0066152a  8d04e8               lea eax, [eax + ebp*8]
// 0066152d  5f                   pop edi
// 0066152e  5d                   pop ebp
// 0066152f  85c0                 test eax, eax
// 00661531  741e                 je 0x661551
// 00661533  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00661537  8b11                 mov edx, dword ptr [ecx]
// 00661539  8910                 mov dword ptr [eax], edx
// 0066153b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066153e  894804               mov dword ptr [eax + 4], ecx
// 00661541  85c9                 test ecx, ecx
// 00661543  740c                 je 0x661551
// 00661545  83c108               add ecx, 8
// 00661548  b801000000           mov eax, 1
// 0066154d  f00fc101             lock xadd dword ptr [ecx], eax
// 00661551  ff461c               inc dword ptr [esi + 0x1c]
// 00661554  5e                   pop esi
// 00661555  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
