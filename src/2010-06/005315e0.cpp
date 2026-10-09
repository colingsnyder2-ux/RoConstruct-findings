// roc 2010-06 005315e0  unit: G3D::VVector3::?$Table  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005315e0
//
// 005315e0  6aff                 push -1
// 005315e2  68e22f9a00           push 0x9a2fe2
// 005315e7  64a100000000         mov eax, dword ptr fs:[0]
// 005315ed  50                   push eax
// 005315ee  64892500000000       mov dword ptr fs:[0], esp
// 005315f5  83ec48               sub esp, 0x48
// 005315f8  8b442460             mov eax, dword ptr [esp + 0x60]
// 005315fc  80782100             cmp byte ptr [eax + 0x21], 0
// 00531600  53                   push ebx
// 00531601  8bd9                 mov ebx, ecx
// 00531603  895c2404             mov dword ptr [esp + 4], ebx
// 00531607  7459                 je 0x531662
// 00531609  688c00a000           push 0xa0008c
// 0053160e  8d4c240c             lea ecx, [esp + 0xc]
// 00531612  ff1510a49e00         call dword ptr [0x9ea410]
// 00531618  8d4c2424             lea ecx, [esp + 0x24]
// 0053161c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00531624  ff1518a99e00         call dword ptr [0x9ea918]
// 0053162a  8d442408             lea eax, [esp + 8]
// 0053162e  50                   push eax
// 0053162f  8d4c2434             lea ecx, [esp + 0x34]
// 00531633  c644245801           mov byte ptr [esp + 0x58], 1
// 00531638  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 00531640  ff150ca49e00         call dword ptr [0x9ea40c]
// 00531646  68081bb000           push 0xb01b08
// 0053164b  8d4c2428             lea ecx, [esp + 0x28]
// 0053164f  51                   push ecx
// 00531650  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00531655  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 0053165d  e850732700           call 0x7a89b2
// 00531662  55                   push ebp
// 00531663  56                   push esi
// 00531664  57                   push edi
// 00531665  8d4c246c             lea ecx, [esp + 0x6c]
// 00531669  8be8                 mov ebp, eax
// 0053166b  e8909a0e00           call 0x61b100
// 00531670  8b4d00               mov ecx, dword ptr [ebp]
// 00531673  80792100             cmp byte ptr [ecx + 0x21], 0
// 00531677  7405                 je 0x53167e
// 00531679  8b7d08               mov edi, dword ptr [ebp + 8]
// 0053167c  eb1b                 jmp 0x531699
// 0053167e  8b5508               mov edx, dword ptr [ebp + 8]
// 00531681  807a2100             cmp byte ptr [edx + 0x21], 0
// 00531685  7404                 je 0x53168b
// 00531687  8bf9                 mov edi, ecx
// 00531689  eb0e                 jmp 0x531699
// 0053168b  8b442470             mov eax, dword ptr [esp + 0x70]
// 0053168f  8b7808               mov edi, dword ptr [eax + 8]
// 00531692  8d5008               lea edx, [eax + 8]
// 00531695  3bc5                 cmp eax, ebp
// 00531697  7567                 jne 0x531700
// 00531699  807f2100             cmp byte ptr [edi + 0x21], 0
// 0053169d  8b7504               mov esi, dword ptr [ebp + 4]
// 005316a0  7503                 jne 0x5316a5
// 005316a2  897704               mov dword ptr [edi + 4], esi
// 005316a5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005316a8  396804               cmp dword ptr [eax + 4], ebp
// 005316ab  7505                 jne 0x5316b2
// 005316ad  897804               mov dword ptr [eax + 4], edi
// 005316b0  eb0b                 jmp 0x5316bd
// 005316b2  392e                 cmp dword ptr [esi], ebp
// 005316b4  7504                 jne 0x5316ba
// 005316b6  893e                 mov dword ptr [esi], edi
// 005316b8  eb03                 jmp 0x5316bd
// 005316ba  897e08               mov dword ptr [esi + 8], edi
// 005316bd  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 005316c0  392b                 cmp dword ptr [ebx], ebp
// 005316c2  7515                 jne 0x5316d9
// 005316c4  807f2100             cmp byte ptr [edi + 0x21], 0
// 005316c8  7404                 je 0x5316ce
// 005316ca  8bc6                 mov eax, esi
// 005316cc  eb09                 jmp 0x5316d7
// 005316ce  57                   push edi
// 005316cf  e87c54ffff           call 0x526b50
// 005316d4  83c404               add esp, 4
// 005316d7  8903                 mov dword ptr [ebx], eax
// 005316d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 005316dd  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005316e0  396b08               cmp dword ptr [ebx + 8], ebp
// 005316e3  7578                 jne 0x53175d
// 005316e5  807f2100             cmp byte ptr [edi + 0x21], 0
// 005316e9  7407                 je 0x5316f2
// 005316eb  8bc6                 mov eax, esi
// 005316ed  894308               mov dword ptr [ebx + 8], eax
// 005316f0  eb6b                 jmp 0x53175d
// 005316f2  57                   push edi
// 005316f3  e888990e00           call 0x61b080
// 005316f8  83c404               add esp, 4
// 005316fb  894308               mov dword ptr [ebx + 8], eax
// 005316fe  eb5d                 jmp 0x53175d
// 00531700  894104               mov dword ptr [ecx + 4], eax
// 00531703  8b4d00               mov ecx, dword ptr [ebp]
// 00531706  8908                 mov dword ptr [eax], ecx
// 00531708  3b4508               cmp eax, dword ptr [ebp + 8]
// 0053170b  7504                 jne 0x531711
// 0053170d  8bf0                 mov esi, eax
// 0053170f  eb19                 jmp 0x53172a
// 00531711  807f2100             cmp byte ptr [edi + 0x21], 0
// 00531715  8b7004               mov esi, dword ptr [eax + 4]
// 00531718  7503                 jne 0x53171d
// 0053171a  897704               mov dword ptr [edi + 4], esi
// 0053171d  893e                 mov dword ptr [esi], edi
// 0053171f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00531722  890a                 mov dword ptr [edx], ecx
// 00531724  8b5508               mov edx, dword ptr [ebp + 8]
// 00531727  894204               mov dword ptr [edx + 4], eax
// 0053172a  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0053172d  396904               cmp dword ptr [ecx + 4], ebp
// 00531730  7505                 jne 0x531737
// 00531732  894104               mov dword ptr [ecx + 4], eax
// 00531735  eb0e                 jmp 0x531745
// 00531737  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0053173a  3929                 cmp dword ptr [ecx], ebp
// 0053173c  7504                 jne 0x531742
// 0053173e  8901                 mov dword ptr [ecx], eax
// 00531740  eb03                 jmp 0x531745
// 00531742  894108               mov dword ptr [ecx + 8], eax
// 00531745  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00531748  894804               mov dword ptr [eax + 4], ecx
// 0053174b  8d4d20               lea ecx, [ebp + 0x20]
// 0053174e  83c020               add eax, 0x20
// 00531751  3bc1                 cmp eax, ecx
// 00531753  7408                 je 0x53175d
// 00531755  8a19                 mov bl, byte ptr [ecx]
// 00531757  8a10                 mov dl, byte ptr [eax]
// 00531759  8818                 mov byte ptr [eax], bl
// 0053175b  8811                 mov byte ptr [ecx], dl
// 0053175d  bb01000000           mov ebx, 1
// 00531762  385d20               cmp byte ptr [ebp + 0x20], bl
// 00531765  0f8504010000         jne 0x53186f
// 0053176b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053176f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00531772  3b7a04               cmp edi, dword ptr [edx + 4]
// 00531775  0f84f1000000         je 0x53186c
// 0053177b  eb03                 jmp 0x531780
// 0053177d  8d4900               lea ecx, [ecx]
// 00531780  385f20               cmp byte ptr [edi + 0x20], bl
// 00531783  0f85e3000000         jne 0x53186c
// 00531789  8b06                 mov eax, dword ptr [esi]
// 0053178b  3bf8                 cmp edi, eax
// 0053178d  7567                 jne 0x5317f6
// 0053178f  8b4608               mov eax, dword ptr [esi + 8]
// 00531792  80782000             cmp byte ptr [eax + 0x20], 0
// 00531796  7514                 jne 0x5317ac
// 00531798  885820               mov byte ptr [eax + 0x20], bl
// 0053179b  56                   push esi
// 0053179c  c6462000             mov byte ptr [esi + 0x20], 0
// 005317a0  e80bb9ffff           call 0x52d0b0
// 005317a5  8b4608               mov eax, dword ptr [esi + 8]
// 005317a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005317ac  80782100             cmp byte ptr [eax + 0x21], 0
// 005317b0  7576                 jne 0x531828
// 005317b2  8b10                 mov edx, dword ptr [eax]
// 005317b4  385a20               cmp byte ptr [edx + 0x20], bl
// 005317b7  7508                 jne 0x5317c1
// 005317b9  8b5008               mov edx, dword ptr [eax + 8]
// 005317bc  385a20               cmp byte ptr [edx + 0x20], bl
// 005317bf  7463                 je 0x531824
// 005317c1  8b5008               mov edx, dword ptr [eax + 8]
// 005317c4  385a20               cmp byte ptr [edx + 0x20], bl
// 005317c7  7516                 jne 0x5317df
// 005317c9  8b10                 mov edx, dword ptr [eax]
// 005317cb  885a20               mov byte ptr [edx + 0x20], bl
// 005317ce  50                   push eax
// 005317cf  c6402000             mov byte ptr [eax + 0x20], 0
// 005317d3  e8c8980e00           call 0x61b0a0
// 005317d8  8b4608               mov eax, dword ptr [esi + 8]
// 005317db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005317df  8a5620               mov dl, byte ptr [esi + 0x20]
// 005317e2  885020               mov byte ptr [eax + 0x20], dl
// 005317e5  885e20               mov byte ptr [esi + 0x20], bl
// 005317e8  8b4008               mov eax, dword ptr [eax + 8]
// 005317eb  56                   push esi
// 005317ec  885820               mov byte ptr [eax + 0x20], bl
// 005317ef  e8bcb8ffff           call 0x52d0b0
// 005317f4  eb76                 jmp 0x53186c
// 005317f6  80782000             cmp byte ptr [eax + 0x20], 0
// 005317fa  7513                 jne 0x53180f
// 005317fc  885820               mov byte ptr [eax + 0x20], bl
// 005317ff  56                   push esi
// 00531800  c6462000             mov byte ptr [esi + 0x20], 0
// 00531804  e897980e00           call 0x61b0a0
// 00531809  8b06                 mov eax, dword ptr [esi]
// 0053180b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053180f  80782100             cmp byte ptr [eax + 0x21], 0
// 00531813  7513                 jne 0x531828
// 00531815  8b5008               mov edx, dword ptr [eax + 8]
// 00531818  385a20               cmp byte ptr [edx + 0x20], bl
// 0053181b  751e                 jne 0x53183b
// 0053181d  8b10                 mov edx, dword ptr [eax]
// 0053181f  385a20               cmp byte ptr [edx + 0x20], bl
// 00531822  7517                 jne 0x53183b
// 00531824  c6402000             mov byte ptr [eax + 0x20], 0
// 00531828  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0053182b  8bfe                 mov edi, esi
// 0053182d  8b7604               mov esi, dword ptr [esi + 4]
// 00531830  3b7804               cmp edi, dword ptr [eax + 4]
// 00531833  0f8547ffffff         jne 0x531780
// 00531839  eb31                 jmp 0x53186c
// 0053183b  8b10                 mov edx, dword ptr [eax]
// 0053183d  385a20               cmp byte ptr [edx + 0x20], bl
// 00531840  7516                 jne 0x531858
// 00531842  8b5008               mov edx, dword ptr [eax + 8]
// 00531845  885a20               mov byte ptr [edx + 0x20], bl
// 00531848  50                   push eax
// 00531849  c6402000             mov byte ptr [eax + 0x20], 0
// 0053184d  e85eb8ffff           call 0x52d0b0
// 00531852  8b06                 mov eax, dword ptr [esi]
// 00531854  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00531858  8a5620               mov dl, byte ptr [esi + 0x20]
// 0053185b  885020               mov byte ptr [eax + 0x20], dl
// 0053185e  885e20               mov byte ptr [esi + 0x20], bl
// 00531861  8b00                 mov eax, dword ptr [eax]
// 00531863  56                   push esi
// 00531864  885820               mov byte ptr [eax + 0x20], bl
// 00531867  e834980e00           call 0x61b0a0
// 0053186c  885f20               mov byte ptr [edi + 0x20], bl
// 0053186f  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00531872  85c0                 test eax, eax
// 00531874  744a                 je 0x5318c0
// 00531876  83c004               add eax, 4
// 00531879  50                   push eax
// 0053187a  ff157ca39e00         call dword ptr [0x9ea37c]
// 00531880  85c0                 test eax, eax
// 00531882  7535                 jne 0x5318b9
// 00531884  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 00531887  8b7108               mov esi, dword ptr [ecx + 8]
// 0053188a  85f6                 test esi, esi
// 0053188c  741d                 je 0x5318ab
// 0053188e  8bff                 mov edi, edi
// 00531890  8b0e                 mov ecx, dword ptr [esi]
// 00531892  8b11                 mov edx, dword ptr [ecx]
// 00531894  8b4204               mov eax, dword ptr [edx + 4]
// 00531897  ffd0                 call eax
// 00531899  8bc6                 mov eax, esi
// 0053189b  8b7604               mov esi, dword ptr [esi + 4]
// 0053189e  50                   push eax
// 0053189f  e8f6602700           call 0x7a799a
// 005318a4  83c404               add esp, 4
// 005318a7  85f6                 test esi, esi
// 005318a9  75e5                 jne 0x531890
// 005318ab  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005318ae  85c9                 test ecx, ecx
// 005318b0  7407                 je 0x5318b9
// 005318b2  8b11                 mov edx, dword ptr [ecx]
// 005318b4  8b02                 mov eax, dword ptr [edx]
// 005318b6  53                   push ebx
// 005318b7  ffd0                 call eax
// 005318b9  c7451c00000000       mov dword ptr [ebp + 0x1c], 0
// 005318c0  55                   push ebp
// 005318c1  e8d4602700           call 0x7a799a
// 005318c6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005318ca  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005318cd  83c404               add esp, 4
// 005318d0  5f                   pop edi
// 005318d1  5e                   pop esi
// 005318d2  5d                   pop ebp
// 005318d3  85c0                 test eax, eax
// 005318d5  7604                 jbe 0x5318db
// 005318d7  48                   dec eax
// 005318d8  89421c               mov dword ptr [edx + 0x1c], eax
// 005318db  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005318df  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005318e3  8b12                 mov edx, dword ptr [edx]
// 005318e5  894804               mov dword ptr [eax + 4], ecx
// 005318e8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005318ec  8910                 mov dword ptr [eax], edx
// 005318ee  5b                   pop ebx
// 005318ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005318f6  83c454               add esp, 0x54
// 005318f9  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
