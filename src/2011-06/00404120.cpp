// roc 2011-06 00404120  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404120
//
// 00404120  53                   push ebx
// 00404121  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00404125  57                   push edi
// 00404126  8bf9                 mov edi, ecx
// 00404128  85db                 test ebx, ebx
// 0040412a  750a                 jne 0x404136
// 0040412c  6805400080           push 0x80004005
// 00404131  e86af4ffff           call 0x4035a0
// 00404136  803b00               cmp byte ptr [ebx], 0
// 00404139  7410                 je 0x40414b
// 0040413b  80bf2201000000       cmp byte ptr [edi + 0x122], 0
// 00404142  7507                 jne 0x40414b
// 00404144  5f                   pop edi
// 00404145  33c0                 xor eax, eax
// 00404147  5b                   pop ebx
// 00404148  c20400               ret 4
// 0040414b  56                   push esi
// 0040414c  6881000000           push 0x81
// 00404151  53                   push ebx
// 00404152  ff15380aa400         call dword ptr [0xa40a38]
// 00404158  8bf0                 mov esi, eax
// 0040415a  83c408               add esp, 8
// 0040415d  81fe80000000         cmp esi, 0x80
// 00404163  7608                 jbe 0x40416d
// 00404165  5e                   pop esi
// 00404166  5f                   pop edi
// 00404167  33c0                 xor eax, eax
// 00404169  5b                   pop ebx
// 0040416a  c20400               ret 4
// 0040416d  56                   push esi
// 0040416e  53                   push ebx
// 0040416f  8d87a3010000         lea eax, [edi + 0x1a3]
// 00404175  6881000000           push 0x81
// 0040417a  50                   push eax
// 0040417b  ff154c0aa400         call dword ptr [0xa40a4c]
// 00404181  50                   push eax
// 00404182  e889f2ffff           call 0x403410
// 00404187  83c414               add esp, 0x14
// 0040418a  89b738120000         mov dword ptr [edi + 0x1238], esi
// 00404190  5e                   pop esi
// 00404191  5f                   pop edi
// 00404192  b801000000           mov eax, 1
// 00404197  5b                   pop ebx
// 00404198  c20400               ret 4
// copied from an identical function in another client (function ?SetPassword@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_188c2f09ea8697a7.cpp