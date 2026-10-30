// from server: 100% by auto
// roc 2008-06 00627870  unit: seg_00620000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00627870
//
// 00627870  51                   push ecx
// 00627871  53                   push ebx
// 00627872  57                   push edi
// 00627873  8d442408             lea eax, [esp + 8]
// 00627877  50                   push eax
// 00627878  51                   push ecx
// 00627879  52                   push edx
// 0062787a  e8419efeff           call 0x6116c0
// 0062787f  8d9e0c020000         lea ebx, [esi + 0x20c]
// 00627885  83c40c               add esp, 0xc
// 00627888  8bf8                 mov edi, eax
// 0062788a  391e                 cmp dword ptr [esi], ebx
// 0062788c  7209                 jb 0x627897
// 0062788e  56                   push esi
// 0062788f  e8ac96feff           call 0x610f40
// 00627894  83c404               add esp, 4
// 00627897  8b06                 mov eax, dword ptr [esi]
// 00627899  c60022               mov byte ptr [eax], 0x22
// 0062789c  ff06                 inc dword ptr [esi]
// 0062789e  837c240800           cmp dword ptr [esp + 8], 0
// 006278a3  0f848f000000         je 0x627938
// 006278a9  8da42400000000       lea esp, [esp]
// 006278b0  ff4c2408             dec dword ptr [esp + 8]
// 006278b4  0fbe07               movsx eax, byte ptr [edi]
// 006278b7  83f85c               cmp eax, 0x5c
// 006278ba  775b                 ja 0x627917
// 006278bc  0fb68864796200       movzx ecx, byte ptr [eax + 0x627964]
// 006278c3  ff248d54796200       jmp dword ptr [ecx*4 + 0x627954]
// 006278ca  391e                 cmp dword ptr [esi], ebx
// 006278cc  7209                 jb 0x6278d7
// 006278ce  56                   push esi
// 006278cf  e86c96feff           call 0x610f40
// 006278d4  83c404               add esp, 4
// 006278d7  8b16                 mov edx, dword ptr [esi]
// 006278d9  c6025c               mov byte ptr [edx], 0x5c
// 006278dc  ff06                 inc dword ptr [esi]
// 006278de  391e                 cmp dword ptr [esi], ebx
// 006278e0  7209                 jb 0x6278eb
// 006278e2  56                   push esi
// 006278e3  e85896feff           call 0x610f40
// 006278e8  83c404               add esp, 4
// 006278eb  8b06                 mov eax, dword ptr [esi]
// 006278ed  8a0f                 mov cl, byte ptr [edi]
// 006278ef  8808                 mov byte ptr [eax], cl
// 006278f1  eb37                 jmp 0x62792a
// 006278f3  6a02                 push 2
// 006278f5  68f4878200           push 0x8287f4
// 006278fa  56                   push esi
// 006278fb  e88096feff           call 0x610f80
// 00627900  83c40c               add esp, 0xc
// 00627903  eb27                 jmp 0x62792c
// 00627905  6a04                 push 4
// 00627907  6894528400           push 0x845294
// 0062790c  56                   push esi
// 0062790d  e86e96feff           call 0x610f80
// 00627912  83c40c               add esp, 0xc
// 00627915  eb15                 jmp 0x62792c
// 00627917  391e                 cmp dword ptr [esi], ebx
// 00627919  7209                 jb 0x627924
// 0062791b  56                   push esi
// 0062791c  e81f96feff           call 0x610f40
// 00627921  83c404               add esp, 4
// 00627924  8b16                 mov edx, dword ptr [esi]
// 00627926  8a07                 mov al, byte ptr [edi]
// 00627928  8802                 mov byte ptr [edx], al
// 0062792a  ff06                 inc dword ptr [esi]
// 0062792c  47                   inc edi
// 0062792d  837c240800           cmp dword ptr [esp + 8], 0
// 00627932  0f8578ffffff         jne 0x6278b0
// 00627938  ff4c2408             dec dword ptr [esp + 8]
// 0062793c  391e                 cmp dword ptr [esi], ebx
// 0062793e  5f                   pop edi
// 0062793f  5b                   pop ebx
// 00627940  7209                 jb 0x62794b
// 00627942  56                   push esi
// 00627943  e8f895feff           call 0x610f40
// 00627948  83c404               add esp, 4
// 0062794b  8b0e                 mov ecx, dword ptr [esi]
// 0062794d  c60122               mov byte ptr [ecx], 0x22
// 00627950  ff06                 inc dword ptr [esi]
// 00627952  59                   pop ecx
// 00627953  c3                   ret 
// 00627954  05796200ca           add eax, 0xca006279
// 00627959  7862                 js 0x6279bd
// 0062795b  00f3                 add bl, dh
// 0062795d  7862                 js 0x6279c1
// 0062795f  0017                 add byte ptr [edi], dl
// 00627961  7962                 jns 0x6279c5
// 00627963  0000                 add byte ptr [eax], al
// 00627965  0303                 add eax, dword ptr [ebx]
// 00627967  0303                 add eax, dword ptr [ebx]
// 00627969  0303                 add eax, dword ptr [ebx]
// 0062796b  0303                 add eax, dword ptr [ebx]
// 0062796d  0301                 add eax, dword ptr [ecx]
// 0062796f  0303                 add eax, dword ptr [ebx]
// 00627971  0203                 add al, byte ptr [ebx]
// 00627973  0303                 add eax, dword ptr [ebx]
// 00627975  0303                 add eax, dword ptr [ebx]
// 00627977  0303                 add eax, dword ptr [ebx]
// 00627979  0303                 add eax, dword ptr [ebx]
// 0062797b  0303                 add eax, dword ptr [ebx]
// 0062797d  0303                 add eax, dword ptr [ebx]
// 0062797f  0303                 add eax, dword ptr [ebx]
// 00627981  0303                 add eax, dword ptr [ebx]
// 00627983  0303                 add eax, dword ptr [ebx]
// 00627985  0301                 add eax, dword ptr [ecx]
// 00627987  0303                 add eax, dword ptr [ebx]
// 00627989  0303                 add eax, dword ptr [ebx]
// 0062798b  0303                 add eax, dword ptr [ebx]
// 0062798d  0303                 add eax, dword ptr [ebx]
// 0062798f  0303                 add eax, dword ptr [ebx]
// 00627991  0303                 add eax, dword ptr [ebx]
// 00627993  0303                 add eax, dword ptr [ebx]
// 00627995  0303                 add eax, dword ptr [ebx]
// 00627997  0303                 add eax, dword ptr [ebx]
// 00627999  0303                 add eax, dword ptr [ebx]
// 0062799b  0303                 add eax, dword ptr [ebx]
// 0062799d  0303                 add eax, dword ptr [ebx]
// 0062799f  0303                 add eax, dword ptr [ebx]
// 006279a1  0303                 add eax, dword ptr [ebx]
// 006279a3  0303                 add eax, dword ptr [ebx]
// 006279a5  0303                 add eax, dword ptr [ebx]
// 006279a7  0303                 add eax, dword ptr [ebx]
// 006279a9  0303                 add eax, dword ptr [ebx]
// 006279ab  0303                 add eax, dword ptr [ebx]
// 006279ad  0303                 add eax, dword ptr [ebx]
// 006279af  0303                 add eax, dword ptr [ebx]
// 006279b1  0303                 add eax, dword ptr [ebx]
// 006279b3  0303                 add eax, dword ptr [ebx]
// 006279b5  0303                 add eax, dword ptr [ebx]
// 006279b7  0303                 add eax, dword ptr [ebx]
// 006279b9  0303                 add eax, dword ptr [ebx]
// 006279bb  0303                 add eax, dword ptr [ebx]
// 006279bd  0303                 add eax, dword ptr [ebx]
// 006279bf  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
