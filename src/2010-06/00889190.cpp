// roc 2010-06 00889190  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00889190
//
// 00889190  83ec20               sub esp, 0x20
// 00889193  53                   push ebx
// 00889194  55                   push ebp
// 00889195  56                   push esi
// 00889196  57                   push edi
// 00889197  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0088919b  8bf1                 mov esi, ecx
// 0088919d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008891a1  8b16                 mov edx, dword ptr [esi]
// 008891a3  8b5208               mov edx, dword ptr [edx + 8]
// 008891a6  57                   push edi
// 008891a7  83ec10               sub esp, 0x10
// 008891aa  8bc4                 mov eax, esp
// 008891ac  8908                 mov dword ptr [eax], ecx
// 008891ae  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008891b2  894804               mov dword ptr [eax + 4], ecx
// 008891b5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008891b9  894808               mov dword ptr [eax + 8], ecx
// 008891bc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008891c0  89480c               mov dword ptr [eax + 0xc], ecx
// 008891c3  8b442448             mov eax, dword ptr [esp + 0x48]
// 008891c7  50                   push eax
// 008891c8  8bce                 mov ecx, esi
// 008891ca  ffd2                 call edx
// 008891cc  8b07                 mov eax, dword ptr [edi]
// 008891ce  8b5048               mov edx, dword ptr [eax + 0x48]
// 008891d1  8bcf                 mov ecx, edi
// 008891d3  33db                 xor ebx, ebx
// 008891d5  33ed                 xor ebp, ebp
// 008891d7  ffd2                 call edx
// 008891d9  50                   push eax
// 008891da  83ec10               sub esp, 0x10
// 008891dd  8bc4                 mov eax, esp
// 008891df  8918                 mov dword ptr [eax], ebx
// 008891e1  896804               mov dword ptr [eax + 4], ebp
// 008891e4  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008891e8  33c9                 xor ecx, ecx
// 008891ea  894808               mov dword ptr [eax + 8], ecx
// 008891ed  b901000000           mov ecx, 1
// 008891f2  55                   push ebp
// 008891f3  89480c               mov dword ptr [eax + 0xc], ecx
// 008891f6  e865eeffff           call 0x888060
// 008891fb  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008891fe  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889204  8b5d00               mov ebx, dword ptr [ebp]
// 00889207  8b11                 mov edx, dword ptr [ecx]
// 00889209  83c418               add esp, 0x18
// 0088920c  57                   push edi
// 0088920d  83ec10               sub esp, 0x10
// 00889210  8bc4                 mov eax, esp
// 00889212  8918                 mov dword ptr [eax], ebx
// 00889214  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00889217  895804               mov dword ptr [eax + 4], ebx
// 0088921a  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0088921d  895808               mov dword ptr [eax + 8], ebx
// 00889220  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00889223  89580c               mov dword ptr [eax + 0xc], ebx
// 00889226  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0088922a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0088922d  53                   push ebx
// 0088922e  ffd0                 call eax
// 00889230  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00889234  8b16                 mov edx, dword ptr [esi]
// 00889236  8b520c               mov edx, dword ptr [edx + 0xc]
// 00889239  57                   push edi
// 0088923a  83ec10               sub esp, 0x10
// 0088923d  8bc4                 mov eax, esp
// 0088923f  8908                 mov dword ptr [eax], ecx
// 00889241  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00889245  894804               mov dword ptr [eax + 4], ecx
// 00889248  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088924c  894808               mov dword ptr [eax + 8], ecx
// 0088924f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00889253  89480c               mov dword ptr [eax + 0xc], ecx
// 00889256  8d442424             lea eax, [esp + 0x24]
// 0088925a  50                   push eax
// 0088925b  8bce                 mov ecx, esi
// 0088925d  ffd2                 call edx
// 0088925f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00889262  83783800             cmp dword ptr [eax + 0x38], 0
// 00889266  0f8526010000         jne 0x889392
// 0088926c  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889272  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00889276  8b11                 mov edx, dword ptr [ecx]
// 00889278  57                   push edi
// 00889279  83ec10               sub esp, 0x10
// 0088927c  8bc4                 mov eax, esp
// 0088927e  8928                 mov dword ptr [eax], ebp
// 00889280  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00889284  896804               mov dword ptr [eax + 4], ebp
// 00889287  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0088928b  896808               mov dword ptr [eax + 8], ebp
// 0088928e  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00889292  89680c               mov dword ptr [eax + 0xc], ebp
// 00889295  8b4210               mov eax, dword ptr [edx + 0x10]
// 00889298  53                   push ebx
// 00889299  ffd0                 call eax
// 0088929b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0088929e  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008892a4  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008892aa  83f9ff               cmp ecx, -1
// 008892ad  7506                 jne 0x8892b5
// 008892af  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 008892b5  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 008892bb  83faff               cmp edx, -1
// 008892be  7506                 jne 0x8892c6
// 008892c0  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 008892c6  8b442414             mov eax, dword ptr [esp + 0x14]
// 008892ca  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008892ce  89442424             mov dword ptr [esp + 0x24], eax
// 008892d2  8b442418             mov eax, dword ptr [esp + 0x18]
// 008892d6  89442428             mov dword ptr [esp + 0x28], eax
// 008892da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008892de  896c2420             mov dword ptr [esp + 0x20], ebp
// 008892e2  8944242c             mov dword ptr [esp + 0x2c], eax
// 008892e6  83faff               cmp edx, -1
// 008892e9  741b                 je 0x889306
// 008892eb  83f9ff               cmp ecx, -1
// 008892ee  7416                 je 0x889306
// 008892f0  51                   push ecx
// 008892f1  52                   push edx
// 008892f2  8d4c2428             lea ecx, [esp + 0x28]
// 008892f6  51                   push ecx
// 008892f7  8bcb                 mov ecx, ebx
// 008892f9  e83af4f1ff           call 0x7a8738
// 008892fe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889302  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00889306  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00889309  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 0088930f  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00889315  81c12c010000         add ecx, 0x12c
// 0088931b  83faff               cmp edx, -1
// 0088931e  7505                 jne 0x889325
// 00889320  8b4904               mov ecx, dword ptr [ecx + 4]
// 00889323  eb02                 jmp 0x889327
// 00889325  8bca                 mov ecx, edx
// 00889327  83f9ff               cmp ecx, -1
// 0088932a  741e                 je 0x88934a
// 0088932c  51                   push ecx
// 0088932d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00889331  2bcd                 sub ecx, ebp
// 00889333  6a01                 push 1
// 00889335  83e902               sub ecx, 2
// 00889338  51                   push ecx
// 00889339  83c0fe               add eax, -2
// 0088933c  50                   push eax
// 0088933d  45                   inc ebp
// 0088933e  55                   push ebp
// 0088933f  8bcb                 mov ecx, ebx
// 00889341  e8443a0f00           call 0x97cd8a
// 00889346  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088934a  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0088934d  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00889353  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00889359  81c12c010000         add ecx, 0x12c
// 0088935f  83faff               cmp edx, -1
// 00889362  7505                 jne 0x889369
// 00889364  8b4904               mov ecx, dword ptr [ecx + 4]
// 00889367  eb02                 jmp 0x88936b
// 00889369  8bca                 mov ecx, edx
// 0088936b  83f9ff               cmp ecx, -1
// 0088936e  741e                 je 0x88938e
// 00889370  51                   push ecx
// 00889371  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889375  2bc1                 sub eax, ecx
// 00889377  83e802               sub eax, 2
// 0088937a  50                   push eax
// 0088937b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088937f  6a01                 push 1
// 00889381  41                   inc ecx
// 00889382  51                   push ecx
// 00889383  83c0fe               add eax, -2
// 00889386  50                   push eax
// 00889387  8bcb                 mov ecx, ebx
// 00889389  e8fc390f00           call 0x97cd8a
// 0088938e  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00889392  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00889395  83793801             cmp dword ptr [ecx + 0x38], 1
// 00889399  0f8590010000         jne 0x88952f
// 0088939f  8b17                 mov edx, dword ptr [edi]
// 008893a1  8b4248               mov eax, dword ptr [edx + 0x48]
// 008893a4  8bcf                 mov ecx, edi
// 008893a6  ffd0                 call eax
// 008893a8  83f803               cmp eax, 3
// 008893ab  0f877e010000         ja 0x88952f
// 008893b1  ff24853c958800       jmp dword ptr [eax*4 + 0x88953c]
// 008893b8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 008893bb  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008893c1  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008893c7  0520010000           add eax, 0x120
// 008893cc  83f9ff               cmp ecx, -1
// 008893cf  7505                 jne 0x8893d6
// 008893d1  8b4004               mov eax, dword ptr [eax + 4]
// 008893d4  eb02                 jmp 0x8893d8
// 008893d6  8bc1                 mov eax, ecx
// 008893d8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008893dc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008893e0  50                   push eax
// 008893e1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008893e5  2bd0                 sub edx, eax
// 008893e7  52                   push edx
// 008893e8  51                   push ecx
// 008893e9  50                   push eax
// 008893ea  53                   push ebx
// 008893eb  e830ecffff           call 0x888020
// 008893f0  83c414               add esp, 0x14
// 008893f3  8bc5                 mov eax, ebp
// 008893f5  5f                   pop edi
// 008893f6  5e                   pop esi
// 008893f7  5d                   pop ebp
// 008893f8  5b                   pop ebx
// 008893f9  83c420               add esp, 0x20
// 008893fc  c21c00               ret 0x1c
// 008893ff  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00889402  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 00889408  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 0088940e  0520010000           add eax, 0x120
// 00889413  83f9ff               cmp ecx, -1
// 00889416  750c                 jne 0x889424
// 00889418  8b4004               mov eax, dword ptr [eax + 4]
// 0088941b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0088941f  e9f4000000           jmp 0x889518
// 00889424  8b542410             mov edx, dword ptr [esp + 0x10]
// 00889428  8bc1                 mov eax, ecx
// 0088942a  e9e9000000           jmp 0x889518
// 0088942f  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00889432  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00889438  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 0088943e  0538010000           add eax, 0x138
// 00889443  83f9ff               cmp ecx, -1
// 00889446  7505                 jne 0x88944d
// 00889448  8b4004               mov eax, dword ptr [eax + 4]
// 0088944b  eb02                 jmp 0x88944f
// 0088944d  8bc1                 mov eax, ecx
// 0088944f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889453  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889457  50                   push eax
// 00889458  8b442414             mov eax, dword ptr [esp + 0x14]
// 0088945c  2bc8                 sub ecx, eax
// 0088945e  51                   push ecx
// 0088945f  4a                   dec edx
// 00889460  52                   push edx
// 00889461  50                   push eax
// 00889462  53                   push ebx
// 00889463  e8b8ebffff           call 0x888020
// 00889468  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0088946b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00889471  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00889477  052c010000           add eax, 0x12c
// 0088947c  83c414               add esp, 0x14
// 0088947f  83f9ff               cmp ecx, -1
// 00889482  7505                 jne 0x889489
// 00889484  8b4004               mov eax, dword ptr [eax + 4]
// 00889487  eb02                 jmp 0x88948b
// 00889489  8bc1                 mov eax, ecx
// 0088948b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088948f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889493  50                   push eax
// 00889494  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889498  2bc8                 sub ecx, eax
// 0088949a  51                   push ecx
// 0088949b  83c2fe               add edx, -2
// 0088949e  52                   push edx
// 0088949f  50                   push eax
// 008894a0  53                   push ebx
// 008894a1  e87aebffff           call 0x888020
// 008894a6  83c414               add esp, 0x14
// 008894a9  8bc5                 mov eax, ebp
// 008894ab  5f                   pop edi
// 008894ac  5e                   pop esi
// 008894ad  5d                   pop ebp
// 008894ae  5b                   pop ebx
// 008894af  83c420               add esp, 0x20
// 008894b2  c21c00               ret 0x1c
// 008894b5  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008894b8  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008894be  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008894c4  0538010000           add eax, 0x138
// 008894c9  83f9ff               cmp ecx, -1
// 008894cc  7505                 jne 0x8894d3
// 008894ce  8b4004               mov eax, dword ptr [eax + 4]
// 008894d1  eb02                 jmp 0x8894d5
// 008894d3  8bc1                 mov eax, ecx
// 008894d5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008894d9  8b542418             mov edx, dword ptr [esp + 0x18]
// 008894dd  50                   push eax
// 008894de  8b442418             mov eax, dword ptr [esp + 0x18]
// 008894e2  2bc8                 sub ecx, eax
// 008894e4  51                   push ecx
// 008894e5  50                   push eax
// 008894e6  4a                   dec edx
// 008894e7  52                   push edx
// 008894e8  53                   push ebx
// 008894e9  e802ebffff           call 0x887ff0
// 008894ee  8b461c               mov eax, dword ptr [esi + 0x1c]
// 008894f1  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008894f7  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008894fd  052c010000           add eax, 0x12c
// 00889502  83c414               add esp, 0x14
// 00889505  83f9ff               cmp ecx, -1
// 00889508  7505                 jne 0x88950f
// 0088950a  8b4004               mov eax, dword ptr [eax + 4]
// 0088950d  eb02                 jmp 0x889511
// 0088950f  8bc1                 mov eax, ecx
// 00889511  8b542418             mov edx, dword ptr [esp + 0x18]
// 00889515  83c2fe               add edx, -2
// 00889518  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088951c  50                   push eax
// 0088951d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00889521  2bc8                 sub ecx, eax
// 00889523  51                   push ecx
// 00889524  50                   push eax
// 00889525  52                   push edx
// 00889526  53                   push ebx
// 00889527  e8c4eaffff           call 0x887ff0
// 0088952c  83c414               add esp, 0x14
// 0088952f  5f                   pop edi
// 00889530  5e                   pop esi
// 00889531  8bc5                 mov eax, ebp
// 00889533  5d                   pop ebp
// 00889534  5b                   pop ebx
// 00889535  83c420               add esp, 0x20
// 00889538  c21c00               ret 0x1c
// 0088953b  90                   nop 
// 0088953c  b8938800ff           mov eax, 0xff008893
// 00889541  93                   xchg ebx, eax
// 00889542  8800                 mov byte ptr [eax], al
// 00889544  2f                   das 
// 00889545  94                   xchg esp, eax
// 00889546  8800                 mov byte ptr [eax], al
// 00889548  b594                 mov ch, 0x94
// 0088954a  8800                 mov byte ptr [eax], al
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
