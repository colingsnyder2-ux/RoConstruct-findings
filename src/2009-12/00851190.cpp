// roc 2009-12 00851190  unit: CXTPPropExchange  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851190
//
// 00851190  6aff                 push -1
// 00851192  6862d99500           push 0x95d962
// 00851197  64a100000000         mov eax, dword ptr fs:[0]
// 0085119d  50                   push eax
// 0085119e  51                   push ecx
// 0085119f  53                   push ebx
// 008511a0  55                   push ebp
// 008511a1  56                   push esi
// 008511a2  57                   push edi
// 008511a3  a10052b600           mov eax, dword ptr [0xb65200]
// 008511a8  33c4                 xor eax, esp
// 008511aa  50                   push eax
// 008511ab  8d442418             lea eax, [esp + 0x18]
// 008511af  64a300000000         mov dword ptr fs:[0], eax
// 008511b5  8be9                 mov ebp, ecx
// 008511b7  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008511bb  8d4c2414             lea ecx, [esp + 0x14]
// 008511bf  0f858c000000         jne 0x851251
// 008511c5  ff1574de9800         call dword ptr [0x98de74]
// 008511cb  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008511cf  8b07                 mov eax, dword ptr [edi]
// 008511d1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008511d9  85c0                 test eax, eax
// 008511db  7657                 jbe 0x851234
// 008511dd  8d440001             lea eax, [eax + eax + 1]
// 008511e1  50                   push eax
// 008511e2  e85b29faff           call 0x7f3b42
// 008511e7  8bf0                 mov esi, eax
// 008511e9  33c0                 xor eax, eax
// 008511eb  83c404               add esp, 4
// 008511ee  3907                 cmp dword ptr [edi], eax
// 008511f0  7628                 jbe 0x85121a
// 008511f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008511f6  8b11                 mov edx, dword ptr [ecx]
// 008511f8  0fb61410             movzx edx, byte ptr [eax + edx]
// 008511fc  80e20f               and dl, 0xf
// 008511ff  80c241               add dl, 0x41
// 00851202  881446               mov byte ptr [esi + eax*2], dl
// 00851205  8b11                 mov edx, dword ptr [ecx]
// 00851207  0fb61410             movzx edx, byte ptr [eax + edx]
// 0085120b  c0ea04               shr dl, 4
// 0085120e  80c241               add dl, 0x41
// 00851211  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 00851215  40                   inc eax
// 00851216  3b07                 cmp eax, dword ptr [edi]
// 00851218  72dc                 jb 0x8511f6
// 0085121a  8b07                 mov eax, dword ptr [edi]
// 0085121c  56                   push esi
// 0085121d  8d4c2418             lea ecx, [esp + 0x18]
// 00851221  c6044600             mov byte ptr [esi + eax*2], 0
// 00851225  ff155cde9800         call dword ptr [0x98de5c]
// 0085122b  56                   push esi
// 0085122c  e8d528faff           call 0x7f3b06
// 00851231  83c404               add esp, 4
// 00851234  8b542428             mov edx, dword ptr [esp + 0x28]
// 00851238  6856fd9900           push 0x99fd56
// 0085123d  8d4c2418             lea ecx, [esp + 0x18]
// 00851241  51                   push ecx
// 00851242  52                   push edx
// 00851243  55                   push ebp
// 00851244  e877f8ffff           call 0x850ac0
// 00851249  83c410               add esp, 0x10
// 0085124c  e9d5000000           jmp 0x851326
// 00851251  ff1574de9800         call dword ptr [0x98de74]
// 00851257  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0085125b  8d442414             lea eax, [esp + 0x14]
// 0085125f  50                   push eax
// 00851260  51                   push ecx
// 00851261  55                   push ebp
// 00851262  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0085126a  e821f8ffff           call 0x850a90
// 0085126f  83c40c               add esp, 0xc
// 00851272  8d4c2414             lea ecx, [esp + 0x14]
// 00851276  85c0                 test eax, eax
// 00851278  745d                 je 0x8512d7
// 0085127a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00851280  85c0                 test eax, eax
// 00851282  0f8e9e000000         jle 0x851326
// 00851288  8d4c2414             lea ecx, [esp + 0x14]
// 0085128c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00851292  8bf8                 mov edi, eax
// 00851294  85ff                 test edi, edi
// 00851296  743b                 je 0x8512d3
// 00851298  8bd7                 mov edx, edi
// 0085129a  81e201000080         and edx, 0x80000001
// 008512a0  7905                 jns 0x8512a7
// 008512a2  4a                   dec edx
// 008512a3  83cafe               or edx, 0xfffffffe
// 008512a6  42                   inc edx
// 008512a7  752a                 jne 0x8512d3
// 008512a9  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008512ad  99                   cdq 
// 008512ae  2bc2                 sub eax, edx
// 008512b0  8bf0                 mov esi, eax
// 008512b2  d1fe                 sar esi, 1
// 008512b4  837d0000             cmp dword ptr [ebp], 0
// 008512b8  7527                 jne 0x8512e1
// 008512ba  56                   push esi
// 008512bb  ff1578b79800         call dword ptr [0x98b778]
// 008512c1  894500               mov dword ptr [ebp], eax
// 008512c4  8b442434             mov eax, dword ptr [esp + 0x34]
// 008512c8  83c404               add esp, 4
// 008512cb  8930                 mov dword ptr [eax], esi
// 008512cd  837d0000             cmp dword ptr [ebp], 0
// 008512d1  7516                 jne 0x8512e9
// 008512d3  8d4c2414             lea ecx, [esp + 0x14]
// 008512d7  ff15c0de9800         call dword ptr [0x98dec0]
// 008512dd  33c0                 xor eax, eax
// 008512df  eb54                 jmp 0x851335
// 008512e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008512e5  3931                 cmp dword ptr [ecx], esi
// 008512e7  72ea                 jb 0x8512d3
// 008512e9  33f6                 xor esi, esi
// 008512eb  85ff                 test edi, edi
// 008512ed  7e37                 jle 0x851326
// 008512ef  90                   nop 
// 008512f0  8d5601               lea edx, [esi + 1]
// 008512f3  52                   push edx
// 008512f4  8d4c2418             lea ecx, [esp + 0x18]
// 008512f8  ff1510d59800         call dword ptr [0x98d510]
// 008512fe  8ad8                 mov bl, al
// 00851300  fecb                 dec bl
// 00851302  c0e304               shl bl, 4
// 00851305  56                   push esi
// 00851306  8d4c2418             lea ecx, [esp + 0x18]
// 0085130a  80eb41               sub bl, 0x41
// 0085130d  ff1510d59800         call dword ptr [0x98d510]
// 00851313  8b5500               mov edx, dword ptr [ebp]
// 00851316  8bce                 mov ecx, esi
// 00851318  02c3                 add al, bl
// 0085131a  d1e9                 shr ecx, 1
// 0085131c  83c602               add esi, 2
// 0085131f  3bf7                 cmp esi, edi
// 00851321  880411               mov byte ptr [ecx + edx], al
// 00851324  7cca                 jl 0x8512f0
// 00851326  8d4c2414             lea ecx, [esp + 0x14]
// 0085132a  ff15c0de9800         call dword ptr [0x98dec0]
// 00851330  b801000000           mov eax, 1
// 00851335  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00851339  64890d00000000       mov dword ptr fs:[0], ecx
// 00851340  59                   pop ecx
// 00851341  5f                   pop edi
// 00851342  5e                   pop esi
// 00851343  5d                   pop ebp
// 00851344  5b                   pop ebx
// 00851345  83c410               add esp, 0x10
// 00851348  c20c00               ret 0xc
// copied from an identical function in another client (function ?ExchangeBlobProp@CXTPPropExchange@@UAEHPBDAAPAEAAK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPPropExchange.cpp