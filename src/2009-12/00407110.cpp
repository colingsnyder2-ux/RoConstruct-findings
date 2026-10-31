// roc 2009-12 00407110  unit: VCApp::?$CComObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407110
//
// 00407110  55                   push ebp
// 00407111  8bec                 mov ebp, esp
// 00407113  6aff                 push -1
// 00407115  6893729200           push 0x927293
// 0040711a  64a100000000         mov eax, dword ptr fs:[0]
// 00407120  50                   push eax
// 00407121  64892500000000       mov dword ptr fs:[0], esp
// 00407128  81ec1c040000         sub esp, 0x41c
// 0040712e  53                   push ebx
// 0040712f  56                   push esi
// 00407130  57                   push edi
// 00407131  33f6                 xor esi, esi
// 00407133  8965f0               mov dword ptr [ebp - 0x10], esp
// 00407136  33ff                 xor edi, edi
// 00407138  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040713b  897dfc               mov dword ptr [ebp - 4], edi
// 0040713e  894de8               mov dword ptr [ebp - 0x18], ecx
// 00407141  897de4               mov dword ptr [ebp - 0x1c], edi
// 00407144  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 0040714a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040714d  c645fc01             mov byte ptr [ebp - 4], 1
// 00407151  3bdf                 cmp ebx, edi
// 00407153  7466                 je 0x4071bb
// 00407155  53                   push ebx
// 00407156  ff1538b29800         call dword ptr [0x98b238]
// 0040715c  57                   push edi
// 0040715d  40                   inc eax
// 0040715e  99                   cdq 
// 0040715f  6a02                 push 2
// 00407161  52                   push edx
// 00407162  50                   push eax
// 00407163  e808d93e00           call 0x7f4a70
// 00407168  8bf8                 mov edi, eax
// 0040716a  0500000080           add eax, 0x80000000
// 0040716f  13d6                 adc edx, esi
// 00407171  85d2                 test edx, edx
// 00407173  7744                 ja 0x4071b9
// 00407175  7205                 jb 0x40717c
// 00407177  83f8ff               cmp eax, -1
// 0040717a  773d                 ja 0x4071b9
// 0040717c  81ff00040000         cmp edi, 0x400
// 00407182  7f1b                 jg 0x40719f
// 00407184  57                   push edi
// 00407185  e866c9ffff           call 0x403af0
// 0040718a  83c404               add esp, 4
// 0040718d  84c0                 test al, al
// 0040718f  740e                 je 0x40719f
// 00407191  8bc7                 mov eax, edi
// 00407193  e8a8d83e00           call 0x7f4a40
// 00407198  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040719b  8bc4                 mov eax, esp
// 0040719d  eb0c                 jmp 0x4071ab
// 0040719f  57                   push edi
// 004071a0  8d4dec               lea ecx, [ebp - 0x14]
// 004071a3  e8e8ceffff           call 0x404090
// 004071a8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004071ab  6a03                 push 3
// 004071ad  57                   push edi
// 004071ae  53                   push ebx
// 004071af  50                   push eax
// 004071b0  e85bb9ffff           call 0x402b10
// 004071b5  85c0                 test eax, eax
// 004071b7  753f                 jne 0x4071f8
// 004071b9  33ff                 xor edi, edi
// 004071bb  8d85dcfbffff         lea eax, [ebp - 0x424]
// 004071c1  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 004071c7  740b                 je 0x4071d4
// 004071c9  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004071cf  e8ec9d4400           call 0x850fc0
// 004071d4  3bf7                 cmp esi, edi
// 004071d6  7416                 je 0x4071ee
// 004071d8  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 004071de  8bff                 mov edi, edi
// 004071e0  8bc6                 mov eax, esi
// 004071e2  8b36                 mov esi, dword ptr [esi]
// 004071e4  50                   push eax
// 004071e5  ffd7                 call edi
// 004071e7  83c404               add esp, 4
// 004071ea  85f6                 test esi, esi
// 004071ec  75f2                 jne 0x4071e0
// 004071ee  b80e000780           mov eax, 0x8007000e
// 004071f3  e948010000           jmp 0x407340
// 004071f8  6a02                 push 2
// 004071fa  6a00                 push 0
// 004071fc  50                   push eax
// 004071fd  ff15e8b19800         call dword ptr [0x98b1e8]
// 00407203  8bd8                 mov ebx, eax
// 00407205  895d08               mov dword ptr [ebp + 8], ebx
// 00407208  85db                 test ebx, ebx
// 0040720a  750c                 jne 0x407218
// 0040720c  e84fbaffff           call 0x402c60
// 00407211  8bf8                 mov edi, eax
// 00407213  e9f4000000           jmp 0x40730c
// 00407218  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040721b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040721e  51                   push ecx
// 0040721f  52                   push edx
// 00407220  53                   push ebx
// 00407221  ff15ecb19800         call dword ptr [0x98b1ec]
// 00407227  8bf8                 mov edi, eax
// 00407229  85ff                 test edi, edi
// 0040722b  750a                 jne 0x407237
// 0040722d  e82ebaffff           call 0x402c60
// 00407232  e9cc000000           jmp 0x407303
// 00407237  57                   push edi
// 00407238  53                   push ebx
// 00407239  ff15f0b19800         call dword ptr [0x98b1f0]
// 0040723f  89450c               mov dword ptr [ebp + 0xc], eax
// 00407242  85c0                 test eax, eax
// 00407244  750a                 jne 0x407250
// 00407246  e815baffff           call 0x402c60
// 0040724b  e9b3000000           jmp 0x407303
// 00407250  57                   push edi
// 00407251  53                   push ebx
// 00407252  ff15f4b19800         call dword ptr [0x98b1f4]
// 00407258  8bf8                 mov edi, eax
// 0040725a  8d4701               lea eax, [edi + 1]
// 0040725d  897d10               mov dword ptr [ebp + 0x10], edi
// 00407260  3bc7                 cmp eax, edi
// 00407262  732b                 jae 0x40728f
// 00407264  8d85dcfbffff         lea eax, [ebp - 0x424]
// 0040726a  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407270  740b                 je 0x40727d
// 00407272  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407278  e8439d4400           call 0x850fc0
// 0040727d  8d4dec               lea ecx, [ebp - 0x14]
// 00407280  e8fbc5ffff           call 0x403880
// 00407285  b80e000780           mov eax, 0x8007000e
// 0040728a  e9b1000000           jmp 0x407340
// 0040728f  50                   push eax
// 00407290  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407296  c645fc02             mov byte ptr [ebp - 4], 2
// 0040729a  e8e1d8ffff           call 0x404b80
// 0040729f  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004072a6  eb1e                 jmp 0x4072c6
// 004072a8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004072ab  e88cc83e00           call 0x7f3b3c
// 004072b0  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004072b7  b8bd724000           mov eax, 0x4072bd
// 004072bc  c3                   ret 
// 004072bd  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004072c0  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004072c3  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004072c6  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 004072cc  85c0                 test eax, eax
// 004072ce  7507                 jne 0x4072d7
// 004072d0  bf0e000780           mov edi, 0x8007000e
// 004072d5  eb2e                 jmp 0x407305
// 004072d7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004072da  57                   push edi
// 004072db  51                   push ecx
// 004072dc  57                   push edi
// 004072dd  50                   push eax
// 004072de  e8bdb8ffff           call 0x402ba0
// 004072e3  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 004072e9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004072ec  83c410               add esp, 0x10
// 004072ef  c6043a00             mov byte ptr [edx + edi], 0
// 004072f3  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 004072f9  50                   push eax
// 004072fa  51                   push ecx
// 004072fb  8d4de4               lea ecx, [ebp - 0x1c]
// 004072fe  e85df0ffff           call 0x406360
// 00407303  8bf8                 mov edi, eax
// 00407305  53                   push ebx
// 00407306  ff15f8b19800         call dword ptr [0x98b1f8]
// 0040730c  8d95dcfbffff         lea edx, [ebp - 0x424]
// 00407312  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 00407318  740b                 je 0x407325
// 0040731a  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407320  e89b9c4400           call 0x850fc0
// 00407325  85f6                 test esi, esi
// 00407327  7415                 je 0x40733e
// 00407329  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 0040732f  90                   nop 
// 00407330  8bc6                 mov eax, esi
// 00407332  8b36                 mov esi, dword ptr [esi]
// 00407334  50                   push eax
// 00407335  ffd3                 call ebx
// 00407337  83c404               add esp, 4
// 0040733a  85f6                 test esi, esi
// 0040733c  75f2                 jne 0x407330
// 0040733e  8bc7                 mov eax, edi
// 00407340  8da5ccfbffff         lea esp, [ebp - 0x434]
// 00407346  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407349  64890d00000000       mov dword ptr fs:[0], ecx
// 00407350  5f                   pop edi
// 00407351  5e                   pop esi
// 00407352  5b                   pop ebx
// 00407353  8be5                 mov esp, ebp
// 00407355  5d                   pop ebp
// 00407356  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterFromResource@CRegObject@ATL@@IAEJPB_WPBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp