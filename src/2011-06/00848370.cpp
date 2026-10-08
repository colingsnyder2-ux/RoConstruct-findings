// roc 2011-06 00848370  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848370
//
// 00848370  81ec88000000         sub esp, 0x88
// 00848376  53                   push ebx
// 00848377  55                   push ebp
// 00848378  56                   push esi
// 00848379  8bf1                 mov esi, ecx
// 0084837b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084837e  c6463800             mov byte ptr [esi + 0x38], 0
// 00848382  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848385  57                   push edi
// 00848386  51                   push ecx
// 00848387  ff15341ba400         call dword ptr [0xa41b34]
// 0084838d  8b3de019a400         mov edi, dword ptr [0xa419e0]
// 00848393  6a45                 push 0x45
// 00848395  33ed                 xor ebp, ebp
// 00848397  ffd7                 call edi
// 00848399  6a44                 push 0x44
// 0084839b  89442414             mov dword ptr [esp + 0x14], eax
// 0084839f  ffd7                 call edi
// 008483a1  8b1d281ca400         mov ebx, dword ptr [0xa41c28]
// 008483a7  8bf8                 mov edi, eax
// 008483a9  8da42400000000       lea esp, [esp]
// 008483b0  6a00                 push 0
// 008483b2  6a00                 push 0
// 008483b4  6a00                 push 0
// 008483b6  8d542420             lea edx, [esp + 0x20]
// 008483ba  52                   push edx
// 008483bb  ffd3                 call ebx
// 008483bd  85c0                 test eax, eax
// 008483bf  746e                 je 0x84842f
// 008483c1  ff15381ba400         call dword ptr [0xa41b38]
// 008483c7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008483ca  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 008483cd  7560                 jne 0x84842f
// 008483cf  8b442418             mov eax, dword ptr [esp + 0x18]
// 008483d3  2d00020000           sub eax, 0x200
// 008483d8  741f                 je 0x8483f9
// 008483da  83e802               sub eax, 2
// 008483dd  0f84d0000000         je 0x8484b3
// 008483e3  83e803               sub eax, 3
// 008483e6  0f84c7000000         je 0x8484b3
// 008483ec  8d542414             lea edx, [esp + 0x14]
// 008483f0  52                   push edx
// 008483f1  ff150c1aa400         call dword ptr [0xa41a0c]
// 008483f7  ebb7                 jmp 0x8483b0
// 008483f9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008483fd  0fbfc1               movsx eax, cx
// 00848400  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 00848407  c1e910               shr ecx, 0x10
// 0084840a  99                   cdq 
// 0084840b  33c2                 xor eax, edx
// 0084840d  2bc2                 sub eax, edx
// 0084840f  3bc7                 cmp eax, edi
// 00848411  0fbfc9               movsx ecx, cx
// 00848414  7f14                 jg 0x84842a
// 00848416  8bc1                 mov eax, ecx
// 00848418  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 0084841f  99                   cdq 
// 00848420  33c2                 xor eax, edx
// 00848422  2bc2                 sub eax, edx
// 00848424  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00848428  7e86                 jle 0x8483b0
// 0084842a  bd02000000           mov ebp, 2
// 0084842f  ff15401ba400         call dword ptr [0xa41b40]
// 00848435  8b4634               mov eax, dword ptr [esi + 0x34]
// 00848438  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084843b  894c2430             mov dword ptr [esp + 0x30], ecx
// 0084843f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00848442  52                   push edx
// 00848443  ff15f41aa400         call dword ptr [0xa41af4]
// 00848449  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 00848450  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00848453  57                   push edi
// 00848454  89442438             mov dword ptr [esp + 0x38], eax
// 00848458  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 00848460  897c2470             mov dword ptr [esp + 0x70], edi
// 00848464  e8a325fcff           call 0x80aa0c
// 00848469  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0084846c  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 00848473  e8a0411800           call 0x9cc618
// 00848478  8bd8                 mov ebx, eax
// 0084847a  83fd01               cmp ebp, 1
// 0084847d  0f8581000000         jne 0x848504
// 00848483  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 0084848a  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00848491  a804                 test al, 4
// 00848493  753e                 jne 0x8484d3
// 00848495  85db                 test ebx, ebx
// 00848497  743a                 je 0x8484d3
// 00848499  8bce                 mov ecx, esi
// 0084849b  a808                 test al, 8
// 0084849d  741e                 je 0x8484bd
// 0084849f  6a02                 push 2
// 008484a1  57                   push edi
// 008484a2  e8e9f9ffff           call 0x847e90
// 008484a7  f7d0                 not eax
// 008484a9  83e002               and eax, 2
// 008484ac  6a03                 push 3
// 008484ae  0bc5                 or eax, ebp
// 008484b0  50                   push eax
// 008484b1  eb18                 jmp 0x8484cb
// 008484b3  bd01000000           mov ebp, 1
// 008484b8  e972ffffff           jmp 0x84842f
// 008484bd  8b06                 mov eax, dword ptr [esi]
// 008484bf  8b5050               mov edx, dword ptr [eax + 0x50]
// 008484c2  57                   push edi
// 008484c3  6a00                 push 0
// 008484c5  ffd2                 call edx
// 008484c7  6a03                 push 3
// 008484c9  6a03                 push 3
// 008484cb  57                   push edi
// 008484cc  8bce                 mov ecx, esi
// 008484ce  e88df6ffff           call 0x847b60
// 008484d3  8b4634               mov eax, dword ptr [esi + 0x34]
// 008484d6  8b7820               mov edi, dword ptr [eax + 0x20]
// 008484d9  ff15f819a400         call dword ptr [0xa419f8]
// 008484df  3bc7                 cmp eax, edi
// 008484e1  7407                 je 0x8484ea
// 008484e3  57                   push edi
// 008484e4  ff15c419a400         call dword ptr [0xa419c4]
// 008484ea  8b16                 mov edx, dword ptr [esi]
// 008484ec  8b524c               mov edx, dword ptr [edx + 0x4c]
// 008484ef  f7db                 neg ebx
// 008484f1  1bdb                 sbb ebx, ebx
// 008484f3  83e303               and ebx, 3
// 008484f6  83c3fb               add ebx, -5
// 008484f9  8d442430             lea eax, [esp + 0x30]
// 008484fd  895c2438             mov dword ptr [esp + 0x38], ebx
// 00848501  50                   push eax
// 00848502  eb51                 jmp 0x848555
// 00848504  83fd02               cmp ebp, 2
// 00848507  7554                 jne 0x84855d
// 00848509  6a03                 push 3
// 0084850b  6a03                 push 3
// 0084850d  57                   push edi
// 0084850e  8bce                 mov ecx, esi
// 00848510  e84bf6ffff           call 0x847b60
// 00848515  f6c310               test bl, 0x10
// 00848518  753f                 jne 0x848559
// 0084851a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00848521  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00848528  33c0                 xor eax, eax
// 0084852a  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 00848531  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00848538  0f95c0               setne al
// 0084853b  8d4c2430             lea ecx, [esp + 0x30]
// 0084853f  89942494000000       mov dword ptr [esp + 0x94], edx
// 00848546  51                   push ecx
// 00848547  0568feffff           add eax, 0xfffffe68
// 0084854c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00848550  8b06                 mov eax, dword ptr [esi]
// 00848552  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00848555  8bce                 mov ecx, esi
// 00848557  ffd2                 call edx
// 00848559  c6463801             mov byte ptr [esi + 0x38], 1
// 0084855d  5f                   pop edi
// 0084855e  5e                   pop esi
// 0084855f  5d                   pop ebp
// 00848560  5b                   pop ebx
// 00848561  81c488000000         add esp, 0x88
// 00848567  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
