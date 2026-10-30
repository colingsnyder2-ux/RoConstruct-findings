// roc 2009-12 00889980  unit: XTPPaintThemes::CXTPOfficeTheme  size: 721 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00889980
//
// 00889980  6aff                 push -1
// 00889982  68800c9600           push 0x960c80
// 00889987  64a100000000         mov eax, dword ptr fs:[0]
// 0088998d  50                   push eax
// 0088998e  83ec48               sub esp, 0x48
// 00889991  53                   push ebx
// 00889992  55                   push ebp
// 00889993  56                   push esi
// 00889994  57                   push edi
// 00889995  a10052b600           mov eax, dword ptr [0xb65200]
// 0088999a  33c4                 xor eax, esp
// 0088999c  50                   push eax
// 0088999d  8d44245c             lea eax, [esp + 0x5c]
// 008899a1  64a300000000         mov dword ptr fs:[0], eax
// 008899a7  8bf1                 mov esi, ecx
// 008899a9  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 008899ad  8b07                 mov eax, dword ptr [edi]
// 008899af  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 008899b5  8bcf                 mov ecx, edi
// 008899b7  ffd2                 call edx
// 008899b9  85c0                 test eax, eax
// 008899bb  7423                 je 0x8899e0
// 008899bd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008899c1  8b542470             mov edx, dword ptr [esp + 0x70]
// 008899c5  8b06                 mov eax, dword ptr [esi]
// 008899c7  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 008899cd  51                   push ecx
// 008899ce  57                   push edi
// 008899cf  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 008899d3  52                   push edx
// 008899d4  57                   push edi
// 008899d5  8bce                 mov ecx, esi
// 008899d7  ffd0                 call eax
// 008899d9  8bc7                 mov eax, edi
// 008899db  e95b020000           jmp 0x889c3b
// 008899e0  8b5720               mov edx, dword ptr [edi + 0x20]
// 008899e3  8d4c2424             lea ecx, [esp + 0x24]
// 008899e7  51                   push ecx
// 008899e8  52                   push edx
// 008899e9  ff1550cc9800         call dword ptr [0x98cc50]
// 008899ef  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008899f5  8b5c2470             mov ebx, dword ptr [esp + 0x70]
// 008899f9  83f805               cmp eax, 5
// 008899fc  754d                 jne 0x889a4b
// 008899fe  83bff800000002       cmp dword ptr [edi + 0xf8], 2
// 00889a05  7544                 jne 0x889a4b
// 00889a07  8b07                 mov eax, dword ptr [edi]
// 00889a09  8b90b8010000         mov edx, dword ptr [eax + 0x1b8]
// 00889a0f  8d4c2414             lea ecx, [esp + 0x14]
// 00889a13  51                   push ecx
// 00889a14  8bcf                 mov ecx, edi
// 00889a16  ffd2                 call edx
// 00889a18  8b442430             mov eax, dword ptr [esp + 0x30]
// 00889a1c  2b442420             sub eax, dword ptr [esp + 0x20]
// 00889a20  8b2e                 mov ebp, dword ptr [esi]
// 00889a22  2b442418             sub eax, dword ptr [esp + 0x18]
// 00889a26  8b9504010000         mov edx, dword ptr [ebp + 0x104]
// 00889a2c  6a00                 push 0
// 00889a2e  50                   push eax
// 00889a2f  57                   push edi
// 00889a30  8bce                 mov ecx, esi
// 00889a32  ffd2                 call edx
// 00889a34  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00889a38  8b95d8000000         mov edx, dword ptr [ebp + 0xd8]
// 00889a3e  50                   push eax
// 00889a3f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889a43  50                   push eax
// 00889a44  49                   dec ecx
// 00889a45  51                   push ecx
// 00889a46  53                   push ebx
// 00889a47  8bce                 mov ecx, esi
// 00889a49  ffd2                 call edx
// 00889a4b  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 00889a51  83f804               cmp eax, 4
// 00889a54  0f8595000000         jne 0x889aef
// 00889a5a  8b442478             mov eax, dword ptr [esp + 0x78]
// 00889a5e  50                   push eax
// 00889a5f  57                   push edi
// 00889a60  53                   push ebx
// 00889a61  8d4c2420             lea ecx, [esp + 0x20]
// 00889a65  51                   push ecx
// 00889a66  8bce                 mov ecx, esi
// 00889a68  e8339ff7ff           call 0x8039a0
// 00889a6d  83bff800000002       cmp dword ptr [edi + 0xf8], 2
// 00889a74  7563                 jne 0x889ad9
// 00889a76  8bcf                 mov ecx, edi
// 00889a78  e833a9f7ff           call 0x8043b0
// 00889a7d  85c0                 test eax, eax
// 00889a7f  7458                 je 0x889ad9
// 00889a81  8b17                 mov edx, dword ptr [edi]
// 00889a83  8b92b8010000         mov edx, dword ptr [edx + 0x1b8]
// 00889a89  8d442434             lea eax, [esp + 0x34]
// 00889a8d  50                   push eax
// 00889a8e  8bcf                 mov ecx, edi
// 00889a90  ffd2                 call edx
// 00889a92  8b442438             mov eax, dword ptr [esp + 0x38]
// 00889a96  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889a9a  8b542430             mov edx, dword ptr [esp + 0x30]
// 00889a9e  2b542440             sub edx, dword ptr [esp + 0x40]
// 00889aa2  8d6c0101             lea ebp, [ecx + eax + 1]
// 00889aa6  8b06                 mov eax, dword ptr [esi]
// 00889aa8  6a00                 push 0
// 00889aaa  2bd5                 sub edx, ebp
// 00889aac  52                   push edx
// 00889aad  89842480000000       mov dword ptr [esp + 0x80], eax
// 00889ab4  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00889aba  57                   push edi
// 00889abb  8bce                 mov ecx, esi
// 00889abd  ffd0                 call eax
// 00889abf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00889ac3  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00889aca  50                   push eax
// 00889acb  8b82d8000000         mov eax, dword ptr [edx + 0xd8]
// 00889ad1  55                   push ebp
// 00889ad2  49                   dec ecx
// 00889ad3  51                   push ecx
// 00889ad4  53                   push ebx
// 00889ad5  8bce                 mov ecx, esi
// 00889ad7  ffd0                 call eax
// 00889ad9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00889add  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00889ae1  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889ae5  8908                 mov dword ptr [eax], ecx
// 00889ae7  895004               mov dword ptr [eax + 4], edx
// 00889aea  e94c010000           jmp 0x889c3b
// 00889aef  83f803               cmp eax, 3
// 00889af2  0f84b5000000         je 0x889bad
// 00889af8  83f802               cmp eax, 2
// 00889afb  0f84ac000000         je 0x889bad
// 00889b01  85c0                 test eax, eax
// 00889b03  7415                 je 0x889b1a
// 00889b05  83f801               cmp eax, 1
// 00889b08  7410                 je 0x889b1a
// 00889b0a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00889b0e  c7400400000000       mov dword ptr [eax + 4], 0
// 00889b15  e91b010000           jmp 0x889c35
// 00889b1a  85db                 test ebx, ebx
// 00889b1c  7479                 je 0x889b97
// 00889b1e  837c247800           cmp dword ptr [esp + 0x78], 0
// 00889b23  7472                 je 0x889b97
// 00889b25  8b7b04               mov edi, dword ptr [ebx + 4]
// 00889b28  6a26                 push 0x26
// 00889b2a  8bce                 mov ecx, esi
// 00889b2c  e80f3bf7ff           call 0x7fd640
// 00889b31  50                   push eax
// 00889b32  57                   push edi
// 00889b33  8d4c2450             lea ecx, [esp + 0x50]
// 00889b37  e8c41bfcff           call 0x84b700
// 00889b3c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00889b40  2b442428             sub eax, dword ptr [esp + 0x28]
// 00889b44  bf05000000           mov edi, 5
// 00889b49  2bc7                 sub eax, edi
// 00889b4b  3bc7                 cmp eax, edi
// 00889b4d  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00889b55  7e2f                 jle 0x889b86
// 00889b57  bd06000000           mov ebp, 6
// 00889b5c  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00889b64  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00889b68  57                   push edi
// 00889b69  55                   push ebp
// 00889b6a  57                   push edi
// 00889b6b  51                   push ecx
// 00889b6c  53                   push ebx
// 00889b6d  8bce                 mov ecx, esi
// 00889b6f  e8ec4ff7ff           call 0x7feb60
// 00889b74  8b542430             mov edx, dword ptr [esp + 0x30]
// 00889b78  2b542428             sub edx, dword ptr [esp + 0x28]
// 00889b7c  83c702               add edi, 2
// 00889b7f  83ea05               sub edx, 5
// 00889b82  3bfa                 cmp edi, edx
// 00889b84  7cde                 jl 0x889b64
// 00889b86  8d4c2448             lea ecx, [esp + 0x48]
// 00889b8a  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00889b92  e8f91bfcff           call 0x84b790
// 00889b97  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00889b9b  c70006000000         mov dword ptr [eax], 6
// 00889ba1  c7400400000000       mov dword ptr [eax + 4], 0
// 00889ba8  e98e000000           jmp 0x889c3b
// 00889bad  85db                 test ebx, ebx
// 00889baf  7479                 je 0x889c2a
// 00889bb1  837c247800           cmp dword ptr [esp + 0x78], 0
// 00889bb6  7472                 je 0x889c2a
// 00889bb8  8b7b04               mov edi, dword ptr [ebx + 4]
// 00889bbb  6a26                 push 0x26
// 00889bbd  8bce                 mov ecx, esi
// 00889bbf  e87c3af7ff           call 0x7fd640
// 00889bc4  50                   push eax
// 00889bc5  57                   push edi
// 00889bc6  8d4c243c             lea ecx, [esp + 0x3c]
// 00889bca  e8311bfcff           call 0x84b700
// 00889bcf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00889bd3  2b442424             sub eax, dword ptr [esp + 0x24]
// 00889bd7  bf05000000           mov edi, 5
// 00889bdc  2bc7                 sub eax, edi
// 00889bde  3bc7                 cmp eax, edi
// 00889be0  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00889be8  7e2f                 jle 0x889c19
// 00889bea  bd06000000           mov ebp, 6
// 00889bef  c744241803000000     mov dword ptr [esp + 0x18], 3
// 00889bf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889bfb  55                   push ebp
// 00889bfc  57                   push edi
// 00889bfd  51                   push ecx
// 00889bfe  57                   push edi
// 00889bff  53                   push ebx
// 00889c00  8bce                 mov ecx, esi
// 00889c02  e8594ff7ff           call 0x7feb60
// 00889c07  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00889c0b  2b542424             sub edx, dword ptr [esp + 0x24]
// 00889c0f  83c702               add edi, 2
// 00889c12  83ea05               sub edx, 5
// 00889c15  3bfa                 cmp edi, edx
// 00889c17  7cde                 jl 0x889bf7
// 00889c19  8d4c2434             lea ecx, [esp + 0x34]
// 00889c1d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00889c25  e8661bfcff           call 0x84b790
// 00889c2a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00889c2e  c7400408000000       mov dword ptr [eax + 4], 8
// 00889c35  c70000000000         mov dword ptr [eax], 0
// 00889c3b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00889c3f  64890d00000000       mov dword ptr fs:[0], ecx
// 00889c46  59                   pop ecx
// 00889c47  5f                   pop edi
// 00889c48  5e                   pop esi
// 00889c49  5d                   pop ebp
// 00889c4a  5b                   pop ebx
// 00889c4b  83c454               add esp, 0x54
// 00889c4e  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCommandBarGripper@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOfficeTheme.cpp