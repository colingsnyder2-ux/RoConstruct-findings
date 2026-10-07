// roc 2009-06 0067dca0  unit: RBX::JointsService  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067dca0
//
// 0067dca0  56                   push esi
// 0067dca1  8bf1                 mov esi, ecx
// 0067dca3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0067dca6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0067dca9  03c8                 add ecx, eax
// 0067dcab  f6c101               test cl, 1
// 0067dcae  7513                 jne 0x67dcc3
// 0067dcb0  83c002               add eax, 2
// 0067dcb3  d1e8                 shr eax, 1
// 0067dcb5  394614               cmp dword ptr [esi + 0x14], eax
// 0067dcb8  7709                 ja 0x67dcc3
// 0067dcba  6a01                 push 1
// 0067dcbc  8bce                 mov ecx, esi
// 0067dcbe  e87dfeffff           call 0x67db40
// 0067dcc3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0067dcc6  55                   push ebp
// 0067dcc7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0067dcca  036e1c               add ebp, dword ptr [esi + 0x1c]
// 0067dccd  57                   push edi
// 0067dcce  8bfd                 mov edi, ebp
// 0067dcd0  d1ef                 shr edi, 1
// 0067dcd2  3bc7                 cmp eax, edi
// 0067dcd4  7702                 ja 0x67dcd8
// 0067dcd6  2bf8                 sub edi, eax
// 0067dcd8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0067dcdb  833cba00             cmp dword ptr [edx + edi*4], 0
// 0067dcdf  7510                 jne 0x67dcf1
// 0067dce1  6a10                 push 0x10
// 0067dce3  e850ad0900           call 0x718a38
// 0067dce8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0067dceb  83c404               add esp, 4
// 0067dcee  8904b9               mov dword ptr [ecx + edi*4], eax
// 0067dcf1  8b5610               mov edx, dword ptr [esi + 0x10]
// 0067dcf4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0067dcf7  83e501               and ebp, 1
// 0067dcfa  8d04e8               lea eax, [eax + ebp*8]
// 0067dcfd  5f                   pop edi
// 0067dcfe  5d                   pop ebp
// 0067dcff  85c0                 test eax, eax
// 0067dd01  741e                 je 0x67dd21
// 0067dd03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067dd07  8b11                 mov edx, dword ptr [ecx]
// 0067dd09  8910                 mov dword ptr [eax], edx
// 0067dd0b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067dd0e  894804               mov dword ptr [eax + 4], ecx
// 0067dd11  85c9                 test ecx, ecx
// 0067dd13  740c                 je 0x67dd21
// 0067dd15  83c104               add ecx, 4
// 0067dd18  b801000000           mov eax, 1
// 0067dd1d  f00fc101             lock xadd dword ptr [ecx], eax
// 0067dd21  ff461c               inc dword ptr [esi + 0x1c]
// 0067dd24  5e                   pop esi
// 0067dd25  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
