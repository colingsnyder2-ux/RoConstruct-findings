// roc 2011-06 0082c370  unit: MyXTPCommandBars  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082c370
//
// 0082c370  6aff                 push -1
// 0082c372  68283ca000           push 0xa03c28
// 0082c377  64a100000000         mov eax, dword ptr fs:[0]
// 0082c37d  50                   push eax
// 0082c37e  83ec14               sub esp, 0x14
// 0082c381  56                   push esi
// 0082c382  57                   push edi
// 0082c383  a12058c900           mov eax, dword ptr [0xc95820]
// 0082c388  33c4                 xor eax, esp
// 0082c38a  50                   push eax
// 0082c38b  8d442420             lea eax, [esp + 0x20]
// 0082c38f  64a300000000         mov dword ptr fs:[0], eax
// 0082c395  8b442430             mov eax, dword ptr [esp + 0x30]
// 0082c399  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0082c39f  85f6                 test esi, esi
// 0082c3a1  746c                 je 0x82c40f
// 0082c3a3  6aff                 push -1
// 0082c3a5  50                   push eax
// 0082c3a6  8bce                 mov ecx, esi
// 0082c3a8  e833660700           call 0x8a29e0
// 0082c3ad  8bf8                 mov edi, eax
// 0082c3af  83ffff               cmp edi, -1
// 0082c3b2  745b                 je 0x82c40f
// 0082c3b4  8d4c240c             lea ecx, [esp + 0xc]
// 0082c3b8  e8a3deffff           call 0x82a260
// 0082c3bd  8d44240c             lea eax, [esp + 0xc]
// 0082c3c1  50                   push eax
// 0082c3c2  57                   push edi
// 0082c3c3  8bce                 mov ecx, esi
// 0082c3c5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0082c3cd  e81e760700           call 0x8a39f0
// 0082c3d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082c3d6  33f6                 xor esi, esi
// 0082c3d8  85c0                 test eax, eax
// 0082c3da  7e22                 jle 0x82c3fe
// 0082c3dc  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0082c3e0  85f6                 test esi, esi
// 0082c3e2  7c3f                 jl 0x82c423
// 0082c3e4  3bf0                 cmp esi, eax
// 0082c3e6  7d3b                 jge 0x82c423
// 0082c3e8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082c3ec  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0082c3ef  57                   push edi
// 0082c3f0  e80bdcffff           call 0x82a000
// 0082c3f5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082c3f9  46                   inc esi
// 0082c3fa  3bf0                 cmp esi, eax
// 0082c3fc  7ce2                 jl 0x82c3e0
// 0082c3fe  8d4c240c             lea ecx, [esp + 0xc]
// 0082c402  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0082c40a  e8d1deffff           call 0x82a2e0
// 0082c40f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0082c413  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c41a  59                   pop ecx
// 0082c41b  5f                   pop edi
// 0082c41c  5e                   pop esi
// 0082c41d  83c420               add esp, 0x20
// 0082c420  c20800               ret 8
// 0082c423  e8e2defdff           call 0x80a30a
// copied from an identical function in another client (function ?GetHiddenControls@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp