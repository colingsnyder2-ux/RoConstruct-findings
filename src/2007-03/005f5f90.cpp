// roc 2007-03 005f5f90  unit: seg_005f0000  size: 696 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5f90
//
// 005f5f90  64a100000000         mov eax, dword ptr fs:[0]
// 005f5f96  6aff                 push -1
// 005f5f98  68926f7500           push 0x756f92
// 005f5f9d  50                   push eax
// 005f5f9e  64892500000000       mov dword ptr fs:[0], esp
// 005f5fa5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f5fa9  83ec48               sub esp, 0x48
// 005f5fac  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f5fb0  55                   push ebp
// 005f5fb1  8be9                 mov ebp, ecx
// 005f5fb3  7459                 je 0x5f600e
// 005f5fb5  68dc3e7800           push 0x783edc
// 005f5fba  8d4c240c             lea ecx, [esp + 0xc]
// 005f5fbe  ff1578e77700         call dword ptr [0x77e778]
// 005f5fc4  8d4c2424             lea ecx, [esp + 0x24]
// 005f5fc8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005f5fd0  ff1560e97700         call dword ptr [0x77e960]
// 005f5fd6  8d442408             lea eax, [esp + 8]
// 005f5fda  50                   push eax
// 005f5fdb  8d4c2434             lea ecx, [esp + 0x34]
// 005f5fdf  c644245801           mov byte ptr [esp + 0x58], 1
// 005f5fe4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 005f5fec  ff157ce77700         call dword ptr [0x77e77c]
// 005f5ff2  68ccf38300           push 0x83f3cc
// 005f5ff7  8d4c2428             lea ecx, [esp + 0x28]
// 005f5ffb  51                   push ecx
// 005f5ffc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005f6001  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 005f6009  e820900200           call 0x61f02e
// 005f600e  53                   push ebx
// 005f600f  56                   push esi
// 005f6010  8bd8                 mov ebx, eax
// 005f6012  57                   push edi
// 005f6013  8d4c246c             lea ecx, [esp + 0x6c]
// 005f6017  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f601b  e840cfeeff           call 0x4e2f60
// 005f6020  8b03                 mov eax, dword ptr [ebx]
// 005f6022  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f6026  7405                 je 0x5f602d
// 005f6028  8b7b08               mov edi, dword ptr [ebx + 8]
// 005f602b  eb18                 jmp 0x5f6045
// 005f602d  8b5308               mov edx, dword ptr [ebx + 8]
// 005f6030  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 005f6034  7404                 je 0x5f603a
// 005f6036  8bf8                 mov edi, eax
// 005f6038  eb0b                 jmp 0x5f6045
// 005f603a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005f603e  3bcb                 cmp ecx, ebx
// 005f6040  8b7908               mov edi, dword ptr [ecx + 8]
// 005f6043  756b                 jne 0x5f60b0
// 005f6045  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005f6049  8b7304               mov esi, dword ptr [ebx + 4]
// 005f604c  7503                 jne 0x5f6051
// 005f604e  897704               mov dword ptr [edi + 4], esi
// 005f6051  8b4504               mov eax, dword ptr [ebp + 4]
// 005f6054  395804               cmp dword ptr [eax + 4], ebx
// 005f6057  7505                 jne 0x5f605e
// 005f6059  897804               mov dword ptr [eax + 4], edi
// 005f605c  eb0b                 jmp 0x5f6069
// 005f605e  391e                 cmp dword ptr [esi], ebx
// 005f6060  7504                 jne 0x5f6066
// 005f6062  893e                 mov dword ptr [esi], edi
// 005f6064  eb03                 jmp 0x5f6069
// 005f6066  897e08               mov dword ptr [esi + 8], edi
// 005f6069  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005f606c  8b03                 mov eax, dword ptr [ebx]
// 005f606e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005f6072  7515                 jne 0x5f6089
// 005f6074  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005f6078  7404                 je 0x5f607e
// 005f607a  8bc6                 mov eax, esi
// 005f607c  eb09                 jmp 0x5f6087
// 005f607e  57                   push edi
// 005f607f  e86c1d0100           call 0x607df0
// 005f6084  83c404               add esp, 4
// 005f6087  8903                 mov dword ptr [ebx], eax
// 005f6089  8b5d04               mov ebx, dword ptr [ebp + 4]
// 005f608c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f6090  394b08               cmp dword ptr [ebx + 8], ecx
// 005f6093  7572                 jne 0x5f6107
// 005f6095  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005f6099  7407                 je 0x5f60a2
// 005f609b  8bc6                 mov eax, esi
// 005f609d  894308               mov dword ptr [ebx + 8], eax
// 005f60a0  eb65                 jmp 0x5f6107
// 005f60a2  57                   push edi
// 005f60a3  e8281d0100           call 0x607dd0
// 005f60a8  83c404               add esp, 4
// 005f60ab  894308               mov dword ptr [ebx + 8], eax
// 005f60ae  eb57                 jmp 0x5f6107
// 005f60b0  894804               mov dword ptr [eax + 4], ecx
// 005f60b3  8b13                 mov edx, dword ptr [ebx]
// 005f60b5  8911                 mov dword ptr [ecx], edx
// 005f60b7  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 005f60ba  7504                 jne 0x5f60c0
// 005f60bc  8bf1                 mov esi, ecx
// 005f60be  eb1a                 jmp 0x5f60da
// 005f60c0  807f1d00             cmp byte ptr [edi + 0x1d], 0
// 005f60c4  8b7104               mov esi, dword ptr [ecx + 4]
// 005f60c7  7503                 jne 0x5f60cc
// 005f60c9  897704               mov dword ptr [edi + 4], esi
// 005f60cc  893e                 mov dword ptr [esi], edi
// 005f60ce  8b4308               mov eax, dword ptr [ebx + 8]
// 005f60d1  894108               mov dword ptr [ecx + 8], eax
// 005f60d4  8b5308               mov edx, dword ptr [ebx + 8]
// 005f60d7  894a04               mov dword ptr [edx + 4], ecx
// 005f60da  8b4504               mov eax, dword ptr [ebp + 4]
// 005f60dd  395804               cmp dword ptr [eax + 4], ebx
// 005f60e0  7505                 jne 0x5f60e7
// 005f60e2  894804               mov dword ptr [eax + 4], ecx
// 005f60e5  eb0e                 jmp 0x5f60f5
// 005f60e7  8b4304               mov eax, dword ptr [ebx + 4]
// 005f60ea  3918                 cmp dword ptr [eax], ebx
// 005f60ec  7504                 jne 0x5f60f2
// 005f60ee  8908                 mov dword ptr [eax], ecx
// 005f60f0  eb03                 jmp 0x5f60f5
// 005f60f2  894808               mov dword ptr [eax + 8], ecx
// 005f60f5  8b4304               mov eax, dword ptr [ebx + 4]
// 005f60f8  894104               mov dword ptr [ecx + 4], eax
// 005f60fb  8a531c               mov dl, byte ptr [ebx + 0x1c]
// 005f60fe  8a411c               mov al, byte ptr [ecx + 0x1c]
// 005f6101  88511c               mov byte ptr [ecx + 0x1c], dl
// 005f6104  88431c               mov byte ptr [ebx + 0x1c], al
// 005f6107  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f610b  b301                 mov bl, 1
// 005f610d  38581c               cmp byte ptr [eax + 0x1c], bl
// 005f6110  0f85f2000000         jne 0x5f6208
// 005f6116  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f6119  3b7904               cmp edi, dword ptr [ecx + 4]
// 005f611c  0f84e3000000         je 0x5f6205
// 005f6122  385f1c               cmp byte ptr [edi + 0x1c], bl
// 005f6125  0f85da000000         jne 0x5f6205
// 005f612b  8b06                 mov eax, dword ptr [esi]
// 005f612d  3bf8                 cmp edi, eax
// 005f612f  7563                 jne 0x5f6194
// 005f6131  8b4608               mov eax, dword ptr [esi + 8]
// 005f6134  80781c00             cmp byte ptr [eax + 0x1c], 0
// 005f6138  7512                 jne 0x5f614c
// 005f613a  88581c               mov byte ptr [eax + 0x1c], bl
// 005f613d  56                   push esi
// 005f613e  8bcd                 mov ecx, ebp
// 005f6140  c6461c00             mov byte ptr [esi + 0x1c], 0
// 005f6144  e887ceeeff           call 0x4e2fd0
// 005f6149  8b4608               mov eax, dword ptr [esi + 8]
// 005f614c  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f6150  7572                 jne 0x5f61c4
// 005f6152  8b10                 mov edx, dword ptr [eax]
// 005f6154  385a1c               cmp byte ptr [edx + 0x1c], bl
// 005f6157  7508                 jne 0x5f6161
// 005f6159  8b4808               mov ecx, dword ptr [eax + 8]
// 005f615c  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005f615f  745f                 je 0x5f61c0
// 005f6161  8b4808               mov ecx, dword ptr [eax + 8]
// 005f6164  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005f6167  7512                 jne 0x5f617b
// 005f6169  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f616c  50                   push eax
// 005f616d  8bcd                 mov ecx, ebp
// 005f616f  c6401c00             mov byte ptr [eax + 0x1c], 0
// 005f6173  e8f8caeeff           call 0x4e2c70
// 005f6178  8b4608               mov eax, dword ptr [esi + 8]
// 005f617b  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 005f617e  88481c               mov byte ptr [eax + 0x1c], cl
// 005f6181  885e1c               mov byte ptr [esi + 0x1c], bl
// 005f6184  8b5008               mov edx, dword ptr [eax + 8]
// 005f6187  56                   push esi
// 005f6188  8bcd                 mov ecx, ebp
// 005f618a  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f618d  e83eceeeff           call 0x4e2fd0
// 005f6192  eb71                 jmp 0x5f6205
// 005f6194  80781c00             cmp byte ptr [eax + 0x1c], 0
// 005f6198  7511                 jne 0x5f61ab
// 005f619a  88581c               mov byte ptr [eax + 0x1c], bl
// 005f619d  56                   push esi
// 005f619e  8bcd                 mov ecx, ebp
// 005f61a0  c6461c00             mov byte ptr [esi + 0x1c], 0
// 005f61a4  e8c7caeeff           call 0x4e2c70
// 005f61a9  8b06                 mov eax, dword ptr [esi]
// 005f61ab  80781d00             cmp byte ptr [eax + 0x1d], 0
// 005f61af  7513                 jne 0x5f61c4
// 005f61b1  8b5008               mov edx, dword ptr [eax + 8]
// 005f61b4  385a1c               cmp byte ptr [edx + 0x1c], bl
// 005f61b7  751e                 jne 0x5f61d7
// 005f61b9  8b08                 mov ecx, dword ptr [eax]
// 005f61bb  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005f61be  7517                 jne 0x5f61d7
// 005f61c0  c6401c00             mov byte ptr [eax + 0x1c], 0
// 005f61c4  8b5504               mov edx, dword ptr [ebp + 4]
// 005f61c7  8bfe                 mov edi, esi
// 005f61c9  3b7a04               cmp edi, dword ptr [edx + 4]
// 005f61cc  8b7604               mov esi, dword ptr [esi + 4]
// 005f61cf  0f854dffffff         jne 0x5f6122
// 005f61d5  eb2e                 jmp 0x5f6205
// 005f61d7  8b08                 mov ecx, dword ptr [eax]
// 005f61d9  38591c               cmp byte ptr [ecx + 0x1c], bl
// 005f61dc  7511                 jne 0x5f61ef
// 005f61de  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f61e1  50                   push eax
// 005f61e2  8bcd                 mov ecx, ebp
// 005f61e4  c6401c00             mov byte ptr [eax + 0x1c], 0
// 005f61e8  e8e3cdeeff           call 0x4e2fd0
// 005f61ed  8b06                 mov eax, dword ptr [esi]
// 005f61ef  8a4e1c               mov cl, byte ptr [esi + 0x1c]
// 005f61f2  88481c               mov byte ptr [eax + 0x1c], cl
// 005f61f5  885e1c               mov byte ptr [esi + 0x1c], bl
// 005f61f8  8b10                 mov edx, dword ptr [eax]
// 005f61fa  56                   push esi
// 005f61fb  8bcd                 mov ecx, ebp
// 005f61fd  885a1c               mov byte ptr [edx + 0x1c], bl
// 005f6200  e86bcaeeff           call 0x4e2c70
// 005f6205  885f1c               mov byte ptr [edi + 0x1c], bl
// 005f6208  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f620c  50                   push eax
// 005f620d  e8de7e0200           call 0x61e0f0
// 005f6212  8b4508               mov eax, dword ptr [ebp + 8]
// 005f6215  83c404               add esp, 4
// 005f6218  85c0                 test eax, eax
// 005f621a  5f                   pop edi
// 005f621b  5e                   pop esi
// 005f621c  5b                   pop ebx
// 005f621d  7606                 jbe 0x5f6225
// 005f621f  83c0ff               add eax, -1
// 005f6222  894508               mov dword ptr [ebp + 8], eax
// 005f6225  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f6229  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005f622d  8b542464             mov edx, dword ptr [esp + 0x64]
// 005f6231  8908                 mov dword ptr [eax], ecx
// 005f6233  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005f6237  895004               mov dword ptr [eax + 4], edx
// 005f623a  5d                   pop ebp
// 005f623b  64890d00000000       mov dword ptr fs:[0], ecx
// 005f6242  83c454               add esp, 0x54
// 005f6245  c20c00               ret 0xc
// library rbxgs/v8world\Block.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VVector3@G3D@@PAVBlockTemplate@RBX@@UmyLess@4@V?$allocator@U?$pair@$$CBVVector3@G3D@@PAVBlockTemplate@RBX@@@std@@@std@@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Block.cpp
