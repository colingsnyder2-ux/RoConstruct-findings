// from server: 100% by auto
// roc 2011-06 007cb2a0  unit: RBX::ChatLine  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007cb2a0
//
// 007cb2a0  56                   push esi
// 007cb2a1  8bf1                 mov esi, ecx
// 007cb2a3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007cb2a6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007cb2a9  03c8                 add ecx, eax
// 007cb2ab  f6c101               test cl, 1
// 007cb2ae  7513                 jne 0x7cb2c3
// 007cb2b0  83c002               add eax, 2
// 007cb2b3  d1e8                 shr eax, 1
// 007cb2b5  394614               cmp dword ptr [esi + 0x14], eax
// 007cb2b8  7709                 ja 0x7cb2c3
// 007cb2ba  6a01                 push 1
// 007cb2bc  8bce                 mov ecx, esi
// 007cb2be  e83d2cc5ff           call 0x41df00
// 007cb2c3  8b4614               mov eax, dword ptr [esi + 0x14]
// 007cb2c6  55                   push ebp
// 007cb2c7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 007cb2ca  036e1c               add ebp, dword ptr [esi + 0x1c]
// 007cb2cd  57                   push edi
// 007cb2ce  8bfd                 mov edi, ebp
// 007cb2d0  d1ef                 shr edi, 1
// 007cb2d2  3bc7                 cmp eax, edi
// 007cb2d4  7702                 ja 0x7cb2d8
// 007cb2d6  2bf8                 sub edi, eax
// 007cb2d8  8b5610               mov edx, dword ptr [esi + 0x10]
// 007cb2db  833cba00             cmp dword ptr [edx + edi*4], 0
// 007cb2df  7510                 jne 0x7cb2f1
// 007cb2e1  6a10                 push 0x10
// 007cb2e3  e876ed0300           call 0x80a05e
// 007cb2e8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007cb2eb  83c404               add esp, 4
// 007cb2ee  8904b9               mov dword ptr [ecx + edi*4], eax
// 007cb2f1  8b5610               mov edx, dword ptr [esi + 0x10]
// 007cb2f4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007cb2f7  83e501               and ebp, 1
// 007cb2fa  8d04e8               lea eax, [eax + ebp*8]
// 007cb2fd  5f                   pop edi
// 007cb2fe  5d                   pop ebp
// 007cb2ff  85c0                 test eax, eax
// 007cb301  741e                 je 0x7cb321
// 007cb303  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007cb307  8b11                 mov edx, dword ptr [ecx]
// 007cb309  8910                 mov dword ptr [eax], edx
// 007cb30b  8b4904               mov ecx, dword ptr [ecx + 4]
// 007cb30e  894804               mov dword ptr [eax + 4], ecx
// 007cb311  85c9                 test ecx, ecx
// 007cb313  740c                 je 0x7cb321
// 007cb315  83c104               add ecx, 4
// 007cb318  b801000000           mov eax, 1
// 007cb31d  f00fc101             lock xadd dword ptr [ecx], eax
// 007cb321  ff461c               inc dword ptr [esi + 0x1c]
// 007cb324  5e                   pop esi
// 007cb325  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
