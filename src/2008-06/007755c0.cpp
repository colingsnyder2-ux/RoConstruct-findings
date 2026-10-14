// roc 2008-06 007755c0  unit: CXTPPropertyGridInplaceEdit  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007755c0
//
// 007755c0  51                   push ecx
// 007755c1  53                   push ebx
// 007755c2  56                   push esi
// 007755c3  8bf1                 mov esi, ecx
// 007755c5  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007755c9  7421                 je 0x7755ec
// 007755cb  837e2000             cmp dword ptr [esi + 0x20], 0
// 007755cf  741b                 je 0x7755ec
// 007755d1  e8346a0400           call 0x7bc00a
// 007755d6  a900080000           test eax, 0x800
// 007755db  750f                 jne 0x7755ec
// 007755dd  8d5e70               lea ebx, [esi + 0x70]
// 007755e0  8bcb                 mov ecx, ebx
// 007755e2  ff15d82f8000         call dword ptr [0x802fd8]
// 007755e8  84c0                 test al, al
// 007755ea  740d                 je 0x7755f9
// 007755ec  8bce                 mov ecx, esi
// 007755ee  e875b6f2ff           call 0x6a0c68
// 007755f3  5e                   pop esi
// 007755f4  5b                   pop ebx
// 007755f5  59                   pop ecx
// 007755f6  c20c00               ret 0xc
// 007755f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007755fd  83c0f8               add eax, -8
// 00775600  83f826               cmp eax, 0x26
// 00775603  770e                 ja 0x775613
// 00775605  0fb68040577700       movzx eax, byte ptr [eax + 0x775740]
// 0077560c  ff248538577700       jmp dword ptr [eax*4 + 0x775738]
// 00775613  8b4620               mov eax, dword ptr [esi + 0x20]
// 00775616  57                   push edi
// 00775617  85c0                 test eax, eax
// 00775619  7448                 je 0x775663
// 0077561b  55                   push ebp
// 0077561c  8d7e58               lea edi, [esi + 0x58]
// 0077561f  57                   push edi
// 00775620  8d6e54               lea ebp, [esi + 0x54]
// 00775623  55                   push ebp
// 00775624  68b0000000           push 0xb0
// 00775629  50                   push eax
// 0077562a  ff15142e8000         call dword ptr [0x802e14]
// 00775630  8d8e80000000         lea ecx, [esi + 0x80]
// 00775636  51                   push ecx
// 00775637  8bce                 mov ecx, esi
// 00775639  e83cb6f2ff           call 0x6a0c7a
// 0077563e  8bce                 mov ecx, esi
// 00775640  e86be1ffff           call 0x7737b0
// 00775645  6a01                 push 1
// 00775647  55                   push ebp
// 00775648  8bce                 mov ecx, esi
// 0077564a  e8e1f4ffff           call 0x774b30
// 0077564f  6a01                 push 1
// 00775651  57                   push edi
// 00775652  8bce                 mov ecx, esi
// 00775654  e8d7f4ffff           call 0x774b30
// 00775659  8b6d00               mov ebp, dword ptr [ebp]
// 0077565c  392f                 cmp dword ptr [edi], ebp
// 0077565e  7d02                 jge 0x775662
// 00775660  892f                 mov dword ptr [edi], ebp
// 00775662  5d                   pop ebp
// 00775663  8b7e54               mov edi, dword ptr [esi + 0x54]
// 00775666  85ff                 test edi, edi
// 00775668  0f8cb6000000         jl 0x775724
// 0077566e  8d8e84000000         lea ecx, [esi + 0x84]
// 00775674  ff15e02f8000         call dword ptr [0x802fe0]
// 0077567a  3bf8                 cmp edi, eax
// 0077567c  0f8da2000000         jge 0x775724
// 00775682  8b5654               mov edx, dword ptr [esi + 0x54]
// 00775685  52                   push edx
// 00775686  8bce                 mov ecx, esi
// 00775688  e863eeffff           call 0x7744f0
// 0077568d  85c0                 test eax, eax
// 0077568f  0f848f000000         je 0x775724
// 00775695  8a442414             mov al, byte ptr [esp + 0x14]
// 00775699  8b16                 mov edx, dword ptr [esi]
// 0077569b  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 007756a1  8844240c             mov byte ptr [esp + 0xc], al
// 007756a5  8b4654               mov eax, dword ptr [esi + 0x54]
// 007756a8  50                   push eax
// 007756a9  8d4c2410             lea ecx, [esp + 0x10]
// 007756ad  51                   push ecx
// 007756ae  8bce                 mov ecx, esi
// 007756b0  ffd2                 call edx
// 007756b2  85c0                 test eax, eax
// 007756b4  7528                 jne 0x7756de
// 007756b6  8b4654               mov eax, dword ptr [esi + 0x54]
// 007756b9  8b3e                 mov edi, dword ptr [esi]
// 007756bb  50                   push eax
// 007756bc  8bcb                 mov ecx, ebx
// 007756be  ff154c3e8000         call dword ptr [0x803e4c]
// 007756c4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007756c8  0fb6c8               movzx ecx, al
// 007756cb  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 007756d1  51                   push ecx
// 007756d2  52                   push edx
// 007756d3  8bce                 mov ecx, esi
// 007756d5  ffd0                 call eax
// 007756d7  5f                   pop edi
// 007756d8  5e                   pop esi
// 007756d9  5b                   pop ebx
// 007756da  59                   pop ecx
// 007756db  c20c00               ret 0xc
// 007756de  8b16                 mov edx, dword ptr [esi]
// 007756e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007756e4  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007756ea  50                   push eax
// 007756eb  8bce                 mov ecx, esi
// 007756ed  ffd2                 call edx
// 007756ef  85c0                 test eax, eax
// 007756f1  741c                 je 0x77570f
// 007756f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007756f7  50                   push eax
// 007756f8  8bce                 mov ecx, esi
// 007756fa  e841fbffff           call 0x775240
// 007756ff  6a00                 push 0
// 00775701  8bce                 mov ecx, esi
// 00775703  e828eeffff           call 0x774530
// 00775708  5f                   pop edi
// 00775709  5e                   pop esi
// 0077570a  5b                   pop ebx
// 0077570b  59                   pop ecx
// 0077570c  c20c00               ret 0xc
// 0077570f  837c24147f           cmp dword ptr [esp + 0x14], 0x7f
// 00775714  741a                 je 0x775730
// 00775716  8bce                 mov ecx, esi
// 00775718  e84bb5f2ff           call 0x6a0c68
// 0077571d  5f                   pop edi
// 0077571e  5e                   pop esi
// 0077571f  5b                   pop ebx
// 00775720  59                   pop ecx
// 00775721  c20c00               ret 0xc
// 00775724  8b16                 mov edx, dword ptr [esi]
// 00775726  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 0077572c  8bce                 mov ecx, esi
// 0077572e  ffd0                 call eax
// 00775730  5f                   pop edi
// 00775731  5e                   pop esi
// 00775732  5b                   pop ebx
// 00775733  59                   pop ecx
// 00775734  c20c00               ret 0xc
// 00775737  90                   nop 
// 00775738  315777               xor dword ptr [edi + 0x77], edx
// 0077573b  0013                 add byte ptr [ebx], dl
// 0077573d  56                   push esi
// 0077573e  7700                 ja 0x775740
// 00775740  0001                 add byte ptr [ecx], al
// 00775742  0101                 add dword ptr [ecx], eax
// 00775744  0101                 add dword ptr [ecx], eax
// 00775746  0101                 add dword ptr [ecx], eax
// 00775748  0101                 add dword ptr [ecx], eax
// 0077574a  0101                 add dword ptr [ecx], eax
// 0077574c  0101                 add dword ptr [ecx], eax
// 0077574e  0101                 add dword ptr [ecx], eax
// 00775750  0101                 add dword ptr [ecx], eax
// 00775752  0101                 add dword ptr [ecx], eax
// 00775754  0101                 add dword ptr [ecx], eax
// 00775756  0101                 add dword ptr [ecx], eax
// 00775758  0001                 add byte ptr [ecx], al
// 0077575a  0100                 add dword ptr [eax], eax
// 0077575c  0000                 add byte ptr [eax], al
// 0077575e  0000                 add byte ptr [eax], al
// 00775760  0001                 add byte ptr [ecx], al
// 00775762  0101                 add dword ptr [ecx], eax
// 00775764  0101                 add dword ptr [ecx], eax
// library xtp-11.2.2-lib-strlen/Source\Controls\XTMaskEdit.cpp (function ?OnChar@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp
