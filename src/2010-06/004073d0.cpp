// roc 2010-06 004073d0  unit: VCApp::?$CComAggObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004073d0
//
// 004073d0  55                   push ebp
// 004073d1  8bec                 mov ebp, esp
// 004073d3  6aff                 push -1
// 004073d5  6813dc9700           push 0x97dc13
// 004073da  64a100000000         mov eax, dword ptr fs:[0]
// 004073e0  50                   push eax
// 004073e1  64892500000000       mov dword ptr fs:[0], esp
// 004073e8  81ec1c040000         sub esp, 0x41c
// 004073ee  53                   push ebx
// 004073ef  56                   push esi
// 004073f0  57                   push edi
// 004073f1  33f6                 xor esi, esi
// 004073f3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004073f6  33ff                 xor edi, edi
// 004073f8  8975ec               mov dword ptr [ebp - 0x14], esi
// 004073fb  897dfc               mov dword ptr [ebp - 4], edi
// 004073fe  894de8               mov dword ptr [ebp - 0x18], ecx
// 00407401  897de4               mov dword ptr [ebp - 0x1c], edi
// 00407404  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 0040740a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040740d  c645fc01             mov byte ptr [ebp - 4], 1
// 00407411  3bdf                 cmp ebx, edi
// 00407413  7466                 je 0x40747b
// 00407415  53                   push ebx
// 00407416  ff15a8a39e00         call dword ptr [0x9ea3a8]
// 0040741c  57                   push edi
// 0040741d  40                   inc eax
// 0040741e  99                   cdq 
// 0040741f  6a02                 push 2
// 00407421  52                   push edx
// 00407422  50                   push eax
// 00407423  e888173a00           call 0x7a8bb0
// 00407428  8bf8                 mov edi, eax
// 0040742a  0500000080           add eax, 0x80000000
// 0040742f  13d6                 adc edx, esi
// 00407431  85d2                 test edx, edx
// 00407433  7744                 ja 0x407479
// 00407435  7205                 jb 0x40743c
// 00407437  83f8ff               cmp eax, -1
// 0040743a  773d                 ja 0x407479
// 0040743c  81ff00040000         cmp edi, 0x400
// 00407442  7f1b                 jg 0x40745f
// 00407444  57                   push edi
// 00407445  e806c7ffff           call 0x403b50
// 0040744a  83c404               add esp, 4
// 0040744d  84c0                 test al, al
// 0040744f  740e                 je 0x40745f
// 00407451  8bc7                 mov eax, edi
// 00407453  e828173a00           call 0x7a8b80
// 00407458  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040745b  8bc4                 mov eax, esp
// 0040745d  eb0c                 jmp 0x40746b
// 0040745f  57                   push edi
// 00407460  8d4dec               lea ecx, [ebp - 0x14]
// 00407463  e888ccffff           call 0x4040f0
// 00407468  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040746b  6a03                 push 3
// 0040746d  57                   push edi
// 0040746e  53                   push ebx
// 0040746f  50                   push eax
// 00407470  e8ebb6ffff           call 0x402b60
// 00407475  85c0                 test eax, eax
// 00407477  753f                 jne 0x4074b8
// 00407479  33ff                 xor edi, edi
// 0040747b  8d85dcfbffff         lea eax, [ebp - 0x424]
// 00407481  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407487  740b                 je 0x407494
// 00407489  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 0040748f  e8fcc5ffff           call 0x403a90
// 00407494  3bf7                 cmp esi, edi
// 00407496  7416                 je 0x4074ae
// 00407498  8b3d08aa9e00         mov edi, dword ptr [0x9eaa08]
// 0040749e  8bff                 mov edi, edi
// 004074a0  8bc6                 mov eax, esi
// 004074a2  8b36                 mov esi, dword ptr [esi]
// 004074a4  50                   push eax
// 004074a5  ffd7                 call edi
// 004074a7  83c404               add esp, 4
// 004074aa  85f6                 test esi, esi
// 004074ac  75f2                 jne 0x4074a0
// 004074ae  b80e000780           mov eax, 0x8007000e
// 004074b3  e948010000           jmp 0x407600
// 004074b8  6a02                 push 2
// 004074ba  6a00                 push 0
// 004074bc  50                   push eax
// 004074bd  ff1558a39e00         call dword ptr [0x9ea358]
// 004074c3  8bd8                 mov ebx, eax
// 004074c5  895d08               mov dword ptr [ebp + 8], ebx
// 004074c8  85db                 test ebx, ebx
// 004074ca  750c                 jne 0x4074d8
// 004074cc  e8dfb7ffff           call 0x402cb0
// 004074d1  8bf8                 mov edi, eax
// 004074d3  e9f4000000           jmp 0x4075cc
// 004074d8  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004074db  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004074de  51                   push ecx
// 004074df  52                   push edx
// 004074e0  53                   push ebx
// 004074e1  ff155ca39e00         call dword ptr [0x9ea35c]
// 004074e7  8bf8                 mov edi, eax
// 004074e9  85ff                 test edi, edi
// 004074eb  750a                 jne 0x4074f7
// 004074ed  e8beb7ffff           call 0x402cb0
// 004074f2  e9cc000000           jmp 0x4075c3
// 004074f7  57                   push edi
// 004074f8  53                   push ebx
// 004074f9  ff1560a39e00         call dword ptr [0x9ea360]
// 004074ff  89450c               mov dword ptr [ebp + 0xc], eax
// 00407502  85c0                 test eax, eax
// 00407504  750a                 jne 0x407510
// 00407506  e8a5b7ffff           call 0x402cb0
// 0040750b  e9b3000000           jmp 0x4075c3
// 00407510  57                   push edi
// 00407511  53                   push ebx
// 00407512  ff1564a39e00         call dword ptr [0x9ea364]
// 00407518  8bf8                 mov edi, eax
// 0040751a  8d4701               lea eax, [edi + 1]
// 0040751d  897d10               mov dword ptr [ebp + 0x10], edi
// 00407520  3bc7                 cmp eax, edi
// 00407522  732b                 jae 0x40754f
// 00407524  8d85dcfbffff         lea eax, [ebp - 0x424]
// 0040752a  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407530  740b                 je 0x40753d
// 00407532  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407538  e853c5ffff           call 0x403a90
// 0040753d  8d4dec               lea ecx, [ebp - 0x14]
// 00407540  e88bc3ffff           call 0x4038d0
// 00407545  b80e000780           mov eax, 0x8007000e
// 0040754a  e9b1000000           jmp 0x407600
// 0040754f  50                   push eax
// 00407550  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407556  c645fc02             mov byte ptr [ebp - 4], 2
// 0040755a  e871d6ffff           call 0x404bd0
// 0040755f  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00407566  eb1e                 jmp 0x407586
// 00407568  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040756b  e80c073a00           call 0x7a7c7c
// 00407570  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00407577  b87d754000           mov eax, 0x40757d
// 0040757c  c3                   ret 
// 0040757d  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00407580  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00407583  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00407586  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 0040758c  85c0                 test eax, eax
// 0040758e  7507                 jne 0x407597
// 00407590  bf0e000780           mov edi, 0x8007000e
// 00407595  eb2e                 jmp 0x4075c5
// 00407597  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0040759a  57                   push edi
// 0040759b  51                   push ecx
// 0040759c  57                   push edi
// 0040759d  50                   push eax
// 0040759e  e84db6ffff           call 0x402bf0
// 004075a3  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 004075a9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004075ac  83c410               add esp, 0x10
// 004075af  c6043a00             mov byte ptr [edx + edi], 0
// 004075b3  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 004075b9  50                   push eax
// 004075ba  51                   push ecx
// 004075bb  8d4de4               lea ecx, [ebp - 0x1c]
// 004075be  e80df7ffff           call 0x406cd0
// 004075c3  8bf8                 mov edi, eax
// 004075c5  53                   push ebx
// 004075c6  ff1568a39e00         call dword ptr [0x9ea368]
// 004075cc  8d95dcfbffff         lea edx, [ebp - 0x424]
// 004075d2  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 004075d8  740b                 je 0x4075e5
// 004075da  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 004075e0  e8abc4ffff           call 0x403a90
// 004075e5  85f6                 test esi, esi
// 004075e7  7415                 je 0x4075fe
// 004075e9  8b1d08aa9e00         mov ebx, dword ptr [0x9eaa08]
// 004075ef  90                   nop 
// 004075f0  8bc6                 mov eax, esi
// 004075f2  8b36                 mov esi, dword ptr [esi]
// 004075f4  50                   push eax
// 004075f5  ffd3                 call ebx
// 004075f7  83c404               add esp, 4
// 004075fa  85f6                 test esi, esi
// 004075fc  75f2                 jne 0x4075f0
// 004075fe  8bc7                 mov eax, edi
// 00407600  8da5ccfbffff         lea esp, [ebp - 0x434]
// 00407606  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407609  64890d00000000       mov dword ptr fs:[0], ecx
// 00407610  5f                   pop edi
// 00407611  5e                   pop esi
// 00407612  5b                   pop ebx
// 00407613  8be5                 mov esp, ebp
// 00407615  5d                   pop ebp
// 00407616  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterFromResource@CRegObject@ATL@@IAEJPB_WPBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp