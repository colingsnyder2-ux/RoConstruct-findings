// roc 2009-06 004106e0  unit: boost::Vbad_weak_ptr::U?$error_info_injector::?$clone_impl  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004106e0
//
// 004106e0  6aff                 push -1
// 004106e2  6808b08600           push 0x86b008
// 004106e7  64a100000000         mov eax, dword ptr fs:[0]
// 004106ed  50                   push eax
// 004106ee  64892500000000       mov dword ptr fs:[0], esp
// 004106f5  83ec18               sub esp, 0x18
// 004106f8  53                   push ebx
// 004106f9  56                   push esi
// 004106fa  57                   push edi
// 004106fb  8bf1                 mov esi, ecx
// 004106fd  8b7e10               mov edi, dword ptr [esi + 0x10]
// 00410700  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00410703  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00410707  8bc7                 mov eax, edi
// 00410709  2bc1                 sub eax, ecx
// 0041070b  c1f803               sar eax, 3
// 0041070e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00410716  3bd8                 cmp ebx, eax
// 00410718  7628                 jbe 0x410742
// 0041071a  3bcf                 cmp ecx, edi
// 0041071c  7606                 jbe 0x410724
// 0041071e  ff15ace98900         call dword ptr [0x89e9ac]
// 00410724  8b5610               mov edx, dword ptr [esi + 0x10]
// 00410727  2b560c               sub edx, dword ptr [esi + 0xc]
// 0041072a  8b06                 mov eax, dword ptr [esi]
// 0041072c  8d4c2438             lea ecx, [esp + 0x38]
// 00410730  51                   push ecx
// 00410731  c1fa03               sar edx, 3
// 00410734  2bda                 sub ebx, edx
// 00410736  53                   push ebx
// 00410737  57                   push edi
// 00410738  50                   push eax
// 00410739  8bce                 mov ecx, esi
// 0041073b  e8e0e02f00           call 0x70e820
// 00410740  eb54                 jmp 0x410796
// 00410742  7352                 jae 0x410796
// 00410744  3bcf                 cmp ecx, edi
// 00410746  7606                 jbe 0x41074e
// 00410748  ff15ace98900         call dword ptr [0x89e9ac]
// 0041074e  8b06                 mov eax, dword ptr [esi]
// 00410750  55                   push ebp
// 00410751  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00410754  89442418             mov dword ptr [esp + 0x18], eax
// 00410758  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 0041075b  7606                 jbe 0x410763
// 0041075d  ff15ace98900         call dword ptr [0x89e9ac]
// 00410763  8b0e                 mov ecx, dword ptr [esi]
// 00410765  53                   push ebx
// 00410766  8d542424             lea edx, [esp + 0x24]
// 0041076a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0041076e  52                   push edx
// 0041076f  8d4c2418             lea ecx, [esp + 0x18]
// 00410773  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00410777  e8a4f8ffff           call 0x410020
// 0041077c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00410780  8b5004               mov edx, dword ptr [eax + 4]
// 00410783  8b00                 mov eax, dword ptr [eax]
// 00410785  57                   push edi
// 00410786  51                   push ecx
// 00410787  52                   push edx
// 00410788  50                   push eax
// 00410789  8d4c2428             lea ecx, [esp + 0x28]
// 0041078d  51                   push ecx
// 0041078e  8bce                 mov ecx, esi
// 00410790  e8abdd2800           call 0x69e540
// 00410795  5d                   pop ebp
// 00410796  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0041079a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004107a2  85f6                 test esi, esi
// 004107a4  742a                 je 0x4107d0
// 004107a6  8d5604               lea edx, [esi + 4]
// 004107a9  83c8ff               or eax, 0xffffffff
// 004107ac  f00fc102             lock xadd dword ptr [edx], eax
// 004107b0  751e                 jne 0x4107d0
// 004107b2  8b16                 mov edx, dword ptr [esi]
// 004107b4  8b4204               mov eax, dword ptr [edx + 4]
// 004107b7  8bce                 mov ecx, esi
// 004107b9  ffd0                 call eax
// 004107bb  8d4e08               lea ecx, [esi + 8]
// 004107be  83caff               or edx, 0xffffffff
// 004107c1  f00fc111             lock xadd dword ptr [ecx], edx
// 004107c5  7509                 jne 0x4107d0
// 004107c7  8b06                 mov eax, dword ptr [esi]
// 004107c9  8b5008               mov edx, dword ptr [eax + 8]
// 004107cc  8bce                 mov ecx, esi
// 004107ce  ffd2                 call edx
// 004107d0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004107d4  5f                   pop edi
// 004107d5  5e                   pop esi
// 004107d6  5b                   pop ebx
// 004107d7  64890d00000000       mov dword ptr fs:[0], ecx
// 004107de  83c424               add esp, 0x24
// 004107e1  c20c00               ret 0xc
// copied from an identical function in another client (function ?resize@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXIV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll vector_sp.cpp