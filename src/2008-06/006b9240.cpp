// roc 2008-06 006b9240  unit: CXTPCommandBar  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9240
//
// 006b9240  83ec58               sub esp, 0x58
// 006b9243  56                   push esi
// 006b9244  8b3554218000         mov esi, dword ptr [0x802154]
// 006b924a  57                   push edi
// 006b924b  8d442430             lea eax, [esp + 0x30]
// 006b924f  50                   push eax
// 006b9250  8bf9                 mov edi, ecx
// 006b9252  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 006b9256  6a18                 push 0x18
// 006b9258  51                   push ecx
// 006b9259  ffd6                 call esi
// 006b925b  85c0                 test eax, eax
// 006b925d  0f84ea010000         je 0x6b944d
// 006b9263  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006b9267  8d542448             lea edx, [esp + 0x48]
// 006b926b  52                   push edx
// 006b926c  6a18                 push 0x18
// 006b926e  50                   push eax
// 006b926f  ffd6                 call esi
// 006b9271  85c0                 test eax, eax
// 006b9273  0f84d4010000         je 0x6b944d
// 006b9279  8b542474             mov edx, dword ptr [esp + 0x74]
// 006b927d  8d4c2418             lea ecx, [esp + 0x18]
// 006b9281  51                   push ecx
// 006b9282  6a18                 push 0x18
// 006b9284  52                   push edx
// 006b9285  ffd6                 call esi
// 006b9287  85c0                 test eax, eax
// 006b9289  0f84be010000         je 0x6b944d
// 006b928f  8d442448             lea eax, [esp + 0x48]
// 006b9293  50                   push eax
// 006b9294  8d4c2434             lea ecx, [esp + 0x34]
// 006b9298  51                   push ecx
// 006b9299  8bcf                 mov ecx, edi
// 006b929b  e8b0fcffff           call 0x6b8f50
// 006b92a0  85c0                 test eax, eax
// 006b92a2  0f84a5010000         je 0x6b944d
// 006b92a8  8d542418             lea edx, [esp + 0x18]
// 006b92ac  52                   push edx
// 006b92ad  8d442434             lea eax, [esp + 0x34]
// 006b92b1  50                   push eax
// 006b92b2  8bcf                 mov ecx, edi
// 006b92b4  e897fcffff           call 0x6b8f50
// 006b92b9  85c0                 test eax, eax
// 006b92bb  0f848c010000         je 0x6b944d
// 006b92c1  66837c244220         cmp word ptr [esp + 0x42], 0x20
// 006b92c7  0f8580010000         jne 0x6b944d
// 006b92cd  66837c244001         cmp word ptr [esp + 0x40], 1
// 006b92d3  0f8574010000         jne 0x6b944d
// 006b92d9  8b442444             mov eax, dword ptr [esp + 0x44]
// 006b92dd  85c0                 test eax, eax
// 006b92df  0f8468010000         je 0x6b944d
// 006b92e5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006b92e9  85d2                 test edx, edx
// 006b92eb  0f845c010000         je 0x6b944d
// 006b92f1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 006b92f5  85f6                 test esi, esi
// 006b92f7  0f8450010000         je 0x6b944d
// 006b92fd  837c242000           cmp dword ptr [esp + 0x20], 0
// 006b9302  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b9306  894c2414             mov dword ptr [esp + 0x14], ecx
// 006b930a  89442464             mov dword ptr [esp + 0x64], eax
// 006b930e  89542474             mov dword ptr [esp + 0x74], edx
// 006b9312  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006b931a  0f8e20010000         jle 0x6b9440
// 006b9320  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006b9324  53                   push ebx
// 006b9325  8d7e01               lea edi, [esi + 1]
// 006b9328  55                   push ebp
// 006b9329  897c2410             mov dword ptr [esp + 0x10], edi
// 006b932d  8d4900               lea ecx, [ecx]
// 006b9330  33ed                 xor ebp, ebp
// 006b9332  85c0                 test eax, eax
// 006b9334  0f8edd000000         jle 0x6b9417
// 006b933a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 006b933e  8bda                 mov ebx, edx
// 006b9340  2bca                 sub ecx, edx
// 006b9342  895c2474             mov dword ptr [esp + 0x74], ebx
// 006b9346  894c2418             mov dword ptr [esp + 0x18], ecx
// 006b934a  eb0c                 jmp 0x6b9358
// 006b934c  8d642400             lea esp, [esp]
// 006b9350  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 006b9354  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b9358  837c247000           cmp dword ptr [esp + 0x70], 0
// 006b935d  740e                 je 0x6b936d
// 006b935f  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006b9363  8bc8                 mov ecx, eax
// 006b9365  2bcd                 sub ecx, ebp
// 006b9367  8d4c8efc             lea ecx, [esi + ecx*4 - 4]
// 006b936b  eb02                 jmp 0x6b936f
// 006b936d  03cb                 add ecx, ebx
// 006b936f  837c247800           cmp dword ptr [esp + 0x78], 0
// 006b9374  7406                 je 0x6b937c
// 006b9376  2bc5                 sub eax, ebp
// 006b9378  8d5c82fc             lea ebx, [edx + eax*4 - 4]
// 006b937c  0fb65103             movzx edx, byte ptr [ecx + 3]
// 006b9380  0fb67302             movzx esi, byte ptr [ebx + 2]
// 006b9384  b8ff000000           mov eax, 0xff
// 006b9389  2bc2                 sub eax, edx
// 006b938b  0faff0               imul esi, eax
// 006b938e  b881808080           mov eax, 0x80808081
// 006b9393  f7ee                 imul esi
// 006b9395  03d6                 add edx, esi
// 006b9397  c1fa07               sar edx, 7
// 006b939a  8bc2                 mov eax, edx
// 006b939c  c1e81f               shr eax, 0x1f
// 006b939f  03c2                 add eax, edx
// 006b93a1  024102               add al, byte ptr [ecx + 2]
// 006b93a4  8344247404           add dword ptr [esp + 0x74], 4
// 006b93a9  884701               mov byte ptr [edi + 1], al
// 006b93ac  0fb65103             movzx edx, byte ptr [ecx + 3]
// 006b93b0  0fb67301             movzx esi, byte ptr [ebx + 1]
// 006b93b4  b8ff000000           mov eax, 0xff
// 006b93b9  2bc2                 sub eax, edx
// 006b93bb  0faff0               imul esi, eax
// 006b93be  b881808080           mov eax, 0x80808081
// 006b93c3  f7ee                 imul esi
// 006b93c5  03d6                 add edx, esi
// 006b93c7  c1fa07               sar edx, 7
// 006b93ca  8bc2                 mov eax, edx
// 006b93cc  c1e81f               shr eax, 0x1f
// 006b93cf  03c2                 add eax, edx
// 006b93d1  024101               add al, byte ptr [ecx + 1]
// 006b93d4  beff000000           mov esi, 0xff
// 006b93d9  8807                 mov byte ptr [edi], al
// 006b93db  0fb65103             movzx edx, byte ptr [ecx + 3]
// 006b93df  0fb603               movzx eax, byte ptr [ebx]
// 006b93e2  2bf2                 sub esi, edx
// 006b93e4  0faff0               imul esi, eax
// 006b93e7  b881808080           mov eax, 0x80808081
// 006b93ec  f7ee                 imul esi
// 006b93ee  03d6                 add edx, esi
// 006b93f0  c1fa07               sar edx, 7
// 006b93f3  8bc2                 mov eax, edx
// 006b93f5  c1e81f               shr eax, 0x1f
// 006b93f8  03c2                 add eax, edx
// 006b93fa  0201                 add al, byte ptr [ecx]
// 006b93fc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 006b9400  8847ff               mov byte ptr [edi - 1], al
// 006b9403  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b9407  45                   inc ebp
// 006b9408  83c704               add edi, 4
// 006b940b  3be8                 cmp ebp, eax
// 006b940d  0f8c3dffffff         jl 0x6b9350
// 006b9413  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b9417  8b742414             mov esi, dword ptr [esp + 0x14]
// 006b941b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006b941f  014c246c             add dword ptr [esp + 0x6c], ecx
// 006b9423  46                   inc esi
// 006b9424  03d1                 add edx, ecx
// 006b9426  03f9                 add edi, ecx
// 006b9428  3b742428             cmp esi, dword ptr [esp + 0x28]
// 006b942c  8954247c             mov dword ptr [esp + 0x7c], edx
// 006b9430  897c2410             mov dword ptr [esp + 0x10], edi
// 006b9434  89742414             mov dword ptr [esp + 0x14], esi
// 006b9438  0f8cf2feffff         jl 0x6b9330
// 006b943e  5d                   pop ebp
// 006b943f  5b                   pop ebx
// 006b9440  5f                   pop edi
// 006b9441  b801000000           mov eax, 1
// 006b9446  5e                   pop esi
// 006b9447  83c458               add esp, 0x58
// 006b944a  c21400               ret 0x14
// 006b944d  5f                   pop edi
// 006b944e  33c0                 xor eax, eax
// 006b9450  5e                   pop esi
// 006b9451  83c458               add esp, 0x58
// 006b9454  c21400               ret 0x14
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?BlendImages@CXTPImageManager@@ABEHPAUHBITMAP__@@H0H0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
