// from server: 100% by auto
// roc 2010-06 004b3280  unit: rbx::signals::Z::$$A6AXN::?$signal::slot  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b3280
//
// 004b3280  56                   push esi
// 004b3281  8bf1                 mov esi, ecx
// 004b3283  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004b3286  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004b3289  03c8                 add ecx, eax
// 004b328b  f6c101               test cl, 1
// 004b328e  7513                 jne 0x4b32a3
// 004b3290  83c002               add eax, 2
// 004b3293  d1e8                 shr eax, 1
// 004b3295  394614               cmp dword ptr [esi + 0x14], eax
// 004b3298  7709                 ja 0x4b32a3
// 004b329a  6a01                 push 1
// 004b329c  8bce                 mov ecx, esi
// 004b329e  e8bdd71a00           call 0x660a60
// 004b32a3  8b4614               mov eax, dword ptr [esi + 0x14]
// 004b32a6  55                   push ebp
// 004b32a7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 004b32aa  036e1c               add ebp, dword ptr [esi + 0x1c]
// 004b32ad  57                   push edi
// 004b32ae  8bfd                 mov edi, ebp
// 004b32b0  d1ef                 shr edi, 1
// 004b32b2  3bc7                 cmp eax, edi
// 004b32b4  7702                 ja 0x4b32b8
// 004b32b6  2bf8                 sub edi, eax
// 004b32b8  8b5610               mov edx, dword ptr [esi + 0x10]
// 004b32bb  833cba00             cmp dword ptr [edx + edi*4], 0
// 004b32bf  7510                 jne 0x4b32d1
// 004b32c1  6a10                 push 0x10
// 004b32c3  e8d8462f00           call 0x7a79a0
// 004b32c8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b32cb  83c404               add esp, 4
// 004b32ce  8904b9               mov dword ptr [ecx + edi*4], eax
// 004b32d1  8b5610               mov edx, dword ptr [esi + 0x10]
// 004b32d4  8b04ba               mov eax, dword ptr [edx + edi*4]
// 004b32d7  83e501               and ebp, 1
// 004b32da  8d04e8               lea eax, [eax + ebp*8]
// 004b32dd  5f                   pop edi
// 004b32de  5d                   pop ebp
// 004b32df  85c0                 test eax, eax
// 004b32e1  741e                 je 0x4b3301
// 004b32e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b32e7  8b11                 mov edx, dword ptr [ecx]
// 004b32e9  8910                 mov dword ptr [eax], edx
// 004b32eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004b32ee  894804               mov dword ptr [eax + 4], ecx
// 004b32f1  85c9                 test ecx, ecx
// 004b32f3  740c                 je 0x4b3301
// 004b32f5  83c104               add ecx, 4
// 004b32f8  b801000000           mov eax, 1
// 004b32fd  f00fc101             lock xadd dword ptr [ecx], eax
// 004b3301  ff461c               inc dword ptr [esi + 0x1c]
// 004b3304  5e                   pop esi
// 004b3305  c20400               ret 4
// library templates-boost-1_34_1/deque_sp.cpp (function ?push_back@?$deque@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_sp.cpp
