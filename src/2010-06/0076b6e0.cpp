// roc 2010-06 0076b6e0  unit: RBX::VChatLine::?$sp_counted_impl_p  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076b6e0
//
// 0076b6e0  55                   push ebp
// 0076b6e1  56                   push esi
// 0076b6e2  8bf1                 mov esi, ecx
// 0076b6e4  f6461801             test byte ptr [esi + 0x18], 1
// 0076b6e8  7514                 jne 0x76b6fe
// 0076b6ea  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0076b6ed  83c002               add eax, 2
// 0076b6f0  d1e8                 shr eax, 1
// 0076b6f2  394614               cmp dword ptr [esi + 0x14], eax
// 0076b6f5  7707                 ja 0x76b6fe
// 0076b6f7  6a01                 push 1
// 0076b6f9  e86253efff           call 0x660a60
// 0076b6fe  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0076b701  85ed                 test ebp, ebp
// 0076b703  7505                 jne 0x76b70a
// 0076b705  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0076b708  03ed                 add ebp, ebp
// 0076b70a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0076b70d  4d                   dec ebp
// 0076b70e  57                   push edi
// 0076b70f  8bfd                 mov edi, ebp
// 0076b711  d1ef                 shr edi, 1
// 0076b713  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0076b717  7510                 jne 0x76b729
// 0076b719  6a10                 push 0x10
// 0076b71b  e880c20300           call 0x7a79a0
// 0076b720  8b5610               mov edx, dword ptr [esi + 0x10]
// 0076b723  83c404               add esp, 4
// 0076b726  8904ba               mov dword ptr [edx + edi*4], eax
// 0076b729  8b4610               mov eax, dword ptr [esi + 0x10]
// 0076b72c  8b14b8               mov edx, dword ptr [eax + edi*4]
// 0076b72f  8bcd                 mov ecx, ebp
// 0076b731  83e101               and ecx, 1
// 0076b734  8d04ca               lea eax, [edx + ecx*8]
// 0076b737  5f                   pop edi
// 0076b738  85c0                 test eax, eax
// 0076b73a  741e                 je 0x76b75a
// 0076b73c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0076b740  8b11                 mov edx, dword ptr [ecx]
// 0076b742  8910                 mov dword ptr [eax], edx
// 0076b744  8b4904               mov ecx, dword ptr [ecx + 4]
// 0076b747  894804               mov dword ptr [eax + 4], ecx
// 0076b74a  85c9                 test ecx, ecx
// 0076b74c  740c                 je 0x76b75a
// 0076b74e  83c104               add ecx, 4
// 0076b751  b801000000           mov eax, 1
// 0076b756  f00fc101             lock xadd dword ptr [ecx], eax
// 0076b75a  ff461c               inc dword ptr [esi + 0x1c]
// 0076b75d  896e18               mov dword ptr [esi + 0x18], ebp
// 0076b760  5e                   pop esi
// 0076b761  5d                   pop ebp
// 0076b762  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_front@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
