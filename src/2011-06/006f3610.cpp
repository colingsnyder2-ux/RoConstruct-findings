// from server: 100% by auto
// roc 2011-06 006f3610  unit: RBX::VDebrisService::?$FactoryProduct  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f3610
//
// 006f3610  56                   push esi
// 006f3611  8bf1                 mov esi, ecx
// 006f3613  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006f3616  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006f3619  03c8                 add ecx, eax
// 006f361b  f6c101               test cl, 1
// 006f361e  7513                 jne 0x6f3633
// 006f3620  83c002               add eax, 2
// 006f3623  d1e8                 shr eax, 1
// 006f3625  394614               cmp dword ptr [esi + 0x14], eax
// 006f3628  7709                 ja 0x6f3633
// 006f362a  6a01                 push 1
// 006f362c  8bce                 mov ecx, esi
// 006f362e  e8cda8d2ff           call 0x41df00
// 006f3633  8b4614               mov eax, dword ptr [esi + 0x14]
// 006f3636  55                   push ebp
// 006f3637  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 006f363a  036e1c               add ebp, dword ptr [esi + 0x1c]
// 006f363d  57                   push edi
// 006f363e  8bfd                 mov edi, ebp
// 006f3640  d1ef                 shr edi, 1
// 006f3642  3bc7                 cmp eax, edi
// 006f3644  7702                 ja 0x6f3648
// 006f3646  2bf8                 sub edi, eax
// 006f3648  8b5610               mov edx, dword ptr [esi + 0x10]
// 006f364b  833cba00             cmp dword ptr [edx + edi*4], 0
// 006f364f  7510                 jne 0x6f3661
// 006f3651  6a10                 push 0x10
// 006f3653  e8066a1100           call 0x80a05e
// 006f3658  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006f365b  83c404               add esp, 4
// 006f365e  8904b9               mov dword ptr [ecx + edi*4], eax
// 006f3661  8b5610               mov edx, dword ptr [esi + 0x10]
// 006f3664  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006f3667  83e501               and ebp, 1
// 006f366a  8d04e8               lea eax, [eax + ebp*8]
// 006f366d  5f                   pop edi
// 006f366e  5d                   pop ebp
// 006f366f  85c0                 test eax, eax
// 006f3671  741e                 je 0x6f3691
// 006f3673  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f3677  8b11                 mov edx, dword ptr [ecx]
// 006f3679  8910                 mov dword ptr [eax], edx
// 006f367b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f367e  894804               mov dword ptr [eax + 4], ecx
// 006f3681  85c9                 test ecx, ecx
// 006f3683  740c                 je 0x6f3691
// 006f3685  83c108               add ecx, 8
// 006f3688  b801000000           mov eax, 1
// 006f368d  f00fc101             lock xadd dword ptr [ecx], eax
// 006f3691  ff461c               inc dword ptr [esi + 0x1c]
// 006f3694  5e                   pop esi
// 006f3695  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
