// roc 2007-08 0046d980  unit: RBX::LDraw2Lua::LuaWriter  size: 861 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d980
//
// 0046d980  6aff                 push -1
// 0046d982  684d437400           push 0x74434d
// 0046d987  64a100000000         mov eax, dword ptr fs:[0]
// 0046d98d  50                   push eax
// 0046d98e  81ec84040000         sub esp, 0x484
// 0046d994  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d999  33c4                 xor eax, esp
// 0046d99b  89842480040000       mov dword ptr [esp + 0x480], eax
// 0046d9a2  53                   push ebx
// 0046d9a3  55                   push ebp
// 0046d9a4  56                   push esi
// 0046d9a5  57                   push edi
// 0046d9a6  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d9ab  33c4                 xor eax, esp
// 0046d9ad  50                   push eax
// 0046d9ae  8d842498040000       lea eax, [esp + 0x498]
// 0046d9b5  64a300000000         mov dword ptr fs:[0], eax
// 0046d9bb  8bac24a8040000       mov ebp, dword ptr [esp + 0x4a8]
// 0046d9c2  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0046d9c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046d9ce  e8adfeffff           call 0x46d880
// 0046d9d3  83f802               cmp eax, 2
// 0046d9d6  0f85a0000000         jne 0x46da7c
// 0046d9dc  f60500d08b0001       test byte ptr [0x8bd000], 1
// 0046d9e3  753e                 jne 0x46da23
// 0046d9e5  b801000000           mov eax, 1
// 0046d9ea  090500d08b00         or dword ptr [0x8bd000], eax
// 0046d9f0  68021f0000           push 0x1f02
// 0046d9f5  898424a4040000       mov dword ptr [esp + 0x4a4], eax
// 0046d9fc  ff15a8eb7700         call dword ptr [0x77eba8]
// 0046da02  50                   push eax
// 0046da03  b9e4cf8b00           mov ecx, 0x8bcfe4
// 0046da08  ff1598e67700         call dword ptr [0x77e698]
// 0046da0e  68007f7700           push 0x777f00
// 0046da13  e80b331c00           call 0x630d23
// 0046da18  83c404               add esp, 4
// 0046da1b  c68424a004000000     mov byte ptr [esp + 0x4a0], 0
// 0046da23  a13ce67700           mov eax, dword ptr [0x77e63c]
// 0046da28  8b00                 mov eax, dword ptr [eax]
// 0046da2a  6a01                 push 1
// 0046da2c  50                   push eax
// 0046da2d  8d4c241c             lea ecx, [esp + 0x1c]
// 0046da31  51                   push ecx
// 0046da32  b9e4cf8b00           mov ecx, 0x8bcfe4
// 0046da37  c644242020           mov byte ptr [esp + 0x20], 0x20
// 0046da3c  ff1578e57700         call dword ptr [0x77e578]
// 0046da42  8b153ce67700         mov edx, dword ptr [0x77e63c]
// 0046da48  3b02                 cmp eax, dword ptr [edx]
// 0046da4a  7512                 jne 0x46da5e
// 0046da4c  6890677900           push 0x796790
// 0046da51  8bcd                 mov ecx, ebp
// 0046da53  ff1598e67700         call dword ptr [0x77e698]
// 0046da59  e955020000           jmp 0x46dcb3
// 0046da5e  8b0df8cf8b00         mov ecx, dword ptr [0x8bcff8]
// 0046da64  2bc8                 sub ecx, eax
// 0046da66  51                   push ecx
// 0046da67  83c001               add eax, 1
// 0046da6a  50                   push eax
// 0046da6b  55                   push ebp
// 0046da6c  b9e4cf8b00           mov ecx, 0x8bcfe4
// 0046da71  ff1538e67700         call dword ptr [0x77e638]
// 0046da77  e937020000           jmp 0x46dcb3
// 0046da7c  8d4c245c             lea ecx, [esp + 0x5c]
// 0046da80  ff15a4e67700         call dword ptr [0x77e6a4]
// 0046da86  6800040000           push 0x400
// 0046da8b  8d942498000000       lea edx, [esp + 0x98]
// 0046da92  52                   push edx
// 0046da93  c78424a804000002000000 mov dword ptr [esp + 0x4a8], 2
// 0046da9e  ff1540d27700         call dword ptr [0x77d240]
// 0046daa4  85c0                 test eax, eax
// 0046daa6  751a                 jne 0x46dac2
// 0046daa8  6868677900           push 0x796768
// 0046daad  8bcd                 mov ecx, ebp
// 0046daaf  ff1598e67700         call dword ptr [0x77e698]
// 0046dab5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046dabd  e9df010000           jmp 0x46dca1
// 0046dac2  8d842494000000       lea eax, [esp + 0x94]
// 0046dac9  50                   push eax
// 0046daca  8d4c2460             lea ecx, [esp + 0x60]
// 0046dace  ff152ce67700         call dword ptr [0x77e62c]
// 0046dad4  e8a7fdffff           call 0x46d880
// 0046dad9  83e800               sub eax, 0
// 0046dadc  7450                 je 0x46db2e
// 0046dade  83e801               sub eax, 1
// 0046dae1  741a                 je 0x46dafd
// 0046dae3  684c677900           push 0x79674c
// 0046dae8  8bcd                 mov ecx, ebp
// 0046daea  ff1598e67700         call dword ptr [0x77e698]
// 0046daf0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046daf8  e9a4010000           jmp 0x46dca1
// 0046dafd  683c677900           push 0x79673c
// 0046db02  8d4c2460             lea ecx, [esp + 0x60]
// 0046db06  51                   push ecx
// 0046db07  8d542448             lea edx, [esp + 0x48]
// 0046db0b  52                   push edx
// 0046db0c  ff1544e67700         call dword ptr [0x77e644]
// 0046db12  83c40c               add esp, 0xc
// 0046db15  50                   push eax
// 0046db16  8d4c2460             lea ecx, [esp + 0x60]
// 0046db1a  c68424a404000004     mov byte ptr [esp + 0x4a4], 4
// 0046db22  ff1590e67700         call dword ptr [0x77e690]
// 0046db28  8d4c2440             lea ecx, [esp + 0x40]
// 0046db2c  eb2f                 jmp 0x46db5d
// 0046db2e  682c677900           push 0x79672c
// 0046db33  8d442460             lea eax, [esp + 0x60]
// 0046db37  50                   push eax
// 0046db38  8d4c242c             lea ecx, [esp + 0x2c]
// 0046db3c  51                   push ecx
// 0046db3d  ff1544e67700         call dword ptr [0x77e644]
// 0046db43  83c40c               add esp, 0xc
// 0046db46  50                   push eax
// 0046db47  8d4c2460             lea ecx, [esp + 0x60]
// 0046db4b  c68424a404000003     mov byte ptr [esp + 0x4a4], 3
// 0046db53  ff1590e67700         call dword ptr [0x77e690]
// 0046db59  8d4c2424             lea ecx, [esp + 0x24]
// 0046db5d  c68424a004000002     mov byte ptr [esp + 0x4a0], 2
// 0046db65  ff15ace67700         call dword ptr [0x77e6ac]
// 0046db6b  837c247410           cmp dword ptr [esp + 0x74], 0x10
// 0046db70  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0046db74  7304                 jae 0x46db7a
// 0046db76  8d5c2460             lea ebx, [esp + 0x60]
// 0046db7a  8d542420             lea edx, [esp + 0x20]
// 0046db7e  52                   push edx
// 0046db7f  53                   push ebx
// 0046db80  e8ab952b00           call 0x727130
// 0046db85  8bf8                 mov edi, eax
// 0046db87  85ff                 test edi, edi
// 0046db89  751a                 jne 0x46dba5
// 0046db8b  6810677900           push 0x796710
// 0046db90  8bcd                 mov ecx, ebp
// 0046db92  ff1598e67700         call dword ptr [0x77e698]
// 0046db98  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046dba0  e9fc000000           jmp 0x46dca1
// 0046dba5  57                   push edi
// 0046dba6  e887231c00           call 0x62ff32
// 0046dbab  83c404               add esp, 4
// 0046dbae  8bf0                 mov esi, eax
// 0046dbb0  56                   push esi
// 0046dbb1  57                   push edi
// 0046dbb2  6a00                 push 0
// 0046dbb4  53                   push ebx
// 0046dbb5  e870952b00           call 0x72712a
// 0046dbba  85c0                 test eax, eax
// 0046dbbc  7523                 jne 0x46dbe1
// 0046dbbe  56                   push esi
// 0046dbbf  e862231c00           call 0x62ff26
// 0046dbc4  83c404               add esp, 4
// 0046dbc7  6808677900           push 0x796708
// 0046dbcc  8bcd                 mov ecx, ebp
// 0046dbce  ff1598e67700         call dword ptr [0x77e698]
// 0046dbd4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046dbdc  e9c0000000           jmp 0x46dca1
// 0046dbe1  8d4606               lea eax, [esi + 6]
// 0046dbe4  8d5002               lea edx, [eax + 2]
// 0046dbe7  668b08               mov cx, word ptr [eax]
// 0046dbea  83c002               add eax, 2
// 0046dbed  6685c9               test cx, cx
// 0046dbf0  75f5                 jne 0x46dbe7
// 0046dbf2  2bc2                 sub eax, edx
// 0046dbf4  d1f8                 sar eax, 1
// 0046dbf6  8d444608             lea eax, [esi + eax*2 + 8]
// 0046dbfa  2bc6                 sub eax, esi
// 0046dbfc  83c003               add eax, 3
// 0046dbff  83e0fc               and eax, 0xfffffffc
// 0046dc02  03c6                 add eax, esi
// 0046dc04  68ec667900           push 0x7966ec
// 0046dc09  8d4c247c             lea ecx, [esp + 0x7c]
// 0046dc0d  8bf8                 mov edi, eax
// 0046dc0f  ff1598e67700         call dword ptr [0x77e698]
// 0046dc15  66837e0200           cmp word ptr [esi + 2], 0
// 0046dc1a  b305                 mov bl, 5
// 0046dc1c  889c24a0040000       mov byte ptr [esp + 0x4a0], bl
// 0046dc23  744c                 je 0x46dc71
// 0046dc25  8b4714               mov eax, dword ptr [edi + 0x14]
// 0046dc28  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0046dc2b  0fb7d0               movzx edx, ax
// 0046dc2e  52                   push edx
// 0046dc2f  c1e810               shr eax, 0x10
// 0046dc32  50                   push eax
// 0046dc33  0fb7c1               movzx eax, cx
// 0046dc36  50                   push eax
// 0046dc37  c1e910               shr ecx, 0x10
// 0046dc3a  51                   push ecx
// 0046dc3b  8d4c2434             lea ecx, [esp + 0x34]
// 0046dc3f  68e0667900           push 0x7966e0
// 0046dc44  51                   push ecx
// 0046dc45  e8763b0900           call 0x5017c0
// 0046dc4a  83c418               add esp, 0x18
// 0046dc4d  50                   push eax
// 0046dc4e  8d4c247c             lea ecx, [esp + 0x7c]
// 0046dc52  c68424a404000006     mov byte ptr [esp + 0x4a4], 6
// 0046dc5a  ff1590e67700         call dword ptr [0x77e690]
// 0046dc60  8d4c2424             lea ecx, [esp + 0x24]
// 0046dc64  889c24a0040000       mov byte ptr [esp + 0x4a0], bl
// 0046dc6b  ff15ace67700         call dword ptr [0x77e6ac]
// 0046dc71  56                   push esi
// 0046dc72  e8af221c00           call 0x62ff26
// 0046dc77  83c404               add esp, 4
// 0046dc7a  8d542478             lea edx, [esp + 0x78]
// 0046dc7e  52                   push edx
// 0046dc7f  8bcd                 mov ecx, ebp
// 0046dc81  ff159ce67700         call dword ptr [0x77e69c]
// 0046dc87  8d4c2478             lea ecx, [esp + 0x78]
// 0046dc8b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046dc93  c68424a004000002     mov byte ptr [esp + 0x4a0], 2
// 0046dc9b  ff15ace67700         call dword ptr [0x77e6ac]
// 0046dca1  8d4c245c             lea ecx, [esp + 0x5c]
// 0046dca5  c68424a004000000     mov byte ptr [esp + 0x4a0], 0
// 0046dcad  ff15ace67700         call dword ptr [0x77e6ac]
// 0046dcb3  8bc5                 mov eax, ebp
// 0046dcb5  8b8c2498040000       mov ecx, dword ptr [esp + 0x498]
// 0046dcbc  64890d00000000       mov dword ptr fs:[0], ecx
// 0046dcc3  59                   pop ecx
// 0046dcc4  5f                   pop edi
// 0046dcc5  5e                   pop esi
// 0046dcc6  5d                   pop ebp
// 0046dcc7  5b                   pop ebx
// 0046dcc8  8b8c2480040000       mov ecx, dword ptr [esp + 0x480]
// 0046dccf  33cc                 xor ecx, esp
// 0046dcd1  e8482d1c00           call 0x630a1e
// 0046dcd6  81c490040000         add esp, 0x490
// 0046dcdc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
