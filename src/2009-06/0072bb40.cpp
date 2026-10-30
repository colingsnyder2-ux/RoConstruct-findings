// roc 2009-06 0072bb40  unit: MyXTPCommandBars  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072bb40
//
// 0072bb40  6aff                 push -1
// 0072bb42  6828558700           push 0x875528
// 0072bb47  64a100000000         mov eax, dword ptr fs:[0]
// 0072bb4d  50                   push eax
// 0072bb4e  83ec14               sub esp, 0x14
// 0072bb51  56                   push esi
// 0072bb52  57                   push edi
// 0072bb53  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072bb58  33c4                 xor eax, esp
// 0072bb5a  50                   push eax
// 0072bb5b  8d442420             lea eax, [esp + 0x20]
// 0072bb5f  64a300000000         mov dword ptr fs:[0], eax
// 0072bb65  8b442430             mov eax, dword ptr [esp + 0x30]
// 0072bb69  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 0072bb6f  85f6                 test esi, esi
// 0072bb71  746c                 je 0x72bbdf
// 0072bb73  6aff                 push -1
// 0072bb75  50                   push eax
// 0072bb76  8bce                 mov ecx, esi
// 0072bb78  e8f3700800           call 0x7b2c70
// 0072bb7d  8bf8                 mov edi, eax
// 0072bb7f  83ffff               cmp edi, -1
// 0072bb82  745b                 je 0x72bbdf
// 0072bb84  8d4c240c             lea ecx, [esp + 0xc]
// 0072bb88  e8a3deffff           call 0x729a30
// 0072bb8d  8d44240c             lea eax, [esp + 0xc]
// 0072bb91  50                   push eax
// 0072bb92  57                   push edi
// 0072bb93  8bce                 mov ecx, esi
// 0072bb95  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0072bb9d  e8de800800           call 0x7b3c80
// 0072bba2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072bba6  33f6                 xor esi, esi
// 0072bba8  85c0                 test eax, eax
// 0072bbaa  7e22                 jle 0x72bbce
// 0072bbac  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0072bbb0  85f6                 test esi, esi
// 0072bbb2  7c3f                 jl 0x72bbf3
// 0072bbb4  3bf0                 cmp esi, eax
// 0072bbb6  7d3b                 jge 0x72bbf3
// 0072bbb8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072bbbc  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0072bbbf  57                   push edi
// 0072bbc0  e8fbdbffff           call 0x7297c0
// 0072bbc5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0072bbc9  46                   inc esi
// 0072bbca  3bf0                 cmp esi, eax
// 0072bbcc  7ce2                 jl 0x72bbb0
// 0072bbce  8d4c240c             lea ecx, [esp + 0xc]
// 0072bbd2  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0072bbda  e871deffff           call 0x729a50
// 0072bbdf  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072bbe3  64890d00000000       mov dword ptr fs:[0], ecx
// 0072bbea  59                   pop ecx
// 0072bbeb  5f                   pop edi
// 0072bbec  5e                   pop esi
// 0072bbed  83c420               add esp, 0x20
// 0072bbf0  c20800               ret 8
// 0072bbf3  e8ecd0feff           call 0x718ce4
// copied from an identical function in another client (function ?GetHiddenControls@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp