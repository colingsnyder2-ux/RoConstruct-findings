// roc 2009-12 00893990  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893990
//
// 00893990  6aff                 push -1
// 00893992  6872159600           push 0x961572
// 00893997  64a100000000         mov eax, dword ptr fs:[0]
// 0089399d  50                   push eax
// 0089399e  83ec08               sub esp, 8
// 008939a1  53                   push ebx
// 008939a2  56                   push esi
// 008939a3  57                   push edi
// 008939a4  a10052b600           mov eax, dword ptr [0xb65200]
// 008939a9  33c4                 xor eax, esp
// 008939ab  50                   push eax
// 008939ac  8d442418             lea eax, [esp + 0x18]
// 008939b0  64a300000000         mov dword ptr fs:[0], eax
// 008939b6  8bf1                 mov esi, ecx
// 008939b8  89742410             mov dword ptr [esp + 0x10], esi
// 008939bc  e80f71faff           call 0x83aad0
// 008939c1  838ed400000018       or dword ptr [esi + 0xd4], 0x18
// 008939c8  33db                 xor ebx, ebx
// 008939ca  68942e9c00           push 0x9c2e94
// 008939cf  8d8ed8000000         lea ecx, [esi + 0xd8]
// 008939d5  895c2424             mov dword ptr [esp + 0x24], ebx
// 008939d9  c7068c42a000         mov dword ptr [esi], 0xa0428c
// 008939df  c746202c42a000       mov dword ptr [esi + 0x20], 0xa0422c
// 008939e6  c786fc00000002000000 mov dword ptr [esi + 0xfc], 2
// 008939f0  ff155cde9800         call dword ptr [0x98de5c]
// 008939f6  685c020000           push 0x25c
// 008939fb  899e88010000         mov dword ptr [esi + 0x188], ebx
// 00893a01  e85afef5ff           call 0x7f3860
// 00893a06  8bf8                 mov edi, eax
// 00893a08  83c404               add esp, 4
// 00893a0b  897c2414             mov dword ptr [esp + 0x14], edi
// 00893a0f  c644242001           mov byte ptr [esp + 0x20], 1
// 00893a14  3bfb                 cmp edi, ebx
// 00893a16  741d                 je 0x893a35
// 00893a18  8bcf                 mov ecx, edi
// 00893a1a  e8b113fbff           call 0x844dd0
// 00893a1f  c7079c3fa000         mov dword ptr [edi], 0xa03f9c
// 00893a25  c747548c3fa000       mov dword ptr [edi + 0x54], 0xa03f8c
// 00893a2c  c7475c2c3fa000       mov dword ptr [edi + 0x5c], 0xa03f2c
// 00893a33  eb02                 jmp 0x893a37
// 00893a35  33ff                 xor edi, edi
// 00893a37  89be78010000         mov dword ptr [esi + 0x178], edi
// 00893a3d  8b07                 mov eax, dword ptr [edi]
// 00893a3f  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 00893a45  8bcf                 mov ecx, edi
// 00893a47  885c2420             mov byte ptr [esp + 0x20], bl
// 00893a4b  ffd2                 call edx
// 00893a4d  85c0                 test eax, eax
// 00893a4f  7506                 jne 0x893a57
// 00893a51  899f38010000         mov dword ptr [edi + 0x138], ebx
// 00893a57  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00893a5b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00893a5f  50                   push eax
// 00893a60  51                   push ecx
// 00893a61  8bce                 mov ecx, esi
// 00893a63  e8c8f4ffff           call 0x892f30
// 00893a68  8bc6                 mov eax, esi
// 00893a6a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00893a6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00893a75  59                   pop ecx
// 00893a76  5f                   pop edi
// 00893a77  5e                   pop esi
// 00893a78  5b                   pop ebx
// 00893a79  83c414               add esp, 0x14
// 00893a7c  c20800               ret 8
// copied from an identical function in another client (function ??0CControlMDISysMenuPopup@CXTPMenuBar@@QAE@PAUHWND__@@PAUHMENU__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp