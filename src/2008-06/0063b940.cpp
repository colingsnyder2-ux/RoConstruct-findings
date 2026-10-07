// roc 2008-06 0063b940  unit: RBX::P8DebrisService::?$GetSetImpl  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b940
//
// 0063b940  56                   push esi
// 0063b941  8bf1                 mov esi, ecx
// 0063b943  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0063b946  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063b949  03c8                 add ecx, eax
// 0063b94b  f6c101               test cl, 1
// 0063b94e  7513                 jne 0x63b963
// 0063b950  83c002               add eax, 2
// 0063b953  d1e8                 shr eax, 1
// 0063b955  394614               cmp dword ptr [esi + 0x14], eax
// 0063b958  7709                 ja 0x63b963
// 0063b95a  6a01                 push 1
// 0063b95c  8bce                 mov ecx, esi
// 0063b95e  e8fd39e7ff           call 0x4af360
// 0063b963  8b4614               mov eax, dword ptr [esi + 0x14]
// 0063b966  55                   push ebp
// 0063b967  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0063b96a  036e1c               add ebp, dword ptr [esi + 0x1c]
// 0063b96d  57                   push edi
// 0063b96e  8bfd                 mov edi, ebp
// 0063b970  d1ef                 shr edi, 1
// 0063b972  3bc7                 cmp eax, edi
// 0063b974  7702                 ja 0x63b978
// 0063b976  2bf8                 sub edi, eax
// 0063b978  8b5610               mov edx, dword ptr [esi + 0x10]
// 0063b97b  833cba00             cmp dword ptr [edx + edi*4], 0
// 0063b97f  7510                 jne 0x63b991
// 0063b981  6a10                 push 0x10
// 0063b983  e8984f0600           call 0x6a0920
// 0063b988  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0063b98b  83c404               add esp, 4
// 0063b98e  8904b9               mov dword ptr [ecx + edi*4], eax
// 0063b991  8b5610               mov edx, dword ptr [esi + 0x10]
// 0063b994  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0063b997  83e501               and ebp, 1
// 0063b99a  8d04e8               lea eax, [eax + ebp*8]
// 0063b99d  5f                   pop edi
// 0063b99e  5d                   pop ebp
// 0063b99f  85c0                 test eax, eax
// 0063b9a1  741e                 je 0x63b9c1
// 0063b9a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063b9a7  8b11                 mov edx, dword ptr [ecx]
// 0063b9a9  8910                 mov dword ptr [eax], edx
// 0063b9ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 0063b9ae  894804               mov dword ptr [eax + 4], ecx
// 0063b9b1  85c9                 test ecx, ecx
// 0063b9b3  740c                 je 0x63b9c1
// 0063b9b5  83c108               add ecx, 8
// 0063b9b8  b801000000           mov eax, 1
// 0063b9bd  f00fc101             lock xadd dword ptr [ecx], eax
// 0063b9c1  ff461c               inc dword ptr [esi + 0x1c]
// 0063b9c4  5e                   pop esi
// 0063b9c5  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
