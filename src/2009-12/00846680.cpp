// roc 2009-12 00846680  unit: CXTPControls  size: 1008 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00846680
//
// 00846680  6aff                 push -1
// 00846682  68c8d09500           push 0x95d0c8
// 00846687  64a100000000         mov eax, dword ptr fs:[0]
// 0084668d  50                   push eax
// 0084668e  83ec70               sub esp, 0x70
// 00846691  53                   push ebx
// 00846692  55                   push ebp
// 00846693  56                   push esi
// 00846694  57                   push edi
// 00846695  a10052b600           mov eax, dword ptr [0xb65200]
// 0084669a  33c4                 xor eax, esp
// 0084669c  50                   push eax
// 0084669d  8d842484000000       lea eax, [esp + 0x84]
// 008466a4  64a300000000         mov dword ptr fs:[0], eax
// 008466aa  8bf9                 mov edi, ecx
// 008466ac  6a00                 push 0
// 008466ae  8d442458             lea eax, [esp + 0x58]
// 008466b2  50                   push eax
// 008466b3  6a00                 push 0
// 008466b5  6a30                 push 0x30
// 008466b7  ff1500cc9800         call dword ptr [0x98cc00]
// 008466bd  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008466c0  e8cbdefbff           call 0x804590
// 008466c5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008466c8  8b10                 mov edx, dword ptr [eax]
// 008466ca  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008466d0  6a00                 push 0
// 008466d2  6a00                 push 0
// 008466d4  51                   push ecx
// 008466d5  6a00                 push 0
// 008466d7  8d4c244c             lea ecx, [esp + 0x4c]
// 008466db  51                   push ecx
// 008466dc  8bc8                 mov ecx, eax
// 008466de  ffd2                 call edx
// 008466e0  8bac24a0000000       mov ebp, dword ptr [esp + 0xa0]
// 008466e7  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008466ea  8b7500               mov esi, dword ptr [ebp]
// 008466ed  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008466f0  33c0                 xor eax, eax
// 008466f2  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 008466f8  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008466fb  3bc8                 cmp ecx, eax
// 008466fd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00846705  89742420             mov dword ptr [esp + 0x20], esi
// 00846709  89442428             mov dword ptr [esp + 0x28], eax
// 0084670d  89442414             mov dword ptr [esp + 0x14], eax
// 00846711  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00846715  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0084671d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00846721  0f8e29020000         jle 0x846950
// 00846727  85c0                 test eax, eax
// 00846729  0f8c0e020000         jl 0x84693d
// 0084672f  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 00846732  0f8d05020000         jge 0x84693d
// 00846738  8b5728               mov edx, dword ptr [edi + 0x28]
// 0084673b  8b3482               mov esi, dword ptr [edx + eax*4]
// 0084673e  8d0c82               lea ecx, [edx + eax*4]
// 00846741  85f6                 test esi, esi
// 00846743  0f84f4010000         je 0x84693d
// 00846749  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0084674f  3b4f20               cmp ecx, dword ptr [edi + 0x20]
// 00846752  0f85e5010000         jne 0x84693d
// 00846758  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0084675e  8b06                 mov eax, dword ptr [esi]
// 00846760  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00846766  83e1f7               and ecx, 0xfffffff7
// 00846769  51                   push ecx
// 0084676a  8bce                 mov ecx, esi
// 0084676c  ffd2                 call edx
// 0084676e  8b06                 mov eax, dword ptr [esi]
// 00846770  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00846776  6a00                 push 0
// 00846778  8bce                 mov ecx, esi
// 0084677a  ffd2                 call edx
// 0084677c  85c0                 test eax, eax
// 0084677e  0f84b5010000         je 0x846939
// 00846784  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00846787  e804defbff           call 0x804590
// 0084678c  8b28                 mov ebp, dword ptr [eax]
// 0084678e  8bce                 mov ecx, esi
// 00846790  89442430             mov dword ptr [esp + 0x30], eax
// 00846794  81c5e0000000         add ebp, 0xe0
// 0084679a  e851f2beff           call 0x4359f0
// 0084679f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008467a3  8b5500               mov edx, dword ptr [ebp]
// 008467a6  50                   push eax
// 008467a7  8b4720               mov eax, dword ptr [edi + 0x20]
// 008467aa  50                   push eax
// 008467ab  ffd2                 call edx
// 008467ad  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 008467b4  50                   push eax
// 008467b5  55                   push ebp
// 008467b6  8d4c246c             lea ecx, [esp + 0x6c]
// 008467ba  e8a14e0000           call 0x84b660
// 008467bf  8b06                 mov eax, dword ptr [esi]
// 008467c1  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 008467c7  55                   push ebp
// 008467c8  8d4c2438             lea ecx, [esp + 0x38]
// 008467cc  51                   push ecx
// 008467cd  8bce                 mov ecx, esi
// 008467cf  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 008467da  ffd2                 call edx
// 008467dc  8bce                 mov ecx, esi
// 008467de  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 008467e8  e8d3e00100           call 0x8648c0
// 008467ed  84c0                 test al, al
// 008467ef  7907                 jns 0x8467f8
// 008467f1  837c242400           cmp dword ptr [esp + 0x24], 0
// 008467f6  741f                 je 0x846817
// 008467f8  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 008467ff  85c0                 test eax, eax
// 00846801  7e7a                 jle 0x84687d
// 00846803  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0084680a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0084680e  2b410c               sub eax, dword ptr [ecx + 0xc]
// 00846811  03d3                 add edx, ebx
// 00846813  3bd0                 cmp edx, eax
// 00846815  7e66                 jle 0x84687d
// 00846817  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084681b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0084681f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00846823  50                   push eax
// 00846824  55                   push ebp
// 00846825  51                   push ecx
// 00846826  8bcf                 mov ecx, edi
// 00846828  e8a3fdffff           call 0x8465d0
// 0084682d  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00846834  8b4204               mov eax, dword ptr [edx + 4]
// 00846837  2bd8                 sub ebx, eax
// 00846839  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 0084683d  7e04                 jle 0x846843
// 0084683f  895c2414             mov dword ptr [esp + 0x14], ebx
// 00846843  8bd8                 mov ebx, eax
// 00846845  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0084684b  f7d8                 neg eax
// 0084684d  1bc0                 sbb eax, eax
// 0084684f  2344243c             and eax, dword ptr [esp + 0x3c]
// 00846853  896c2428             mov dword ptr [esp + 0x28], ebp
// 00846857  03442418             add eax, dword ptr [esp + 0x18]
// 0084685b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00846863  01442420             add dword ptr [esp + 0x20], eax
// 00846867  b801000000           mov eax, 1
// 0084686c  898694000000         mov dword ptr [esi + 0x94], eax
// 00846872  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00846875  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 0084687b  eb14                 jmp 0x846891
// 0084687d  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00846884  740b                 je 0x846891
// 00846886  837c242400           cmp dword ptr [esp + 0x24], 0
// 0084688b  7504                 jne 0x846891
// 0084688d  035c2440             add ebx, dword ptr [esp + 0x40]
// 00846891  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00846894  8b11                 mov edx, dword ptr [ecx]
// 00846896  8b82c0010000         mov eax, dword ptr [edx + 0x1c0]
// 0084689c  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008468a4  ffd0                 call eax
// 008468a6  85c0                 test eax, eax
// 008468a8  7531                 jne 0x8468db
// 008468aa  d9ee                 fldz 
// 008468ac  dd05d86bb600         fld qword ptr [0xb66bd8]
// 008468b2  d8d1                 fcom st(1)
// 008468b4  dfe0                 fnstsw ax
// 008468b6  ddd9                 fstp st(1)
// 008468b8  f6c441               test ah, 0x41
// 008468bb  751c                 jne 0x8468d9
// 008468bd  da4c245c             fimul dword ptr [esp + 0x5c]
// 008468c1  db442434             fild dword ptr [esp + 0x34]
// 008468c5  d8d9                 fcomp st(1)
// 008468c7  dfe0                 fnstsw ax
// 008468c9  f6c441               test ah, 0x41
// 008468cc  750b                 jne 0x8468d9
// 008468ce  e81de4faff           call 0x7f4cf0
// 008468d3  89442434             mov dword ptr [esp + 0x34], eax
// 008468d7  eb02                 jmp 0x8468db
// 008468d9  ddd8                 fstp st(0)
// 008468db  8b542420             mov edx, dword ptr [esp + 0x20]
// 008468df  8b442434             mov eax, dword ptr [esp + 0x34]
// 008468e3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008468e7  8b2e                 mov ebp, dword ptr [esi]
// 008468e9  03c2                 add eax, edx
// 008468eb  89442430             mov dword ptr [esp + 0x30], eax
// 008468ef  83ec10               sub esp, 0x10
// 008468f2  8bc4                 mov eax, esp
// 008468f4  8910                 mov dword ptr [eax], edx
// 008468f6  8b542440             mov edx, dword ptr [esp + 0x40]
// 008468fa  895804               mov dword ptr [eax + 4], ebx
// 008468fd  03cb                 add ecx, ebx
// 008468ff  895008               mov dword ptr [eax + 8], edx
// 00846902  89480c               mov dword ptr [eax + 0xc], ecx
// 00846905  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 00846908  8bce                 mov ecx, esi
// 0084690a  ffd0                 call eax
// 0084690c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00846910  035c2438             add ebx, dword ptr [esp + 0x38]
// 00846914  39442418             cmp dword ptr [esp + 0x18], eax
// 00846918  7d04                 jge 0x84691e
// 0084691a  89442418             mov dword ptr [esp + 0x18], eax
// 0084691e  8d4c2464             lea ecx, [esp + 0x64]
// 00846922  c784248c000000ffffffff mov dword ptr [esp + 0x8c], 0xffffffff
// 0084692d  e8ae4d0000           call 0x84b6e0
// 00846932  8bac24a0000000       mov ebp, dword ptr [esp + 0xa0]
// 00846939  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084693d  40                   inc eax
// 0084693e  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00846942  8944241c             mov dword ptr [esp + 0x1c], eax
// 00846946  0f8cdbfdffff         jl 0x846727
// 0084694c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00846950  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00846954  8b572c               mov edx, dword ptr [edi + 0x2c]
// 00846957  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084695b  51                   push ecx
// 0084695c  52                   push edx
// 0084695d  50                   push eax
// 0084695e  8bcf                 mov ecx, edi
// 00846960  e86bfcffff           call 0x8465d0
// 00846965  2b7500               sub esi, dword ptr [ebp]
// 00846968  2b5d04               sub ebx, dword ptr [ebp + 4]
// 0084696b  03742418             add esi, dword ptr [esp + 0x18]
// 0084696f  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 00846973  8bc6                 mov eax, esi
// 00846975  89442430             mov dword ptr [esp + 0x30], eax
// 00846979  7e04                 jle 0x84697f
// 0084697b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0084697f  33d2                 xor edx, edx
// 00846981  3954242c             cmp dword ptr [esp + 0x2c], edx
// 00846985  0f8e95000000         jle 0x846a20
// 0084698b  85d2                 test edx, edx
// 0084698d  7c0d                 jl 0x84699c
// 0084698f  3b572c               cmp edx, dword ptr [edi + 0x2c]
// 00846992  7d08                 jge 0x84699c
// 00846994  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00846997  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0084699a  eb02                 jmp 0x84699e
// 0084699c  33c0                 xor eax, eax
// 0084699e  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008469a4  8b98c8000000         mov ebx, dword ptr [eax + 0xc8]
// 008469aa  8b742414             mov esi, dword ptr [esp + 0x14]
// 008469ae  894c2444             mov dword ptr [esp + 0x44], ecx
// 008469b2  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008469b8  894c2448             mov dword ptr [esp + 0x48], ecx
// 008469bc  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008469c2  894c2450             mov dword ptr [esp + 0x50], ecx
// 008469c6  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 008469cc  894c2448             mov dword ptr [esp + 0x48], ecx
// 008469d0  8bcb                 mov ecx, ebx
// 008469d2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008469d6  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008469dc  894c2450             mov dword ptr [esp + 0x50], ecx
// 008469e0  8b4d04               mov ecx, dword ptr [ebp + 4]
// 008469e3  03f1                 add esi, ecx
// 008469e5  89b42480000000       mov dword ptr [esp + 0x80], esi
// 008469ec  8bb0c0000000         mov esi, dword ptr [eax + 0xc0]
// 008469f2  89b0b0000000         mov dword ptr [eax + 0xb0], esi
// 008469f8  8988b4000000         mov dword ptr [eax + 0xb4], ecx
// 008469fe  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00846a05  42                   inc edx
// 00846a06  3b54242c             cmp edx, dword ptr [esp + 0x2c]
// 00846a0a  8998b8000000         mov dword ptr [eax + 0xb8], ebx
// 00846a10  8988bc000000         mov dword ptr [eax + 0xbc], ecx
// 00846a16  0f8c6fffffff         jl 0x84698b
// 00846a1c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00846a20  83f818               cmp eax, 0x18
// 00846a23  7d05                 jge 0x846a2a
// 00846a25  b818000000           mov eax, 0x18
// 00846a2a  837c241400           cmp dword ptr [esp + 0x14], 0
// 00846a2f  7508                 jne 0x846a39
// 00846a31  c744241416000000     mov dword ptr [esp + 0x14], 0x16
// 00846a39  8b5508               mov edx, dword ptr [ebp + 8]
// 00846a3c  035500               add edx, dword ptr [ebp]
// 00846a3f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00846a42  034c2414             add ecx, dword ptr [esp + 0x14]
// 00846a46  03d0                 add edx, eax
// 00846a48  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00846a4f  034d04               add ecx, dword ptr [ebp + 4]
// 00846a52  8910                 mov dword ptr [eax], edx
// 00846a54  894804               mov dword ptr [eax + 4], ecx
// 00846a57  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00846a5e  64890d00000000       mov dword ptr fs:[0], ecx
// 00846a65  59                   pop ecx
// 00846a66  5f                   pop edi
// 00846a67  5e                   pop esi
// 00846a68  5d                   pop ebp
// 00846a69  5b                   pop ebx
// 00846a6a  83c47c               add esp, 0x7c
// 00846a6d  c21000               ret 0x10
// copied from an identical function in another client (function ?CalcPopupSize@CXTPControls@@QAE?AVCSize@@PAVCDC@@HABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp