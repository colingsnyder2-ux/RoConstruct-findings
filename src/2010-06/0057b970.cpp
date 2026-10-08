// from server: 100% by auto
// roc 2010-06 0057b970  unit: seg_00570000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b970
//
// 0057b970  51                   push ecx
// 0057b971  53                   push ebx
// 0057b972  56                   push esi
// 0057b973  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057b977  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057b97a  33db                 xor ebx, ebx
// 0057b97c  57                   push edi
// 0057b97d  33ff                 xor edi, edi
// 0057b97f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0057b982  895c240c             mov dword ptr [esp + 0xc], ebx
// 0057b986  7e26                 jle 0x57b9ae
// 0057b988  55                   push ebp
// 0057b989  8d6810               lea ebp, [eax + 0x10]
// 0057b98c  8d642400             lea esp, [esp]
// 0057b990  8b4500               mov eax, dword ptr [ebp]
// 0057b993  50                   push eax
// 0057b994  8bc6                 mov eax, esi
// 0057b996  e825f5ffff           call 0x57aec0
// 0057b99b  47                   inc edi
// 0057b99c  83c404               add esp, 4
// 0057b99f  03d8                 add ebx, eax
// 0057b9a1  83c554               add ebp, 0x54
// 0057b9a4  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0057b9a7  7ce7                 jl 0x57b990
// 0057b9a9  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057b9ad  5d                   pop ebp
// 0057b9ae  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0057b9b5  7558                 jne 0x57ba0f
// 0057b9b7  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057b9be  754f                 jne 0x57ba0f
// 0057b9c0  837e3808             cmp dword ptr [esi + 0x38], 8
// 0057b9c4  7549                 jne 0x57ba0f
// 0057b9c6  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057b9c9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057b9cc  b301                 mov bl, 1
// 0057b9ce  85c9                 test ecx, ecx
// 0057b9d0  7e18                 jle 0x57b9ea
// 0057b9d2  83c018               add eax, 0x18
// 0057b9d5  8378fc01             cmp dword ptr [eax - 4], 1
// 0057b9d9  7f05                 jg 0x57b9e0
// 0057b9db  833801               cmp dword ptr [eax], 1
// 0057b9de  7e02                 jle 0x57b9e2
// 0057b9e0  32db                 xor bl, bl
// 0057b9e2  83c054               add eax, 0x54
// 0057b9e5  83e901               sub ecx, 1
// 0057b9e8  75eb                 jne 0x57b9d5
// 0057b9ea  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0057b9ef  7420                 je 0x57ba11
// 0057b9f1  84db                 test bl, bl
// 0057b9f3  741c                 je 0x57ba11
// 0057b9f5  8b0e                 mov ecx, dword ptr [esi]
// 0057b9f7  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 0057b9fe  8b16                 mov edx, dword ptr [esi]
// 0057ba00  8b4204               mov eax, dword ptr [edx + 4]
// 0057ba03  6a00                 push 0
// 0057ba05  56                   push esi
// 0057ba06  32db                 xor bl, bl
// 0057ba08  ffd0                 call eax
// 0057ba0a  83c408               add esp, 8
// 0057ba0d  eb02                 jmp 0x57ba11
// 0057ba0f  32db                 xor bl, bl
// 0057ba11  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0057ba18  8bce                 mov ecx, esi
// 0057ba1a  5f                   pop edi
// 0057ba1b  740f                 je 0x57ba2c
// 0057ba1d  5e                   pop esi
// 0057ba1e  b8c9000000           mov eax, 0xc9
// 0057ba23  5b                   pop ebx
// 0057ba24  83c404               add esp, 4
// 0057ba27  e9e4f7ffff           jmp 0x57b210
// 0057ba2c  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057ba33  5e                   pop esi
// 0057ba34  740e                 je 0x57ba44
// 0057ba36  b8c2000000           mov eax, 0xc2
// 0057ba3b  5b                   pop ebx
// 0057ba3c  83c404               add esp, 4
// 0057ba3f  e9ccf7ffff           jmp 0x57b210
// 0057ba44  84db                 test bl, bl
// 0057ba46  5b                   pop ebx
// 0057ba47  740d                 je 0x57ba56
// 0057ba49  b8c0000000           mov eax, 0xc0
// 0057ba4e  83c404               add esp, 4
// 0057ba51  e9baf7ffff           jmp 0x57b210
// 0057ba56  b8c1000000           mov eax, 0xc1
// 0057ba5b  83c404               add esp, 4
// 0057ba5e  e9adf7ffff           jmp 0x57b210
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
