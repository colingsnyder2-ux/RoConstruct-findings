// roc 2009-06 00407330  unit: VCApp::?$CComContainedObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00407330
//
// 00407330  55                   push ebp
// 00407331  8bec                 mov ebp, esp
// 00407333  6aff                 push -1
// 00407335  6843cd8400           push 0x84cd43
// 0040733a  64a100000000         mov eax, dword ptr fs:[0]
// 00407340  50                   push eax
// 00407341  64892500000000       mov dword ptr fs:[0], esp
// 00407348  81ec1c040000         sub esp, 0x41c
// 0040734e  53                   push ebx
// 0040734f  56                   push esi
// 00407350  57                   push edi
// 00407351  33f6                 xor esi, esi
// 00407353  8965f0               mov dword ptr [ebp - 0x10], esp
// 00407356  33ff                 xor edi, edi
// 00407358  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040735b  897dfc               mov dword ptr [ebp - 4], edi
// 0040735e  894de8               mov dword ptr [ebp - 0x18], ecx
// 00407361  897de4               mov dword ptr [ebp - 0x1c], edi
// 00407364  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 0040736a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040736d  c645fc01             mov byte ptr [ebp - 4], 1
// 00407371  3bdf                 cmp ebx, edi
// 00407373  7466                 je 0x4073db
// 00407375  53                   push ebx
// 00407376  ff1500e28900         call dword ptr [0x89e200]
// 0040737c  57                   push edi
// 0040737d  40                   inc eax
// 0040737e  99                   cdq 
// 0040737f  6a02                 push 2
// 00407381  52                   push edx
// 00407382  50                   push eax
// 00407383  e8b8283100           call 0x719c40
// 00407388  8bf8                 mov edi, eax
// 0040738a  0500000080           add eax, 0x80000000
// 0040738f  13d6                 adc edx, esi
// 00407391  85d2                 test edx, edx
// 00407393  7744                 ja 0x4073d9
// 00407395  7205                 jb 0x40739c
// 00407397  83f8ff               cmp eax, -1
// 0040739a  773d                 ja 0x4073d9
// 0040739c  81ff00040000         cmp edi, 0x400
// 004073a2  7f1b                 jg 0x4073bf
// 004073a4  57                   push edi
// 004073a5  e886caffff           call 0x403e30
// 004073aa  83c404               add esp, 4
// 004073ad  84c0                 test al, al
// 004073af  740e                 je 0x4073bf
// 004073b1  8bc7                 mov eax, edi
// 004073b3  e858283100           call 0x719c10
// 004073b8  8965f0               mov dword ptr [ebp - 0x10], esp
// 004073bb  8bc4                 mov eax, esp
// 004073bd  eb0c                 jmp 0x4073cb
// 004073bf  57                   push edi
// 004073c0  8d4dec               lea ecx, [ebp - 0x14]
// 004073c3  e808d0ffff           call 0x4043d0
// 004073c8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004073cb  6a03                 push 3
// 004073cd  57                   push edi
// 004073ce  53                   push ebx
// 004073cf  50                   push eax
// 004073d0  e86bbaffff           call 0x402e40
// 004073d5  85c0                 test eax, eax
// 004073d7  753f                 jne 0x407418
// 004073d9  33ff                 xor edi, edi
// 004073db  8d85dcfbffff         lea eax, [ebp - 0x424]
// 004073e1  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 004073e7  740b                 je 0x4073f4
// 004073e9  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004073ef  e82cc8ffff           call 0x403c20
// 004073f4  3bf7                 cmp esi, edi
// 004073f6  7416                 je 0x40740e
// 004073f8  8b3dcce98900         mov edi, dword ptr [0x89e9cc]
// 004073fe  8bff                 mov edi, edi
// 00407400  8bc6                 mov eax, esi
// 00407402  8b36                 mov esi, dword ptr [esi]
// 00407404  50                   push eax
// 00407405  ffd7                 call edi
// 00407407  83c404               add esp, 4
// 0040740a  85f6                 test esi, esi
// 0040740c  75f2                 jne 0x407400
// 0040740e  b80e000780           mov eax, 0x8007000e
// 00407413  e948010000           jmp 0x407560
// 00407418  6a02                 push 2
// 0040741a  6a00                 push 0
// 0040741c  50                   push eax
// 0040741d  ff15c4e18900         call dword ptr [0x89e1c4]
// 00407423  8bd8                 mov ebx, eax
// 00407425  895d08               mov dword ptr [ebp + 8], ebx
// 00407428  85db                 test ebx, ebx
// 0040742a  750c                 jne 0x407438
// 0040742c  e85fbbffff           call 0x402f90
// 00407431  8bf8                 mov edi, eax
// 00407433  e9f4000000           jmp 0x40752c
// 00407438  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0040743b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0040743e  51                   push ecx
// 0040743f  52                   push edx
// 00407440  53                   push ebx
// 00407441  ff15c0e18900         call dword ptr [0x89e1c0]
// 00407447  8bf8                 mov edi, eax
// 00407449  85ff                 test edi, edi
// 0040744b  750a                 jne 0x407457
// 0040744d  e83ebbffff           call 0x402f90
// 00407452  e9cc000000           jmp 0x407523
// 00407457  57                   push edi
// 00407458  53                   push ebx
// 00407459  ff15bce18900         call dword ptr [0x89e1bc]
// 0040745f  89450c               mov dword ptr [ebp + 0xc], eax
// 00407462  85c0                 test eax, eax
// 00407464  750a                 jne 0x407470
// 00407466  e825bbffff           call 0x402f90
// 0040746b  e9b3000000           jmp 0x407523
// 00407470  57                   push edi
// 00407471  53                   push ebx
// 00407472  ff15b8e18900         call dword ptr [0x89e1b8]
// 00407478  8bf8                 mov edi, eax
// 0040747a  8d4701               lea eax, [edi + 1]
// 0040747d  897d10               mov dword ptr [ebp + 0x10], edi
// 00407480  3bc7                 cmp eax, edi
// 00407482  732b                 jae 0x4074af
// 00407484  8d85dcfbffff         lea eax, [ebp - 0x424]
// 0040748a  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407490  740b                 je 0x40749d
// 00407492  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407498  e883c7ffff           call 0x403c20
// 0040749d  8d4dec               lea ecx, [ebp - 0x14]
// 004074a0  e80bc7ffff           call 0x403bb0
// 004074a5  b80e000780           mov eax, 0x8007000e
// 004074aa  e9b1000000           jmp 0x407560
// 004074af  50                   push eax
// 004074b0  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004074b6  c645fc02             mov byte ptr [ebp - 4], 2
// 004074ba  e811daffff           call 0x404ed0
// 004074bf  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004074c6  eb1e                 jmp 0x4074e6
// 004074c8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 004074cb  e844183100           call 0x718d14
// 004074d0  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004074d7  b8dd744000           mov eax, 0x4074dd
// 004074dc  c3                   ret 
// 004074dd  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004074e0  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004074e3  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004074e6  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 004074ec  85c0                 test eax, eax
// 004074ee  7507                 jne 0x4074f7
// 004074f0  bf0e000780           mov edi, 0x8007000e
// 004074f5  eb2e                 jmp 0x407525
// 004074f7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004074fa  57                   push edi
// 004074fb  51                   push ecx
// 004074fc  57                   push edi
// 004074fd  50                   push eax
// 004074fe  e8cdb9ffff           call 0x402ed0
// 00407503  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 00407509  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0040750c  83c410               add esp, 0x10
// 0040750f  c6043a00             mov byte ptr [edx + edi], 0
// 00407513  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 00407519  50                   push eax
// 0040751a  51                   push ecx
// 0040751b  8d4de4               lea ecx, [ebp - 0x1c]
// 0040751e  e86df0ffff           call 0x406590
// 00407523  8bf8                 mov edi, eax
// 00407525  53                   push ebx
// 00407526  ff15b4e18900         call dword ptr [0x89e1b4]
// 0040752c  8d95dcfbffff         lea edx, [ebp - 0x424]
// 00407532  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 00407538  740b                 je 0x407545
// 0040753a  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407540  e8dbc6ffff           call 0x403c20
// 00407545  85f6                 test esi, esi
// 00407547  7415                 je 0x40755e
// 00407549  8b1dcce98900         mov ebx, dword ptr [0x89e9cc]
// 0040754f  90                   nop 
// 00407550  8bc6                 mov eax, esi
// 00407552  8b36                 mov esi, dword ptr [esi]
// 00407554  50                   push eax
// 00407555  ffd3                 call ebx
// 00407557  83c404               add esp, 4
// 0040755a  85f6                 test esi, esi
// 0040755c  75f2                 jne 0x407550
// 0040755e  8bc7                 mov eax, edi
// 00407560  8da5ccfbffff         lea esp, [ebp - 0x434]
// 00407566  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407569  64890d00000000       mov dword ptr fs:[0], ecx
// 00407570  5f                   pop edi
// 00407571  5e                   pop esi
// 00407572  5b                   pop ebx
// 00407573  8be5                 mov esp, ebp
// 00407575  5d                   pop ebp
// 00407576  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterFromResource@CRegObject@ATL@@IAEJPB_WPBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp