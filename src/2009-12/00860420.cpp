// roc 2009-12 00860420  unit: CXTPToolTipContextToolTip  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860420
//
// 00860420  6aff                 push -1
// 00860422  68ece79500           push 0x95e7ec
// 00860427  64a100000000         mov eax, dword ptr fs:[0]
// 0086042d  50                   push eax
// 0086042e  83ec78               sub esp, 0x78
// 00860431  53                   push ebx
// 00860432  55                   push ebp
// 00860433  56                   push esi
// 00860434  57                   push edi
// 00860435  a10052b600           mov eax, dword ptr [0xb65200]
// 0086043a  33c4                 xor eax, esp
// 0086043c  50                   push eax
// 0086043d  8d84248c000000       lea eax, [esp + 0x8c]
// 00860444  64a300000000         mov dword ptr fs:[0], eax
// 0086044a  8bf1                 mov esi, ecx
// 0086044c  56                   push esi
// 0086044d  8d4c247c             lea ecx, [esp + 0x7c]
// 00860451  e88042f9ff           call 0x7f46d6
// 00860456  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00860459  0598000000           add eax, 0x98
// 0086045e  33ed                 xor ebp, ebp
// 00860460  50                   push eax
// 00860461  8d4c247c             lea ecx, [esp + 0x7c]
// 00860465  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 0086046c  e8a3600c00           call 0x926514
// 00860471  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00860478  51                   push ecx
// 00860479  8d542418             lea edx, [esp + 0x18]
// 0086047d  52                   push edx
// 0086047e  8bce                 mov ecx, esi
// 00860480  89442430             mov dword ptr [esp + 0x30], eax
// 00860484  e897f8ffff           call 0x85fd20
// 00860489  8d4c2414             lea ecx, [esp + 0x14]
// 0086048d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00860495  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086049b  84c0                 test al, al
// 0086049d  740f                 je 0x8604ae
// 0086049f  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 008604a6  896e04               mov dword ptr [esi + 4], ebp
// 008604a9  e91a020000           jmp 0x8606c8
// 008604ae  8bce                 mov ecx, esi
// 008604b0  e84bffffff           call 0x860400
// 008604b5  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008604b8  8b5144               mov edx, dword ptr [ecx + 0x44]
// 008604bb  8b7948               mov edi, dword ptr [ecx + 0x48]
// 008604be  8b594c               mov ebx, dword ptr [ecx + 0x4c]
// 008604c1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 008604c4  8d4c3906             lea ecx, [ecx + edi + 6]
// 008604c8  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 008604cc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008604d0  8d4c1306             lea ecx, [ebx + edx + 6]
// 008604d4  8bd8                 mov ebx, eax
// 008604d6  2bd9                 sub ebx, ecx
// 008604d8  68100c0000           push 0xc10
// 008604dd  8d54244c             lea edx, [esp + 0x4c]
// 008604e1  894c2444             mov dword ptr [esp + 0x44], ecx
// 008604e5  52                   push edx
// 008604e6  8d4c241c             lea ecx, [esp + 0x1c]
// 008604ea  896c2450             mov dword ptr [esp + 0x50], ebp
// 008604ee  896c2454             mov dword ptr [esp + 0x54], ebp
// 008604f2  895c2458             mov dword ptr [esp + 0x58], ebx
// 008604f6  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008604fa  83c770               add edi, 0x70
// 008604fd  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00860503  50                   push eax
// 00860504  8d4c2420             lea ecx, [esp + 0x20]
// 00860508  ff1580de9800         call dword ptr [0x98de80]
// 0086050e  50                   push eax
// 0086050f  8b07                 mov eax, dword ptr [edi]
// 00860511  8d8c2488000000       lea ecx, [esp + 0x88]
// 00860518  ffd0                 call eax
// 0086051a  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0086051e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00860522  2b7c244c             sub edi, dword ptr [esp + 0x4c]
// 00860526  2b6c2448             sub ebp, dword ptr [esp + 0x48]
// 0086052a  33c9                 xor ecx, ecx
// 0086052c  398e2c010000         cmp dword ptr [esi + 0x12c], ecx
// 00860532  897c243c             mov dword ptr [esp + 0x3c], edi
// 00860536  0f95c1               setne cl
// 00860539  894c2420             mov dword ptr [esp + 0x20], ecx
// 0086053d  8d8e28010000         lea ecx, [esi + 0x128]
// 00860543  894c2424             mov dword ptr [esp + 0x24], ecx
// 00860547  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0086054d  33d2                 xor edx, edx
// 0086054f  84c0                 test al, al
// 00860551  0f94c2               sete dl
// 00860554  837c242000           cmp dword ptr [esp + 0x20], 0
// 00860559  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00860561  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00860569  8954241c             mov dword ptr [esp + 0x1c], edx
// 0086056d  744f                 je 0x8605be
// 0086056f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860575  e8f652c7ff           call 0x4d5870
// 0086057a  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00860580  89442418             mov dword ptr [esp + 0x18], eax
// 00860584  e8f7d6feff           call 0x84dc80
// 00860589  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086058d  33d2                 xor edx, edx
// 0086058f  83f910               cmp ecx, 0x10
// 00860592  0f9ec2               setle dl
// 00860595  89442430             mov dword ptr [esp + 0x30], eax
// 00860599  894c2434             mov dword ptr [esp + 0x34], ecx
// 0086059d  89542418             mov dword ptr [esp + 0x18], edx
// 008605a1  85d2                 test edx, edx
// 008605a3  740d                 je 0x8605b2
// 008605a5  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008605aa  750a                 jne 0x8605b6
// 008605ac  8d6c2803             lea ebp, [eax + ebp + 3]
// 008605b0  eb04                 jmp 0x8605b6
// 008605b2  8d6c2805             lea ebp, [eax + ebp + 5]
// 008605b6  3bf9                 cmp edi, ecx
// 008605b8  7f04                 jg 0x8605be
// 008605ba  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008605be  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008605c3  0f84db000000         je 0x8606a4
// 008605c9  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008605cc  05a0000000           add eax, 0xa0
// 008605d1  50                   push eax
// 008605d2  8d4c247c             lea ecx, [esp + 0x7c]
// 008605d6  51                   push ecx
// 008605d7  8d4c2470             lea ecx, [esp + 0x70]
// 008605db  e880b0feff           call 0x84b660
// 008605e0  8b742478             mov esi, dword ptr [esp + 0x78]
// 008605e4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008605e8  33c9                 xor ecx, ecx
// 008605ea  68200c0000           push 0xc20
// 008605ef  8d54245c             lea edx, [esp + 0x5c]
// 008605f3  8d43e7               lea eax, [ebx - 0x19]
// 008605f6  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008605fa  894c2460             mov dword ptr [esp + 0x60], ecx
// 008605fe  894c2468             mov dword ptr [esp + 0x68], ecx
// 00860602  52                   push edx
// 00860603  8bcf                 mov ecx, edi
// 00860605  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 0086060d  89442468             mov dword ptr [esp + 0x68], eax
// 00860611  83c670               add esi, 0x70
// 00860614  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0086061a  50                   push eax
// 0086061b  8bcf                 mov ecx, edi
// 0086061d  ff1580de9800         call dword ptr [0x98de80]
// 00860623  50                   push eax
// 00860624  8b06                 mov eax, dword ptr [esi]
// 00860626  8d8c2488000000       lea ecx, [esp + 0x88]
// 0086062d  ffd0                 call eax
// 0086062f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00860633  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00860637  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0086063b  8d440a14             lea eax, [edx + ecx + 0x14]
// 0086063f  8944243c             mov dword ptr [esp + 0x3c], eax
// 00860643  8b442460             mov eax, dword ptr [esp + 0x60]
// 00860647  2b442458             sub eax, dword ptr [esp + 0x58]
// 0086064b  8bd3                 mov edx, ebx
// 0086064d  83c004               add eax, 4
// 00860650  3bd8                 cmp ebx, eax
// 00860652  7c02                 jl 0x860656
// 00860654  8bd0                 mov edx, eax
// 00860656  8b742420             mov esi, dword ptr [esp + 0x20]
// 0086065a  85f6                 test esi, esi
// 0086065c  740e                 je 0x86066c
// 0086065e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00860663  7407                 je 0x86066c
// 00860665  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00860669  41                   inc ecx
// 0086066a  eb02                 jmp 0x86066e
// 0086066c  33c9                 xor ecx, ecx
// 0086066e  83c519               add ebp, 0x19
// 00860671  03ca                 add ecx, edx
// 00860673  3be9                 cmp ebp, ecx
// 00860675  7f1c                 jg 0x860693
// 00860677  3bd8                 cmp ebx, eax
// 00860679  7c02                 jl 0x86067d
// 0086067b  8bd8                 mov ebx, eax
// 0086067d  85f6                 test esi, esi
// 0086067f  740e                 je 0x86068f
// 00860681  837c241800           cmp dword ptr [esp + 0x18], 0
// 00860686  7407                 je 0x86068f
// 00860688  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0086068c  45                   inc ebp
// 0086068d  eb02                 jmp 0x860691
// 0086068f  33ed                 xor ebp, ebp
// 00860691  03eb                 add ebp, ebx
// 00860693  8d4c2468             lea ecx, [esp + 0x68]
// 00860697  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0086069f  e83cb0feff           call 0x84b6e0
// 008606a4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008606a8  51                   push ecx
// 008606a9  8d4c247c             lea ecx, [esp + 0x7c]
// 008606ad  e8625e0c00           call 0x926514
// 008606b2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008606b6  036c2440             add ebp, dword ptr [esp + 0x40]
// 008606ba  0344242c             add eax, dword ptr [esp + 0x2c]
// 008606be  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 008606c5  894604               mov dword ptr [esi + 4], eax
// 008606c8  8d4c2414             lea ecx, [esp + 0x14]
// 008606cc  892e                 mov dword ptr [esi], ebp
// 008606ce  ff15c0de9800         call dword ptr [0x98dec0]
// 008606d4  8d4c2478             lea ecx, [esp + 0x78]
// 008606d8  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 008606e3  e8e83ff9ff           call 0x7f46d0
// 008606e8  8bc6                 mov eax, esi
// 008606ea  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008606f1  64890d00000000       mov dword ptr fs:[0], ecx
// 008606f8  59                   pop ecx
// 008606f9  5f                   pop edi
// 008606fa  5e                   pop esi
// 008606fb  5d                   pop ebp
// 008606fc  5b                   pop ebx
// 008606fd  81c484000000         add esp, 0x84
// 00860703  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CXTPToolTipContextToolTip@@MAE?AVCSize@@PAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp