// roc 2009-06 00746f80  unit: CXTPReportControl  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00746f80
//
// 00746f80  6aff                 push -1
// 00746f82  68986e8700           push 0x876e98
// 00746f87  64a100000000         mov eax, dword ptr fs:[0]
// 00746f8d  50                   push eax
// 00746f8e  83ec1c               sub esp, 0x1c
// 00746f91  53                   push ebx
// 00746f92  55                   push ebp
// 00746f93  56                   push esi
// 00746f94  57                   push edi
// 00746f95  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00746f9a  33c4                 xor eax, esp
// 00746f9c  50                   push eax
// 00746f9d  8d442430             lea eax, [esp + 0x30]
// 00746fa1  64a300000000         mov dword ptr fs:[0], eax
// 00746fa7  894c2420             mov dword ptr [esp + 0x20], ecx
// 00746fab  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00746faf  e82cae0000           call 0x751de0
// 00746fb4  8b742440             mov esi, dword ptr [esp + 0x40]
// 00746fb8  33db                 xor ebx, ebx
// 00746fba  3bf3                 cmp esi, ebx
// 00746fbc  7455                 je 0x747013
// 00746fbe  395e28               cmp dword ptr [esi + 0x28], ebx
// 00746fc1  7450                 je 0x747013
// 00746fc3  8b06                 mov eax, dword ptr [esi]
// 00746fc5  8b5070               mov edx, dword ptr [eax + 0x70]
// 00746fc8  68b84b8f00           push 0x8f4bb8
// 00746fcd  8bce                 mov ecx, esi
// 00746fcf  ffd2                 call edx
// 00746fd1  8bf8                 mov edi, eax
// 00746fd3  897c2424             mov dword ptr [esp + 0x24], edi
// 00746fd7  8d442418             lea eax, [esp + 0x18]
// 00746fdb  50                   push eax
// 00746fdc  680cc98a00           push 0x8ac90c
// 00746fe1  56                   push esi
// 00746fe2  895c2444             mov dword ptr [esp + 0x44], ebx
// 00746fe6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00746fea  e881ec0200           call 0x775c70
// 00746fef  83c40c               add esp, 0xc
// 00746ff2  8bce                 mov ecx, esi
// 00746ff4  e837fd0200           call 0x776d30
// 00746ff9  837c241801           cmp dword ptr [esp + 0x18], 1
// 00746ffe  742b                 je 0x74702b
// 00747000  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00747008  3bfb                 cmp edi, ebx
// 0074700a  7407                 je 0x747013
// 0074700c  8bcf                 mov ecx, edi
// 0074700e  e8951ffdff           call 0x718fa8
// 00747013  33c0                 xor eax, eax
// 00747015  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00747019  64890d00000000       mov dword ptr fs:[0], ecx
// 00747020  59                   pop ecx
// 00747021  5f                   pop edi
// 00747022  5e                   pop esi
// 00747023  5d                   pop ebp
// 00747024  5b                   pop ebx
// 00747025  83c428               add esp, 0x28
// 00747028  c20800               ret 8
// 0074702b  8b17                 mov edx, dword ptr [edi]
// 0074702d  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00747033  68b04b8f00           push 0x8f4bb0
// 00747038  8bcf                 mov ecx, edi
// 0074703a  ffd0                 call eax
// 0074703c  8be8                 mov ebp, eax
// 0074703e  896c2428             mov dword ptr [esp + 0x28], ebp
// 00747042  8b5500               mov edx, dword ptr [ebp]
// 00747045  8b4204               mov eax, dword ptr [edx + 4]
// 00747048  6a01                 push 1
// 0074704a  53                   push ebx
// 0074704b  8bcd                 mov ecx, ebp
// 0074704d  c644244001           mov byte ptr [esp + 0x40], 1
// 00747052  ffd0                 call eax
// 00747054  8944241c             mov dword ptr [esp + 0x1c], eax
// 00747058  3bc3                 cmp eax, ebx
// 0074705a  0f84ae000000         je 0x74710e
// 00747060  8b5500               mov edx, dword ptr [ebp]
// 00747063  8b5208               mov edx, dword ptr [edx + 8]
// 00747066  8d44241c             lea eax, [esp + 0x1c]
// 0074706a  50                   push eax
// 0074706b  8bcd                 mov ecx, ebp
// 0074706d  ffd2                 call edx
// 0074706f  8bf0                 mov esi, eax
// 00747071  8974242c             mov dword ptr [esp + 0x2c], esi
// 00747075  c644243802           mov byte ptr [esp + 0x38], 2
// 0074707a  895c2440             mov dword ptr [esp + 0x40], ebx
// 0074707e  e8bd8e0000           call 0x74ff40
// 00747083  8b16                 mov edx, dword ptr [esi]
// 00747085  8b5264               mov edx, dword ptr [edx + 0x64]
// 00747088  50                   push eax
// 00747089  8d442444             lea eax, [esp + 0x44]
// 0074708d  50                   push eax
// 0074708e  8bce                 mov ecx, esi
// 00747090  ffd2                 call edx
// 00747092  85c0                 test eax, eax
// 00747094  740c                 je 0x7470a2
// 00747096  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0074709a  8b01                 mov eax, dword ptr [ecx]
// 0074709c  8b5060               mov edx, dword ptr [eax + 0x60]
// 0074709f  56                   push esi
// 007470a0  ffd2                 call edx
// 007470a2  8b442440             mov eax, dword ptr [esp + 0x40]
// 007470a6  3bc3                 cmp eax, ebx
// 007470a8  0f8488000000         je 0x747136
// 007470ae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007470b2  89442414             mov dword ptr [esp + 0x14], eax
// 007470b6  8b01                 mov eax, dword ptr [ecx]
// 007470b8  8b8000020000         mov eax, dword ptr [eax + 0x200]
// 007470be  8d542414             lea edx, [esp + 0x14]
// 007470c2  52                   push edx
// 007470c3  ffd0                 call eax
// 007470c5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007470c9  8bf8                 mov edi, eax
// 007470cb  3bfb                 cmp edi, ebx
// 007470cd  7506                 jne 0x7470d5
// 007470cf  394c2414             cmp dword ptr [esp + 0x14], ecx
// 007470d3  7411                 je 0x7470e6
// 007470d5  3bcb                 cmp ecx, ebx
// 007470d7  7409                 je 0x7470e2
// 007470d9  e8ca1efdff           call 0x718fa8
// 007470de  895c2440             mov dword ptr [esp + 0x40], ebx
// 007470e2  3bfb                 cmp edi, ebx
// 007470e4  750e                 jne 0x7470f4
// 007470e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007470ea  51                   push ecx
// 007470eb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007470ef  e84cb10000           call 0x752240
// 007470f4  8bce                 mov ecx, esi
// 007470f6  c644243801           mov byte ptr [esp + 0x38], 1
// 007470fb  e8a81efdff           call 0x718fa8
// 00747100  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 00747104  0f8556ffffff         jne 0x747060
// 0074710a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0074710e  8b5500               mov edx, dword ptr [ebp]
// 00747111  8b02                 mov eax, dword ptr [edx]
// 00747113  6a01                 push 1
// 00747115  8bcd                 mov ecx, ebp
// 00747117  885c243c             mov byte ptr [esp + 0x3c], bl
// 0074711b  ffd0                 call eax
// 0074711d  8bcf                 mov ecx, edi
// 0074711f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00747127  e87c1efdff           call 0x718fa8
// 0074712c  b801000000           mov eax, 1
// 00747131  e9dffeffff           jmp 0x747015
// 00747136  53                   push ebx
// 00747137  6a06                 push 6
// 00747139  e86424fdff           call 0x7195a2
// copied from an identical function in another client (function ?_ReadRecodsFromData@CXTPReportControl@@MAEHPAVCXTPPropExchange@@AAVCXTPReportRecords@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp