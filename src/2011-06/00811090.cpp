// roc 2011-06 00811090  unit: CXTPPaintManager  size: 1508 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00811090
//
// 00811090  6aff                 push -1
// 00811092  680625a000           push 0xa02506
// 00811097  64a100000000         mov eax, dword ptr fs:[0]
// 0081109d  50                   push eax
// 0081109e  83ec44               sub esp, 0x44
// 008110a1  53                   push ebx
// 008110a2  55                   push ebp
// 008110a3  56                   push esi
// 008110a4  57                   push edi
// 008110a5  a12058c900           mov eax, dword ptr [0xc95820]
// 008110aa  33c4                 xor eax, esp
// 008110ac  50                   push eax
// 008110ad  8d442458             lea eax, [esp + 0x58]
// 008110b1  64a300000000         mov dword ptr fs:[0], eax
// 008110b7  8be9                 mov ebp, ecx
// 008110b9  8b742470             mov esi, dword ptr [esp + 0x70]
// 008110bd  8b06                 mov eax, dword ptr [esi]
// 008110bf  8b5058               mov edx, dword ptr [eax + 0x58]
// 008110c2  8d4c2424             lea ecx, [esp + 0x24]
// 008110c6  51                   push ecx
// 008110c7  8bce                 mov ecx, esi
// 008110c9  ffd2                 call edx
// 008110cb  8d442424             lea eax, [esp + 0x24]
// 008110cf  50                   push eax
// 008110d0  8d4c2424             lea ecx, [esp + 0x24]
// 008110d4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008110dc  ff15e42da400         call dword ptr [0xa42de4]
// 008110e2  8d4c2420             lea ecx, [esp + 0x20]
// 008110e6  51                   push ecx
// 008110e7  c644246401           mov byte ptr [esp + 0x64], 1
// 008110ec  e84fe7ffff           call 0x80f840
// 008110f1  83c404               add esp, 4
// 008110f4  8d4c241c             lea ecx, [esp + 0x1c]
// 008110f8  ff15b42da400         call dword ptr [0xa42db4]
// 008110fe  8d4c2418             lea ecx, [esp + 0x18]
// 00811102  ff15b42da400         call dword ptr [0xa42db4]
// 00811108  83bd9400000000       cmp dword ptr [ebp + 0x94], 0
// 0081110f  c644246003           mov byte ptr [esp + 0x60], 3
// 00811114  7418                 je 0x81112e
// 00811116  8d542418             lea edx, [esp + 0x18]
// 0081111a  52                   push edx
// 0081111b  8d442420             lea eax, [esp + 0x20]
// 0081111f  50                   push eax
// 00811120  8d4c242c             lea ecx, [esp + 0x2c]
// 00811124  51                   push ecx
// 00811125  8bcd                 mov ecx, ebp
// 00811127  e824e7ffff           call 0x80f850
// 0081112c  eb0f                 jmp 0x81113d
// 0081112e  8d542424             lea edx, [esp + 0x24]
// 00811132  52                   push edx
// 00811133  8d4c2420             lea ecx, [esp + 0x20]
// 00811137  ff156425a400         call dword ptr [0xa42564]
// 0081113d  8d44241c             lea eax, [esp + 0x1c]
// 00811141  50                   push eax
// 00811142  8d4c2418             lea ecx, [esp + 0x18]
// 00811146  ff15e42da400         call dword ptr [0xa42de4]
// 0081114c  8d4c2418             lea ecx, [esp + 0x18]
// 00811150  51                   push ecx
// 00811151  8d4c2474             lea ecx, [esp + 0x74]
// 00811155  c644246404           mov byte ptr [esp + 0x64], 4
// 0081115a  ff15e42da400         call dword ptr [0xa42de4]
// 00811160  8d542414             lea edx, [esp + 0x14]
// 00811164  52                   push edx
// 00811165  c644246405           mov byte ptr [esp + 0x64], 5
// 0081116a  e8d1e6ffff           call 0x80f840
// 0081116f  8d442474             lea eax, [esp + 0x74]
// 00811173  50                   push eax
// 00811174  e8c7e6ffff           call 0x80f840
// 00811179  83c408               add esp, 8
// 0081117c  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00811184  0f8530010000         jne 0x8112ba
// 0081118a  8d4c2420             lea ecx, [esp + 0x20]
// 0081118e  ff15b026a400         call dword ptr [0xa426b0]
// 00811194  84c0                 test al, al
// 00811196  7407                 je 0x81119f
// 00811198  b86056a600           mov eax, 0xa65660
// 0081119d  eb0a                 jmp 0x8111a9
// 0081119f  8d4c2414             lea ecx, [esp + 0x14]
// 008111a3  ff15c82da400         call dword ptr [0xa42dc8]
// 008111a9  50                   push eax
// 008111aa  8d8c2488000000       lea ecx, [esp + 0x88]
// 008111b1  ff15002ea400         call dword ptr [0xa42e00]
// 008111b7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008111bb  8d4c2438             lea ecx, [esp + 0x38]
// 008111bf  51                   push ecx
// 008111c0  8d8c2488000000       lea ecx, [esp + 0x88]
// 008111c7  ff15a826a400         call dword ptr [0xa426a8]
// 008111cd  50                   push eax
// 008111ce  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008111d5  ff15c82da400         call dword ptr [0xa42dc8]
// 008111db  8b5608               mov edx, dword ptr [esi + 8]
// 008111de  8b3d3801a400         mov edi, dword ptr [0xa40138]
// 008111e4  50                   push eax
// 008111e5  52                   push edx
// 008111e6  ffd7                 call edi
// 008111e8  8d8c2484000000       lea ecx, [esp + 0x84]
// 008111ef  ff15082ea400         call dword ptr [0xa42e08]
// 008111f5  8d4c2420             lea ecx, [esp + 0x20]
// 008111f9  ff15b026a400         call dword ptr [0xa426b0]
// 008111ff  84c0                 test al, al
// 00811201  7407                 je 0x81120a
// 00811203  b86056a600           mov eax, 0xa65660
// 00811208  eb0a                 jmp 0x811214
// 0081120a  8d4c2470             lea ecx, [esp + 0x70]
// 0081120e  ff15c82da400         call dword ptr [0xa42dc8]
// 00811214  50                   push eax
// 00811215  8d4c2470             lea ecx, [esp + 0x70]
// 00811219  ff15002ea400         call dword ptr [0xa42e00]
// 0081121f  8d442428             lea eax, [esp + 0x28]
// 00811223  50                   push eax
// 00811224  8d4c2470             lea ecx, [esp + 0x70]
// 00811228  ff15a826a400         call dword ptr [0xa426a8]
// 0081122e  50                   push eax
// 0081122f  8d4c2474             lea ecx, [esp + 0x74]
// 00811233  ff15c82da400         call dword ptr [0xa42dc8]
// 00811239  8b4e08               mov ecx, dword ptr [esi + 8]
// 0081123c  50                   push eax
// 0081123d  51                   push ecx
// 0081123e  ffd7                 call edi
// 00811240  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00811244  8b742428             mov esi, dword ptr [esp + 0x28]
// 00811248  8d4c246c             lea ecx, [esp + 0x6c]
// 0081124c  8954242c             mov dword ptr [esp + 0x2c], edx
// 00811250  ff15082ea400         call dword ptr [0xa42e08]
// 00811256  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0081125e  7403                 je 0x811263
// 00811260  83c608               add esi, 8
// 00811263  8b442438             mov eax, dword ptr [esp + 0x38]
// 00811267  3bc6                 cmp eax, esi
// 00811269  7e02                 jle 0x81126d
// 0081126b  8bf0                 mov esi, eax
// 0081126d  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00811275  b818000000           mov eax, 0x18
// 0081127a  89742438             mov dword ptr [esp + 0x38], esi
// 0081127e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00811282  741f                 je 0x8112a3
// 00811284  89442428             mov dword ptr [esp + 0x28], eax
// 00811288  8974242c             mov dword ptr [esp + 0x2c], esi
// 0081128c  8b742468             mov esi, dword ptr [esp + 0x68]
// 00811290  8d442428             lea eax, [esp + 0x28]
// 00811294  8b08                 mov ecx, dword ptr [eax]
// 00811296  8b5004               mov edx, dword ptr [eax + 4]
// 00811299  890e                 mov dword ptr [esi], ecx
// 0081129b  895604               mov dword ptr [esi + 4], edx
// 0081129e  e97d030000           jmp 0x811620
// 008112a3  8b742468             mov esi, dword ptr [esp + 0x68]
// 008112a7  8d442438             lea eax, [esp + 0x38]
// 008112ab  8b08                 mov ecx, dword ptr [eax]
// 008112ad  8b5004               mov edx, dword ptr [eax + 4]
// 008112b0  890e                 mov dword ptr [esi], ecx
// 008112b2  895604               mov dword ptr [esi + 4], edx
// 008112b5  e966030000           jmp 0x811620
// 008112ba  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008112c2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 008112c6  0f8573010000         jne 0x81143f
// 008112cc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008112d3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008112d7  03c7                 add eax, edi
// 008112d9  99                   cdq 
// 008112da  2bc2                 sub eax, edx
// 008112dc  8bd8                 mov ebx, eax
// 008112de  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008112e2  6a01                 push 1
// 008112e4  6a00                 push 0
// 008112e6  89442438             mov dword ptr [esp + 0x38], eax
// 008112ea  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008112f1  83ec10               sub esp, 0x10
// 008112f4  8944244c             mov dword ptr [esp + 0x4c], eax
// 008112f8  8bc4                 mov eax, esp
// 008112fa  8908                 mov dword ptr [eax], ecx
// 008112fc  894c2440             mov dword ptr [esp + 0x40], ecx
// 00811300  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00811307  897804               mov dword ptr [eax + 4], edi
// 0081130a  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00811311  d1fb                 sar ebx, 1
// 00811313  894808               mov dword ptr [eax + 8], ecx
// 00811316  8d5301               lea edx, [ebx + 1]
// 00811319  89500c               mov dword ptr [eax + 0xc], edx
// 0081131c  8d54242c             lea edx, [esp + 0x2c]
// 00811320  52                   push edx
// 00811321  8d442438             lea eax, [esp + 0x38]
// 00811325  50                   push eax
// 00811326  56                   push esi
// 00811327  57                   push edi
// 00811328  8bcd                 mov ecx, ebp
// 0081132a  e891faffff           call 0x810dc0
// 0081132f  8d4c2470             lea ecx, [esp + 0x70]
// 00811333  51                   push ecx
// 00811334  8d54243c             lea edx, [esp + 0x3c]
// 00811338  52                   push edx
// 00811339  8bcf                 mov ecx, edi
// 0081133b  e880a4c7ff           call 0x48b7c0
// 00811340  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 00811347  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0081134b  f7df                 neg edi
// 0081134d  1bff                 sbb edi, edi
// 0081134f  83e709               and edi, 9
// 00811352  0338                 add edi, dword ptr [eax]
// 00811354  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00811358  2bc7                 sub eax, edi
// 0081135a  2b442474             sub eax, dword ptr [esp + 0x74]
// 0081135e  6a00                 push 0
// 00811360  99                   cdq 
// 00811361  2bc2                 sub eax, edx
// 00811363  8b542438             mov edx, dword ptr [esp + 0x38]
// 00811367  6a00                 push 0
// 00811369  83ec10               sub esp, 0x10
// 0081136c  d1f8                 sar eax, 1
// 0081136e  03c8                 add ecx, eax
// 00811370  8bc4                 mov eax, esp
// 00811372  8908                 mov dword ptr [eax], ecx
// 00811374  894c2440             mov dword ptr [esp + 0x40], ecx
// 00811378  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0081137c  895804               mov dword ptr [eax + 4], ebx
// 0081137f  894808               mov dword ptr [eax + 8], ecx
// 00811382  89500c               mov dword ptr [eax + 0xc], edx
// 00811385  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0081138c  8d842488000000       lea eax, [esp + 0x88]
// 00811393  50                   push eax
// 00811394  8d4c2434             lea ecx, [esp + 0x34]
// 00811398  51                   push ecx
// 00811399  56                   push esi
// 0081139a  52                   push edx
// 0081139b  8bcd                 mov ecx, ebp
// 0081139d  e81efaffff           call 0x810dc0
// 008113a2  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 008113aa  0f845f020000         je 0x81160f
// 008113b0  8d4c2418             lea ecx, [esp + 0x18]
// 008113b4  ff15b026a400         call dword ptr [0xa426b0]
// 008113ba  84c0                 test al, al
// 008113bc  7414                 je 0x8113d2
// 008113be  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 008113c2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008113c6  03c1                 add eax, ecx
// 008113c8  99                   cdq 
// 008113c9  2bc2                 sub eax, edx
// 008113cb  8bf8                 mov edi, eax
// 008113cd  d1ff                 sar edi, 1
// 008113cf  4f                   dec edi
// 008113d0  eb08                 jmp 0x8113da
// 008113d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008113d6  8d7c3afc             lea edi, [edx + edi - 4]
// 008113da  8b442434             mov eax, dword ptr [esp + 0x34]
// 008113de  03c3                 add eax, ebx
// 008113e0  99                   cdq 
// 008113e1  2bc2                 sub eax, edx
// 008113e3  8bd8                 mov ebx, eax
// 008113e5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008113eb  d1fb                 sar ebx, 1
// 008113ed  83f8ff               cmp eax, -1
// 008113f0  750f                 jne 0x811401
// 008113f2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008113f8  85c9                 test ecx, ecx
// 008113fa  7405                 je 0x811401
// 008113fc  e85fb8ffff           call 0x80cc60
// 00811401  8b4d00               mov ecx, dword ptr [ebp]
// 00811404  8b16                 mov edx, dword ptr [esi]
// 00811406  6a00                 push 0
// 00811408  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 0081140f  50                   push eax
// 00811410  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00811416  8bce                 mov ecx, esi
// 00811418  ffd0                 call eax
// 0081141a  8b16                 mov edx, dword ptr [esi]
// 0081141c  50                   push eax
// 0081141d  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00811420  8bce                 mov ecx, esi
// 00811422  ffd0                 call eax
// 00811424  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00811428  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0081142f  50                   push eax
// 00811430  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 00811436  53                   push ebx
// 00811437  57                   push edi
// 00811438  56                   push esi
// 00811439  51                   push ecx
// 0081143a  e9cc010000           jmp 0x81160b
// 0081143f  8b442474             mov eax, dword ptr [esp + 0x74]
// 00811443  8d4801               lea ecx, [eax + 1]
// 00811446  894c2448             mov dword ptr [esp + 0x48], ecx
// 0081144a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0081144e  03c1                 add eax, ecx
// 00811450  99                   cdq 
// 00811451  2bc2                 sub eax, edx
// 00811453  d1f8                 sar eax, 1
// 00811455  89842484000000       mov dword ptr [esp + 0x84], eax
// 0081145c  8d5801               lea ebx, [eax + 1]
// 0081145f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00811466  49                   dec ecx
// 00811467  8d542414             lea edx, [esp + 0x14]
// 0081146b  89442454             mov dword ptr [esp + 0x54], eax
// 0081146f  89442444             mov dword ptr [esp + 0x44], eax
// 00811473  52                   push edx
// 00811474  8d44242c             lea eax, [esp + 0x2c]
// 00811478  894c2444             mov dword ptr [esp + 0x44], ecx
// 0081147c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00811480  50                   push eax
// 00811481  897c2444             mov dword ptr [esp + 0x44], edi
// 00811485  e836a3c7ff           call 0x48b7c0
// 0081148a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0081148e  8bc1                 mov eax, ecx
// 00811490  2b842484000000       sub eax, dword ptr [esp + 0x84]
// 00811497  6a00                 push 0
// 00811499  2b442430             sub eax, dword ptr [esp + 0x30]
// 0081149d  40                   inc eax
// 0081149e  99                   cdq 
// 0081149f  2bc2                 sub eax, edx
// 008114a1  d1f8                 sar eax, 1
// 008114a3  2bc8                 sub ecx, eax
// 008114a5  8b442448             mov eax, dword ptr [esp + 0x48]
// 008114a9  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 008114ad  2bc7                 sub eax, edi
// 008114af  40                   inc eax
// 008114b0  99                   cdq 
// 008114b1  2bc2                 sub eax, edx
// 008114b3  d1f8                 sar eax, 1
// 008114b5  8bd7                 mov edx, edi
// 008114b7  03d0                 add edx, eax
// 008114b9  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008114c0  50                   push eax
// 008114c1  83ec10               sub esp, 0x10
// 008114c4  8bc4                 mov eax, esp
// 008114c6  8908                 mov dword ptr [eax], ecx
// 008114c8  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008114cc  895004               mov dword ptr [eax + 4], edx
// 008114cf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008114d3  894808               mov dword ptr [eax + 8], ecx
// 008114d6  89500c               mov dword ptr [eax + 0xc], edx
// 008114d9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008114e0  8d44242c             lea eax, [esp + 0x2c]
// 008114e4  50                   push eax
// 008114e5  8d4c2438             lea ecx, [esp + 0x38]
// 008114e9  51                   push ecx
// 008114ea  56                   push esi
// 008114eb  52                   push edx
// 008114ec  8bcd                 mov ecx, ebp
// 008114ee  e8cdf8ffff           call 0x810dc0
// 008114f3  8d442470             lea eax, [esp + 0x70]
// 008114f7  50                   push eax
// 008114f8  8d4c243c             lea ecx, [esp + 0x3c]
// 008114fc  51                   push ecx
// 008114fd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00811501  e8baa2c7ff           call 0x48b7c0
// 00811506  8b10                 mov edx, dword ptr [eax]
// 00811508  8b4804               mov ecx, dword ptr [eax + 4]
// 0081150b  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00811512  f7d8                 neg eax
// 00811514  1bc0                 sbb eax, eax
// 00811516  83e008               and eax, 8
// 00811519  03d0                 add edx, eax
// 0081151b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081151f  89542428             mov dword ptr [esp + 0x28], edx
// 00811523  8b542448             mov edx, dword ptr [esp + 0x48]
// 00811527  89442444             mov dword ptr [esp + 0x44], eax
// 0081152b  89542438             mov dword ptr [esp + 0x38], edx
// 0081152f  897c243c             mov dword ptr [esp + 0x3c], edi
// 00811533  895c2440             mov dword ptr [esp + 0x40], ebx
// 00811537  8bc3                 mov eax, ebx
// 00811539  2bc2                 sub eax, edx
// 0081153b  2bc1                 sub eax, ecx
// 0081153d  40                   inc eax
// 0081153e  99                   cdq 
// 0081153f  2bc2                 sub eax, edx
// 00811541  d1f8                 sar eax, 1
// 00811543  8bcb                 mov ecx, ebx
// 00811545  2bc8                 sub ecx, eax
// 00811547  8b442454             mov eax, dword ptr [esp + 0x54]
// 0081154b  2bc7                 sub eax, edi
// 0081154d  2b442428             sub eax, dword ptr [esp + 0x28]
// 00811551  6a00                 push 0
// 00811553  40                   inc eax
// 00811554  99                   cdq 
// 00811555  2bc2                 sub eax, edx
// 00811557  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0081155e  52                   push edx
// 0081155f  83ec10               sub esp, 0x10
// 00811562  d1f8                 sar eax, 1
// 00811564  03f8                 add edi, eax
// 00811566  8bc4                 mov eax, esp
// 00811568  8908                 mov dword ptr [eax], ecx
// 0081156a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0081156e  897804               mov dword ptr [eax + 4], edi
// 00811571  895808               mov dword ptr [eax + 8], ebx
// 00811574  89480c               mov dword ptr [eax + 0xc], ecx
// 00811577  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0081157e  8d942488000000       lea edx, [esp + 0x88]
// 00811585  52                   push edx
// 00811586  8d442434             lea eax, [esp + 0x34]
// 0081158a  50                   push eax
// 0081158b  56                   push esi
// 0081158c  51                   push ecx
// 0081158d  8bcd                 mov ecx, ebp
// 0081158f  e82cf8ffff           call 0x810dc0
// 00811594  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0081159c  7471                 je 0x81160f
// 0081159e  8b542438             mov edx, dword ptr [esp + 0x38]
// 008115a2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008115a6  8bc3                 mov eax, ebx
// 008115a8  03c2                 add eax, edx
// 008115aa  99                   cdq 
// 008115ab  2bc2                 sub eax, edx
// 008115ad  8bd8                 mov ebx, eax
// 008115af  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008115b5  d1fb                 sar ebx, 1
// 008115b7  83eb02               sub ebx, 2
// 008115ba  8d540ffc             lea edx, [edi + ecx - 4]
// 008115be  8954243c             mov dword ptr [esp + 0x3c], edx
// 008115c2  83f8ff               cmp eax, -1
// 008115c5  750f                 jne 0x8115d6
// 008115c7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008115cd  85c9                 test ecx, ecx
// 008115cf  7405                 je 0x8115d6
// 008115d1  e88ab6ffff           call 0x80cc60
// 008115d6  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008115dd  8b16                 mov edx, dword ptr [esi]
// 008115df  8b7d00               mov edi, dword ptr [ebp]
// 008115e2  51                   push ecx
// 008115e3  50                   push eax
// 008115e4  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 008115ea  8bce                 mov ecx, esi
// 008115ec  ffd0                 call eax
// 008115ee  8b16                 mov edx, dword ptr [esi]
// 008115f0  50                   push eax
// 008115f1  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008115f4  8bce                 mov ecx, esi
// 008115f6  ffd0                 call eax
// 008115f8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008115fc  8b542478             mov edx, dword ptr [esp + 0x78]
// 00811600  50                   push eax
// 00811601  8b87f4000000         mov eax, dword ptr [edi + 0xf4]
// 00811607  51                   push ecx
// 00811608  53                   push ebx
// 00811609  56                   push esi
// 0081160a  52                   push edx
// 0081160b  8bcd                 mov ecx, ebp
// 0081160d  ffd0                 call eax
// 0081160f  8b742468             mov esi, dword ptr [esp + 0x68]
// 00811613  c70600000000         mov dword ptr [esi], 0
// 00811619  c7460400000000       mov dword ptr [esi + 4], 0
// 00811620  8d4c2470             lea ecx, [esp + 0x70]
// 00811624  ff15082ea400         call dword ptr [0xa42e08]
// 0081162a  8d4c2414             lea ecx, [esp + 0x14]
// 0081162e  ff15082ea400         call dword ptr [0xa42e08]
// 00811634  8d4c2418             lea ecx, [esp + 0x18]
// 00811638  ff15082ea400         call dword ptr [0xa42e08]
// 0081163e  8d4c241c             lea ecx, [esp + 0x1c]
// 00811642  ff15082ea400         call dword ptr [0xa42e08]
// 00811648  8d4c2420             lea ecx, [esp + 0x20]
// 0081164c  ff15082ea400         call dword ptr [0xa42e08]
// 00811652  8d4c2424             lea ecx, [esp + 0x24]
// 00811656  ff15082ea400         call dword ptr [0xa42e08]
// 0081165c  8bc6                 mov eax, esi
// 0081165e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00811662  64890d00000000       mov dword ptr fs:[0], ecx
// 00811669  59                   pop ecx
// 0081166a  5f                   pop edi
// 0081166b  5e                   pop esi
// 0081166c  5d                   pop ebp
// 0081166d  5b                   pop ebx
// 0081166e  83c450               add esp, 0x50
// 00811671  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText2@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp