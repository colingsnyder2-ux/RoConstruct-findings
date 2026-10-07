// roc 2012-06 00644800  unit: seg_00640000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644800
//
// 00644800  56                   push esi
// 00644801  8b742408             mov esi, dword ptr [esp + 8]
// 00644805  8b4614               mov eax, dword ptr [esi + 0x14]
// 00644808  83f865               cmp eax, 0x65
// 0064480b  7421                 je 0x64482e
// 0064480d  83f866               cmp eax, 0x66
// 00644810  741c                 je 0x64482e
// 00644812  83f867               cmp eax, 0x67
// 00644815  7444                 je 0x64485b
// 00644817  8b06                 mov eax, dword ptr [esi]
// 00644819  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00644820  8b0e                 mov ecx, dword ptr [esi]
// 00644822  8b5614               mov edx, dword ptr [esi + 0x14]
// 00644825  895118               mov dword ptr [ecx + 0x18], edx
// 00644828  8b06                 mov eax, dword ptr [esi]
// 0064482a  8b08                 mov ecx, dword ptr [eax]
// 0064482c  eb27                 jmp 0x644855
// 0064482e  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 00644834  3b5620               cmp edx, dword ptr [esi + 0x20]
// 00644837  7313                 jae 0x64484c
// 00644839  8b06                 mov eax, dword ptr [esi]
// 0064483b  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 00644842  8b0e                 mov ecx, dword ptr [esi]
// 00644844  8b11                 mov edx, dword ptr [ecx]
// 00644846  56                   push esi
// 00644847  ffd2                 call edx
// 00644849  83c404               add esp, 4
// 0064484c  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00644852  8b4808               mov ecx, dword ptr [eax + 8]
// 00644855  56                   push esi
// 00644856  ffd1                 call ecx
// 00644858  83c404               add esp, 4
// 0064485b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00644861  80780d00             cmp byte ptr [eax + 0xd], 0
// 00644865  0f8586000000         jne 0x6448f1
// 0064486b  53                   push ebx
// 0064486c  57                   push edi
// 0064486d  bb18000000           mov ebx, 0x18
// 00644872  8b10                 mov edx, dword ptr [eax]
// 00644874  56                   push esi
// 00644875  ffd2                 call edx
// 00644877  33ff                 xor edi, edi
// 00644879  83c404               add esp, 4
// 0064487c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 00644882  7650                 jbe 0x6448d4
// 00644884  837e0800             cmp dword ptr [esi + 8], 0
// 00644888  741d                 je 0x6448a7
// 0064488a  8b4608               mov eax, dword ptr [esi + 8]
// 0064488d  897804               mov dword ptr [eax + 4], edi
// 00644890  8b4e08               mov ecx, dword ptr [esi + 8]
// 00644893  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 00644899  895108               mov dword ptr [ecx + 8], edx
// 0064489c  8b4608               mov eax, dword ptr [esi + 8]
// 0064489f  8b08                 mov ecx, dword ptr [eax]
// 006448a1  56                   push esi
// 006448a2  ffd1                 call ecx
// 006448a4  83c404               add esp, 4
// 006448a7  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 006448ad  8b4204               mov eax, dword ptr [edx + 4]
// 006448b0  6a00                 push 0
// 006448b2  56                   push esi
// 006448b3  ffd0                 call eax
// 006448b5  83c408               add esp, 8
// 006448b8  84c0                 test al, al
// 006448ba  750f                 jne 0x6448cb
// 006448bc  8b0e                 mov ecx, dword ptr [esi]
// 006448be  895914               mov dword ptr [ecx + 0x14], ebx
// 006448c1  8b16                 mov edx, dword ptr [esi]
// 006448c3  8b02                 mov eax, dword ptr [edx]
// 006448c5  56                   push esi
// 006448c6  ffd0                 call eax
// 006448c8  83c404               add esp, 4
// 006448cb  47                   inc edi
// 006448cc  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 006448d2  72b0                 jb 0x644884
// 006448d4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 006448da  8b5108               mov edx, dword ptr [ecx + 8]
// 006448dd  56                   push esi
// 006448de  ffd2                 call edx
// 006448e0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 006448e6  83c404               add esp, 4
// 006448e9  80780d00             cmp byte ptr [eax + 0xd], 0
// 006448ed  7483                 je 0x644872
// 006448ef  5f                   pop edi
// 006448f0  5b                   pop ebx
// 006448f1  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 006448f7  8b480c               mov ecx, dword ptr [eax + 0xc]
// 006448fa  56                   push esi
// 006448fb  ffd1                 call ecx
// 006448fd  8b5618               mov edx, dword ptr [esi + 0x18]
// 00644900  8b4210               mov eax, dword ptr [edx + 0x10]
// 00644903  56                   push esi
// 00644904  ffd0                 call eax
// 00644906  56                   push esi
// 00644907  e8f4ea0000           call 0x653400
// 0064490c  83c40c               add esp, 0xc
// 0064490f  5e                   pop esi
// 00644910  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
