// roc 2009-06 00728190  unit: CXTPPaintManager  size: 1041 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00728190
//
// 00728190  6aff                 push -1
// 00728192  68f8508700           push 0x8750f8
// 00728197  64a100000000         mov eax, dword ptr fs:[0]
// 0072819d  50                   push eax
// 0072819e  83ec5c               sub esp, 0x5c
// 007281a1  53                   push ebx
// 007281a2  55                   push ebp
// 007281a3  56                   push esi
// 007281a4  57                   push edi
// 007281a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007281aa  33c4                 xor eax, esp
// 007281ac  50                   push eax
// 007281ad  8d442470             lea eax, [esp + 0x70]
// 007281b1  64a300000000         mov dword ptr fs:[0], eax
// 007281b7  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007281bb  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 007281c1  8bb158010000         mov esi, dword ptr [ecx + 0x158]
// 007281c7  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007281ce  83e902               sub ecx, 2
// 007281d1  8944241c             mov dword ptr [esp + 0x1c], eax
// 007281d5  0f841a030000         je 0x7284f5
// 007281db  83e901               sub ecx, 1
// 007281de  0f849b020000         je 0x72847f
// 007281e4  83e901               sub ecx, 1
// 007281e7  0f859e030000         jne 0x72858b
// 007281ed  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 007281f4  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 007281fb  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 00728202  2b9c248c000000       sub ebx, dword ptr [esp + 0x8c]
// 00728209  8b2d5ce18900         mov ebp, dword ptr [0x89e15c]
// 0072820f  33c0                 xor eax, eax
// 00728211  50                   push eax
// 00728212  89442458             mov dword ptr [esp + 0x58], eax
// 00728216  b901000000           mov ecx, 1
// 0072821b  50                   push eax
// 0072821c  66894c245c           mov word ptr [esp + 0x5c], cx
// 00728221  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00728228  51                   push ecx
// 00728229  ba20000000           mov edx, 0x20
// 0072822e  6689542462           mov word ptr [esp + 0x62], dx
// 00728233  50                   push eax
// 00728234  8d542458             lea edx, [esp + 0x58]
// 00728238  52                   push edx
// 00728239  8944245c             mov dword ptr [esp + 0x5c], eax
// 0072823d  89442460             mov dword ptr [esp + 0x60], eax
// 00728241  89442464             mov dword ptr [esp + 0x64], eax
// 00728245  8944246c             mov dword ptr [esp + 0x6c], eax
// 00728249  50                   push eax
// 0072824a  89442474             mov dword ptr [esp + 0x74], eax
// 0072824e  89442478             mov dword ptr [esp + 0x78], eax
// 00728252  8944247c             mov dword ptr [esp + 0x7c], eax
// 00728256  89842480000000       mov dword ptr [esp + 0x80], eax
// 0072825d  89842484000000       mov dword ptr [esp + 0x84], eax
// 00728264  c744246028000000     mov dword ptr [esp + 0x60], 0x28
// 0072826c  897c2464             mov dword ptr [esp + 0x64], edi
// 00728270  895c2468             mov dword ptr [esp + 0x68], ebx
// 00728274  89442470             mov dword ptr [esp + 0x70], eax
// 00728278  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 0072827f  ffd5                 call ebp
// 00728281  6a00                 push 0
// 00728283  6a00                 push 0
// 00728285  89442428             mov dword ptr [esp + 0x28], eax
// 00728289  8d44241c             lea eax, [esp + 0x1c]
// 0072828d  50                   push eax
// 0072828e  6a00                 push 0
// 00728290  8d4c2458             lea ecx, [esp + 0x58]
// 00728294  51                   push ecx
// 00728295  6a00                 push 0
// 00728297  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0072829f  ffd5                 call ebp
// 007282a1  6a00                 push 0
// 007282a3  6a00                 push 0
// 007282a5  8d542420             lea edx, [esp + 0x20]
// 007282a9  52                   push edx
// 007282aa  89442430             mov dword ptr [esp + 0x30], eax
// 007282ae  6a00                 push 0
// 007282b0  8d442458             lea eax, [esp + 0x58]
// 007282b4  50                   push eax
// 007282b5  6a00                 push 0
// 007282b7  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007282bf  ffd5                 call ebp
// 007282c1  8d4c2438             lea ecx, [esp + 0x38]
// 007282c5  89442428             mov dword ptr [esp + 0x28], eax
// 007282c9  e87a3c1200           call 0x84bf48
// 007282ce  6a00                 push 0
// 007282d0  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 007282d8  ff1520e18900         call dword ptr [0x89e120]
// 007282de  50                   push eax
// 007282df  8d4c243c             lea ecx, [esp + 0x3c]
// 007282e3  e84e3c1200           call 0x84bf36
// 007282e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007282ec  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007282f0  8b2d24e18900         mov ebp, dword ptr [0x89e124]
// 007282f6  51                   push ecx
// 007282f7  52                   push edx
// 007282f8  ffd5                 call ebp
// 007282fa  89442434             mov dword ptr [esp + 0x34], eax
// 007282fe  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00728305  85c0                 test eax, eax
// 00728307  7403                 je 0x72830c
// 00728309  8b4004               mov eax, dword ptr [eax + 4]
// 0072830c  682000cc00           push 0xcc0020
// 00728311  6a00                 push 0
// 00728313  6a00                 push 0
// 00728315  50                   push eax
// 00728316  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0072831a  53                   push ebx
// 0072831b  57                   push edi
// 0072831c  6a00                 push 0
// 0072831e  6a00                 push 0
// 00728320  50                   push eax
// 00728321  ff15e0e08900         call dword ptr [0x89e0e0]
// 00728327  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072832b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072832f  51                   push ecx
// 00728330  52                   push edx
// 00728331  ffd5                 call ebp
// 00728333  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0072833a  85c0                 test eax, eax
// 0072833c  7403                 je 0x728341
// 0072833e  8b4004               mov eax, dword ptr [eax + 4]
// 00728341  682000cc00           push 0xcc0020
// 00728346  6a00                 push 0
// 00728348  6a00                 push 0
// 0072834a  50                   push eax
// 0072834b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0072834f  53                   push ebx
// 00728350  57                   push edi
// 00728351  6a00                 push 0
// 00728353  6a00                 push 0
// 00728355  50                   push eax
// 00728356  ff15e0e08900         call dword ptr [0x89e0e0]
// 0072835c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00728360  99                   cdq 
// 00728361  f7fe                 idiv esi
// 00728363  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00728367  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072836b  51                   push ecx
// 0072836c  52                   push edx
// 0072836d  89442438             mov dword ptr [esp + 0x38], eax
// 00728371  ffd5                 call ebp
// 00728373  83fe01               cmp esi, 1
// 00728376  0f8ec6000000         jle 0x728442
// 0072837c  8d46ff               lea eax, [esi - 1]
// 0072837f  c7842484000000ff000000 mov dword ptr [esp + 0x84], 0xff
// 0072838a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0072838e  8bff                 mov edi, edi
// 00728390  ff1518e28900         call dword ptr [0x89e218]
// 00728396  8be8                 mov ebp, eax
// 00728398  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0072839f  99                   cdq 
// 007283a0  f7fe                 idiv esi
// 007283a2  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007283a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007283ad  50                   push eax
// 007283ae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007283b2  51                   push ecx
// 007283b3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007283b7  53                   push ebx
// 007283b8  57                   push edi
// 007283b9  52                   push edx
// 007283ba  50                   push eax
// 007283bb  e820adffff           call 0x7230e0
// 007283c0  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007283c7  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 007283ce  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007283d2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007283d9  2b8c2488000000       sub ecx, dword ptr [esp + 0x88]
// 007283e0  682000cc00           push 0xcc0020
// 007283e5  6a00                 push 0
// 007283e7  6a00                 push 0
// 007283e9  52                   push edx
// 007283ea  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007283f1  50                   push eax
// 007283f2  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007283f9  51                   push ecx
// 007283fa  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00728401  50                   push eax
// 00728402  8b4204               mov eax, dword ptr [edx + 4]
// 00728405  51                   push ecx
// 00728406  50                   push eax
// 00728407  ff15e0e08900         call dword ptr [0x89e0e0]
// 0072840d  ff1518e28900         call dword ptr [0x89e218]
// 00728413  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00728417  2bc5                 sub eax, ebp
// 00728419  3bc1                 cmp eax, ecx
// 0072841b  7309                 jae 0x728426
// 0072841d  2bc8                 sub ecx, eax
// 0072841f  51                   push ecx
// 00728420  ff15b8e28900         call dword ptr [0x89e2b8]
// 00728426  81842484000000ff000000 add dword ptr [esp + 0x84], 0xff
// 00728431  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00728436  0f8554ffffff         jne 0x728390
// 0072843c  8b2d24e18900         mov ebp, dword ptr [0x89e124]
// 00728442  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00728446  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0072844a  51                   push ecx
// 0072844b  52                   push edx
// 0072844c  ffd5                 call ebp
// 0072844e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00728452  8b3560e18900         mov esi, dword ptr [0x89e160]
// 00728458  50                   push eax
// 00728459  ffd6                 call esi
// 0072845b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0072845f  51                   push ecx
// 00728460  ffd6                 call esi
// 00728462  8b542428             mov edx, dword ptr [esp + 0x28]
// 00728466  52                   push edx
// 00728467  ffd6                 call esi
// 00728469  8d4c2438             lea ecx, [esp + 0x38]
// 0072846d  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00728475  e8c83a1200           call 0x84bf42
// 0072847a  e90c010000           jmp 0x72858b
// 0072847f  33ff                 xor edi, edi
// 00728481  85f6                 test esi, esi
// 00728483  0f8e02010000         jle 0x72858b
// 00728489  99                   cdq 
// 0072848a  f7fe                 idiv esi
// 0072848c  8be8                 mov ebp, eax
// 0072848e  8bff                 mov edi, edi
// 00728490  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00728497  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 0072849e  47                   inc edi
// 0072849f  8bc7                 mov eax, edi
// 007284a1  0fafc1               imul eax, ecx
// 007284a4  99                   cdq 
// 007284a5  f7fe                 idiv esi
// 007284a7  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 007284ae  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 007284b5  2b942488000000       sub edx, dword ptr [esp + 0x88]
// 007284bc  2bc8                 sub ecx, eax
// 007284be  85db                 test ebx, ebx
// 007284c0  7403                 je 0x7284c5
// 007284c2  8b5b04               mov ebx, dword ptr [ebx + 4]
// 007284c5  682000cc00           push 0xcc0020
// 007284ca  51                   push ecx
// 007284cb  6a00                 push 0
// 007284cd  53                   push ebx
// 007284ce  50                   push eax
// 007284cf  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007284d6  8b4804               mov ecx, dword ptr [eax + 4]
// 007284d9  52                   push edx
// 007284da  6a00                 push 0
// 007284dc  6a00                 push 0
// 007284de  51                   push ecx
// 007284df  ff15e0e08900         call dword ptr [0x89e0e0]
// 007284e5  55                   push ebp
// 007284e6  ff15b8e28900         call dword ptr [0x89e2b8]
// 007284ec  3bfe                 cmp edi, esi
// 007284ee  7ca0                 jl 0x728490
// 007284f0  e996000000           jmp 0x72858b
// 007284f5  85f6                 test esi, esi
// 007284f7  0f8e8e000000         jle 0x72858b
// 007284fd  99                   cdq 
// 007284fe  f7fe                 idiv esi
// 00728500  bd01000000           mov ebp, 1
// 00728505  89b42498000000       mov dword ptr [esp + 0x98], esi
// 0072850c  89442434             mov dword ptr [esp + 0x34], eax
// 00728510  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 00728517  8bc7                 mov eax, edi
// 00728519  2b842488000000       sub eax, dword ptr [esp + 0x88]
// 00728520  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00728527  0fafc5               imul eax, ebp
// 0072852a  99                   cdq 
// 0072852b  f7fe                 idiv esi
// 0072852d  8bcf                 mov ecx, edi
// 0072852f  2bc8                 sub ecx, eax
// 00728531  8bc3                 mov eax, ebx
// 00728533  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 0072853a  2bf9                 sub edi, ecx
// 0072853c  0fafc5               imul eax, ebp
// 0072853f  99                   cdq 
// 00728540  f7fe                 idiv esi
// 00728542  8bd3                 mov edx, ebx
// 00728544  2bd0                 sub edx, eax
// 00728546  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0072854d  2bda                 sub ebx, edx
// 0072854f  85c0                 test eax, eax
// 00728551  7403                 je 0x728556
// 00728553  8b4004               mov eax, dword ptr [eax + 4]
// 00728556  682000cc00           push 0xcc0020
// 0072855b  52                   push edx
// 0072855c  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00728563  51                   push ecx
// 00728564  50                   push eax
// 00728565  8b4204               mov eax, dword ptr [edx + 4]
// 00728568  53                   push ebx
// 00728569  57                   push edi
// 0072856a  6a00                 push 0
// 0072856c  6a00                 push 0
// 0072856e  50                   push eax
// 0072856f  ff15e0e08900         call dword ptr [0x89e0e0]
// 00728575  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00728579  51                   push ecx
// 0072857a  ff15b8e28900         call dword ptr [0x89e2b8]
// 00728580  45                   inc ebp
// 00728581  83ac249800000001     sub dword ptr [esp + 0x98], 1
// 00728589  7585                 jne 0x728510
// 0072858b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0072858f  64890d00000000       mov dword ptr fs:[0], ecx
// 00728596  59                   pop ecx
// 00728597  5f                   pop edi
// 00728598  5e                   pop esi
// 00728599  5d                   pop ebp
// 0072859a  5b                   pop ebx
// 0072859b  83c468               add esp, 0x68
// 0072859e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Animate@CXTPPaintManager@@UAEXPAVCDC@@0VCRect@@W4XTPAnimationType@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp