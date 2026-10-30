// from server: 100% by auto
// roc 2008-06 006f02f0  unit: CXTPPopupBar  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f02f0
//
// 006f02f0  83ec38               sub esp, 0x38
// 006f02f3  55                   push ebp
// 006f02f4  56                   push esi
// 006f02f5  57                   push edi
// 006f02f6  8bf9                 mov edi, ecx
// 006f02f8  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 006f02fe  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 006f0304  8b97bc010000         mov edx, dword ptr [edi + 0x1bc]
// 006f030a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006f030e  8d4c2418             lea ecx, [esp + 0x18]
// 006f0312  89442418             mov dword ptr [esp + 0x18], eax
// 006f0316  8b87c0010000         mov eax, dword ptr [edi + 0x1c0]
// 006f031c  51                   push ecx
// 006f031d  33ed                 xor ebp, ebp
// 006f031f  8bcf                 mov ecx, edi
// 006f0321  89afec010000         mov dword ptr [edi + 0x1ec], ebp
// 006f0327  89542424             mov dword ptr [esp + 0x24], edx
// 006f032b  89442428             mov dword ptr [esp + 0x28], eax
// 006f032f  e8fe08fbff           call 0x6a0c32
// 006f0334  8b35ac2d8000         mov esi, dword ptr [0x802dac]
// 006f033a  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006f0342  ffd6                 call esi
// 006f0344  85c0                 test eax, eax
// 006f0346  0f85a3010000         jne 0x6f04ef
// 006f034c  8b5720               mov edx, dword ptr [edi + 0x20]
// 006f034f  53                   push ebx
// 006f0350  52                   push edx
// 006f0351  ff15a82d8000         call dword ptr [0x802da8]
// 006f0357  50                   push eax
// 006f0358  e88108fbff           call 0x6a0bde
// 006f035d  33db                 xor ebx, ebx
// 006f035f  ffd6                 call esi
// 006f0361  50                   push eax
// 006f0362  e87708fbff           call 0x6a0bde
// 006f0367  3bc7                 cmp eax, edi
// 006f0369  0f8562010000         jne 0x6f04d1
// 006f036f  8b35b02d8000         mov esi, dword ptr [0x802db0]
// 006f0375  6a00                 push 0
// 006f0377  6a0f                 push 0xf
// 006f0379  6a0f                 push 0xf
// 006f037b  6a00                 push 0
// 006f037d  8d44243c             lea eax, [esp + 0x3c]
// 006f0381  50                   push eax
// 006f0382  ffd6                 call esi
// 006f0384  85c0                 test eax, eax
// 006f0386  7433                 je 0x6f03bb
// 006f0388  6a0f                 push 0xf
// 006f038a  6a0f                 push 0xf
// 006f038c  6a00                 push 0
// 006f038e  8d4c2438             lea ecx, [esp + 0x38]
// 006f0392  51                   push ecx
// 006f0393  ff15782c8000         call dword ptr [0x802c78]
// 006f0399  85c0                 test eax, eax
// 006f039b  741e                 je 0x6f03bb
// 006f039d  8d54242c             lea edx, [esp + 0x2c]
// 006f03a1  52                   push edx
// 006f03a2  ff15c82c8000         call dword ptr [0x802cc8]
// 006f03a8  6a00                 push 0
// 006f03aa  6a0f                 push 0xf
// 006f03ac  6a0f                 push 0xf
// 006f03ae  6a00                 push 0
// 006f03b0  8d44243c             lea eax, [esp + 0x3c]
// 006f03b4  50                   push eax
// 006f03b5  ffd6                 call esi
// 006f03b7  85c0                 test eax, eax
// 006f03b9  75cd                 jne 0x6f0388
// 006f03bb  6a00                 push 0
// 006f03bd  6a00                 push 0
// 006f03bf  6a00                 push 0
// 006f03c1  8d4c2438             lea ecx, [esp + 0x38]
// 006f03c5  51                   push ecx
// 006f03c6  ff15782c8000         call dword ptr [0x802c78]
// 006f03cc  85c0                 test eax, eax
// 006f03ce  0f84f3000000         je 0x6f04c7
// 006f03d4  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f03d8  3d02020000           cmp eax, 0x202
// 006f03dd  0f84ee000000         je 0x6f04d1
// 006f03e3  3d00020000           cmp eax, 0x200
// 006f03e8  0f85a8000000         jne 0x6f0496
// 006f03ee  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006f03f2  8b542444             mov edx, dword ptr [esp + 0x44]
// 006f03f6  3bd9                 cmp ebx, ecx
// 006f03f8  7508                 jne 0x6f0402
// 006f03fa  3bea                 cmp ebp, edx
// 006f03fc  0f84a4000000         je 0x6f04a6
// 006f0402  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f0406  83c00a               add eax, 0xa
// 006f0409  3bc8                 cmp ecx, eax
// 006f040b  8bea                 mov ebp, edx
// 006f040d  8bd9                 mov ebx, ecx
// 006f040f  896c2418             mov dword ptr [esp + 0x18], ebp
// 006f0413  7f28                 jg 0x6f043d
// 006f0415  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f0419  83c0f6               add eax, -0xa
// 006f041c  3bc8                 cmp ecx, eax
// 006f041e  7c1d                 jl 0x6f043d
// 006f0420  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f0424  83c00a               add eax, 0xa
// 006f0427  3bd0                 cmp edx, eax
// 006f0429  7f12                 jg 0x6f043d
// 006f042b  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f042f  83c0f6               add eax, -0xa
// 006f0432  3bd0                 cmp edx, eax
// 006f0434  7c07                 jl 0x6f043d
// 006f0436  b801000000           mov eax, 1
// 006f043b  eb02                 jmp 0x6f043f
// 006f043d  33c0                 xor eax, eax
// 006f043f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006f0443  7414                 je 0x6f0459
// 006f0445  52                   push edx
// 006f0446  51                   push ecx
// 006f0447  50                   push eax
// 006f0448  8bcf                 mov ecx, edi
// 006f044a  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f044e  e81dfaffff           call 0x6efe70
// 006f0453  8b35b02d8000         mov esi, dword ptr [0x802db0]
// 006f0459  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 006f045f  85c9                 test ecx, ecx
// 006f0461  744e                 je 0x6f04b1
// 006f0463  8bb7e4010000         mov esi, dword ptr [edi + 0x1e4]
// 006f0469  8bc6                 mov eax, esi
// 006f046b  99                   cdq 
// 006f046c  2bc2                 sub eax, edx
// 006f046e  8bd0                 mov edx, eax
// 006f0470  d1fa                 sar edx, 1
// 006f0472  8bc3                 mov eax, ebx
// 006f0474  2bc2                 sub eax, edx
// 006f0476  6a01                 push 1
// 006f0478  8d55f6               lea edx, [ebp - 0xa]
// 006f047b  8bafe8010000         mov ebp, dword ptr [edi + 0x1e8]
// 006f0481  55                   push ebp
// 006f0482  56                   push esi
// 006f0483  52                   push edx
// 006f0484  50                   push eax
// 006f0485  e8c205fbff           call 0x6a0a4c
// 006f048a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006f048e  8b35b02d8000         mov esi, dword ptr [0x802db0]
// 006f0494  eb1b                 jmp 0x6f04b1
// 006f0496  3d00010000           cmp eax, 0x100
// 006f049b  7509                 jne 0x6f04a6
// 006f049d  837c24341b           cmp dword ptr [esp + 0x34], 0x1b
// 006f04a2  742d                 je 0x6f04d1
// 006f04a4  eb0b                 jmp 0x6f04b1
// 006f04a6  8d44242c             lea eax, [esp + 0x2c]
// 006f04aa  50                   push eax
// 006f04ab  ff15c82c8000         call dword ptr [0x802cc8]
// 006f04b1  ff15ac2d8000         call dword ptr [0x802dac]
// 006f04b7  50                   push eax
// 006f04b8  e82107fbff           call 0x6a0bde
// 006f04bd  3bc7                 cmp eax, edi
// 006f04bf  0f84b0feffff         je 0x6f0375
// 006f04c5  eb0a                 jmp 0x6f04d1
// 006f04c7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006f04cb  51                   push ecx
// 006f04cc  e8890cfbff           call 0x6a115a
// 006f04d1  ff15b42d8000         call dword ptr [0x802db4]
// 006f04d7  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 006f04de  5b                   pop ebx
// 006f04df  740e                 je 0x6f04ef
// 006f04e1  8bcf                 mov ecx, edi
// 006f04e3  e82849fcff           call 0x6b4e10
// 006f04e8  8bc8                 mov ecx, eax
// 006f04ea  e86144fbff           call 0x6a4950
// 006f04ef  5f                   pop edi
// 006f04f0  5e                   pop esi
// 006f04f1  5d                   pop ebp
// 006f04f2  83c438               add esp, 0x38
// 006f04f5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?TrackTearOff@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
