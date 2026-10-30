// roc 2012-06 00a26670  unit: CXTPReportPaintManager  size: 1759 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a26670
//
// 00a26670  6aff                 push -1
// 00a26672  68b149ae00           push 0xae49b1
// 00a26677  64a100000000         mov eax, dword ptr fs:[0]
// 00a2667d  50                   push eax
// 00a2667e  83ec64               sub esp, 0x64
// 00a26681  53                   push ebx
// 00a26682  55                   push ebp
// 00a26683  56                   push esi
// 00a26684  57                   push edi
// 00a26685  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2668a  33c4                 xor eax, esp
// 00a2668c  50                   push eax
// 00a2668d  8d442478             lea eax, [esp + 0x78]
// 00a26691  64a300000000         mov dword ptr fs:[0], eax
// 00a26697  8bf9                 mov edi, ecx
// 00a26699  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00a266a0  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00a266a7  85f6                 test esi, esi
// 00a266a9  7431                 je 0xa266dc
// 00a266ab  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a266b2  e8a91cf8ff           call 0x9a8360
// 00a266b7  85c0                 test eax, eax
// 00a266b9  7421                 je 0xa266dc
// 00a266bb  83bc249400000000     cmp dword ptr [esp + 0x94], 0
// 00a266c3  7517                 jne 0xa266dc
// 00a266c5  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 00a266cd  750d                 jne 0xa266dc
// 00a266cf  837d4000             cmp dword ptr [ebp + 0x40], 0
// 00a266d3  7407                 je 0xa266dc
// 00a266d5  b801000000           mov eax, 1
// 00a266da  eb02                 jmp 0xa266de
// 00a266dc  33c0                 xor eax, eax
// 00a266de  85f6                 test esi, esi
// 00a266e0  7412                 je 0xa266f4
// 00a266e2  85c0                 test eax, eax
// 00a266e4  750e                 jne 0xa266f4
// 00a266e6  bb01000000           mov ebx, 1
// 00a266eb  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 00a266f2  eb12                 jmp 0xa26706
// 00a266f4  c784249000000000000000 mov dword ptr [esp + 0x90], 0
// 00a266ff  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00a26706  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a2670d  e84e1cf8ff           call 0x9a8360
// 00a26712  85c0                 test eax, eax
// 00a26714  7411                 je 0xa26727
// 00a26716  85f6                 test esi, esi
// 00a26718  750d                 jne 0xa26727
// 00a2671a  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00a26722  397540               cmp dword ptr [ebp + 0x40], esi
// 00a26725  7508                 jne 0xa2672f
// 00a26727  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00a2672f  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a26736  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00a2673d  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00a26744  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00a2674b  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00a2674f  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00a26752  89542450             mov dword ptr [esp + 0x50], edx
// 00a26756  89442448             mov dword ptr [esp + 0x48], eax
// 00a2675a  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a26761  8d9424a4000000       lea edx, [esp + 0xa4]
// 00a26768  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a2676c  52                   push edx
// 00a2676d  8bcd                 mov ecx, ebp
// 00a2676f  89442458             mov dword ptr [esp + 0x58], eax
// 00a26773  e888daf8ff           call 0x9b4200
// 00a26778  33c0                 xor eax, eax
// 00a2677a  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a26781  3bd8                 cmp ebx, eax
// 00a26783  0f8511020000         jne 0xa2699a
// 00a26789  3987bc020000         cmp dword ptr [edi + 0x2bc], eax
// 00a2678f  0f8505020000         jne 0xa2699a
// 00a26795  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00a2679d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a267a4  8b17                 mov edx, dword ptr [edi]
// 00a267a6  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00a267ad  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 00a267b3  8d44241c             lea eax, [esp + 0x1c]
// 00a267b7  50                   push eax
// 00a267b8  83ec10               sub esp, 0x10
// 00a267bb  8bc4                 mov eax, esp
// 00a267bd  8908                 mov dword ptr [eax], ecx
// 00a267bf  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00a267c6  894804               mov dword ptr [eax + 4], ecx
// 00a267c9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a267d0  894808               mov dword ptr [eax + 8], ecx
// 00a267d3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a267da  55                   push ebp
// 00a267db  89480c               mov dword ptr [eax + 0xc], ecx
// 00a267de  56                   push esi
// 00a267df  8bcf                 mov ecx, edi
// 00a267e1  ffd2                 call edx
// 00a267e3  8b4778               mov eax, dword ptr [edi + 0x78]
// 00a267e6  83f8ff               cmp eax, -1
// 00a267e9  7503                 jne 0xa267ee
// 00a267eb  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a267ee  8b16                 mov edx, dword ptr [esi]
// 00a267f0  50                   push eax
// 00a267f1  8b4234               mov eax, dword ptr [edx + 0x34]
// 00a267f4  8bce                 mov ecx, esi
// 00a267f6  ffd0                 call eax
// 00a267f8  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00a267ff  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a26806  83c9ff               or ecx, 0xffffffff
// 00a26809  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00a2680d  89542438             mov dword ptr [esp + 0x38], edx
// 00a26811  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00a26818  03c1                 add eax, ecx
// 00a2681a  83bda800000000       cmp dword ptr [ebp + 0xa8], 0
// 00a26821  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a26828  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00a2682f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a26833  89542440             mov dword ptr [esp + 0x40], edx
// 00a26837  89442444             mov dword ptr [esp + 0x44], eax
// 00a2683b  750f                 jne 0xa2684c
// 00a2683d  85db                 test ebx, ebx
// 00a2683f  750b                 jne 0xa2684c
// 00a26841  8bcd                 mov ecx, ebp
// 00a26843  e8181ef8ff           call 0x9a8660
// 00a26848  01442438             add dword ptr [esp + 0x38], eax
// 00a2684c  8bcd                 mov ecx, ebp
// 00a2684e  e8cd1af8ff           call 0x9a8320
// 00a26853  85c0                 test eax, eax
// 00a26855  7411                 je 0xa26868
// 00a26857  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00a2685b  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 00a26866  740b                 je 0xa26873
// 00a26868  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00a26873  8d4730               lea eax, [edi + 0x30]
// 00a26876  50                   push eax
// 00a26877  56                   push esi
// 00a26878  8d4c2470             lea ecx, [esp + 0x70]
// 00a2687c  e8afecfaff           call 0x9d5530
// 00a26881  8d4c2428             lea ecx, [esp + 0x28]
// 00a26885  51                   push ecx
// 00a26886  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00a2688d  c684248400000001     mov byte ptr [esp + 0x84], 1
// 00a26895  ff155846b200         call dword ptr [0xb24658]
// 00a2689b  50                   push eax
// 00a2689c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a268a3  ff159847b200         call dword ptr [0xb24798]
// 00a268a9  8b5608               mov edx, dword ptr [esi + 8]
// 00a268ac  50                   push eax
// 00a268ad  52                   push edx
// 00a268ae  ff154021b200         call dword ptr [0xb22140]
// 00a268b4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a268b8  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a268bc  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a268c3  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a268c7  89442424             mov dword ptr [esp + 0x24], eax
// 00a268cb  e8b018f8ff           call 0x9a8180
// 00a268d0  85c0                 test eax, eax
// 00a268d2  0f84c2010000         je 0xa26a9a
// 00a268d8  85db                 test ebx, ebx
// 00a268da  0f85ba010000         jne 0xa26a9a
// 00a268e0  83c506               add ebp, 6
// 00a268e3  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 00a268e8  744b                 je 0xa26935
// 00a268ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a268ee  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a268f2  8b1f                 mov ebx, dword ptr [edi]
// 00a268f4  51                   push ecx
// 00a268f5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a268f9  83ec10               sub esp, 0x10
// 00a268fc  8bc4                 mov eax, esp
// 00a268fe  8910                 mov dword ptr [eax], edx
// 00a26900  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a26904  894804               mov dword ptr [eax + 4], ecx
// 00a26907  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a2690b  895008               mov dword ptr [eax + 8], edx
// 00a2690e  89480c               mov dword ptr [eax + 0xc], ecx
// 00a26911  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a26918  e8b31af8ff           call 0x9a83d0
// 00a2691d  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 00a26923  50                   push eax
// 00a26924  6a00                 push 0
// 00a26926  8bcf                 mov ecx, edi
// 00a26928  ffd2                 call edx
// 00a2692a  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00a26931  8d6c2802             lea ebp, [eax + ebp + 2]
// 00a26935  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00a2693d  7403                 je 0xa26942
// 00a2693f  83c51b               add ebp, 0x1b
// 00a26942  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a26946  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a2694a  2bc8                 sub ecx, eax
// 00a2694c  3bcd                 cmp ecx, ebp
// 00a2694e  0f8e4a010000         jle 0xa26a9e
// 00a26954  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a2695b  e82018f8ff           call 0x9a8180
// 00a26960  a802                 test al, 2
// 00a26962  740a                 je 0xa2696e
// 00a26964  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a26968  2bd5                 sub edx, ebp
// 00a2696a  89542438             mov dword ptr [esp + 0x38], edx
// 00a2696e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a26975  e80618f8ff           call 0x9a8180
// 00a2697a  a801                 test al, 1
// 00a2697c  0f8418010000         je 0xa26a9a
// 00a26982  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a26986  2bc5                 sub eax, ebp
// 00a26988  03442438             add eax, dword ptr [esp + 0x38]
// 00a2698c  99                   cdq 
// 00a2698d  2bc2                 sub eax, edx
// 00a2698f  d1f8                 sar eax, 1
// 00a26991  89442438             mov dword ptr [esp + 0x38], eax
// 00a26995  e904010000           jmp 0xa26a9e
// 00a2699a  89442418             mov dword ptr [esp + 0x18], eax
// 00a2699e  3bd8                 cmp ebx, eax
// 00a269a0  0f84f7fdffff         je 0xa2679d
// 00a269a6  83bfbc02000004       cmp dword ptr [edi + 0x2bc], 4
// 00a269ad  755d                 jne 0xa26a0c
// 00a269af  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00a269b6  50                   push eax
// 00a269b7  50                   push eax
// 00a269b8  8d8754010000         lea eax, [edi + 0x154]
// 00a269be  50                   push eax
// 00a269bf  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00a269c6  51                   push ecx
// 00a269c7  56                   push esi
// 00a269c8  e8c307fbff           call 0x9d7190
// 00a269cd  8bc8                 mov ecx, eax
// 00a269cf  e8dc0afbff           call 0x9d74b0
// 00a269d4  8b87bc010000         mov eax, dword ptr [edi + 0x1bc]
// 00a269da  83f8ff               cmp eax, -1
// 00a269dd  7506                 jne 0xa269e5
// 00a269df  8b87b8010000         mov eax, dword ptr [edi + 0x1b8]
// 00a269e5  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 00a269eb  83f9ff               cmp ecx, -1
// 00a269ee  7506                 jne 0xa269f6
// 00a269f0  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 00a269f6  50                   push eax
// 00a269f7  51                   push ecx
// 00a269f8  8d94249c000000       lea edx, [esp + 0x9c]
// 00a269ff  52                   push edx
// 00a26a00  8bce                 mov ecx, esi
// 00a26a02  e89fc4f5ff           call 0x982ea6
// 00a26a07  e9d7fdffff           jmp 0xa267e3
// 00a26a0c  8b87d8000000         mov eax, dword ptr [edi + 0xd8]
// 00a26a12  83f8ff               cmp eax, -1
// 00a26a15  7508                 jne 0xa26a1f
// 00a26a17  8b8fd4000000         mov ecx, dword ptr [edi + 0xd4]
// 00a26a1d  eb02                 jmp 0xa26a21
// 00a26a1f  8bc8                 mov ecx, eax
// 00a26a21  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 00a26a27  83f8ff               cmp eax, -1
// 00a26a2a  7506                 jne 0xa26a32
// 00a26a2c  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00a26a32  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 00a26a39  51                   push ecx
// 00a26a3a  50                   push eax
// 00a26a3b  8d84249c000000       lea eax, [esp + 0x9c]
// 00a26a42  50                   push eax
// 00a26a43  8bce                 mov ecx, esi
// 00a26a45  e85cc4f5ff           call 0x982ea6
// 00a26a4a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a26a51  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a26a58  51                   push ecx
// 00a26a59  52                   push edx
// 00a26a5a  8d442430             lea eax, [esp + 0x30]
// 00a26a5e  50                   push eax
// 00a26a5f  8bce                 mov ecx, esi
// 00a26a61  e89cc5f5ff           call 0x983002
// 00a26a66  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a26a6d  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00a26a74  51                   push ecx
// 00a26a75  52                   push edx
// 00a26a76  8bce                 mov ecx, esi
// 00a26a78  e87fc5f5ff           call 0x982ffc
// 00a26a7d  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a26a84  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a26a8b  48                   dec eax
// 00a26a8c  50                   push eax
// 00a26a8d  51                   push ecx
// 00a26a8e  8bce                 mov ecx, esi
// 00a26a90  e867c5f5ff           call 0x982ffc
// 00a26a95  e949fdffff           jmp 0xa267e3
// 00a26a9a  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a26a9e  837c2414ff           cmp dword ptr [esp + 0x14], -1
// 00a26aa3  0f8481000000         je 0xa26b2a
// 00a26aa9  85db                 test ebx, ebx
// 00a26aab  757d                 jne 0xa26b2a
// 00a26aad  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a26ab1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a26ab5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00a26ab9  8bc8                 mov ecx, eax
// 00a26abb  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a26abf  89442464             mov dword ptr [esp + 0x64], eax
// 00a26ac3  03c3                 add eax, ebx
// 00a26ac5  8b1f                 mov ebx, dword ptr [edi]
// 00a26ac7  89442464             mov dword ptr [esp + 0x64], eax
// 00a26acb  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a26acf  50                   push eax
// 00a26ad0  83ec10               sub esp, 0x10
// 00a26ad3  8bc4                 mov eax, esp
// 00a26ad5  8908                 mov dword ptr [eax], ecx
// 00a26ad7  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a26adb  895004               mov dword ptr [eax + 4], edx
// 00a26ade  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a26ae2  896808               mov dword ptr [eax + 8], ebp
// 00a26ae5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a26ae8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a26aec  83ec10               sub esp, 0x10
// 00a26aef  8bc4                 mov eax, esp
// 00a26af1  8910                 mov dword ptr [eax], edx
// 00a26af3  8b542474             mov edx, dword ptr [esp + 0x74]
// 00a26af7  894804               mov dword ptr [eax + 4], ecx
// 00a26afa  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a26afe  895008               mov dword ptr [eax + 8], edx
// 00a26b01  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00a26b08  89480c               mov dword ptr [eax + 0xc], ecx
// 00a26b0b  8b83ac000000         mov eax, dword ptr [ebx + 0xac]
// 00a26b11  52                   push edx
// 00a26b12  56                   push esi
// 00a26b13  8bcf                 mov ecx, edi
// 00a26b15  ffd0                 call eax
// 00a26b17  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a26b1b  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00a26b22  8d540102             lea edx, [ecx + eax + 2]
// 00a26b26  89542438             mov dword ptr [esp + 0x38], edx
// 00a26b2a  6a01                 push 1
// 00a26b2c  8bce                 mov ecx, esi
// 00a26b2e  e8752a0700           call 0xa995a8
// 00a26b33  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a26b37  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a26b3b  83e903               sub ecx, 3
// 00a26b3e  83c003               add eax, 3
// 00a26b41  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a26b45  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a26b49  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a26b4d  8be8                 mov ebp, eax
// 00a26b4f  89442438             mov dword ptr [esp + 0x38], eax
// 00a26b53  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a26b57  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a26b5b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00a26b62  896c2448             mov dword ptr [esp + 0x48], ebp
// 00a26b66  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a26b6a  ff155846b200         call dword ptr [0xb24658]
// 00a26b70  85c0                 test eax, eax
// 00a26b72  0f8e2f010000         jle 0xa26ca7
// 00a26b78  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a26b7c  3b542438             cmp edx, dword ptr [esp + 0x38]
// 00a26b80  0f8e21010000         jle 0xa26ca7
// 00a26b86  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00a26b8c  83f8ff               cmp eax, -1
// 00a26b8f  7506                 jne 0xa26b97
// 00a26b91  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00a26b97  8b16                 mov edx, dword ptr [esi]
// 00a26b99  50                   push eax
// 00a26b9a  8b4238               mov eax, dword ptr [edx + 0x38]
// 00a26b9d  8bce                 mov ecx, esi
// 00a26b9f  ffd0                 call eax
// 00a26ba1  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 00a26ba8  744c                 je 0xa26bf6
// 00a26baa  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00a26bb2  7442                 je 0xa26bf6
// 00a26bb4  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00a26bb8  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00a26bbc  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a26bc0  8bcb                 mov ecx, ebx
// 00a26bc2  2bcd                 sub ecx, ebp
// 00a26bc4  8d41e5               lea eax, [ecx - 0x1b]
// 00a26bc7  3bd0                 cmp edx, eax
// 00a26bc9  8bca                 mov ecx, edx
// 00a26bcb  7c02                 jl 0xa26bcf
// 00a26bcd  8bc8                 mov ecx, eax
// 00a26bcf  83f9fb               cmp ecx, -5
// 00a26bd2  7d0a                 jge 0xa26bde
// 00a26bd4  c7442420fbffffff     mov dword ptr [esp + 0x20], 0xfffffffb
// 00a26bdc  eb08                 jmp 0xa26be6
// 00a26bde  3bd0                 cmp edx, eax
// 00a26be0  7c04                 jl 0xa26be6
// 00a26be2  89442420             mov dword ptr [esp + 0x20], eax
// 00a26be6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a26bea  8d442a08             lea eax, [edx + ebp + 8]
// 00a26bee  3bd8                 cmp ebx, eax
// 00a26bf0  7c04                 jl 0xa26bf6
// 00a26bf2  89442440             mov dword ptr [esp + 0x40], eax
// 00a26bf6  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a26bfd  e87e15f8ff           call 0x9a8180
// 00a26c02  a810                 test al, 0x10
// 00a26c04  745e                 je 0xa26c64
// 00a26c06  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a26c0a  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a26c0e  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a26c12  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a26c16  68108c0000           push 0x8c10
// 00a26c1b  8d4c242c             lea ecx, [esp + 0x2c]
// 00a26c1f  89542434             mov dword ptr [esp + 0x34], edx
// 00a26c23  51                   push ecx
// 00a26c24  89442430             mov dword ptr [esp + 0x30], eax
// 00a26c28  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a26c2c  8d9424ac000000       lea edx, [esp + 0xac]
// 00a26c33  52                   push edx
// 00a26c34  8bce                 mov ecx, esi
// 00a26c36  bb10880000           mov ebx, 0x8810
// 00a26c3b  89442440             mov dword ptr [esp + 0x40], eax
// 00a26c3f  e88c17f6ff           call 0x9883d0
// 00a26c44  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a26c48  2b442434             sub eax, dword ptr [esp + 0x34]
// 00a26c4c  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00a26c50  03442444             add eax, dword ptr [esp + 0x44]
// 00a26c54  83f801               cmp eax, 1
// 00a26c57  7e10                 jle 0xa26c69
// 00a26c59  99                   cdq 
// 00a26c5a  2bc2                 sub eax, edx
// 00a26c5c  d1f8                 sar eax, 1
// 00a26c5e  0144243c             add dword ptr [esp + 0x3c], eax
// 00a26c62  eb05                 jmp 0xa26c69
// 00a26c64  bb24880000           mov ebx, 0x8824
// 00a26c69  8b2e                 mov ebp, dword ptr [esi]
// 00a26c6b  53                   push ebx
// 00a26c6c  8d44243c             lea eax, [esp + 0x3c]
// 00a26c70  50                   push eax
// 00a26c71  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00a26c78  ff155846b200         call dword ptr [0xb24658]
// 00a26c7e  50                   push eax
// 00a26c7f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00a26c86  ff159847b200         call dword ptr [0xb24798]
// 00a26c8c  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00a26c8f  50                   push eax
// 00a26c90  8bce                 mov ecx, esi
// 00a26c92  ffd2                 call edx
// 00a26c94  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a26c98  01442448             add dword ptr [esp + 0x48], eax
// 00a26c9c  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 00a26ca3  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00a26ca7  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00a26caf  743d                 je 0xa26cee
// 00a26cb1  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a26cb8  f7db                 neg ebx
// 00a26cba  1bdb                 sbb ebx, ebx
// 00a26cbc  83e307               and ebx, 7
// 00a26cbf  83c30a               add ebx, 0xa
// 00a26cc2  03eb                 add ebp, ebx
// 00a26cc4  e86715f8ff           call 0x9a8230
// 00a26cc9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a26ccd  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a26cd1  50                   push eax
// 00a26cd2  83ec10               sub esp, 0x10
// 00a26cd5  8bc4                 mov eax, esp
// 00a26cd7  8928                 mov dword ptr [eax], ebp
// 00a26cd9  894804               mov dword ptr [eax + 4], ecx
// 00a26cdc  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a26ce0  895008               mov dword ptr [eax + 8], edx
// 00a26ce3  89480c               mov dword ptr [eax + 0xc], ecx
// 00a26ce6  56                   push esi
// 00a26ce7  8bcf                 mov ecx, edi
// 00a26ce9  e842e4ffff           call 0xa25130
// 00a26cee  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a26cf3  7426                 je 0xa26d1b
// 00a26cf5  83bf1002000000       cmp dword ptr [edi + 0x210], 0
// 00a26cfc  741d                 je 0xa26d1b
// 00a26cfe  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a26d01  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a26d05  019424a0000000       add dword ptr [esp + 0xa0], edx
// 00a26d0c  8d842494000000       lea eax, [esp + 0x94]
// 00a26d13  50                   push eax
// 00a26d14  51                   push ecx
// 00a26d15  ff15c03cb200         call dword ptr [0xb23cc0]
// 00a26d1b  8d4c2468             lea ecx, [esp + 0x68]
// 00a26d1f  c684248000000000     mov byte ptr [esp + 0x80], 0
// 00a26d27  e884e8faff           call 0x9d55b0
// 00a26d2c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00a26d33  ff15d047b200         call dword ptr [0xb247d0]
// 00a26d39  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a26d3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00a26d44  59                   pop ecx
// 00a26d45  5f                   pop edi
// 00a26d46  5e                   pop esi
// 00a26d47  5d                   pop ebp
// 00a26d48  5b                   pop ebx
// 00a26d49  83c470               add esp, 0x70
// 00a26d4c  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawColumn@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp