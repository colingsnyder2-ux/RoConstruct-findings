// from server: 100% by auto
// roc 2009-06 00697730  unit: RBX::VDebrisService::?$FactoryProduct  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00697730
//
// 00697730  56                   push esi
// 00697731  8bf1                 mov esi, ecx
// 00697733  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00697736  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00697739  03c8                 add ecx, eax
// 0069773b  f6c101               test cl, 1
// 0069773e  7513                 jne 0x697753
// 00697740  83c002               add eax, 2
// 00697743  d1e8                 shr eax, 1
// 00697745  394614               cmp dword ptr [esi + 0x14], eax
// 00697748  7709                 ja 0x697753
// 0069774a  6a01                 push 1
// 0069774c  8bce                 mov ecx, esi
// 0069774e  e8ed63feff           call 0x67db40
// 00697753  8b4614               mov eax, dword ptr [esi + 0x14]
// 00697756  55                   push ebp
// 00697757  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0069775a  036e1c               add ebp, dword ptr [esi + 0x1c]
// 0069775d  57                   push edi
// 0069775e  8bfd                 mov edi, ebp
// 00697760  d1ef                 shr edi, 1
// 00697762  3bc7                 cmp eax, edi
// 00697764  7702                 ja 0x697768
// 00697766  2bf8                 sub edi, eax
// 00697768  8b5610               mov edx, dword ptr [esi + 0x10]
// 0069776b  833cba00             cmp dword ptr [edx + edi*4], 0
// 0069776f  7510                 jne 0x697781
// 00697771  6a10                 push 0x10
// 00697773  e8c0120800           call 0x718a38
// 00697778  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0069777b  83c404               add esp, 4
// 0069777e  8904b9               mov dword ptr [ecx + edi*4], eax
// 00697781  8b5610               mov edx, dword ptr [esi + 0x10]
// 00697784  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00697787  83e501               and ebp, 1
// 0069778a  8d04e8               lea eax, [eax + ebp*8]
// 0069778d  5f                   pop edi
// 0069778e  5d                   pop ebp
// 0069778f  85c0                 test eax, eax
// 00697791  741e                 je 0x6977b1
// 00697793  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00697797  8b11                 mov edx, dword ptr [ecx]
// 00697799  8910                 mov dword ptr [eax], edx
// 0069779b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069779e  894804               mov dword ptr [eax + 4], ecx
// 006977a1  85c9                 test ecx, ecx
// 006977a3  740c                 je 0x6977b1
// 006977a5  83c108               add ecx, 8
// 006977a8  b801000000           mov eax, 1
// 006977ad  f00fc101             lock xadd dword ptr [ecx], eax
// 006977b1  ff461c               inc dword ptr [esi + 0x1c]
// 006977b4  5e                   pop esi
// 006977b5  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ?push_back@?$deque@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
