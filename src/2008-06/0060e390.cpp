// roc 2008-06 0060e390  unit: RBX::BlockBlockContact  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060e390
//
// 0060e390  83ec08               sub esp, 8
// 0060e393  53                   push ebx
// 0060e394  55                   push ebp
// 0060e395  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0060e399  56                   push esi
// 0060e39a  8bf1                 mov esi, ecx
// 0060e39c  57                   push edi
// 0060e39d  8b3d90288000         mov edi, dword ptr [0x802890]
// 0060e3a3  c7450000000000       mov dword ptr [ebp], 0
// 0060e3aa  85f6                 test esi, esi
// 0060e3ac  740e                 je 0x60e3bc
// 0060e3ae  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060e3b2  39460c               cmp dword ptr [esi + 0xc], eax
// 0060e3b5  7705                 ja 0x60e3bc
// 0060e3b7  3b4610               cmp eax, dword ptr [esi + 0x10]
// 0060e3ba  7606                 jbe 0x60e3c2
// 0060e3bc  ffd7                 call edi
// 0060e3be  8b442424             mov eax, dword ptr [esp + 0x24]
// 0060e3c2  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0060e3c6  8b0e                 mov ecx, dword ptr [esi]
// 0060e3c8  894d00               mov dword ptr [ebp], ecx
// 0060e3cb  894504               mov dword ptr [ebp + 4], eax
// 0060e3ce  395e0c               cmp dword ptr [esi + 0xc], ebx
// 0060e3d1  7705                 ja 0x60e3d8
// 0060e3d3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0060e3d6  7606                 jbe 0x60e3de
// 0060e3d8  ffd7                 call edi
// 0060e3da  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0060e3de  8b4500               mov eax, dword ptr [ebp]
// 0060e3e1  8b0e                 mov ecx, dword ptr [esi]
// 0060e3e3  85c0                 test eax, eax
// 0060e3e5  7404                 je 0x60e3eb
// 0060e3e7  3bc1                 cmp eax, ecx
// 0060e3e9  7402                 je 0x60e3ed
// 0060e3eb  ffd7                 call edi
// 0060e3ed  8b4504               mov eax, dword ptr [ebp + 4]
// 0060e3f0  89442414             mov dword ptr [esp + 0x14], eax
// 0060e3f4  3bc3                 cmp eax, ebx
// 0060e3f6  7449                 je 0x60e441
// 0060e3f8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0060e3fb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0060e400  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0060e404  52                   push edx
// 0060e405  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060e409  c644241400           mov byte ptr [esp + 0x14], 0
// 0060e40e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060e412  51                   push ecx
// 0060e413  52                   push edx
// 0060e414  50                   push eax
// 0060e415  57                   push edi
// 0060e416  53                   push ebx
// 0060e417  e864f9ffff           call 0x60dd80
// 0060e41c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0060e420  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060e424  2bfb                 sub edi, ebx
// 0060e426  51                   push ecx
// 0060e427  c1ff03               sar edi, 3
// 0060e42a  8d3cf8               lea edi, [eax + edi*8]
// 0060e42d  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060e430  8d5608               lea edx, [esi + 8]
// 0060e433  52                   push edx
// 0060e434  50                   push eax
// 0060e435  57                   push edi
// 0060e436  e8551ff8ff           call 0x590390
// 0060e43b  83c428               add esp, 0x28
// 0060e43e  897e10               mov dword ptr [esi + 0x10], edi
// 0060e441  5f                   pop edi
// 0060e442  5e                   pop esi
// 0060e443  8bc5                 mov eax, ebp
// 0060e445  5d                   pop ebp
// 0060e446  5b                   pop ebx
// 0060e447  83c408               add esp, 8
// 0060e44a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
