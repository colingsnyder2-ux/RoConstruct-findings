// from server: 100% by auto
// roc 2011-06 007cb0e0  unit: RBX::ChatLine  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007cb0e0
//
// 007cb0e0  55                   push ebp
// 007cb0e1  56                   push esi
// 007cb0e2  8bf1                 mov esi, ecx
// 007cb0e4  f6461801             test byte ptr [esi + 0x18], 1
// 007cb0e8  7514                 jne 0x7cb0fe
// 007cb0ea  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007cb0ed  83c002               add eax, 2
// 007cb0f0  d1e8                 shr eax, 1
// 007cb0f2  394614               cmp dword ptr [esi + 0x14], eax
// 007cb0f5  7707                 ja 0x7cb0fe
// 007cb0f7  6a01                 push 1
// 007cb0f9  e8022ec5ff           call 0x41df00
// 007cb0fe  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 007cb101  85ed                 test ebp, ebp
// 007cb103  7505                 jne 0x7cb10a
// 007cb105  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 007cb108  03ed                 add ebp, ebp
// 007cb10a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007cb10d  4d                   dec ebp
// 007cb10e  57                   push edi
// 007cb10f  8bfd                 mov edi, ebp
// 007cb111  d1ef                 shr edi, 1
// 007cb113  833cb900             cmp dword ptr [ecx + edi*4], 0
// 007cb117  7510                 jne 0x7cb129
// 007cb119  6a10                 push 0x10
// 007cb11b  e83eef0300           call 0x80a05e
// 007cb120  8b5610               mov edx, dword ptr [esi + 0x10]
// 007cb123  83c404               add esp, 4
// 007cb126  8904ba               mov dword ptr [edx + edi*4], eax
// 007cb129  8b4610               mov eax, dword ptr [esi + 0x10]
// 007cb12c  8b14b8               mov edx, dword ptr [eax + edi*4]
// 007cb12f  8bcd                 mov ecx, ebp
// 007cb131  83e101               and ecx, 1
// 007cb134  8d04ca               lea eax, [edx + ecx*8]
// 007cb137  5f                   pop edi
// 007cb138  85c0                 test eax, eax
// 007cb13a  741e                 je 0x7cb15a
// 007cb13c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007cb140  8b11                 mov edx, dword ptr [ecx]
// 007cb142  8910                 mov dword ptr [eax], edx
// 007cb144  8b4904               mov ecx, dword ptr [ecx + 4]
// 007cb147  894804               mov dword ptr [eax + 4], ecx
// 007cb14a  85c9                 test ecx, ecx
// 007cb14c  740c                 je 0x7cb15a
// 007cb14e  83c104               add ecx, 4
// 007cb151  b801000000           mov eax, 1
// 007cb156  f00fc101             lock xadd dword ptr [ecx], eax
// 007cb15a  ff461c               inc dword ptr [esi + 0x1c]
// 007cb15d  896e18               mov dword ptr [esi + 0x18], ebp
// 007cb160  5e                   pop esi
// 007cb161  5d                   pop ebp
// 007cb162  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
