// roc 2012-06 009a4940  unit: MyXTPCommandBars  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4940
//
// 009a4940  6aff                 push -1
// 009a4942  6878d9ad00           push 0xadd978
// 009a4947  64a100000000         mov eax, dword ptr fs:[0]
// 009a494d  50                   push eax
// 009a494e  83ec14               sub esp, 0x14
// 009a4951  56                   push esi
// 009a4952  57                   push edi
// 009a4953  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a4958  33c4                 xor eax, esp
// 009a495a  50                   push eax
// 009a495b  8d442420             lea eax, [esp + 0x20]
// 009a495f  64a300000000         mov dword ptr fs:[0], eax
// 009a4965  8b442430             mov eax, dword ptr [esp + 0x30]
// 009a4969  8bb080010000         mov esi, dword ptr [eax + 0x180]
// 009a496f  85f6                 test esi, esi
// 009a4971  746c                 je 0x9a49df
// 009a4973  6aff                 push -1
// 009a4975  50                   push eax
// 009a4976  8bce                 mov ecx, esi
// 009a4978  e893640700           call 0xa1ae10
// 009a497d  8bf8                 mov edi, eax
// 009a497f  83ffff               cmp edi, -1
// 009a4982  745b                 je 0x9a49df
// 009a4984  8d4c240c             lea ecx, [esp + 0xc]
// 009a4988  e803dfffff           call 0x9a2890
// 009a498d  8d44240c             lea eax, [esp + 0xc]
// 009a4991  50                   push eax
// 009a4992  57                   push edi
// 009a4993  8bce                 mov ecx, esi
// 009a4995  c744243000000000     mov dword ptr [esp + 0x30], 0
// 009a499d  e87e740700           call 0xa1be20
// 009a49a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a49a6  33f6                 xor esi, esi
// 009a49a8  85c0                 test eax, eax
// 009a49aa  7e22                 jle 0x9a49ce
// 009a49ac  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 009a49b0  85f6                 test esi, esi
// 009a49b2  7c3f                 jl 0x9a49f3
// 009a49b4  3bf0                 cmp esi, eax
// 009a49b6  7d3b                 jge 0x9a49f3
// 009a49b8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009a49bc  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009a49bf  57                   push edi
// 009a49c0  e86bdcffff           call 0x9a2630
// 009a49c5  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a49c9  46                   inc esi
// 009a49ca  3bf0                 cmp esi, eax
// 009a49cc  7ce2                 jl 0x9a49b0
// 009a49ce  8d4c240c             lea ecx, [esp + 0xc]
// 009a49d2  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 009a49da  e8d1deffff           call 0x9a28b0
// 009a49df  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009a49e3  64890d00000000       mov dword ptr fs:[0], ecx
// 009a49ea  59                   pop ecx
// 009a49eb  5f                   pop edi
// 009a49ec  5e                   pop esi
// 009a49ed  83c420               add esp, 0x20
// 009a49f0  c20800               ret 8
// 009a49f3  e8c8d9fdff           call 0x9823c0
// copied from an identical function in another client (function ?GetHiddenControls@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp