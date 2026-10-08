// from server: 100% by auto
// roc 2012-06 0093ef30  unit: RBX::ChatLine  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093ef30
//
// 0093ef30  55                   push ebp
// 0093ef31  56                   push esi
// 0093ef32  8bf1                 mov esi, ecx
// 0093ef34  f6461801             test byte ptr [esi + 0x18], 1
// 0093ef38  7514                 jne 0x93ef4e
// 0093ef3a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0093ef3d  83c002               add eax, 2
// 0093ef40  d1e8                 shr eax, 1
// 0093ef42  394614               cmp dword ptr [esi + 0x14], eax
// 0093ef45  7707                 ja 0x93ef4e
// 0093ef47  6a01                 push 1
// 0093ef49  e8228bd9ff           call 0x6d7a70
// 0093ef4e  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0093ef51  85ed                 test ebp, ebp
// 0093ef53  7505                 jne 0x93ef5a
// 0093ef55  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0093ef58  03ed                 add ebp, ebp
// 0093ef5a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0093ef5d  4d                   dec ebp
// 0093ef5e  57                   push edi
// 0093ef5f  8bfd                 mov edi, ebp
// 0093ef61  d1ef                 shr edi, 1
// 0093ef63  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0093ef67  7510                 jne 0x93ef79
// 0093ef69  6a10                 push 0x10
// 0093ef6b  e8aa310400           call 0x98211a
// 0093ef70  8b5610               mov edx, dword ptr [esi + 0x10]
// 0093ef73  83c404               add esp, 4
// 0093ef76  8904ba               mov dword ptr [edx + edi*4], eax
// 0093ef79  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093ef7c  8b14b8               mov edx, dword ptr [eax + edi*4]
// 0093ef7f  8bcd                 mov ecx, ebp
// 0093ef81  83e101               and ecx, 1
// 0093ef84  8d04ca               lea eax, [edx + ecx*8]
// 0093ef87  5f                   pop edi
// 0093ef88  85c0                 test eax, eax
// 0093ef8a  741e                 je 0x93efaa
// 0093ef8c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0093ef90  8b11                 mov edx, dword ptr [ecx]
// 0093ef92  8910                 mov dword ptr [eax], edx
// 0093ef94  8b4904               mov ecx, dword ptr [ecx + 4]
// 0093ef97  894804               mov dword ptr [eax + 4], ecx
// 0093ef9a  85c9                 test ecx, ecx
// 0093ef9c  740c                 je 0x93efaa
// 0093ef9e  83c104               add ecx, 4
// 0093efa1  b801000000           mov eax, 1
// 0093efa6  f00fc101             lock xadd dword ptr [ecx], eax
// 0093efaa  ff461c               inc dword ptr [esi + 0x1c]
// 0093efad  896e18               mov dword ptr [esi + 0x18], ebp
// 0093efb0  5e                   pop esi
// 0093efb1  5d                   pop ebp
// 0093efb2  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
