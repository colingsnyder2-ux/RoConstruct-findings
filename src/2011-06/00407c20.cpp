// roc 2011-06 00407c20  unit: VCApp::?$CComContainedObject  size: 585 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407c20
//
// 00407c20  55                   push ebp
// 00407c21  8bec                 mov ebp, esp
// 00407c23  6aff                 push -1
// 00407c25  6873d39c00           push 0x9cd373
// 00407c2a  64a100000000         mov eax, dword ptr fs:[0]
// 00407c30  50                   push eax
// 00407c31  64892500000000       mov dword ptr fs:[0], esp
// 00407c38  81ec1c040000         sub esp, 0x41c
// 00407c3e  53                   push ebx
// 00407c3f  56                   push esi
// 00407c40  57                   push edi
// 00407c41  33f6                 xor esi, esi
// 00407c43  8965f0               mov dword ptr [ebp - 0x10], esp
// 00407c46  33ff                 xor edi, edi
// 00407c48  8975ec               mov dword ptr [ebp - 0x14], esi
// 00407c4b  897dfc               mov dword ptr [ebp - 4], edi
// 00407c4e  894de8               mov dword ptr [ebp - 0x18], ecx
// 00407c51  897de4               mov dword ptr [ebp - 0x1c], edi
// 00407c54  89bdd8fbffff         mov dword ptr [ebp - 0x428], edi
// 00407c5a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00407c5d  c645fc01             mov byte ptr [ebp - 4], 1
// 00407c61  3bdf                 cmp ebx, edi
// 00407c63  7466                 je 0x407ccb
// 00407c65  53                   push ebx
// 00407c66  ff155803a400         call dword ptr [0xa40358]
// 00407c6c  57                   push edi
// 00407c6d  40                   inc eax
// 00407c6e  99                   cdq 
// 00407c6f  6a02                 push 2
// 00407c71  52                   push edx
// 00407c72  50                   push eax
// 00407c73  e838364000           call 0x80b2b0
// 00407c78  8bf8                 mov edi, eax
// 00407c7a  0500000080           add eax, 0x80000000
// 00407c7f  13d6                 adc edx, esi
// 00407c81  85d2                 test edx, edx
// 00407c83  7744                 ja 0x407cc9
// 00407c85  7205                 jb 0x407c8c
// 00407c87  83f8ff               cmp eax, -1
// 00407c8a  773d                 ja 0x407cc9
// 00407c8c  81ff00040000         cmp edi, 0x400
// 00407c92  7f1b                 jg 0x407caf
// 00407c94  57                   push edi
// 00407c95  e886c9ffff           call 0x404620
// 00407c9a  83c404               add esp, 4
// 00407c9d  84c0                 test al, al
// 00407c9f  740e                 je 0x407caf
// 00407ca1  8bc7                 mov eax, edi
// 00407ca3  e8d8354000           call 0x80b280
// 00407ca8  8965f0               mov dword ptr [ebp - 0x10], esp
// 00407cab  8bc4                 mov eax, esp
// 00407cad  eb0c                 jmp 0x407cbb
// 00407caf  57                   push edi
// 00407cb0  8d4dec               lea ecx, [ebp - 0x14]
// 00407cb3  e818cfffff           call 0x404bd0
// 00407cb8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00407cbb  6a03                 push 3
// 00407cbd  57                   push edi
// 00407cbe  53                   push ebx
// 00407cbf  50                   push eax
// 00407cc0  e86bb8ffff           call 0x403530
// 00407cc5  85c0                 test eax, eax
// 00407cc7  753f                 jne 0x407d08
// 00407cc9  33ff                 xor edi, edi
// 00407ccb  8d85dcfbffff         lea eax, [ebp - 0x424]
// 00407cd1  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407cd7  740b                 je 0x407ce4
// 00407cd9  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407cdf  e84cc6ffff           call 0x404330
// 00407ce4  3bf7                 cmp esi, edi
// 00407ce6  7416                 je 0x407cfe
// 00407ce8  8b3d740aa400         mov edi, dword ptr [0xa40a74]
// 00407cee  8bff                 mov edi, edi
// 00407cf0  8bc6                 mov eax, esi
// 00407cf2  8b36                 mov esi, dword ptr [esi]
// 00407cf4  50                   push eax
// 00407cf5  ffd7                 call edi
// 00407cf7  83c404               add esp, 4
// 00407cfa  85f6                 test esi, esi
// 00407cfc  75f2                 jne 0x407cf0
// 00407cfe  b80e000780           mov eax, 0x8007000e
// 00407d03  e948010000           jmp 0x407e50
// 00407d08  6a02                 push 2
// 00407d0a  6a00                 push 0
// 00407d0c  50                   push eax
// 00407d0d  ff153403a400         call dword ptr [0xa40334]
// 00407d13  8bd8                 mov ebx, eax
// 00407d15  895d08               mov dword ptr [ebp + 8], ebx
// 00407d18  85db                 test ebx, ebx
// 00407d1a  750c                 jne 0x407d28
// 00407d1c  e85fb9ffff           call 0x403680
// 00407d21  8bf8                 mov edi, eax
// 00407d23  e9f4000000           jmp 0x407e1c
// 00407d28  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00407d2b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00407d2e  51                   push ecx
// 00407d2f  52                   push edx
// 00407d30  53                   push ebx
// 00407d31  ff153803a400         call dword ptr [0xa40338]
// 00407d37  8bf8                 mov edi, eax
// 00407d39  85ff                 test edi, edi
// 00407d3b  750a                 jne 0x407d47
// 00407d3d  e83eb9ffff           call 0x403680
// 00407d42  e9cc000000           jmp 0x407e13
// 00407d47  57                   push edi
// 00407d48  53                   push ebx
// 00407d49  ff153c03a400         call dword ptr [0xa4033c]
// 00407d4f  89450c               mov dword ptr [ebp + 0xc], eax
// 00407d52  85c0                 test eax, eax
// 00407d54  750a                 jne 0x407d60
// 00407d56  e825b9ffff           call 0x403680
// 00407d5b  e9b3000000           jmp 0x407e13
// 00407d60  57                   push edi
// 00407d61  53                   push ebx
// 00407d62  ff154003a400         call dword ptr [0xa40340]
// 00407d68  8bf8                 mov edi, eax
// 00407d6a  8d4701               lea eax, [edi + 1]
// 00407d6d  897d10               mov dword ptr [ebp + 0x10], edi
// 00407d70  3bc7                 cmp eax, edi
// 00407d72  732b                 jae 0x407d9f
// 00407d74  8d85dcfbffff         lea eax, [ebp - 0x424]
// 00407d7a  3985d8fbffff         cmp dword ptr [ebp - 0x428], eax
// 00407d80  740b                 je 0x407d8d
// 00407d82  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407d88  e8a3c5ffff           call 0x404330
// 00407d8d  8d4dec               lea ecx, [ebp - 0x14]
// 00407d90  e82bc5ffff           call 0x4042c0
// 00407d95  b80e000780           mov eax, 0x8007000e
// 00407d9a  e9b1000000           jmp 0x407e50
// 00407d9f  50                   push eax
// 00407da0  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407da6  c645fc02             mov byte ptr [ebp - 4], 2
// 00407daa  e8b1d7ffff           call 0x405560
// 00407daf  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00407db6  eb1e                 jmp 0x407dd6
// 00407db8  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00407dbb  e87a254000           call 0x80a33a
// 00407dc0  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00407dc7  b8cd7d4000           mov eax, 0x407dcd
// 00407dcc  c3                   ret 
// 00407dcd  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00407dd0  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00407dd3  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00407dd6  8b85d8fbffff         mov eax, dword ptr [ebp - 0x428]
// 00407ddc  85c0                 test eax, eax
// 00407dde  7507                 jne 0x407de7
// 00407de0  bf0e000780           mov edi, 0x8007000e
// 00407de5  eb2e                 jmp 0x407e15
// 00407de7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00407dea  57                   push edi
// 00407deb  51                   push ecx
// 00407dec  57                   push edi
// 00407ded  50                   push eax
// 00407dee  e8cdb7ffff           call 0x4035c0
// 00407df3  8b95d8fbffff         mov edx, dword ptr [ebp - 0x428]
// 00407df9  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00407dfc  83c410               add esp, 0x10
// 00407dff  c6043a00             mov byte ptr [edx + edi], 0
// 00407e03  8b8dd8fbffff         mov ecx, dword ptr [ebp - 0x428]
// 00407e09  50                   push eax
// 00407e0a  51                   push ecx
// 00407e0b  8d4de4               lea ecx, [ebp - 0x1c]
// 00407e0e  e86df0ffff           call 0x406e80
// 00407e13  8bf8                 mov edi, eax
// 00407e15  53                   push ebx
// 00407e16  ff15b803a400         call dword ptr [0xa403b8]
// 00407e1c  8d95dcfbffff         lea edx, [ebp - 0x424]
// 00407e22  3995d8fbffff         cmp dword ptr [ebp - 0x428], edx
// 00407e28  740b                 je 0x407e35
// 00407e2a  8d8dd8fbffff         lea ecx, [ebp - 0x428]
// 00407e30  e8fbc4ffff           call 0x404330
// 00407e35  85f6                 test esi, esi
// 00407e37  7415                 je 0x407e4e
// 00407e39  8b1d740aa400         mov ebx, dword ptr [0xa40a74]
// 00407e3f  90                   nop 
// 00407e40  8bc6                 mov eax, esi
// 00407e42  8b36                 mov esi, dword ptr [esi]
// 00407e44  50                   push eax
// 00407e45  ffd3                 call ebx
// 00407e47  83c404               add esp, 4
// 00407e4a  85f6                 test esi, esi
// 00407e4c  75f2                 jne 0x407e40
// 00407e4e  8bc7                 mov eax, edi
// 00407e50  8da5ccfbffff         lea esp, [ebp - 0x434]
// 00407e56  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00407e59  64890d00000000       mov dword ptr fs:[0], ecx
// 00407e60  5f                   pop edi
// 00407e61  5e                   pop esi
// 00407e62  5b                   pop ebx
// 00407e63  8be5                 mov esp, ebp
// 00407e65  5d                   pop ebp
// 00407e66  c21000               ret 0x10
// copied from an identical function in another client (function ?RegisterFromResource@CRegObject@ATL@@IAEJPB_WPBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_daa9467bfe875fbf.cpp