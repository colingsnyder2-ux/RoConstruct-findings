// roc 2009-12 00829800  unit: CXTPReportHeader  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00829800
//
// 00829800  6aff                 push -1
// 00829802  68c8b89500           push 0x95b8c8
// 00829807  64a100000000         mov eax, dword ptr fs:[0]
// 0082980d  50                   push eax
// 0082980e  83ec28               sub esp, 0x28
// 00829811  53                   push ebx
// 00829812  55                   push ebp
// 00829813  56                   push esi
// 00829814  57                   push edi
// 00829815  a10052b600           mov eax, dword ptr [0xb65200]
// 0082981a  33c4                 xor eax, esp
// 0082981c  50                   push eax
// 0082981d  8d44243c             lea eax, [esp + 0x3c]
// 00829821  64a300000000         mov dword ptr fs:[0], eax
// 00829827  8be9                 mov ebp, ecx
// 00829829  896c2414             mov dword ptr [esp + 0x14], ebp
// 0082982d  8b542450             mov edx, dword ptr [esp + 0x50]
// 00829831  8b02                 mov eax, dword ptr [edx]
// 00829833  894550               mov dword ptr [ebp + 0x50], eax
// 00829836  8b4a04               mov ecx, dword ptr [edx + 4]
// 00829839  894d54               mov dword ptr [ebp + 0x54], ecx
// 0082983c  8b4208               mov eax, dword ptr [edx + 8]
// 0082983f  894558               mov dword ptr [ebp + 0x58], eax
// 00829842  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00829845  894d5c               mov dword ptr [ebp + 0x5c], ecx
// 00829848  8b420c               mov eax, dword ptr [edx + 0xc]
// 0082984b  2b4204               sub eax, dword ptr [edx + 4]
// 0082984e  85c0                 test eax, eax
// 00829850  0f8ebc010000         jle 0x829a12
// 00829856  8bcd                 mov ecx, ebp
// 00829858  e8c3eaffff           call 0x828320
// 0082985d  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00829861  8bd8                 mov ebx, eax
// 00829863  8b03                 mov eax, dword ptr [ebx]
// 00829865  52                   push edx
// 00829866  8b90a4000000         mov edx, dword ptr [eax + 0xa4]
// 0082986c  56                   push esi
// 0082986d  8bcb                 mov ecx, ebx
// 0082986f  ffd2                 call edx
// 00829871  8d4330               lea eax, [ebx + 0x30]
// 00829874  50                   push eax
// 00829875  56                   push esi
// 00829876  8d4c2434             lea ecx, [esp + 0x34]
// 0082987a  e8e11d0200           call 0x84b660
// 0082987f  8b13                 mov edx, dword ptr [ebx]
// 00829881  8b7d50               mov edi, dword ptr [ebp + 0x50]
// 00829884  8b7554               mov esi, dword ptr [ebp + 0x54]
// 00829887  8b4268               mov eax, dword ptr [edx + 0x68]
// 0082988a  8bcb                 mov ecx, ebx
// 0082988c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00829894  83c709               add edi, 9
// 00829897  83c607               add esi, 7
// 0082989a  ffd0                 call eax
// 0082989c  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082989f  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 008298a2  89442420             mov dword ptr [esp + 0x20], eax
// 008298a6  e8c5bfcaff           call 0x4d5870
// 008298ab  89442418             mov dword ptr [esp + 0x18], eax
// 008298af  c744245000000000     mov dword ptr [esp + 0x50], 0
// 008298b7  85c0                 test eax, eax
// 008298b9  0f8e10010000         jle 0x8299cf
// 008298bf  8b5520               mov edx, dword ptr [ebp + 0x20]
// 008298c2  8b442450             mov eax, dword ptr [esp + 0x50]
// 008298c6  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008298c9  50                   push eax
// 008298ca  e8e13c0400           call 0x86d5b0
// 008298cf  8bd8                 mov ebx, eax
// 008298d1  85db                 test ebx, ebx
// 008298d3  0f84dd000000         je 0x8299b6
// 008298d9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008298dd  51                   push ecx
// 008298de  8bcb                 mov ecx, ebx
// 008298e0  e8fbe5ffff           call 0x827ee0
// 008298e5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008298e9  8d543832             lea edx, [eax + edi + 0x32]
// 008298ed  8b442420             mov eax, dword ptr [esp + 0x20]
// 008298f1  897b7c               mov dword ptr [ebx + 0x7c], edi
// 008298f4  89b380000000         mov dword ptr [ebx + 0x80], esi
// 008298fa  8d6c30fd             lea ebp, [eax + esi - 3]
// 008298fe  899384000000         mov dword ptr [ebx + 0x84], edx
// 00829904  8954241c             mov dword ptr [esp + 0x1c], edx
// 00829908  89ab88000000         mov dword ptr [ebx + 0x88], ebp
// 0082990e  e80deaffff           call 0x828320
// 00829913  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00829917  89442424             mov dword ptr [esp + 0x24], eax
// 0082991b  8b00                 mov eax, dword ptr [eax]
// 0082991d  83ec10               sub esp, 0x10
// 00829920  89442438             mov dword ptr [esp + 0x38], eax
// 00829924  8bc4                 mov eax, esp
// 00829926  8938                 mov dword ptr [eax], edi
// 00829928  897004               mov dword ptr [eax + 4], esi
// 0082992b  895008               mov dword ptr [eax + 8], edx
// 0082992e  89680c               mov dword ptr [eax + 0xc], ebp
// 00829931  8b442438             mov eax, dword ptr [esp + 0x38]
// 00829935  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0082993b  51                   push ecx
// 0082993c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00829940  ffd2                 call edx
// 00829942  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00829946  e8d5e9ffff           call 0x828320
// 0082994b  6a01                 push 1
// 0082994d  83ec10               sub esp, 0x10
// 00829950  8bd4                 mov edx, esp
// 00829952  893a                 mov dword ptr [edx], edi
// 00829954  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00829958  897204               mov dword ptr [edx + 4], esi
// 0082995b  897a08               mov dword ptr [edx + 8], edi
// 0082995e  896a0c               mov dword ptr [edx + 0xc], ebp
// 00829961  8bd1                 mov edx, ecx
// 00829963  52                   push edx
// 00829964  8b542464             mov edx, dword ptr [esp + 0x64]
// 00829968  8bc8                 mov ecx, eax
// 0082996a  8b00                 mov eax, dword ptr [eax]
// 0082996c  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 00829972  53                   push ebx
// 00829973  52                   push edx
// 00829974  ffd0                 call eax
// 00829976  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082997a  8bc5                 mov eax, ebp
// 0082997c  2bc6                 sub eax, esi
// 0082997e  99                   cdq 
// 0082997f  2bc2                 sub eax, edx
// 00829981  d1f8                 sar eax, 1
// 00829983  49                   dec ecx
// 00829984  83c705               add edi, 5
// 00829987  03f0                 add esi, eax
// 00829989  394c2450             cmp dword ptr [esp + 0x50], ecx
// 0082998d  7d23                 jge 0x8299b2
// 0082998f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00829993  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00829997  8d4504               lea eax, [ebp + 4]
// 0082999a  50                   push eax
// 0082999b  57                   push edi
// 0082999c  55                   push ebp
// 0082999d  83c1fb               add ecx, -5
// 008299a0  51                   push ecx
// 008299a1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008299a5  52                   push edx
// 008299a6  e875e9ffff           call 0x828320
// 008299ab  8bc8                 mov ecx, eax
// 008299ad  e87e0e0700           call 0x89a830
// 008299b2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008299b6  8b442450             mov eax, dword ptr [esp + 0x50]
// 008299ba  40                   inc eax
// 008299bb  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008299bf  89442450             mov dword ptr [esp + 0x50], eax
// 008299c3  0f8cf6feffff         jl 0x8298bf
// 008299c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 008299cd  85c0                 test eax, eax
// 008299cf  7530                 jne 0x829a01
// 008299d1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008299d5  8bcd                 mov ecx, ebp
// 008299d7  8d5c30fd             lea ebx, [eax + esi - 3]
// 008299db  e840e9ffff           call 0x828320
// 008299e0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008299e4  8b28                 mov ebp, dword ptr [eax]
// 008299e6  83ec10               sub esp, 0x10
// 008299e9  8bd4                 mov edx, esp
// 008299eb  893a                 mov dword ptr [edx], edi
// 008299ed  897204               mov dword ptr [edx + 4], esi
// 008299f0  897a08               mov dword ptr [edx + 8], edi
// 008299f3  895a0c               mov dword ptr [edx + 0xc], ebx
// 008299f6  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 008299fc  51                   push ecx
// 008299fd  8bc8                 mov ecx, eax
// 008299ff  ffd2                 call edx
// 00829a01  8d4c242c             lea ecx, [esp + 0x2c]
// 00829a05  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 00829a0d  e8ce1c0200           call 0x84b6e0
// 00829a12  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00829a16  64890d00000000       mov dword ptr fs:[0], ecx
// 00829a1d  59                   pop ecx
// 00829a1e  5f                   pop edi
// 00829a1f  5e                   pop esi
// 00829a20  5d                   pop ebp
// 00829a21  5b                   pop ebx
// 00829a22  83c434               add esp, 0x34
// 00829a25  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroupByControl@CXTPReportHeader@@MAEXPAVCDC@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp