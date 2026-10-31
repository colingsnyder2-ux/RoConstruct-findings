// roc 2012-06 0046cb60  unit: RBX::TeleportCallback  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046cb60
//
// 0046cb60  53                   push ebx
// 0046cb61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0046cb65  57                   push edi
// 0046cb66  8bf9                 mov edi, ecx
// 0046cb68  85db                 test ebx, ebx
// 0046cb6a  750a                 jne 0x46cb76
// 0046cb6c  6805400080           push 0x80004005
// 0046cb71  e83a76f9ff           call 0x4041b0
// 0046cb76  803b00               cmp byte ptr [ebx], 0
// 0046cb79  7410                 je 0x46cb8b
// 0046cb7b  80bf2201000000       cmp byte ptr [edi + 0x122], 0
// 0046cb82  7507                 jne 0x46cb8b
// 0046cb84  5f                   pop edi
// 0046cb85  33c0                 xor eax, eax
// 0046cb87  5b                   pop ebx
// 0046cb88  c20400               ret 4
// 0046cb8b  56                   push esi
// 0046cb8c  6881000000           push 0x81
// 0046cb91  53                   push ebx
// 0046cb92  ff15e82ab200         call dword ptr [0xb22ae8]
// 0046cb98  8bf0                 mov esi, eax
// 0046cb9a  83c408               add esp, 8
// 0046cb9d  81fe80000000         cmp esi, 0x80
// 0046cba3  7608                 jbe 0x46cbad
// 0046cba5  5e                   pop esi
// 0046cba6  5f                   pop edi
// 0046cba7  33c0                 xor eax, eax
// 0046cba9  5b                   pop ebx
// 0046cbaa  c20400               ret 4
// 0046cbad  56                   push esi
// 0046cbae  53                   push ebx
// 0046cbaf  8d87a3010000         lea eax, [edi + 0x1a3]
// 0046cbb5  6881000000           push 0x81
// 0046cbba  50                   push eax
// 0046cbbb  ff15f029b200         call dword ptr [0xb229f0]
// 0046cbc1  50                   push eax
// 0046cbc2  e85974f9ff           call 0x404020
// 0046cbc7  83c414               add esp, 0x14
// 0046cbca  89b738120000         mov dword ptr [edi + 0x1238], esi
// 0046cbd0  5e                   pop esi
// 0046cbd1  5f                   pop edi
// 0046cbd2  b801000000           mov eax, 1
// 0046cbd7  5b                   pop ebx
// 0046cbd8  c20400               ret 4
// copied from an identical function in another client (function ?SetPassword@CUrl@ATL@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_188c2f09ea8697a7.cpp