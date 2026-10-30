// roc 2012-06 00a523d0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a523d0
//
// 00a523d0  83ec20               sub esp, 0x20
// 00a523d3  53                   push ebx
// 00a523d4  55                   push ebp
// 00a523d5  56                   push esi
// 00a523d6  57                   push edi
// 00a523d7  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a523db  8bf1                 mov esi, ecx
// 00a523dd  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a523e1  8b16                 mov edx, dword ptr [esi]
// 00a523e3  8b5208               mov edx, dword ptr [edx + 8]
// 00a523e6  57                   push edi
// 00a523e7  83ec10               sub esp, 0x10
// 00a523ea  8bc4                 mov eax, esp
// 00a523ec  8908                 mov dword ptr [eax], ecx
// 00a523ee  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a523f2  894804               mov dword ptr [eax + 4], ecx
// 00a523f5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a523f9  894808               mov dword ptr [eax + 8], ecx
// 00a523fc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a52400  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52403  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a52407  50                   push eax
// 00a52408  8bce                 mov ecx, esi
// 00a5240a  ffd2                 call edx
// 00a5240c  8b07                 mov eax, dword ptr [edi]
// 00a5240e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a52411  8bcf                 mov ecx, edi
// 00a52413  33db                 xor ebx, ebx
// 00a52415  33ed                 xor ebp, ebp
// 00a52417  ffd2                 call edx
// 00a52419  50                   push eax
// 00a5241a  83ec10               sub esp, 0x10
// 00a5241d  8bc4                 mov eax, esp
// 00a5241f  8918                 mov dword ptr [eax], ebx
// 00a52421  896804               mov dword ptr [eax + 4], ebp
// 00a52424  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00a52428  33c9                 xor ecx, ecx
// 00a5242a  894808               mov dword ptr [eax + 8], ecx
// 00a5242d  b901000000           mov ecx, 1
// 00a52432  55                   push ebp
// 00a52433  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52436  e875eeffff           call 0xa512b0
// 00a5243b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a5243e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a52444  8b5d00               mov ebx, dword ptr [ebp]
// 00a52447  8b11                 mov edx, dword ptr [ecx]
// 00a52449  83c418               add esp, 0x18
// 00a5244c  57                   push edi
// 00a5244d  83ec10               sub esp, 0x10
// 00a52450  8bc4                 mov eax, esp
// 00a52452  8918                 mov dword ptr [eax], ebx
// 00a52454  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00a52457  895804               mov dword ptr [eax + 4], ebx
// 00a5245a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00a5245d  895808               mov dword ptr [eax + 8], ebx
// 00a52460  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00a52463  89580c               mov dword ptr [eax + 0xc], ebx
// 00a52466  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00a5246a  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5246d  53                   push ebx
// 00a5246e  ffd0                 call eax
// 00a52470  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a52474  8b16                 mov edx, dword ptr [esi]
// 00a52476  8b520c               mov edx, dword ptr [edx + 0xc]
// 00a52479  57                   push edi
// 00a5247a  83ec10               sub esp, 0x10
// 00a5247d  8bc4                 mov eax, esp
// 00a5247f  8908                 mov dword ptr [eax], ecx
// 00a52481  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a52485  894804               mov dword ptr [eax + 4], ecx
// 00a52488  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a5248c  894808               mov dword ptr [eax + 8], ecx
// 00a5248f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a52493  89480c               mov dword ptr [eax + 0xc], ecx
// 00a52496  8d442424             lea eax, [esp + 0x24]
// 00a5249a  50                   push eax
// 00a5249b  8bce                 mov ecx, esi
// 00a5249d  ffd2                 call edx
// 00a5249f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a524a2  83783800             cmp dword ptr [eax + 0x38], 0
// 00a524a6  0f8526010000         jne 0xa525d2
// 00a524ac  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00a524b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a524b6  8b11                 mov edx, dword ptr [ecx]
// 00a524b8  57                   push edi
// 00a524b9  83ec10               sub esp, 0x10
// 00a524bc  8bc4                 mov eax, esp
// 00a524be  8928                 mov dword ptr [eax], ebp
// 00a524c0  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a524c4  896804               mov dword ptr [eax + 4], ebp
// 00a524c7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a524cb  896808               mov dword ptr [eax + 8], ebp
// 00a524ce  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00a524d2  89680c               mov dword ptr [eax + 0xc], ebp
// 00a524d5  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a524d8  53                   push ebx
// 00a524d9  ffd0                 call eax
// 00a524db  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a524de  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a524e4  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00a524ea  83f9ff               cmp ecx, -1
// 00a524ed  7506                 jne 0xa524f5
// 00a524ef  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 00a524f5  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 00a524fb  83faff               cmp edx, -1
// 00a524fe  7506                 jne 0xa52506
// 00a52500  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 00a52506  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5250a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a5250e  89442424             mov dword ptr [esp + 0x24], eax
// 00a52512  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a52516  89442428             mov dword ptr [esp + 0x28], eax
// 00a5251a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5251e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a52522  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a52526  83faff               cmp edx, -1
// 00a52529  741b                 je 0xa52546
// 00a5252b  83f9ff               cmp ecx, -1
// 00a5252e  7416                 je 0xa52546
// 00a52530  51                   push ecx
// 00a52531  52                   push edx
// 00a52532  8d4c2428             lea ecx, [esp + 0x28]
// 00a52536  51                   push ecx
// 00a52537  8bcb                 mov ecx, ebx
// 00a52539  e86809f3ff           call 0x982ea6
// 00a5253e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a52542  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a52546  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00a52549  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00a5254f  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00a52555  81c12c010000         add ecx, 0x12c
// 00a5255b  83faff               cmp edx, -1
// 00a5255e  7505                 jne 0xa52565
// 00a52560  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a52563  eb02                 jmp 0xa52567
// 00a52565  8bca                 mov ecx, edx
// 00a52567  83f9ff               cmp ecx, -1
// 00a5256a  741e                 je 0xa5258a
// 00a5256c  51                   push ecx
// 00a5256d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52571  2bcd                 sub ecx, ebp
// 00a52573  6a01                 push 1
// 00a52575  83e902               sub ecx, 2
// 00a52578  51                   push ecx
// 00a52579  83c0fe               add eax, -2
// 00a5257c  50                   push eax
// 00a5257d  45                   inc ebp
// 00a5257e  55                   push ebp
// 00a5257f  8bcb                 mov ecx, ebx
// 00a52581  e80a700400           call 0xa99590
// 00a52586  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5258a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00a5258d  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00a52593  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00a52599  81c12c010000         add ecx, 0x12c
// 00a5259f  83faff               cmp edx, -1
// 00a525a2  7505                 jne 0xa525a9
// 00a525a4  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a525a7  eb02                 jmp 0xa525ab
// 00a525a9  8bca                 mov ecx, edx
// 00a525ab  83f9ff               cmp ecx, -1
// 00a525ae  741e                 je 0xa525ce
// 00a525b0  51                   push ecx
// 00a525b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a525b5  2bc1                 sub eax, ecx
// 00a525b7  83e802               sub eax, 2
// 00a525ba  50                   push eax
// 00a525bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a525bf  6a01                 push 1
// 00a525c1  41                   inc ecx
// 00a525c2  51                   push ecx
// 00a525c3  83c0fe               add eax, -2
// 00a525c6  50                   push eax
// 00a525c7  8bcb                 mov ecx, ebx
// 00a525c9  e8c26f0400           call 0xa99590
// 00a525ce  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00a525d2  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a525d5  83793801             cmp dword ptr [ecx + 0x38], 1
// 00a525d9  0f8590010000         jne 0xa5276f
// 00a525df  8b17                 mov edx, dword ptr [edi]
// 00a525e1  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a525e4  8bcf                 mov ecx, edi
// 00a525e6  ffd0                 call eax
// 00a525e8  83f803               cmp eax, 3
// 00a525eb  0f877e010000         ja 0xa5276f
// 00a525f1  ff24857c27a500       jmp dword ptr [eax*4 + 0xa5277c]
// 00a525f8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00a525fb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00a52601  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00a52607  0520010000           add eax, 0x120
// 00a5260c  83f9ff               cmp ecx, -1
// 00a5260f  7505                 jne 0xa52616
// 00a52611  8b4004               mov eax, dword ptr [eax + 4]
// 00a52614  eb02                 jmp 0xa52618
// 00a52616  8bc1                 mov eax, ecx
// 00a52618  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5261c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a52620  50                   push eax
// 00a52621  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a52625  2bd0                 sub edx, eax
// 00a52627  52                   push edx
// 00a52628  51                   push ecx
// 00a52629  50                   push eax
// 00a5262a  53                   push ebx
// 00a5262b  e840ecffff           call 0xa51270
// 00a52630  83c414               add esp, 0x14
// 00a52633  8bc5                 mov eax, ebp
// 00a52635  5f                   pop edi
// 00a52636  5e                   pop esi
// 00a52637  5d                   pop ebp
// 00a52638  5b                   pop ebx
// 00a52639  83c420               add esp, 0x20
// 00a5263c  c21c00               ret 0x1c
// 00a5263f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00a52642  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00a52648  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 00a5264e  0520010000           add eax, 0x120
// 00a52653  83f9ff               cmp ecx, -1
// 00a52656  750c                 jne 0xa52664
// 00a52658  8b4004               mov eax, dword ptr [eax + 4]
// 00a5265b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5265f  e9f4000000           jmp 0xa52758
// 00a52664  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a52668  8bc1                 mov eax, ecx
// 00a5266a  e9e9000000           jmp 0xa52758
// 00a5266f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a52672  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a52678  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00a5267e  0538010000           add eax, 0x138
// 00a52683  83f9ff               cmp ecx, -1
// 00a52686  7505                 jne 0xa5268d
// 00a52688  8b4004               mov eax, dword ptr [eax + 4]
// 00a5268b  eb02                 jmp 0xa5268f
// 00a5268d  8bc1                 mov eax, ecx
// 00a5268f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a52693  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a52697  50                   push eax
// 00a52698  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5269c  2bc8                 sub ecx, eax
// 00a5269e  51                   push ecx
// 00a5269f  4a                   dec edx
// 00a526a0  52                   push edx
// 00a526a1  50                   push eax
// 00a526a2  53                   push ebx
// 00a526a3  e8c8ebffff           call 0xa51270
// 00a526a8  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a526ab  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a526b1  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00a526b7  052c010000           add eax, 0x12c
// 00a526bc  83c414               add esp, 0x14
// 00a526bf  83f9ff               cmp ecx, -1
// 00a526c2  7505                 jne 0xa526c9
// 00a526c4  8b4004               mov eax, dword ptr [eax + 4]
// 00a526c7  eb02                 jmp 0xa526cb
// 00a526c9  8bc1                 mov eax, ecx
// 00a526cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a526cf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a526d3  50                   push eax
// 00a526d4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a526d8  2bc8                 sub ecx, eax
// 00a526da  51                   push ecx
// 00a526db  83c2fe               add edx, -2
// 00a526de  52                   push edx
// 00a526df  50                   push eax
// 00a526e0  53                   push ebx
// 00a526e1  e88aebffff           call 0xa51270
// 00a526e6  83c414               add esp, 0x14
// 00a526e9  8bc5                 mov eax, ebp
// 00a526eb  5f                   pop edi
// 00a526ec  5e                   pop esi
// 00a526ed  5d                   pop ebp
// 00a526ee  5b                   pop ebx
// 00a526ef  83c420               add esp, 0x20
// 00a526f2  c21c00               ret 0x1c
// 00a526f5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a526f8  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a526fe  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00a52704  0538010000           add eax, 0x138
// 00a52709  83f9ff               cmp ecx, -1
// 00a5270c  7505                 jne 0xa52713
// 00a5270e  8b4004               mov eax, dword ptr [eax + 4]
// 00a52711  eb02                 jmp 0xa52715
// 00a52713  8bc1                 mov eax, ecx
// 00a52715  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a52719  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5271d  50                   push eax
// 00a5271e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a52722  2bc8                 sub ecx, eax
// 00a52724  51                   push ecx
// 00a52725  50                   push eax
// 00a52726  4a                   dec edx
// 00a52727  52                   push edx
// 00a52728  53                   push ebx
// 00a52729  e812ebffff           call 0xa51240
// 00a5272e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a52731  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a52737  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00a5273d  052c010000           add eax, 0x12c
// 00a52742  83c414               add esp, 0x14
// 00a52745  83f9ff               cmp ecx, -1
// 00a52748  7505                 jne 0xa5274f
// 00a5274a  8b4004               mov eax, dword ptr [eax + 4]
// 00a5274d  eb02                 jmp 0xa52751
// 00a5274f  8bc1                 mov eax, ecx
// 00a52751  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a52755  83c2fe               add edx, -2
// 00a52758  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5275c  50                   push eax
// 00a5275d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a52761  2bc8                 sub ecx, eax
// 00a52763  51                   push ecx
// 00a52764  50                   push eax
// 00a52765  52                   push edx
// 00a52766  53                   push ebx
// 00a52767  e8d4eaffff           call 0xa51240
// 00a5276c  83c414               add esp, 0x14
// 00a5276f  5f                   pop edi
// 00a52770  5e                   pop esi
// 00a52771  8bc5                 mov eax, ebp
// 00a52773  5d                   pop ebp
// 00a52774  5b                   pop ebx
// 00a52775  83c420               add esp, 0x20
// 00a52778  c21c00               ret 0x1c
// 00a5277b  90                   nop 
// 00a5277c  f8                   clc 
// 00a5277d  25a5003f26           and eax, 0x263f00a5
// 00a52782  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a52783  006f26               add byte ptr [edi + 0x26], ch
// 00a52786  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a52787  00f5                 add ch, dh
// 00a52789  26a5                 movsd dword ptr es:[edi], dword ptr es:[esi]
// copied from an identical function in another client (function ?FillTabControl@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp