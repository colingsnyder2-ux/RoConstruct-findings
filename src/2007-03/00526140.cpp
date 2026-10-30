// roc 2007-03 00526140  unit: seg_00520000  size: 530 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526140
//
// 00526140  83ec2c               sub esp, 0x2c
// 00526143  8b442430             mov eax, dword ptr [esp + 0x30]
// 00526147  53                   push ebx
// 00526148  8b98e0000000         mov ebx, dword ptr [eax + 0xe0]
// 0052614e  56                   push esi
// 0052614f  8b7044               mov esi, dword ptr [eax + 0x44]
// 00526152  57                   push edi
// 00526153  8bb848010000         mov edi, dword ptr [eax + 0x148]
// 00526159  83eb01               sub ebx, 1
// 0052615c  83783c00             cmp dword ptr [eax + 0x3c], 0
// 00526160  897c2428             mov dword ptr [esp + 0x28], edi
// 00526164  895c2424             mov dword ptr [esp + 0x24], ebx
// 00526168  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00526170  89742410             mov dword ptr [esp + 0x10], esi
// 00526174  0f8ec9010000         jle 0x526343
// 0052617a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0052617e  8d5740               lea edx, [edi + 0x40]
// 00526181  55                   push ebp
// 00526182  894c2424             mov dword ptr [esp + 0x24], ecx
// 00526186  89542420             mov dword ptr [esp + 0x20], edx
// 0052618a  eb0c                 jmp 0x526198
// 0052618c  8d642400             lea esp, [esp]
// 00526190  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00526194  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00526198  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052619b  8b6f08               mov ebp, dword ptr [edi + 8]
// 0052619e  8b5004               mov edx, dword ptr [eax + 4]
// 005261a1  0fafe9               imul ebp, ecx
// 005261a4  8b5220               mov edx, dword ptr [edx + 0x20]
// 005261a7  6a01                 push 1
// 005261a9  51                   push ecx
// 005261aa  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005261ae  8b09                 mov ecx, dword ptr [ecx]
// 005261b0  55                   push ebp
// 005261b1  51                   push ecx
// 005261b2  50                   push eax
// 005261b3  ffd2                 call edx
// 005261b5  83c414               add esp, 0x14
// 005261b8  395f08               cmp dword ptr [edi + 8], ebx
// 005261bb  8bc8                 mov ecx, eax
// 005261bd  894c2418             mov dword ptr [esp + 0x18], ecx
// 005261c1  7309                 jae 0x5261cc
// 005261c3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005261c6  89442410             mov dword ptr [esp + 0x10], eax
// 005261ca  eb16                 jmp 0x5261e2
// 005261cc  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005261cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 005261d2  33d2                 xor edx, edx
// 005261d4  f7f7                 div edi
// 005261d6  85d2                 test edx, edx
// 005261d8  89542410             mov dword ptr [esp + 0x10], edx
// 005261dc  7504                 jne 0x5261e2
// 005261de  897c2410             mov dword ptr [esp + 0x10], edi
// 005261e2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005261e5  8b6e08               mov ebp, dword ptr [esi + 8]
// 005261e8  33d2                 xor edx, edx
// 005261ea  8bc3                 mov eax, ebx
// 005261ec  f7f5                 div ebp
// 005261ee  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005261f2  8bfa                 mov edi, edx
// 005261f4  85ff                 test edi, edi
// 005261f6  7e04                 jle 0x5261fc
// 005261f8  2bef                 sub ebp, edi
// 005261fa  8bfd                 mov edi, ebp
// 005261fc  33ed                 xor ebp, ebp
// 005261fe  396c2410             cmp dword ptr [esp + 0x10], ebp
// 00526202  0f8e79000000         jle 0x526281
// 00526208  eb06                 jmp 0x526210
// 0052620a  8d9b00000000         lea ebx, [ebx]
// 00526210  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 00526213  8b442440             mov eax, dword ptr [esp + 0x40]
// 00526217  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 0052621d  53                   push ebx
// 0052621e  6a00                 push 0
// 00526220  8d14ed00000000       lea edx, [ebp*8]
// 00526227  52                   push edx
// 00526228  8b542430             mov edx, dword ptr [esp + 0x30]
// 0052622c  8b12                 mov edx, dword ptr [edx]
// 0052622e  56                   push esi
// 0052622f  52                   push edx
// 00526230  8b542428             mov edx, dword ptr [esp + 0x28]
// 00526234  52                   push edx
// 00526235  50                   push eax
// 00526236  8b4104               mov eax, dword ptr [ecx + 4]
// 00526239  ffd0                 call eax
// 0052623b  83c41c               add esp, 0x1c
// 0052623e  85ff                 test edi, edi
// 00526240  7e2e                 jle 0x526270
// 00526242  8bcb                 mov ecx, ebx
// 00526244  8bd7                 mov edx, edi
// 00526246  c1e107               shl ecx, 7
// 00526249  c1e207               shl edx, 7
// 0052624c  03f1                 add esi, ecx
// 0052624e  52                   push edx
// 0052624f  56                   push esi
// 00526250  e85be4feff           call 0x5146b0
// 00526255  0fb74e80             movzx ecx, word ptr [esi - 0x80]
// 00526259  83c408               add esp, 8
// 0052625c  85ff                 test edi, edi
// 0052625e  7e10                 jle 0x526270
// 00526260  8bc7                 mov eax, edi
// 00526262  66890e               mov word ptr [esi], cx
// 00526265  81c680000000         add esi, 0x80
// 0052626b  83e801               sub eax, 1
// 0052626e  75f2                 jne 0x526262
// 00526270  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00526274  83c501               add ebp, 1
// 00526277  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0052627b  7c93                 jl 0x526210
// 0052627d  8b742414             mov esi, dword ptr [esp + 0x14]
// 00526281  8b442428             mov eax, dword ptr [esp + 0x28]
// 00526285  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00526289  394208               cmp dword ptr [edx + 8], eax
// 0052628c  0f8582000000         jne 0x526314
// 00526292  03df                 add ebx, edi
// 00526294  33d2                 xor edx, edx
// 00526296  8bc3                 mov eax, ebx
// 00526298  f774241c             div dword ptr [esp + 0x1c]
// 0052629c  89442438             mov dword ptr [esp + 0x38], eax
// 005262a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005262a4  3b460c               cmp eax, dword ptr [esi + 0xc]
// 005262a7  8be8                 mov ebp, eax
// 005262a9  7d69                 jge 0x526314
// 005262ab  c1e307               shl ebx, 7
// 005262ae  895c2434             mov dword ptr [esp + 0x34], ebx
// 005262b2  eb04                 jmp 0x5262b8
// 005262b4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005262b8  8b442434             mov eax, dword ptr [esp + 0x34]
// 005262bc  8b3ca9               mov edi, dword ptr [ecx + ebp*4]
// 005262bf  8b5ca9fc             mov ebx, dword ptr [ecx + ebp*4 - 4]
// 005262c3  50                   push eax
// 005262c4  57                   push edi
// 005262c5  e8e6e3feff           call 0x5146b0
// 005262ca  8b442440             mov eax, dword ptr [esp + 0x40]
// 005262ce  83c408               add esp, 8
// 005262d1  85c0                 test eax, eax
// 005262d3  7637                 jbe 0x52630c
// 005262d5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005262d9  c1e207               shl edx, 7
// 005262dc  89442410             mov dword ptr [esp + 0x10], eax
// 005262e0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005262e4  85c9                 test ecx, ecx
// 005262e6  0fb7741a80           movzx esi, word ptr [edx + ebx - 0x80]
// 005262eb  7e10                 jle 0x5262fd
// 005262ed  8bc7                 mov eax, edi
// 005262ef  90                   nop 
// 005262f0  668930               mov word ptr [eax], si
// 005262f3  0580000000           add eax, 0x80
// 005262f8  83e901               sub ecx, 1
// 005262fb  75f3                 jne 0x5262f0
// 005262fd  03fa                 add edi, edx
// 005262ff  03da                 add ebx, edx
// 00526301  836c241001           sub dword ptr [esp + 0x10], 1
// 00526306  75d8                 jne 0x5262e0
// 00526308  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052630c  83c501               add ebp, 1
// 0052630f  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 00526312  7ca0                 jl 0x5262b4
// 00526314  8b442430             mov eax, dword ptr [esp + 0x30]
// 00526318  b904000000           mov ecx, 4
// 0052631d  014c2420             add dword ptr [esp + 0x20], ecx
// 00526321  014c2424             add dword ptr [esp + 0x24], ecx
// 00526325  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00526329  83c001               add eax, 1
// 0052632c  83c654               add esi, 0x54
// 0052632f  3b413c               cmp eax, dword ptr [ecx + 0x3c]
// 00526332  89442430             mov dword ptr [esp + 0x30], eax
// 00526336  89742414             mov dword ptr [esp + 0x14], esi
// 0052633a  8bc1                 mov eax, ecx
// 0052633c  0f8c4efeffff         jl 0x526190
// 00526342  5d                   pop ebp
// 00526343  5f                   pop edi
// 00526344  5e                   pop esi
// 00526345  5b                   pop ebx
// 00526346  83c42c               add esp, 0x2c
// 00526349  89442404             mov dword ptr [esp + 4], eax
// 0052634d  e92efcffff           jmp 0x525f80
// library jpeg-6b/jccoefct.c (function _compress_first_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
