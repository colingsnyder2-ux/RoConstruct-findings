// roc 2012-06 0086eb70  unit: RBX::VInstance::?$NonFactoryProduct  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086eb70
//
// 0086eb70  56                   push esi
// 0086eb71  8bf1                 mov esi, ecx
// 0086eb73  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0086eb76  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0086eb79  03c8                 add ecx, eax
// 0086eb7b  f6c101               test cl, 1
// 0086eb7e  7513                 jne 0x86eb93
// 0086eb80  83c002               add eax, 2
// 0086eb83  d1e8                 shr eax, 1
// 0086eb85  394614               cmp dword ptr [esi + 0x14], eax
// 0086eb88  7709                 ja 0x86eb93
// 0086eb8a  6a01                 push 1
// 0086eb8c  8bce                 mov ecx, esi
// 0086eb8e  e8dd8ee6ff           call 0x6d7a70
// 0086eb93  8b4614               mov eax, dword ptr [esi + 0x14]
// 0086eb96  55                   push ebp
// 0086eb97  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0086eb9a  036e1c               add ebp, dword ptr [esi + 0x1c]
// 0086eb9d  57                   push edi
// 0086eb9e  8bfd                 mov edi, ebp
// 0086eba0  d1ef                 shr edi, 1
// 0086eba2  3bc7                 cmp eax, edi
// 0086eba4  7702                 ja 0x86eba8
// 0086eba6  2bf8                 sub edi, eax
// 0086eba8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0086ebab  833cba00             cmp dword ptr [edx + edi*4], 0
// 0086ebaf  7510                 jne 0x86ebc1
// 0086ebb1  6a10                 push 0x10
// 0086ebb3  e862351100           call 0x98211a
// 0086ebb8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0086ebbb  83c404               add esp, 4
// 0086ebbe  8904b9               mov dword ptr [ecx + edi*4], eax
// 0086ebc1  8b5610               mov edx, dword ptr [esi + 0x10]
// 0086ebc4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0086ebc7  83e501               and ebp, 1
// 0086ebca  8d04e8               lea eax, [eax + ebp*8]
// 0086ebcd  5f                   pop edi
// 0086ebce  5d                   pop ebp
// 0086ebcf  85c0                 test eax, eax
// 0086ebd1  741e                 je 0x86ebf1
// 0086ebd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086ebd7  8b11                 mov edx, dword ptr [ecx]
// 0086ebd9  8910                 mov dword ptr [eax], edx
// 0086ebdb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086ebde  894804               mov dword ptr [eax + 4], ecx
// 0086ebe1  85c9                 test ecx, ecx
// 0086ebe3  740c                 je 0x86ebf1
// 0086ebe5  83c108               add ecx, 8
// 0086ebe8  b801000000           mov eax, 1
// 0086ebed  f00fc101             lock xadd dword ptr [ecx], eax
// 0086ebf1  ff461c               inc dword ptr [esi + 0x1c]
// 0086ebf4  5e                   pop esi
// 0086ebf5  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
