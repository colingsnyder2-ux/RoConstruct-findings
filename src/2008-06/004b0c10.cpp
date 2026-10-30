// from server: 100% by auto
// roc 2008-06 004b0c10  unit: RBX::Network::Replicator::NewInstanceItem  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b0c10
//
// 004b0c10  56                   push esi
// 004b0c11  8bf1                 mov esi, ecx
// 004b0c13  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004b0c16  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004b0c19  03c8                 add ecx, eax
// 004b0c1b  f6c101               test cl, 1
// 004b0c1e  7513                 jne 0x4b0c33
// 004b0c20  83c002               add eax, 2
// 004b0c23  d1e8                 shr eax, 1
// 004b0c25  394614               cmp dword ptr [esi + 0x14], eax
// 004b0c28  7709                 ja 0x4b0c33
// 004b0c2a  6a01                 push 1
// 004b0c2c  8bce                 mov ecx, esi
// 004b0c2e  e82de7ffff           call 0x4af360
// 004b0c33  8b4614               mov eax, dword ptr [esi + 0x14]
// 004b0c36  55                   push ebp
// 004b0c37  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 004b0c3a  036e1c               add ebp, dword ptr [esi + 0x1c]
// 004b0c3d  57                   push edi
// 004b0c3e  8bfd                 mov edi, ebp
// 004b0c40  d1ef                 shr edi, 1
// 004b0c42  3bc7                 cmp eax, edi
// 004b0c44  7702                 ja 0x4b0c48
// 004b0c46  2bf8                 sub edi, eax
// 004b0c48  8b5610               mov edx, dword ptr [esi + 0x10]
// 004b0c4b  833cba00             cmp dword ptr [edx + edi*4], 0
// 004b0c4f  7510                 jne 0x4b0c61
// 004b0c51  6a10                 push 0x10
// 004b0c53  e8c8fc1e00           call 0x6a0920
// 004b0c58  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b0c5b  83c404               add esp, 4
// 004b0c5e  8904b9               mov dword ptr [ecx + edi*4], eax
// 004b0c61  8b5610               mov edx, dword ptr [esi + 0x10]
// 004b0c64  8b04ba               mov eax, dword ptr [edx + edi*4]
// 004b0c67  83e501               and ebp, 1
// 004b0c6a  8d04e8               lea eax, [eax + ebp*8]
// 004b0c6d  5f                   pop edi
// 004b0c6e  5d                   pop ebp
// 004b0c6f  85c0                 test eax, eax
// 004b0c71  741e                 je 0x4b0c91
// 004b0c73  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b0c77  8b11                 mov edx, dword ptr [ecx]
// 004b0c79  8910                 mov dword ptr [eax], edx
// 004b0c7b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b0c7e  894804               mov dword ptr [eax + 4], ecx
// 004b0c81  85c9                 test ecx, ecx
// 004b0c83  740c                 je 0x4b0c91
// 004b0c85  83c104               add ecx, 4
// 004b0c88  b801000000           mov eax, 1
// 004b0c8d  f00fc101             lock xadd dword ptr [ecx], eax
// 004b0c91  ff461c               inc dword ptr [esi + 0x1c]
// 004b0c94  5e                   pop esi
// 004b0c95  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
