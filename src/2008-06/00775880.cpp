// from server: 100% by tester
// roc 2008-06 00775880  unit: CXTPPropertyGridInplaceEdit  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00775880
//
// 00775880  6aff                 push -1
// 00775882  681bae7e00           push 0x7eae1b
// 00775887  64a100000000         mov eax, dword ptr fs:[0]
// 0077588d  50                   push eax
// 0077588e  83ec08               sub esp, 8
// 00775891  53                   push ebx
// 00775892  55                   push ebp
// 00775893  56                   push esi
// 00775894  57                   push edi
// 00775895  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0077589a  33c4                 xor eax, esp
// 0077589c  50                   push eax
// 0077589d  8d44241c             lea eax, [esp + 0x1c]
// 007758a1  64a300000000         mov dword ptr fs:[0], eax
// 007758a7  8be9                 mov ebp, ecx
// 007758a9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007758ad  83fb09               cmp ebx, 9
// 007758b0  0f84c4010000         je 0x775a7a
// 007758b6  83fb0d               cmp ebx, 0xd
// 007758b9  7527                 jne 0x7758e2
// 007758bb  e84a670400           call 0x7bc00a
// 007758c0  a900100000           test eax, 0x1000
// 007758c5  0f84a4010000         je 0x775a6f
// 007758cb  8b442434             mov eax, dword ptr [esp + 0x34]
// 007758cf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007758d3  50                   push eax
// 007758d4  51                   push ecx
// 007758d5  53                   push ebx
// 007758d6  8bcd                 mov ecx, ebp
// 007758d8  e8e3fcffff           call 0x7755c0
// 007758dd  e998010000           jmp 0x775a7a
// 007758e2  83fb1b               cmp ebx, 0x1b
// 007758e5  0f8484010000         je 0x775a6f
// 007758eb  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 007758f1  85c9                 test ecx, ecx
// 007758f3  0f8449010000         je 0x775a42
// 007758f9  8b11                 mov edx, dword ptr [ecx]
// 007758fb  8b4258               mov eax, dword ptr [edx + 0x58]
// 007758fe  ffd0                 call eax
// 00775900  85c0                 test eax, eax
// 00775902  0f853a010000         jne 0x775a42
// 00775908  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 0077590e  83787c00             cmp dword ptr [eax + 0x7c], 0
// 00775912  0f842a010000         je 0x775a42
// 00775918  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 0077591e  837f2800             cmp dword ptr [edi + 0x28], 0
// 00775922  0f841a010000         je 0x775a42
// 00775928  8d4c2430             lea ecx, [esp + 0x30]
// 0077592c  ff15043f8000         call dword ptr [0x803f04]
// 00775932  8d4c2430             lea ecx, [esp + 0x30]
// 00775936  51                   push ecx
// 00775937  8bcd                 mov ecx, ebp
// 00775939  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00775941  e834b3f2ff           call 0x6a0c7a
// 00775946  8d4c2430             lea ecx, [esp + 0x30]
// 0077594a  ff15e03e8000         call dword ptr [0x803ee0]
// 00775950  50                   push eax
// 00775951  8bcf                 mov ecx, edi
// 00775953  e888ccf9ff           call 0x7125e0
// 00775958  8bf0                 mov esi, eax
// 0077595a  83feff               cmp esi, -1
// 0077595d  750a                 jne 0x775969
// 0077595f  8b4728               mov eax, dword ptr [edi + 0x28]
// 00775962  48                   dec eax
// 00775963  89442414             mov dword ptr [esp + 0x14], eax
// 00775967  eb04                 jmp 0x77596d
// 00775969  89742414             mov dword ptr [esp + 0x14], esi
// 0077596d  6a01                 push 1
// 0077596f  53                   push ebx
// 00775970  8d4c2434             lea ecx, [esp + 0x34]
// 00775974  ff156c378000         call dword ptr [0x80376c]
// 0077597a  c644242401           mov byte ptr [esp + 0x24], 1
// 0077597f  90                   nop 
// 00775980  8b4728               mov eax, dword ptr [edi + 0x28]
// 00775983  48                   dec eax
// 00775984  3bf0                 cmp esi, eax
// 00775986  7d03                 jge 0x77598b
// 00775988  46                   inc esi
// 00775989  eb02                 jmp 0x77598d
// 0077598b  33f6                 xor esi, esi
// 0077598d  56                   push esi
// 0077598e  8d542438             lea edx, [esp + 0x38]
// 00775992  52                   push edx
// 00775993  8bcf                 mov ecx, edi
// 00775995  e8a6cbf9ff           call 0x712540
// 0077599a  6a01                 push 1
// 0077599c  8d44241c             lea eax, [esp + 0x1c]
// 007759a0  50                   push eax
// 007759a1  8d4c243c             lea ecx, [esp + 0x3c]
// 007759a5  c644242c02           mov byte ptr [esp + 0x2c], 2
// 007759aa  ff1580368000         call dword ptr [0x803680]
// 007759b0  8bc8                 mov ecx, eax
// 007759b2  ff15e03e8000         call dword ptr [0x803ee0]
// 007759b8  50                   push eax
// 007759b9  8d4c2430             lea ecx, [esp + 0x30]
// 007759bd  ff1528368000         call dword ptr [0x803628]
// 007759c3  85c0                 test eax, eax
// 007759c5  8d4c2418             lea ecx, [esp + 0x18]
// 007759c9  0f94c3               sete bl
// 007759cc  ff15143f8000         call dword ptr [0x803f14]
// 007759d2  8d4c2434             lea ecx, [esp + 0x34]
// 007759d6  84db                 test bl, bl
// 007759d8  7513                 jne 0x7759ed
// 007759da  c644242401           mov byte ptr [esp + 0x24], 1
// 007759df  ff15143f8000         call dword ptr [0x803f14]
// 007759e5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007759e9  7595                 jne 0x775980
// 007759eb  eb3f                 jmp 0x775a2c
// 007759ed  ff15e03e8000         call dword ptr [0x803ee0]
// 007759f3  50                   push eax
// 007759f4  8bcd                 mov ecx, ebp
// 007759f6  e81fb2f2ff           call 0x6a0c1a
// 007759fb  6aff                 push -1
// 007759fd  6a00                 push 0
// 007759ff  897734               mov dword ptr [edi + 0x34], esi
// 00775a02  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00775a05  8b35142e8000         mov esi, dword ptr [0x802e14]
// 00775a0b  68b1000000           push 0xb1
// 00775a10  51                   push ecx
// 00775a11  ffd6                 call esi
// 00775a13  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00775a16  6a00                 push 0
// 00775a18  6a00                 push 0
// 00775a1a  68b7000000           push 0xb7
// 00775a1f  52                   push edx
// 00775a20  ffd6                 call esi
// 00775a22  8d4c2434             lea ecx, [esp + 0x34]
// 00775a26  ff15143f8000         call dword ptr [0x803f14]
// 00775a2c  8d4c242c             lea ecx, [esp + 0x2c]
// 00775a30  ff15143f8000         call dword ptr [0x803f14]
// 00775a36  8d4c2430             lea ecx, [esp + 0x30]
// 00775a3a  ff15143f8000         call dword ptr [0x803f14]
// 00775a40  eb38                 jmp 0x775a7a
// 00775a42  83fb2e               cmp ebx, 0x2e
// 00775a45  740c                 je 0x775a53
// 00775a47  83fb08               cmp ebx, 8
// 00775a4a  7407                 je 0x775a53
// 00775a4c  b801000000           mov eax, 1
// 00775a51  eb02                 jmp 0x775a55
// 00775a53  33c0                 xor eax, eax
// 00775a55  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00775a59  8985b4000000         mov dword ptr [ebp + 0xb4], eax
// 00775a5f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00775a63  50                   push eax
// 00775a64  51                   push ecx
// 00775a65  53                   push ebx
// 00775a66  8bcd                 mov ecx, ebp
// 00775a68  e853fbffff           call 0x7755c0
// 00775a6d  eb0b                 jmp 0x775a7a
// 00775a6f  8b8d9c000000         mov ecx, dword ptr [ebp + 0x9c]
// 00775a75  e8aeaff2ff           call 0x6a0a28
// 00775a7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00775a7e  64890d00000000       mov dword ptr fs:[0], ecx
// 00775a85  59                   pop ecx
// 00775a86  5f                   pop edi
// 00775a87  5e                   pop esi
// 00775a88  5d                   pop ebp
// 00775a89  5b                   pop ebx
// 00775a8a  83c414               add esp, 0x14
// 00775a8d  c20c00               ret 0xc

// RTM desktop manifest: 5f23cab0a07143b351dd962ac48278660cc3d9364f7ff11eb6cdb03260bb4dbc
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp
