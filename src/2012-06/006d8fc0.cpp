// roc 2012-06 006d8fc0  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d8fc0
//
// 006d8fc0  56                   push esi
// 006d8fc1  8bf1                 mov esi, ecx
// 006d8fc3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006d8fc6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006d8fc9  03c8                 add ecx, eax
// 006d8fcb  f6c101               test cl, 1
// 006d8fce  7513                 jne 0x6d8fe3
// 006d8fd0  83c002               add eax, 2
// 006d8fd3  d1e8                 shr eax, 1
// 006d8fd5  394614               cmp dword ptr [esi + 0x14], eax
// 006d8fd8  7709                 ja 0x6d8fe3
// 006d8fda  6a01                 push 1
// 006d8fdc  8bce                 mov ecx, esi
// 006d8fde  e88deaffff           call 0x6d7a70
// 006d8fe3  8b4614               mov eax, dword ptr [esi + 0x14]
// 006d8fe6  55                   push ebp
// 006d8fe7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 006d8fea  036e1c               add ebp, dword ptr [esi + 0x1c]
// 006d8fed  57                   push edi
// 006d8fee  8bfd                 mov edi, ebp
// 006d8ff0  d1ef                 shr edi, 1
// 006d8ff2  3bc7                 cmp eax, edi
// 006d8ff4  7702                 ja 0x6d8ff8
// 006d8ff6  2bf8                 sub edi, eax
// 006d8ff8  8b5610               mov edx, dword ptr [esi + 0x10]
// 006d8ffb  833cba00             cmp dword ptr [edx + edi*4], 0
// 006d8fff  7510                 jne 0x6d9011
// 006d9001  6a10                 push 0x10
// 006d9003  e812912a00           call 0x98211a
// 006d9008  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006d900b  83c404               add esp, 4
// 006d900e  8904b9               mov dword ptr [ecx + edi*4], eax
// 006d9011  8b5610               mov edx, dword ptr [esi + 0x10]
// 006d9014  8b04ba               mov eax, dword ptr [edx + edi*4]
// 006d9017  83e501               and ebp, 1
// 006d901a  8d04e8               lea eax, [eax + ebp*8]
// 006d901d  5f                   pop edi
// 006d901e  5d                   pop ebp
// 006d901f  85c0                 test eax, eax
// 006d9021  741e                 je 0x6d9041
// 006d9023  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d9027  8b11                 mov edx, dword ptr [ecx]
// 006d9029  8910                 mov dword ptr [eax], edx
// 006d902b  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d902e  894804               mov dword ptr [eax + 4], ecx
// 006d9031  85c9                 test ecx, ecx
// 006d9033  740c                 je 0x6d9041
// 006d9035  83c104               add ecx, 4
// 006d9038  b801000000           mov eax, 1
// 006d903d  f00fc101             lock xadd dword ptr [ecx], eax
// 006d9041  ff461c               inc dword ptr [esi + 0x1c]
// 006d9044  5e                   pop esi
// 006d9045  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
