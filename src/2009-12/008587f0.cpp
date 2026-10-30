// roc 2009-12 008587f0  unit: CXTPTabClientWnd  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008587f0
//
// 008587f0  6aff                 push -1
// 008587f2  6808e19500           push 0x95e108
// 008587f7  64a100000000         mov eax, dword ptr fs:[0]
// 008587fd  50                   push eax
// 008587fe  83ec18               sub esp, 0x18
// 00858801  53                   push ebx
// 00858802  55                   push ebp
// 00858803  56                   push esi
// 00858804  57                   push edi
// 00858805  a10052b600           mov eax, dword ptr [0xb65200]
// 0085880a  33c4                 xor eax, esp
// 0085880c  50                   push eax
// 0085880d  8d44242c             lea eax, [esp + 0x2c]
// 00858811  64a300000000         mov dword ptr fs:[0], eax
// 00858817  8bf9                 mov edi, ecx
// 00858819  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00858820  7426                 je 0x858848
// 00858822  83bf8400000000       cmp dword ptr [edi + 0x84], 0
// 00858829  741d                 je 0x858848
// 0085882b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085882f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00858833  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00858837  50                   push eax
// 00858838  51                   push ecx
// 00858839  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 0085883f  53                   push ebx
// 00858840  57                   push edi
// 00858841  e85aac0000           call 0x8634a0
// 00858846  eb04                 jmp 0x85884c
// 00858848  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0085884c  3b9f20010000         cmp ebx, dword ptr [edi + 0x120]
// 00858852  751c                 jne 0x858870
// 00858854  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 0085885b  7420                 je 0x85887d
// 0085885d  83bf8400000000       cmp dword ptr [edi + 0x84], 0
// 00858864  740a                 je 0x858870
// 00858866  b801000000           mov eax, 1
// 0085886b  e95c010000           jmp 0x8589cc
// 00858870  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00858877  0f853d010000         jne 0x8589ba
// 0085887d  81fb28020000         cmp ebx, 0x228
// 00858883  7414                 je 0x858899
// 00858885  81fb27020000         cmp ebx, 0x227
// 0085888b  740c                 je 0x858899
// 0085888d  81fb26020000         cmp ebx, 0x226
// 00858893  0f8521010000         jne 0x8589ba
// 00858899  8b17                 mov edx, dword ptr [edi]
// 0085889b  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008588a1  8bcf                 mov ecx, edi
// 008588a3  ffd0                 call eax
// 008588a5  85c0                 test eax, eax
// 008588a7  0f840d010000         je 0x8589ba
// 008588ad  8b17                 mov edx, dword ptr [edi]
// 008588af  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 008588b5  8bcf                 mov ecx, edi
// 008588b7  ffd0                 call eax
// 008588b9  8bc8                 mov ecx, eax
// 008588bb  e820befbff           call 0x8146e0
// 008588c0  8b10                 mov edx, dword ptr [eax]
// 008588c2  8bc8                 mov ecx, eax
// 008588c4  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 008588ca  ffd0                 call eax
// 008588cc  83f805               cmp eax, 5
// 008588cf  7409                 je 0x8588da
// 008588d1  83f806               cmp eax, 6
// 008588d4  0f85e0000000         jne 0x8589ba
// 008588da  8d4c2418             lea ecx, [esp + 0x18]
// 008588de  e83dcaffff           call 0x855320
// 008588e3  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008588e6  8b2dfccb9800         mov ebp, dword ptr [0x98cbfc]
// 008588ec  6a05                 push 5
// 008588ee  51                   push ecx
// 008588ef  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008588f7  ffd5                 call ebp
// 008588f9  8bf0                 mov esi, eax
// 008588fb  89742414             mov dword ptr [esp + 0x14], esi
// 008588ff  85f6                 test esi, esi
// 00858901  745c                 je 0x85895f
// 00858903  8b1dd8c99800         mov ebx, dword ptr [0x98c9d8]
// 00858909  8da42400000000       lea esp, [esp]
// 00858910  6aec                 push -0x14
// 00858912  56                   push esi
// 00858913  ffd3                 call ebx
// 00858915  a840                 test al, 0x40
// 00858917  7433                 je 0x85894c
// 00858919  6af0                 push -0x10
// 0085891b  56                   push esi
// 0085891c  ffd3                 call ebx
// 0085891e  250000c000           and eax, 0xc00000
// 00858923  3d0000c000           cmp eax, 0xc00000
// 00858928  7422                 je 0x85894c
// 0085892a  6a00                 push 0
// 0085892c  680000c000           push 0xc00000
// 00858931  6a00                 push 0
// 00858933  56                   push esi
// 00858934  e88de10c00           call 0x926ac6
// 00858939  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085893d  8d542414             lea edx, [esp + 0x14]
// 00858941  52                   push edx
// 00858942  50                   push eax
// 00858943  8d4c2420             lea ecx, [esp + 0x20]
// 00858947  e8e4cdffff           call 0x855730
// 0085894c  6a02                 push 2
// 0085894e  56                   push esi
// 0085894f  ffd5                 call ebp
// 00858951  8bf0                 mov esi, eax
// 00858953  89742414             mov dword ptr [esp + 0x14], esi
// 00858957  85f6                 test esi, esi
// 00858959  75b5                 jne 0x858910
// 0085895b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0085895f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00858963  8b542440             mov edx, dword ptr [esp + 0x40]
// 00858967  51                   push ecx
// 00858968  52                   push edx
// 00858969  53                   push ebx
// 0085896a  8bcf                 mov ecx, edi
// 0085896c  e863b0f9ff           call 0x7f39d4
// 00858971  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00858975  33f6                 xor esi, esi
// 00858977  8be8                 mov ebp, eax
// 00858979  85ff                 test edi, edi
// 0085897b  7e23                 jle 0x8589a0
// 0085897d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00858981  85f6                 test esi, esi
// 00858983  7c30                 jl 0x8589b5
// 00858985  3bf7                 cmp esi, edi
// 00858987  7d2c                 jge 0x8589b5
// 00858989  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 0085898c  6a00                 push 0
// 0085898e  6a00                 push 0
// 00858990  680000c000           push 0xc00000
// 00858995  50                   push eax
// 00858996  e82be10c00           call 0x926ac6
// 0085899b  46                   inc esi
// 0085899c  3bf7                 cmp esi, edi
// 0085899e  7ce1                 jl 0x858981
// 008589a0  8d4c2418             lea ecx, [esp + 0x18]
// 008589a4  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 008589ac  e88fc9ffff           call 0x855340
// 008589b1  8bc5                 mov eax, ebp
// 008589b3  eb17                 jmp 0x8589cc
// 008589b5  e852b1f9ff           call 0x7f3b0c
// 008589ba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008589be  8b542440             mov edx, dword ptr [esp + 0x40]
// 008589c2  51                   push ecx
// 008589c3  52                   push edx
// 008589c4  53                   push ebx
// 008589c5  8bcf                 mov ecx, edi
// 008589c7  e808b0f9ff           call 0x7f39d4
// 008589cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008589d0  64890d00000000       mov dword ptr fs:[0], ecx
// 008589d7  59                   pop ecx
// 008589d8  5f                   pop edi
// 008589d9  5e                   pop esi
// 008589da  5d                   pop ebp
// 008589db  5b                   pop ebx
// 008589dc  83c424               add esp, 0x24
// 008589df  c20c00               ret 0xc
// copied from an identical function in another client (function ?WindowProc@CXTPTabClientWnd@@MAEJIIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp