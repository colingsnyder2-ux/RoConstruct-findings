// roc 2008-06 00412180  unit: CChatPrompt  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412180
//
// 00412180  83ec08               sub esp, 8
// 00412183  53                   push ebx
// 00412184  55                   push ebp
// 00412185  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00412189  56                   push esi
// 0041218a  8bf1                 mov esi, ecx
// 0041218c  57                   push edi
// 0041218d  8b3d90288000         mov edi, dword ptr [0x802890]
// 00412193  c7450000000000       mov dword ptr [ebp], 0
// 0041219a  85f6                 test esi, esi
// 0041219c  740e                 je 0x4121ac
// 0041219e  8b442424             mov eax, dword ptr [esp + 0x24]
// 004121a2  39460c               cmp dword ptr [esi + 0xc], eax
// 004121a5  7705                 ja 0x4121ac
// 004121a7  3b4610               cmp eax, dword ptr [esi + 0x10]
// 004121aa  7606                 jbe 0x4121b2
// 004121ac  ffd7                 call edi
// 004121ae  8b442424             mov eax, dword ptr [esp + 0x24]
// 004121b2  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004121b6  8b0e                 mov ecx, dword ptr [esi]
// 004121b8  894d00               mov dword ptr [ebp], ecx
// 004121bb  894504               mov dword ptr [ebp + 4], eax
// 004121be  395e0c               cmp dword ptr [esi + 0xc], ebx
// 004121c1  7705                 ja 0x4121c8
// 004121c3  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 004121c6  7606                 jbe 0x4121ce
// 004121c8  ffd7                 call edi
// 004121ca  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 004121ce  8b4500               mov eax, dword ptr [ebp]
// 004121d1  8b0e                 mov ecx, dword ptr [esi]
// 004121d3  85c0                 test eax, eax
// 004121d5  7404                 je 0x4121db
// 004121d7  3bc1                 cmp eax, ecx
// 004121d9  7402                 je 0x4121dd
// 004121db  ffd7                 call edi
// 004121dd  8b4504               mov eax, dword ptr [ebp + 4]
// 004121e0  89442414             mov dword ptr [esp + 0x14], eax
// 004121e4  3bc3                 cmp eax, ebx
// 004121e6  7449                 je 0x412231
// 004121e8  8b7e10               mov edi, dword ptr [esi + 0x10]
// 004121eb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 004121f0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004121f4  52                   push edx
// 004121f5  8b542420             mov edx, dword ptr [esp + 0x20]
// 004121f9  c644241400           mov byte ptr [esp + 0x14], 0
// 004121fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00412202  51                   push ecx
// 00412203  52                   push edx
// 00412204  50                   push eax
// 00412205  57                   push edi
// 00412206  53                   push ebx
// 00412207  e8c4f7ffff           call 0x4119d0
// 0041220c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00412210  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00412214  2bfb                 sub edi, ebx
// 00412216  51                   push ecx
// 00412217  c1ff03               sar edi, 3
// 0041221a  8d3cf8               lea edi, [eax + edi*8]
// 0041221d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00412220  8d5608               lea edx, [esi + 8]
// 00412223  52                   push edx
// 00412224  50                   push eax
// 00412225  57                   push edi
// 00412226  e865f71800           call 0x5a1990
// 0041222b  83c428               add esp, 0x28
// 0041222e  897e10               mov dword ptr [esi + 0x10], edi
// 00412231  5f                   pop edi
// 00412232  5e                   pop esi
// 00412233  8bc5                 mov eax, ebp
// 00412235  5d                   pop ebp
// 00412236  5b                   pop ebx
// 00412237  83c408               add esp, 8
// 0041223a  c21400               ret 0x14
// library openrbx-client/App\v8tree\Service.cpp (function ?erase@?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@QAE?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8tree/Service.cpp
