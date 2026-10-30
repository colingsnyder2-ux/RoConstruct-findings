// roc 2010-06 006abca0  unit: RBX::BaseThreadPool::UPoolData::XP6AXV?$shared_ptr::V?$bind_t::?$thread_data  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006abca0
//
// 006abca0  6aff                 push -1
// 006abca2  68e8679900           push 0x9967e8
// 006abca7  64a100000000         mov eax, dword ptr fs:[0]
// 006abcad  50                   push eax
// 006abcae  64892500000000       mov dword ptr fs:[0], esp
// 006abcb5  83ec18               sub esp, 0x18
// 006abcb8  53                   push ebx
// 006abcb9  56                   push esi
// 006abcba  57                   push edi
// 006abcbb  8bf1                 mov esi, ecx
// 006abcbd  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006abcc0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006abcc3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006abcc7  8bc7                 mov eax, edi
// 006abcc9  2bc1                 sub eax, ecx
// 006abccb  c1f803               sar eax, 3
// 006abcce  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 006abcd6  3bd8                 cmp ebx, eax
// 006abcd8  7628                 jbe 0x6abd02
// 006abcda  3bcf                 cmp ecx, edi
// 006abcdc  7606                 jbe 0x6abce4
// 006abcde  ff150ca99e00         call dword ptr [0x9ea90c]
// 006abce4  8b5610               mov edx, dword ptr [esi + 0x10]
// 006abce7  2b560c               sub edx, dword ptr [esi + 0xc]
// 006abcea  8b06                 mov eax, dword ptr [esi]
// 006abcec  8d4c2438             lea ecx, [esp + 0x38]
// 006abcf0  51                   push ecx
// 006abcf1  c1fa03               sar edx, 3
// 006abcf4  2bda                 sub ebx, edx
// 006abcf6  53                   push ebx
// 006abcf7  57                   push edi
// 006abcf8  50                   push eax
// 006abcf9  8bce                 mov ecx, esi
// 006abcfb  e880fbffff           call 0x6ab880
// 006abd00  eb54                 jmp 0x6abd56
// 006abd02  7352                 jae 0x6abd56
// 006abd04  3bcf                 cmp ecx, edi
// 006abd06  7606                 jbe 0x6abd0e
// 006abd08  ff150ca99e00         call dword ptr [0x9ea90c]
// 006abd0e  8b06                 mov eax, dword ptr [esi]
// 006abd10  55                   push ebp
// 006abd11  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006abd14  89442418             mov dword ptr [esp + 0x18], eax
// 006abd18  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 006abd1b  7606                 jbe 0x6abd23
// 006abd1d  ff150ca99e00         call dword ptr [0x9ea90c]
// 006abd23  8b0e                 mov ecx, dword ptr [esi]
// 006abd25  53                   push ebx
// 006abd26  8d542424             lea edx, [esp + 0x24]
// 006abd2a  894c2414             mov dword ptr [esp + 0x14], ecx
// 006abd2e  52                   push edx
// 006abd2f  8d4c2418             lea ecx, [esp + 0x18]
// 006abd33  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006abd37  e8f4e8ffff           call 0x6aa630
// 006abd3c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006abd40  8b5004               mov edx, dword ptr [eax + 4]
// 006abd43  8b00                 mov eax, dword ptr [eax]
// 006abd45  57                   push edi
// 006abd46  51                   push ecx
// 006abd47  52                   push edx
// 006abd48  50                   push eax
// 006abd49  8d4c2428             lea ecx, [esp + 0x28]
// 006abd4d  51                   push ecx
// 006abd4e  8bce                 mov ecx, esi
// 006abd50  e84b81f5ff           call 0x603ea0
// 006abd55  5d                   pop ebp
// 006abd56  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 006abd5a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006abd62  85f6                 test esi, esi
// 006abd64  742a                 je 0x6abd90
// 006abd66  8d5604               lea edx, [esi + 4]
// 006abd69  83c8ff               or eax, 0xffffffff
// 006abd6c  f00fc102             lock xadd dword ptr [edx], eax
// 006abd70  751e                 jne 0x6abd90
// 006abd72  8b16                 mov edx, dword ptr [esi]
// 006abd74  8b4204               mov eax, dword ptr [edx + 4]
// 006abd77  8bce                 mov ecx, esi
// 006abd79  ffd0                 call eax
// 006abd7b  8d4e08               lea ecx, [esi + 8]
// 006abd7e  83caff               or edx, 0xffffffff
// 006abd81  f00fc111             lock xadd dword ptr [ecx], edx
// 006abd85  7509                 jne 0x6abd90
// 006abd87  8b06                 mov eax, dword ptr [esi]
// 006abd89  8b5008               mov edx, dword ptr [eax + 8]
// 006abd8c  8bce                 mov ecx, esi
// 006abd8e  ffd2                 call edx
// 006abd90  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006abd94  5f                   pop edi
// 006abd95  5e                   pop esi
// 006abd96  5b                   pop ebx
// 006abd97  64890d00000000       mov dword ptr fs:[0], ecx
// 006abd9e  83c424               add esp, 0x24
// 006abda1  c20c00               ret 0xc
// copied from an identical function in another client (function ?resize@?$vector@V?$shared_ptr@UT@@@boost@@V?$allocator@V?$shared_ptr@UT@@@boost@@@std@@@std@@QAEXIV?$shared_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll vector_sp.cpp