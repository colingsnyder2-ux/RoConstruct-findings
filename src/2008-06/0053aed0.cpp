// roc 2008-06 0053aed0  unit: seg_00530000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053aed0
//
// 0053aed0  83ec08               sub esp, 8
// 0053aed3  53                   push ebx
// 0053aed4  56                   push esi
// 0053aed5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053aed9  8b4604               mov eax, dword ptr [esi + 4]
// 0053aedc  8b08                 mov ecx, dword ptr [eax]
// 0053aede  6a34                 push 0x34
// 0053aee0  6a01                 push 1
// 0053aee2  56                   push esi
// 0053aee3  c644241701           mov byte ptr [esp + 0x17], 1
// 0053aee8  ffd1                 call ecx
// 0053aeea  8bd8                 mov ebx, eax
// 0053aeec  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0053aef2  83c40c               add esp, 0xc
// 0053aef5  c70310d44700         mov dword ptr [ebx], 0x47d410
// 0053aefb  c7430410a75300       mov dword ptr [ebx + 4], 0x53a710
// 0053af02  c6430800             mov byte ptr [ebx + 8], 0
// 0053af06  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 0053af0d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053af11  7413                 je 0x53af26
// 0053af13  8b16                 mov edx, dword ptr [esi]
// 0053af15  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0053af1c  8b06                 mov eax, dword ptr [esi]
// 0053af1e  8b08                 mov ecx, dword ptr [eax]
// 0053af20  56                   push esi
// 0053af21  ffd1                 call ecx
// 0053af23  83c404               add esp, 4
// 0053af26  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053af2a  8b4644               mov eax, dword ptr [esi + 0x44]
// 0053af2d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053af35  0f8ee2000000         jle 0x53b01d
// 0053af3b  55                   push ebp
// 0053af3c  57                   push edi
// 0053af3d  8d680c               lea ebp, [eax + 0xc]
// 0053af40  8d7b0c               lea edi, [ebx + 0xc]
// 0053af43  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0053af46  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0053af4c  3bc8                 cmp ecx, eax
// 0053af4e  752e                 jne 0x53af7e
// 0053af50  8b5500               mov edx, dword ptr [ebp]
// 0053af53  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0053af59  7523                 jne 0x53af7e
// 0053af5b  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0053af62  740f                 je 0x53af73
// 0053af64  c70750ad5300         mov dword ptr [edi], 0x53ad50
// 0053af6a  c6430801             mov byte ptr [ebx + 8], 1
// 0053af6e  e990000000           jmp 0x53b003
// 0053af73  c70710a95300         mov dword ptr [edi], 0x53a910
// 0053af79  e985000000           jmp 0x53b003
// 0053af7e  8d1409               lea edx, [ecx + ecx]
// 0053af81  3bd0                 cmp edx, eax
// 0053af83  754a                 jne 0x53afcf
// 0053af85  8b5d00               mov ebx, dword ptr [ebp]
// 0053af88  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0053af8e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053af92  750d                 jne 0x53afa1
// 0053af94  c644241300           mov byte ptr [esp + 0x13], 0
// 0053af99  c70760a95300         mov dword ptr [edi], 0x53a960
// 0053af9f  eb62                 jmp 0x53b003
// 0053afa1  3bd0                 cmp edx, eax
// 0053afa3  752a                 jne 0x53afcf
// 0053afa5  8b5500               mov edx, dword ptr [ebp]
// 0053afa8  03d2                 add edx, edx
// 0053afaa  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0053afb0  751d                 jne 0x53afcf
// 0053afb2  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0053afb9  740c                 je 0x53afc7
// 0053afbb  c707d0aa5300         mov dword ptr [edi], 0x53aad0
// 0053afc1  c6430801             mov byte ptr [ebx + 8], 1
// 0053afc5  eb3c                 jmp 0x53b003
// 0053afc7  c70700aa5300         mov dword ptr [edi], 0x53aa00
// 0053afcd  eb34                 jmp 0x53b003
// 0053afcf  99                   cdq 
// 0053afd0  f7f9                 idiv ecx
// 0053afd2  85d2                 test edx, edx
// 0053afd4  751a                 jne 0x53aff0
// 0053afd6  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053afdc  99                   cdq 
// 0053afdd  f77d00               idiv dword ptr [ebp]
// 0053afe0  85d2                 test edx, edx
// 0053afe2  750c                 jne 0x53aff0
// 0053afe4  88542413             mov byte ptr [esp + 0x13], dl
// 0053afe8  c707a0a75300         mov dword ptr [edi], 0x53a7a0
// 0053afee  eb13                 jmp 0x53b003
// 0053aff0  8b06                 mov eax, dword ptr [esi]
// 0053aff2  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 0053aff9  8b0e                 mov ecx, dword ptr [esi]
// 0053affb  8b11                 mov edx, dword ptr [ecx]
// 0053affd  56                   push esi
// 0053affe  ffd2                 call edx
// 0053b000  83c404               add esp, 4
// 0053b003  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053b007  40                   inc eax
// 0053b008  83c704               add edi, 4
// 0053b00b  83c554               add ebp, 0x54
// 0053b00e  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0053b011  89442414             mov dword ptr [esp + 0x14], eax
// 0053b015  0f8c28ffffff         jl 0x53af43
// 0053b01b  5f                   pop edi
// 0053b01c  5d                   pop ebp
// 0053b01d  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0053b024  741d                 je 0x53b043
// 0053b026  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0053b02b  7516                 jne 0x53b043
// 0053b02d  8b06                 mov eax, dword ptr [esi]
// 0053b02f  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 0053b036  8b0e                 mov ecx, dword ptr [esi]
// 0053b038  8b5104               mov edx, dword ptr [ecx + 4]
// 0053b03b  6a00                 push 0
// 0053b03d  56                   push esi
// 0053b03e  ffd2                 call edx
// 0053b040  83c408               add esp, 8
// 0053b043  5e                   pop esi
// 0053b044  5b                   pop ebx
// 0053b045  83c408               add esp, 8
// 0053b048  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
