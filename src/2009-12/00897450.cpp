// roc 2009-12 00897450  unit: CXTPRibbonBar  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897450
//
// 00897450  6aff                 push -1
// 00897452  686aef9500           push 0x95ef6a
// 00897457  64a100000000         mov eax, dword ptr fs:[0]
// 0089745d  50                   push eax
// 0089745e  51                   push ecx
// 0089745f  55                   push ebp
// 00897460  56                   push esi
// 00897461  57                   push edi
// 00897462  a10052b600           mov eax, dword ptr [0xb65200]
// 00897467  33c4                 xor eax, esp
// 00897469  50                   push eax
// 0089746a  8d442414             lea eax, [esp + 0x14]
// 0089746e  64a300000000         mov dword ptr fs:[0], eax
// 00897474  8be9                 mov ebp, ecx
// 00897476  6860020000           push 0x260
// 0089747b  e8e0c3f5ff           call 0x7f3860
// 00897480  83c404               add esp, 4
// 00897483  89442410             mov dword ptr [esp + 0x10], eax
// 00897487  33f6                 xor esi, esi
// 00897489  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089748d  3bc6                 cmp eax, esi
// 0089748f  740c                 je 0x89749d
// 00897491  55                   push ebp
// 00897492  8bc8                 mov ecx, eax
// 00897494  e8277a0500           call 0x8eeec0
// 00897499  8bf8                 mov edi, eax
// 0089749b  eb02                 jmp 0x89749f
// 0089749d  33ff                 xor edi, edi
// 0089749f  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 008974a5  39702c               cmp dword ptr [eax + 0x2c], esi
// 008974a8  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008974b0  7e4e                 jle 0x897500
// 008974b2  85f6                 test esi, esi
// 008974b4  7c0d                 jl 0x8974c3
// 008974b6  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 008974b9  7d08                 jge 0x8974c3
// 008974bb  8b4028               mov eax, dword ptr [eax + 0x28]
// 008974be  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008974c1  eb02                 jmp 0x8974c5
// 008974c3  33c0                 xor eax, eax
// 008974c5  f680d000000002       test byte ptr [eax + 0xd0], 2
// 008974cc  7426                 je 0x8974f4
// 008974ce  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008974d4  6a00                 push 0
// 008974d6  6aff                 push -1
// 008974d8  50                   push eax
// 008974d9  e8d2fdfaff           call 0x8472b0
// 008974de  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 008974e4  8b10                 mov edx, dword ptr [eax]
// 008974e6  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008974ec  83e1fd               and ecx, 0xfffffffd
// 008974ef  51                   push ecx
// 008974f0  8bc8                 mov ecx, eax
// 008974f2  ffd2                 call edx
// 008974f4  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 008974fa  46                   inc esi
// 008974fb  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 008974fe  7cb2                 jl 0x8974b2
// 00897500  8b856c020000         mov eax, dword ptr [ebp + 0x26c]
// 00897506  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0089750c  6a00                 push 0
// 0089750e  6aff                 push -1
// 00897510  50                   push eax
// 00897511  e89afdfaff           call 0x8472b0
// 00897516  8b88d0000000         mov ecx, dword ptr [eax + 0xd0]
// 0089751c  8b10                 mov edx, dword ptr [eax]
// 0089751e  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00897524  83e1fd               and ecx, 0xfffffffd
// 00897527  51                   push ecx
// 00897528  8bc8                 mov ecx, eax
// 0089752a  ffd2                 call edx
// 0089752c  682c010000           push 0x12c
// 00897531  8bcf                 mov ecx, edi
// 00897533  e838d2f6ff           call 0x804770
// 00897538  8bc7                 mov eax, edi
// 0089753a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089753e  64890d00000000       mov dword ptr fs:[0], ecx
// 00897545  59                   pop ecx
// 00897546  5f                   pop edi
// 00897547  5e                   pop esi
// 00897548  5d                   pop ebp
// 00897549  83c410               add esp, 0x10
// 0089754c  c3                   ret 
// copied from an identical function in another client (function ?CreateMoreQuickAccessContextMenu@CXTPRibbonBar@@MAEPAVCXTPPopupBar@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp