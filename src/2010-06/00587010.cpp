// roc 2010-06 00587010  unit: seg_00580000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00587010
//
// 00587010  83ec08               sub esp, 8
// 00587013  53                   push ebx
// 00587014  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00587018  55                   push ebp
// 00587019  56                   push esi
// 0058701a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058701e  8bae5c010000         mov ebp, dword ptr [esi + 0x15c]
// 00587024  57                   push edi
// 00587025  33ff                 xor edi, edi
// 00587027  897520               mov dword ptr [ebp + 0x20], esi
// 0058702a  885d0c               mov byte ptr [ebp + 0xc], bl
// 0058702d  39be2c010000         cmp dword ptr [esi + 0x12c], edi
// 00587033  0f94c0               sete al
// 00587036  88442410             mov byte ptr [esp + 0x10], al
// 0058703a  39be34010000         cmp dword ptr [esi + 0x134], edi
// 00587040  7516                 jne 0x587058
// 00587042  84c0                 test al, al
// 00587044  7409                 je 0x58704f
// 00587046  c7450470685800       mov dword ptr [ebp + 4], 0x586870
// 0058704d  eb37                 jmp 0x587086
// 0058704f  c74504e0695800       mov dword ptr [ebp + 4], 0x5869e0
// 00587056  eb2e                 jmp 0x587086
// 00587058  84c0                 test al, al
// 0058705a  7409                 je 0x587065
// 0058705c  c74504c06b5800       mov dword ptr [ebp + 4], 0x586bc0
// 00587063  eb21                 jmp 0x587086
// 00587065  c74504806c5800       mov dword ptr [ebp + 4], 0x586c80
// 0058706c  397d40               cmp dword ptr [ebp + 0x40], edi
// 0058706f  7515                 jne 0x587086
// 00587071  8b4604               mov eax, dword ptr [esi + 4]
// 00587074  8b08                 mov ecx, dword ptr [eax]
// 00587076  68e8030000           push 0x3e8
// 0058707b  6a01                 push 1
// 0058707d  56                   push esi
// 0058707e  ffd1                 call ecx
// 00587080  83c40c               add esp, 0xc
// 00587083  894540               mov dword ptr [ebp + 0x40], eax
// 00587086  84db                 test bl, bl
// 00587088  7409                 je 0x587093
// 0058708a  c74508406f5800       mov dword ptr [ebp + 8], 0x586f40
// 00587091  eb07                 jmp 0x58709a
// 00587093  c74508f06e5800       mov dword ptr [ebp + 8], 0x586ef0
// 0058709a  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 005870a0  897c2414             mov dword ptr [esp + 0x14], edi
// 005870a4  0f8ec6000000         jle 0x587170
// 005870aa  8d5524               lea edx, [ebp + 0x24]
// 005870ad  8954241c             mov dword ptr [esp + 0x1c], edx
// 005870b1  8d9ee8000000         lea ebx, [esi + 0xe8]
// 005870b7  eb07                 jmp 0x5870c0
// 005870b9  8da42400000000       lea esp, [esp]
// 005870c0  807c241000           cmp byte ptr [esp + 0x10], 0
// 005870c5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005870c9  8b03                 mov eax, dword ptr [ebx]
// 005870cb  8939                 mov dword ptr [ecx], edi
// 005870cd  740d                 je 0x5870dc
// 005870cf  39be34010000         cmp dword ptr [esi + 0x134], edi
// 005870d5  757c                 jne 0x587153
// 005870d7  8b7814               mov edi, dword ptr [eax + 0x14]
// 005870da  eb06                 jmp 0x5870e2
// 005870dc  8b7818               mov edi, dword ptr [eax + 0x18]
// 005870df  897d34               mov dword ptr [ebp + 0x34], edi
// 005870e2  807c242000           cmp byte ptr [esp + 0x20], 0
// 005870e7  7454                 je 0x58713d
// 005870e9  85ff                 test edi, edi
// 005870eb  7c05                 jl 0x5870f2
// 005870ed  83ff04               cmp edi, 4
// 005870f0  7c18                 jl 0x58710a
// 005870f2  8b16                 mov edx, dword ptr [esi]
// 005870f4  c7421432000000       mov dword ptr [edx + 0x14], 0x32
// 005870fb  8b06                 mov eax, dword ptr [esi]
// 005870fd  897818               mov dword ptr [eax + 0x18], edi
// 00587100  8b0e                 mov ecx, dword ptr [esi]
// 00587102  8b11                 mov edx, dword ptr [ecx]
// 00587104  56                   push esi
// 00587105  ffd2                 call edx
// 00587107  83c404               add esp, 4
// 0058710a  837cbd5c00           cmp dword ptr [ebp + edi*4 + 0x5c], 0
// 0058710f  7516                 jne 0x587127
// 00587111  8b4604               mov eax, dword ptr [esi + 4]
// 00587114  8b08                 mov ecx, dword ptr [eax]
// 00587116  6804040000           push 0x404
// 0058711b  6a01                 push 1
// 0058711d  56                   push esi
// 0058711e  ffd1                 call ecx
// 00587120  83c40c               add esp, 0xc
// 00587123  8944bd5c             mov dword ptr [ebp + edi*4 + 0x5c], eax
// 00587127  8b54bd5c             mov edx, dword ptr [ebp + edi*4 + 0x5c]
// 0058712b  6804040000           push 0x404
// 00587130  6a00                 push 0
// 00587132  52                   push edx
// 00587133  e8ac1a2200           call 0x7a8be4
// 00587138  83c40c               add esp, 0xc
// 0058713b  eb14                 jmp 0x587151
// 0058713d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00587141  8d44bd4c             lea eax, [ebp + edi*4 + 0x4c]
// 00587145  50                   push eax
// 00587146  57                   push edi
// 00587147  51                   push ecx
// 00587148  56                   push esi
// 00587149  e832e6ffff           call 0x585780
// 0058714e  83c410               add esp, 0x10
// 00587151  33ff                 xor edi, edi
// 00587153  8b442414             mov eax, dword ptr [esp + 0x14]
// 00587157  8344241c04           add dword ptr [esp + 0x1c], 4
// 0058715c  40                   inc eax
// 0058715d  83c304               add ebx, 4
// 00587160  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 00587166  89442414             mov dword ptr [esp + 0x14], eax
// 0058716a  0f8c50ffffff         jl 0x5870c0
// 00587170  897d38               mov dword ptr [ebp + 0x38], edi
// 00587173  897d3c               mov dword ptr [ebp + 0x3c], edi
// 00587176  897d18               mov dword ptr [ebp + 0x18], edi
// 00587179  897d1c               mov dword ptr [ebp + 0x1c], edi
// 0058717c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00587182  897d48               mov dword ptr [ebp + 0x48], edi
// 00587185  5f                   pop edi
// 00587186  5e                   pop esi
// 00587187  895544               mov dword ptr [ebp + 0x44], edx
// 0058718a  5d                   pop ebp
// 0058718b  5b                   pop ebx
// 0058718c  83c408               add esp, 8
// 0058718f  c3                   ret 
// library jpeg-6b/jcphuff.c (function _start_pass_phuff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
