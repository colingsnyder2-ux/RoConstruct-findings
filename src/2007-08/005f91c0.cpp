// from server: 100% by auto
// roc 2007-08 005f91c0  unit: RBX::VDebrisService::?$FactoryProduct  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f91c0
//
// 005f91c0  56                   push esi
// 005f91c1  8bf1                 mov esi, ecx
// 005f91c3  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f91c6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f91c9  03c8                 add ecx, eax
// 005f91cb  f6c101               test cl, 1
// 005f91ce  7513                 jne 0x5f91e3
// 005f91d0  83c002               add eax, 2
// 005f91d3  d1e8                 shr eax, 1
// 005f91d5  394608               cmp dword ptr [esi + 8], eax
// 005f91d8  7709                 ja 0x5f91e3
// 005f91da  6a01                 push 1
// 005f91dc  8bce                 mov ecx, esi
// 005f91de  e85dfdffff           call 0x5f8f40
// 005f91e3  8b4608               mov eax, dword ptr [esi + 8]
// 005f91e6  55                   push ebp
// 005f91e7  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005f91ea  036e10               add ebp, dword ptr [esi + 0x10]
// 005f91ed  57                   push edi
// 005f91ee  8bfd                 mov edi, ebp
// 005f91f0  d1ef                 shr edi, 1
// 005f91f2  3bc7                 cmp eax, edi
// 005f91f4  7702                 ja 0x5f91f8
// 005f91f6  2bf8                 sub edi, eax
// 005f91f8  8b5604               mov edx, dword ptr [esi + 4]
// 005f91fb  833cba00             cmp dword ptr [edx + edi*4], 0
// 005f91ff  7510                 jne 0x5f9211
// 005f9201  6a10                 push 0x10
// 005f9203  e8ee6c0300           call 0x62fef6
// 005f9208  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f920b  83c404               add esp, 4
// 005f920e  8904b9               mov dword ptr [ecx + edi*4], eax
// 005f9211  8b5604               mov edx, dword ptr [esi + 4]
// 005f9214  8b04ba               mov eax, dword ptr [edx + edi*4]
// 005f9217  83e501               and ebp, 1
// 005f921a  8d04e8               lea eax, [eax + ebp*8]
// 005f921d  85c0                 test eax, eax
// 005f921f  5f                   pop edi
// 005f9220  5d                   pop ebp
// 005f9221  741e                 je 0x5f9241
// 005f9223  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f9227  8b11                 mov edx, dword ptr [ecx]
// 005f9229  8910                 mov dword ptr [eax], edx
// 005f922b  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f922e  85c9                 test ecx, ecx
// 005f9230  894804               mov dword ptr [eax + 4], ecx
// 005f9233  740c                 je 0x5f9241
// 005f9235  83c108               add ecx, 8
// 005f9238  b801000000           mov eax, 1
// 005f923d  f00fc101             lock xadd dword ptr [ecx], eax
// 005f9241  83461001             add dword ptr [esi + 0x10], 1
// 005f9245  5e                   pop esi
// 005f9246  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
