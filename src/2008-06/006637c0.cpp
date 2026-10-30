// from server: 100% by auto
// roc 2008-06 006637c0  unit: RBX::FilterStairs  size: 668 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006637c0
//
// 006637c0  83ec10               sub esp, 0x10
// 006637c3  53                   push ebx
// 006637c4  55                   push ebp
// 006637c5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006637c9  56                   push esi
// 006637ca  57                   push edi
// 006637cb  8bf0                 mov esi, eax
// 006637cd  e84efeffff           call 0x663620
// 006637d2  8bf8                 mov edi, eax
// 006637d4  8d4701               lea eax, [edi + 1]
// 006637d7  3dffffff0f           cmp eax, 0xfffffff
// 006637dc  7717                 ja 0x6637f5
// 006637de  8b16                 mov edx, dword ptr [esi]
// 006637e0  8bcf                 mov ecx, edi
// 006637e2  c1e104               shl ecx, 4
// 006637e5  51                   push ecx
// 006637e6  6a00                 push 0
// 006637e8  6a00                 push 0
// 006637ea  52                   push edx
// 006637eb  e800cfffff           call 0x6606f0
// 006637f0  83c410               add esp, 0x10
// 006637f3  eb0b                 jmp 0x663800
// 006637f5  8b06                 mov eax, dword ptr [esi]
// 006637f7  50                   push eax
// 006637f8  e8d3ceffff           call 0x6606d0
// 006637fd  83c404               add esp, 4
// 00663800  33db                 xor ebx, ebx
// 00663802  3bfb                 cmp edi, ebx
// 00663804  894508               mov dword ptr [ebp + 8], eax
// 00663807  897d28               mov dword ptr [ebp + 0x28], edi
// 0066380a  0f8e54010000         jle 0x663964
// 00663810  33c0                 xor eax, eax
// 00663812  8bcf                 mov ecx, edi
// 00663814  8b5508               mov edx, dword ptr [ebp + 8]
// 00663817  895c1008             mov dword ptr [eax + edx + 8], ebx
// 0066381b  83c010               add eax, 0x10
// 0066381e  83e901               sub ecx, 1
// 00663821  75f1                 jne 0x663814
// 00663823  3bfb                 cmp edi, ebx
// 00663825  0f8e39010000         jle 0x663964
// 0066382b  897c2414             mov dword ptr [esp + 0x14], edi
// 0066382f  90                   nop 
// 00663830  8b4e04               mov ecx, dword ptr [esi + 4]
// 00663833  8b7d08               mov edi, dword ptr [ebp + 8]
// 00663836  6a01                 push 1
// 00663838  8d442428             lea eax, [esp + 0x28]
// 0066383c  50                   push eax
// 0066383d  51                   push ecx
// 0066383e  03fb                 add edi, ebx
// 00663840  e8bbc0ffff           call 0x65f900
// 00663845  83c40c               add esp, 0xc
// 00663848  85c0                 test eax, eax
// 0066384a  7423                 je 0x66386f
// 0066384c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066384f  8b06                 mov eax, dword ptr [esi]
// 00663851  6830c78400           push 0x84c730
// 00663856  52                   push edx
// 00663857  6814c78400           push 0x84c714
// 0066385c  50                   push eax
// 0066385d  e85ef2fbff           call 0x622ac0
// 00663862  8b0e                 mov ecx, dword ptr [esi]
// 00663864  6a03                 push 3
// 00663866  51                   push ecx
// 00663867  e8e4e7fbff           call 0x622050
// 0066386c  83c418               add esp, 0x18
// 0066386f  0fbe442424           movsx eax, byte ptr [esp + 0x24]
// 00663874  83f804               cmp eax, 4
// 00663877  0f87b6000000         ja 0x663933
// 0066387d  ff2485483a6600       jmp dword ptr [eax*4 + 0x663a48]
// 00663884  c7470800000000       mov dword ptr [edi + 8], 0
// 0066388b  e9c6000000           jmp 0x663956
// 00663890  8b4604               mov eax, dword ptr [esi + 4]
// 00663893  6a01                 push 1
// 00663895  8d542417             lea edx, [esp + 0x17]
// 00663899  52                   push edx
// 0066389a  50                   push eax
// 0066389b  e860c0ffff           call 0x65f900
// 006638a0  83c40c               add esp, 0xc
// 006638a3  85c0                 test eax, eax
// 006638a5  7423                 je 0x6638ca
// 006638a7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006638aa  8b16                 mov edx, dword ptr [esi]
// 006638ac  6830c78400           push 0x84c730
// 006638b1  51                   push ecx
// 006638b2  6814c78400           push 0x84c714
// 006638b7  52                   push edx
// 006638b8  e803f2fbff           call 0x622ac0
// 006638bd  8b06                 mov eax, dword ptr [esi]
// 006638bf  6a03                 push 3
// 006638c1  50                   push eax
// 006638c2  e889e7fbff           call 0x622050
// 006638c7  83c418               add esp, 0x18
// 006638ca  0fbe4c2413           movsx ecx, byte ptr [esp + 0x13]
// 006638cf  890f                 mov dword ptr [edi], ecx
// 006638d1  c7470801000000       mov dword ptr [edi + 8], 1
// 006638d8  eb7c                 jmp 0x663956
// 006638da  8b4604               mov eax, dword ptr [esi + 4]
// 006638dd  6a08                 push 8
// 006638df  8d54241c             lea edx, [esp + 0x1c]
// 006638e3  52                   push edx
// 006638e4  50                   push eax
// 006638e5  e816c0ffff           call 0x65f900
// 006638ea  83c40c               add esp, 0xc
// 006638ed  85c0                 test eax, eax
// 006638ef  7423                 je 0x663914
// 006638f1  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006638f4  8b16                 mov edx, dword ptr [esi]
// 006638f6  6830c78400           push 0x84c730
// 006638fb  51                   push ecx
// 006638fc  6814c78400           push 0x84c714
// 00663901  52                   push edx
// 00663902  e8b9f1fbff           call 0x622ac0
// 00663907  8b06                 mov eax, dword ptr [esi]
// 00663909  6a03                 push 3
// 0066390b  50                   push eax
// 0066390c  e83fe7fbff           call 0x622050
// 00663911  83c418               add esp, 0x18
// 00663914  dd442418             fld qword ptr [esp + 0x18]
// 00663918  c7470803000000       mov dword ptr [edi + 8], 3
// 0066391f  dd1f                 fstp qword ptr [edi]
// 00663921  eb33                 jmp 0x663956
// 00663923  e868fdffff           call 0x663690
// 00663928  8907                 mov dword ptr [edi], eax
// 0066392a  c7470804000000       mov dword ptr [edi + 8], 4
// 00663931  eb23                 jmp 0x663956
// 00663933  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00663936  8b16                 mov edx, dword ptr [esi]
// 00663938  684cc78400           push 0x84c74c
// 0066393d  51                   push ecx
// 0066393e  6814c78400           push 0x84c714
// 00663943  52                   push edx
// 00663944  e877f1fbff           call 0x622ac0
// 00663949  8b06                 mov eax, dword ptr [esi]
// 0066394b  6a03                 push 3
// 0066394d  50                   push eax
// 0066394e  e8fde6fbff           call 0x622050
// 00663953  83c418               add esp, 0x18
// 00663956  83c310               add ebx, 0x10
// 00663959  836c241401           sub dword ptr [esp + 0x14], 1
// 0066395e  0f85ccfeffff         jne 0x663830
// 00663964  8b5604               mov edx, dword ptr [esi + 4]
// 00663967  6a04                 push 4
// 00663969  8d4c2428             lea ecx, [esp + 0x28]
// 0066396d  51                   push ecx
// 0066396e  52                   push edx
// 0066396f  e88cbfffff           call 0x65f900
// 00663974  83c40c               add esp, 0xc
// 00663977  85c0                 test eax, eax
// 00663979  7423                 je 0x66399e
// 0066397b  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066397e  8b0e                 mov ecx, dword ptr [esi]
// 00663980  6830c78400           push 0x84c730
// 00663985  50                   push eax
// 00663986  6814c78400           push 0x84c714
// 0066398b  51                   push ecx
// 0066398c  e82ff1fbff           call 0x622ac0
// 00663991  8b16                 mov edx, dword ptr [esi]
// 00663993  6a03                 push 3
// 00663995  52                   push edx
// 00663996  e8b5e6fbff           call 0x622050
// 0066399b  83c418               add esp, 0x18
// 0066399e  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006639a2  85ff                 test edi, edi
// 006639a4  7d27                 jge 0x6639cd
// 006639a6  8b460c               mov eax, dword ptr [esi + 0xc]
// 006639a9  8b0e                 mov ecx, dword ptr [esi]
// 006639ab  6840c78400           push 0x84c740
// 006639b0  50                   push eax
// 006639b1  6814c78400           push 0x84c714
// 006639b6  51                   push ecx
// 006639b7  e804f1fbff           call 0x622ac0
// 006639bc  8b16                 mov edx, dword ptr [esi]
// 006639be  6a03                 push 3
// 006639c0  52                   push edx
// 006639c1  e88ae6fbff           call 0x622050
// 006639c6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006639ca  83c418               add esp, 0x18
// 006639cd  8d4701               lea eax, [edi + 1]
// 006639d0  3dffffff3f           cmp eax, 0x3fffffff
// 006639d5  7719                 ja 0x6639f0
// 006639d7  8b16                 mov edx, dword ptr [esi]
// 006639d9  8d0cbd00000000       lea ecx, [edi*4]
// 006639e0  51                   push ecx
// 006639e1  6a00                 push 0
// 006639e3  6a00                 push 0
// 006639e5  52                   push edx
// 006639e6  e805cdffff           call 0x6606f0
// 006639eb  83c410               add esp, 0x10
// 006639ee  eb0b                 jmp 0x6639fb
// 006639f0  8b06                 mov eax, dword ptr [esi]
// 006639f2  50                   push eax
// 006639f3  e8d8ccffff           call 0x6606d0
// 006639f8  83c404               add esp, 4
// 006639fb  894510               mov dword ptr [ebp + 0x10], eax
// 006639fe  33c0                 xor eax, eax
// 00663a00  897d34               mov dword ptr [ebp + 0x34], edi
// 00663a03  85ff                 test edi, edi
// 00663a05  7e18                 jle 0x663a1f
// 00663a07  eb07                 jmp 0x663a10
// 00663a09  8da42400000000       lea esp, [esp]
// 00663a10  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00663a13  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 00663a1a  40                   inc eax
// 00663a1b  3bc7                 cmp eax, edi
// 00663a1d  7cf1                 jl 0x663a10
// 00663a1f  33db                 xor ebx, ebx
// 00663a21  85ff                 test edi, edi
// 00663a23  7e18                 jle 0x663a3d
// 00663a25  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00663a28  52                   push edx
// 00663a29  56                   push esi
// 00663a2a  e8f1020000           call 0x663d20
// 00663a2f  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00663a32  890499               mov dword ptr [ecx + ebx*4], eax
// 00663a35  43                   inc ebx
// 00663a36  83c408               add esp, 8
// 00663a39  3bdf                 cmp ebx, edi
// 00663a3b  7ce8                 jl 0x663a25
// 00663a3d  5f                   pop edi
// 00663a3e  5e                   pop esi
// 00663a3f  5d                   pop ebp
// 00663a40  5b                   pop ebx
// 00663a41  83c410               add esp, 0x10
// 00663a44  c3                   ret 
// 00663a45  8d4900               lea ecx, [ecx]
// 00663a48  8438                 test byte ptr [eax], bh
// 00663a4a  66009038660033       add byte ptr [eax + 0x33006638], dl
// 00663a51  396600               cmp dword ptr [esi], esp
// 00663a54  da38                 fidivr dword ptr [eax]
// 00663a56  660023               add byte ptr [ebx], ah
// 00663a59  396600               cmp dword ptr [esi], esp
// library lua-5.1.3/lundump.c (function _LoadConstants)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lundump.c
