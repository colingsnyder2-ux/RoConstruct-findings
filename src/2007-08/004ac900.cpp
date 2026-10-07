// roc 2007-08 004ac900  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ac900
//
// 004ac900  56                   push esi
// 004ac901  8bf1                 mov esi, ecx
// 004ac903  8b4610               mov eax, dword ptr [esi + 0x10]
// 004ac906  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004ac909  03c8                 add ecx, eax
// 004ac90b  f6c101               test cl, 1
// 004ac90e  7513                 jne 0x4ac923
// 004ac910  83c002               add eax, 2
// 004ac913  d1e8                 shr eax, 1
// 004ac915  394608               cmp dword ptr [esi + 8], eax
// 004ac918  7709                 ja 0x4ac923
// 004ac91a  6a01                 push 1
// 004ac91c  8bce                 mov ecx, esi
// 004ac91e  e8ade8ffff           call 0x4ab1d0
// 004ac923  8b4608               mov eax, dword ptr [esi + 8]
// 004ac926  55                   push ebp
// 004ac927  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004ac92a  036e10               add ebp, dword ptr [esi + 0x10]
// 004ac92d  57                   push edi
// 004ac92e  8bfd                 mov edi, ebp
// 004ac930  d1ef                 shr edi, 1
// 004ac932  3bc7                 cmp eax, edi
// 004ac934  7702                 ja 0x4ac938
// 004ac936  2bf8                 sub edi, eax
// 004ac938  8b5604               mov edx, dword ptr [esi + 4]
// 004ac93b  833cba00             cmp dword ptr [edx + edi*4], 0
// 004ac93f  7510                 jne 0x4ac951
// 004ac941  6a10                 push 0x10
// 004ac943  e8ae351800           call 0x62fef6
// 004ac948  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ac94b  83c404               add esp, 4
// 004ac94e  8904b9               mov dword ptr [ecx + edi*4], eax
// 004ac951  8b5604               mov edx, dword ptr [esi + 4]
// 004ac954  8b04ba               mov eax, dword ptr [edx + edi*4]
// 004ac957  83e501               and ebp, 1
// 004ac95a  8d04e8               lea eax, [eax + ebp*8]
// 004ac95d  85c0                 test eax, eax
// 004ac95f  5f                   pop edi
// 004ac960  5d                   pop ebp
// 004ac961  741e                 je 0x4ac981
// 004ac963  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ac967  8b11                 mov edx, dword ptr [ecx]
// 004ac969  8910                 mov dword ptr [eax], edx
// 004ac96b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004ac96e  85c9                 test ecx, ecx
// 004ac970  894804               mov dword ptr [eax + 4], ecx
// 004ac973  740c                 je 0x4ac981
// 004ac975  83c104               add ecx, 4
// 004ac978  b801000000           mov eax, 1
// 004ac97d  f00fc101             lock xadd dword ptr [ecx], eax
// 004ac981  83461001             add dword ptr [esi + 0x10], 1
// 004ac985  5e                   pop esi
// 004ac986  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
