// roc 2009-12 008bf7b0  unit: CXTPDockingPaneContext  size: 897 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bf7b0
//
// 008bf7b0  83ec44               sub esp, 0x44
// 008bf7b3  53                   push ebx
// 008bf7b4  55                   push ebp
// 008bf7b5  56                   push esi
// 008bf7b6  57                   push edi
// 008bf7b7  8bf1                 mov esi, ecx
// 008bf7b9  8dbeb8000000         lea edi, [esi + 0xb8]
// 008bf7bf  57                   push edi
// 008bf7c0  ff1568cc9800         call dword ptr [0x98cc68]
// 008bf7c6  8bce                 mov ecx, esi
// 008bf7c8  85c0                 test eax, eax
// 008bf7ca  7417                 je 0x8bf7e3
// 008bf7cc  c786cc00000000000000 mov dword ptr [esi + 0xcc], 0
// 008bf7d6  e8a5f4ffff           call 0x8bec80
// 008bf7db  5f                   pop edi
// 008bf7dc  5e                   pop esi
// 008bf7dd  5d                   pop ebp
// 008bf7de  5b                   pop ebx
// 008bf7df  83c444               add esp, 0x44
// 008bf7e2  c3                   ret 
// 008bf7e3  6a20                 push 0x20
// 008bf7e5  8d442418             lea eax, [esp + 0x18]
// 008bf7e9  50                   push eax
// 008bf7ea  e8a1dfffff           call 0x8bd790
// 008bf7ef  8b4708               mov eax, dword ptr [edi + 8]
// 008bf7f2  0307                 add eax, dword ptr [edi]
// 008bf7f4  99                   cdq 
// 008bf7f5  2bc2                 sub eax, edx
// 008bf7f7  8bc8                 mov ecx, eax
// 008bf7f9  8b470c               mov eax, dword ptr [edi + 0xc]
// 008bf7fc  034704               add eax, dword ptr [edi + 4]
// 008bf7ff  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008bf803  99                   cdq 
// 008bf804  2bc2                 sub eax, edx
// 008bf806  d1f8                 sar eax, 1
// 008bf808  d1f9                 sar ecx, 1
// 008bf80a  89442448             mov dword ptr [esp + 0x48], eax
// 008bf80e  894c2444             mov dword ptr [esp + 0x44], ecx
// 008bf812  03cf                 add ecx, edi
// 008bf814  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008bf818  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bf81c  03c1                 add eax, ecx
// 008bf81e  89442450             mov dword ptr [esp + 0x50], eax
// 008bf822  8bc1                 mov eax, ecx
// 008bf824  99                   cdq 
// 008bf825  2bc2                 sub eax, edx
// 008bf827  d1f8                 sar eax, 1
// 008bf829  f7d8                 neg eax
// 008bf82b  50                   push eax
// 008bf82c  8bc7                 mov eax, edi
// 008bf82e  99                   cdq 
// 008bf82f  2bc2                 sub eax, edx
// 008bf831  d1f8                 sar eax, 1
// 008bf833  f7d8                 neg eax
// 008bf835  50                   push eax
// 008bf836  8d4c244c             lea ecx, [esp + 0x4c]
// 008bf83a  51                   push ecx
// 008bf83b  ff156ccc9800         call dword ptr [0x98cc6c]
// 008bf841  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008bf847  3b96c8000000         cmp edx, dword ptr [esi + 0xc8]
// 008bf84d  750d                 jne 0x8bf85c
// 008bf84f  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 008bf856  0f85cd020000         jne 0x8bfb29
// 008bf85c  8bce                 mov ecx, esi
// 008bf85e  e81df4ffff           call 0x8bec80
// 008bf863  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008bf869  85c0                 test eax, eax
// 008bf86b  0f84a8000000         je 0x8bf919
// 008bf871  33ff                 xor edi, edi
// 008bf873  57                   push edi
// 008bf874  50                   push eax
// 008bf875  8bce                 mov ecx, esi
// 008bf877  e804eeffff           call 0x8be680
// 008bf87c  85c0                 test eax, eax
// 008bf87e  7405                 je 0x8bf885
// 008bf880  bf01000000           mov edi, 1
// 008bf885  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008bf88b  6a01                 push 1
// 008bf88d  50                   push eax
// 008bf88e  8bce                 mov ecx, esi
// 008bf890  e8ebedffff           call 0x8be680
// 008bf895  85c0                 test eax, eax
// 008bf897  7403                 je 0x8bf89c
// 008bf899  83c702               add edi, 2
// 008bf89c  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008bf8a2  6a03                 push 3
// 008bf8a4  51                   push ecx
// 008bf8a5  8bce                 mov ecx, esi
// 008bf8a7  e8d4edffff           call 0x8be680
// 008bf8ac  85c0                 test eax, eax
// 008bf8ae  7403                 je 0x8bf8b3
// 008bf8b0  83c708               add edi, 8
// 008bf8b3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008bf8b9  6a02                 push 2
// 008bf8bb  52                   push edx
// 008bf8bc  8bce                 mov ecx, esi
// 008bf8be  e8bdedffff           call 0x8be680
// 008bf8c3  85c0                 test eax, eax
// 008bf8c5  7403                 je 0x8bf8ca
// 008bf8c7  83c704               add edi, 4
// 008bf8ca  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf8d0  8b9ec8000000         mov ebx, dword ptr [esi + 0xc8]
// 008bf8d6  e8b58df7ff           call 0x838690
// 008bf8db  3bd8                 cmp ebx, eax
// 008bf8dd  740f                 je 0x8bf8ee
// 008bf8df  53                   push ebx
// 008bf8e0  8bce                 mov ecx, esi
// 008bf8e2  e869eeffff           call 0x8be750
// 008bf8e7  85c0                 test eax, eax
// 008bf8e9  8d4730               lea eax, [edi + 0x30]
// 008bf8ec  7503                 jne 0x8bf8f1
// 008bf8ee  8d4720               lea eax, [edi + 0x20]
// 008bf8f1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008bf8f5  8b542448             mov edx, dword ptr [esp + 0x48]
// 008bf8f9  50                   push eax
// 008bf8fa  83ec10               sub esp, 0x10
// 008bf8fd  8bc4                 mov eax, esp
// 008bf8ff  8908                 mov dword ptr [eax], ecx
// 008bf901  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008bf905  895004               mov dword ptr [eax + 4], edx
// 008bf908  8b542464             mov edx, dword ptr [esp + 0x64]
// 008bf90c  894808               mov dword ptr [eax + 8], ecx
// 008bf90f  8bce                 mov ecx, esi
// 008bf911  89500c               mov dword ptr [eax + 0xc], edx
// 008bf914  e807fcffff           call 0x8bf520
// 008bf919  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bf91f  e88c8df7ff           call 0x8386b0
// 008bf924  8bf8                 mov edi, eax
// 008bf926  8d442434             lea eax, [esp + 0x34]
// 008bf92a  50                   push eax
// 008bf92b  8bcf                 mov ecx, edi
// 008bf92d  897c2414             mov dword ptr [esp + 0x14], edi
// 008bf931  e86a0effff           call 0x8b07a0
// 008bf936  6a02                 push 2
// 008bf938  57                   push edi
// 008bf939  8bce                 mov ecx, esi
// 008bf93b  e840edffff           call 0x8be680
// 008bf940  85c0                 test eax, eax
// 008bf942  7464                 je 0x8bf9a8
// 008bf944  6a04                 push 4
// 008bf946  8d4c2418             lea ecx, [esp + 0x18]
// 008bf94a  51                   push ecx
// 008bf94b  8bce                 mov ecx, esi
// 008bf94d  e83edeffff           call 0x8bd790
// 008bf952  8b38                 mov edi, dword ptr [eax]
// 008bf954  8b5804               mov ebx, dword ptr [eax + 4]
// 008bf957  6a04                 push 4
// 008bf959  8d542420             lea edx, [esp + 0x20]
// 008bf95d  52                   push edx
// 008bf95e  e82ddeffff           call 0x8bd790
// 008bf963  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bf967  8be8                 mov ebp, eax
// 008bf969  8b442434             mov eax, dword ptr [esp + 0x34]
// 008bf96d  03c1                 add eax, ecx
// 008bf96f  99                   cdq 
// 008bf970  2bc2                 sub eax, edx
// 008bf972  8bc8                 mov ecx, eax
// 008bf974  8b4500               mov eax, dword ptr [ebp]
// 008bf977  99                   cdq 
// 008bf978  2bc2                 sub eax, edx
// 008bf97a  8b542438             mov edx, dword ptr [esp + 0x38]
// 008bf97e  d1f9                 sar ecx, 1
// 008bf980  d1f8                 sar eax, 1
// 008bf982  2bc8                 sub ecx, eax
// 008bf984  6a04                 push 4
// 008bf986  83ec10               sub esp, 0x10
// 008bf989  8bc4                 mov eax, esp
// 008bf98b  8908                 mov dword ptr [eax], ecx
// 008bf98d  83c210               add edx, 0x10
// 008bf990  03f9                 add edi, ecx
// 008bf992  895004               mov dword ptr [eax + 4], edx
// 008bf995  03da                 add ebx, edx
// 008bf997  897808               mov dword ptr [eax + 8], edi
// 008bf99a  8bce                 mov ecx, esi
// 008bf99c  89580c               mov dword ptr [eax + 0xc], ebx
// 008bf99f  e87cfbffff           call 0x8bf520
// 008bf9a4  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008bf9a8  6a00                 push 0
// 008bf9aa  57                   push edi
// 008bf9ab  8bce                 mov ecx, esi
// 008bf9ad  e8ceecffff           call 0x8be680
// 008bf9b2  85c0                 test eax, eax
// 008bf9b4  7462                 je 0x8bfa18
// 008bf9b6  6a01                 push 1
// 008bf9b8  8d542420             lea edx, [esp + 0x20]
// 008bf9bc  52                   push edx
// 008bf9bd  8bce                 mov ecx, esi
// 008bf9bf  e8ccddffff           call 0x8bd790
// 008bf9c4  8b18                 mov ebx, dword ptr [eax]
// 008bf9c6  8b6804               mov ebp, dword ptr [eax + 4]
// 008bf9c9  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008bf9cd  6a01                 push 1
// 008bf9cf  8d442418             lea eax, [esp + 0x18]
// 008bf9d3  50                   push eax
// 008bf9d4  83c710               add edi, 0x10
// 008bf9d7  e8b4ddffff           call 0x8bd790
// 008bf9dc  8b4004               mov eax, dword ptr [eax + 4]
// 008bf9df  99                   cdq 
// 008bf9e0  2bc2                 sub eax, edx
// 008bf9e2  8b542438             mov edx, dword ptr [esp + 0x38]
// 008bf9e6  8bc8                 mov ecx, eax
// 008bf9e8  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bf9ec  03c2                 add eax, edx
// 008bf9ee  99                   cdq 
// 008bf9ef  2bc2                 sub eax, edx
// 008bf9f1  d1f9                 sar ecx, 1
// 008bf9f3  6a01                 push 1
// 008bf9f5  d1f8                 sar eax, 1
// 008bf9f7  2bc1                 sub eax, ecx
// 008bf9f9  83ec10               sub esp, 0x10
// 008bf9fc  8bcc                 mov ecx, esp
// 008bf9fe  8939                 mov dword ptr [ecx], edi
// 008bfa00  894104               mov dword ptr [ecx + 4], eax
// 008bfa03  03df                 add ebx, edi
// 008bfa05  03e8                 add ebp, eax
// 008bfa07  895908               mov dword ptr [ecx + 8], ebx
// 008bfa0a  89690c               mov dword ptr [ecx + 0xc], ebp
// 008bfa0d  8bce                 mov ecx, esi
// 008bfa0f  e80cfbffff           call 0x8bf520
// 008bfa14  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008bfa18  6a03                 push 3
// 008bfa1a  57                   push edi
// 008bfa1b  8bce                 mov ecx, esi
// 008bfa1d  e85eecffff           call 0x8be680
// 008bfa22  85c0                 test eax, eax
// 008bfa24  7479                 je 0x8bfa9f
// 008bfa26  6a08                 push 8
// 008bfa28  8d4c2420             lea ecx, [esp + 0x20]
// 008bfa2c  51                   push ecx
// 008bfa2d  8bce                 mov ecx, esi
// 008bfa2f  e85cddffff           call 0x8bd790
// 008bfa34  8b18                 mov ebx, dword ptr [eax]
// 008bfa36  8b6804               mov ebp, dword ptr [eax + 4]
// 008bfa39  6a08                 push 8
// 008bfa3b  8d542428             lea edx, [esp + 0x28]
// 008bfa3f  52                   push edx
// 008bfa40  e84bddffff           call 0x8bd790
// 008bfa45  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008bfa49  2b7804               sub edi, dword ptr [eax + 4]
// 008bfa4c  6a08                 push 8
// 008bfa4e  8d442430             lea eax, [esp + 0x30]
// 008bfa52  50                   push eax
// 008bfa53  83ef10               sub edi, 0x10
// 008bfa56  e835ddffff           call 0x8bd790
// 008bfa5b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008bfa5f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008bfa63  89442414             mov dword ptr [esp + 0x14], eax
// 008bfa67  8d040a               lea eax, [edx + ecx]
// 008bfa6a  99                   cdq 
// 008bfa6b  2bc2                 sub eax, edx
// 008bfa6d  8bc8                 mov ecx, eax
// 008bfa6f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008bfa73  8b00                 mov eax, dword ptr [eax]
// 008bfa75  99                   cdq 
// 008bfa76  2bc2                 sub eax, edx
// 008bfa78  d1f9                 sar ecx, 1
// 008bfa7a  d1f8                 sar eax, 1
// 008bfa7c  2bc8                 sub ecx, eax
// 008bfa7e  6a08                 push 8
// 008bfa80  83ec10               sub esp, 0x10
// 008bfa83  8bc4                 mov eax, esp
// 008bfa85  8908                 mov dword ptr [eax], ecx
// 008bfa87  03d9                 add ebx, ecx
// 008bfa89  897804               mov dword ptr [eax + 4], edi
// 008bfa8c  03ef                 add ebp, edi
// 008bfa8e  895808               mov dword ptr [eax + 8], ebx
// 008bfa91  8bce                 mov ecx, esi
// 008bfa93  89680c               mov dword ptr [eax + 0xc], ebp
// 008bfa96  e885faffff           call 0x8bf520
// 008bfa9b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008bfa9f  6a01                 push 1
// 008bfaa1  57                   push edi
// 008bfaa2  8bce                 mov ecx, esi
// 008bfaa4  e8d7ebffff           call 0x8be680
// 008bfaa9  85c0                 test eax, eax
// 008bfaab  7470                 je 0x8bfb1d
// 008bfaad  6a02                 push 2
// 008bfaaf  8d4c2430             lea ecx, [esp + 0x30]
// 008bfab3  51                   push ecx
// 008bfab4  8bce                 mov ecx, esi
// 008bfab6  e8d5dcffff           call 0x8bd790
// 008bfabb  8b38                 mov edi, dword ptr [eax]
// 008bfabd  8b5804               mov ebx, dword ptr [eax + 4]
// 008bfac0  6a02                 push 2
// 008bfac2  8d542428             lea edx, [esp + 0x28]
// 008bfac6  52                   push edx
// 008bfac7  e8c4dcffff           call 0x8bd790
// 008bfacc  8b4004               mov eax, dword ptr [eax + 4]
// 008bfacf  99                   cdq 
// 008bfad0  2bc2                 sub eax, edx
// 008bfad2  8b542438             mov edx, dword ptr [esp + 0x38]
// 008bfad6  8bc8                 mov ecx, eax
// 008bfad8  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bfadc  03c2                 add eax, edx
// 008bfade  99                   cdq 
// 008bfadf  2bc2                 sub eax, edx
// 008bfae1  8bd0                 mov edx, eax
// 008bfae3  d1f9                 sar ecx, 1
// 008bfae5  d1fa                 sar edx, 1
// 008bfae7  2bd1                 sub edx, ecx
// 008bfae9  6a02                 push 2
// 008bfaeb  8d4c2420             lea ecx, [esp + 0x20]
// 008bfaef  51                   push ecx
// 008bfaf0  8bce                 mov ecx, esi
// 008bfaf2  e899dcffff           call 0x8bd790
// 008bfaf7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bfafb  2b08                 sub ecx, dword ptr [eax]
// 008bfafd  6a02                 push 2
// 008bfaff  83e910               sub ecx, 0x10
// 008bfb02  83ec10               sub esp, 0x10
// 008bfb05  8bc4                 mov eax, esp
// 008bfb07  8908                 mov dword ptr [eax], ecx
// 008bfb09  03f9                 add edi, ecx
// 008bfb0b  895004               mov dword ptr [eax + 4], edx
// 008bfb0e  03da                 add ebx, edx
// 008bfb10  897808               mov dword ptr [eax + 8], edi
// 008bfb13  8bce                 mov ecx, esi
// 008bfb15  89580c               mov dword ptr [eax + 0xc], ebx
// 008bfb18  e803faffff           call 0x8bf520
// 008bfb1d  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 008bfb23  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 008bfb29  5f                   pop edi
// 008bfb2a  5e                   pop esi
// 008bfb2b  5d                   pop ebp
// 008bfb2c  5b                   pop ebx
// 008bfb2d  83c444               add esp, 0x44
// 008bfb30  c3                   ret 
// copied from an identical function in another client (function ?UpdateDockingStickers@CXTPDockingPaneContext@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneContext.cpp